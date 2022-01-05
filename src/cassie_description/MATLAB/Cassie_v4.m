classdef Cassie_v4 < RobotLinks
    %% Class: Cassie
    %
    % Description: This is a descriptive class for the Cassie full model.
    %   - This is the 3D Cassie model including compliance. 
    %
    % Author: Jenna Reher, (v1,v3,v4, jreher@caltech.edu)
    %         Wenlong Ma, (v2, wma@caltech.edu) 
    % _____________________________________________________________________
    properties
        isplanar
        isrigid
        
        % Locations of all contact points
        %   - Includes rod end attachment
        ContactPoints
   
        % Specs for Agility described foot orientationsfr
        Rfoot = [...
            cos(50 * pi / 180), -sin(50 * pi / 180), 0; % This rotation makes y-forward, x-down
            sin(50 * pi / 180),  cos(50 * pi / 180), 0;
            0,                   0,                  1];
        p_midfoot = [0.01762, 0.05219, 0];
        p_toe     = [0.07,    0,       0];
        p_heel    = [-0.07,   0,       0];

        % Rootpath
        rpath
        
        % Spring geometry and forcing
        fs_fun
        left_fs_fun
        right_fs_fun
        LeftHeelFrame
        RightHeelFrame
        LeftHeelEndFrame
        LeftHeelEndFrameRigid
        RightHeelEndFrame
        RightHeelEndFrameRigid
    end
    
    %% Other's methods
    methods
        function obj = Cassie_v4(urdf, isplanar, isrigid)
            if nargin < 2
                isplanar = false;
            end
            if nargin < 3
                isrigid = false;
            end
            
            base = get_base_dofs('floating');
            limits = [base.Limit];
            for i=1:6
                base(i).Limit = limits(i);
            end
                
            obj = obj@RobotLinks(urdf,base);
            obj.isplanar = isplanar;
            obj.isrigid = isrigid;
            
            obj.rpath = pwd;
            
            x = obj.States.x;
            dx = obj.States.dx;
            
            if isplanar
                obj.Name = [obj.Name, '_planar'];
            end
            if isrigid
                obj.Name = [obj.Name, '_rigid'];
            end
            
            
            %% Planarize the robot if requested
            if isplanar
                %%% Resize the actuator matrix
                obj.removeInput('Control','u');
                actuated_joint_label = {...
                    'LeftHipPitch',...
                    'LeftKneePitch',...
                    'LeftFootPitch',...
                    'RightHipPitch',...
                    'RightKneePitch', ...
                    'RightFootPitch'};
                actuator_indices = obj.getJointIndices(actuated_joint_label);
                mechanicalReduction = zeros(1, numel(actuator_indices));
                dofs = obj.Joints;
                for i = 1:numel(actuator_indices)
                    j = actuator_indices(i);
                    if ~strcmp(dofs(j).Type,'fixed')
                        mechanicalReduction(j) = dofs(j).Actuator.Ratio;
                    end
                end
                nact = length(actuator_indices);
                gf = zeros(obj.numState, nact);
                gf(actuator_indices,:) = diag(mechanicalReduction(actuator_indices));
                u = SymVariable('u', [nact,1], actuated_joint_label);
                obj.addInput('Control', 'u', u, gf);
                
                %%% Lock the out of plane joints
                planarized_joints = [...
                    x('BasePosY');
                    x('BaseRotX');
                    x('BaseRotZ');
                    x('LeftHipRoll');
                    x('LeftHipYaw');
                    x('RightHipRoll');
                    x('RightHipYaw')];
                hol_planar_constraint = HolonomicConstraint(obj, planarized_joints, 'PlanarizedJoints', 'DerivativeOrder',2);
                obj = addHolonomicConstraint(obj, hol_planar_constraint);
                
            end
            
            %% Define contact frames 
            Rfoot = obj.Rfoot; % Rotation for -X down
            toWorld = [0,0,-1; 1,0,0; 0,-1,0]; 
            Rcontact = Rfoot * toWorld; 
            
            l_foot_frame = obj.Joints(getJointIndices(obj, 'LeftFootPitch'));
            
            obj.ContactPoints.LeftSole = CoordinateFrame(...
                'Name', 'LeftSole',...
                'Reference', l_foot_frame,...
                'Offset', obj.p_midfoot,...
                'R', Rcontact);
            
            obj.ContactPoints.LeftToe = CoordinateFrame(...
                'Name','LeftToe',...
                'Reference', obj.ContactPoints.LeftSole,...
                'Offset', obj.p_toe,...
                'R', eye(3));
            
            obj.ContactPoints.LeftHeel = CoordinateFrame(...
                'Name','LeftHeel',...
                'Reference', obj.ContactPoints.LeftSole,...
                'Offset', obj.p_heel,...
                'R', eye(3));
            
            % Add contact points for rods and their connections
            l_thigh_frame = obj.Joints(getJointIndices(obj, 'LeftHipPitch'));
            l_heel_spring_frame = obj.Joints(getJointIndices(obj, 'LeftAchillesSpring'));
            
            obj.ContactPoints.LeftThighConnector = CoordinateFrame(...
                'Name','LeftThighConnector',...
                'Reference', l_thigh_frame,...
                'Offset', [0,0,0.045],...
                'R', [0,0,0]);  
            
            obj.ContactPoints.LeftAchillesSpringEnd = CoordinateFrame(...
                'Name','LeftAchillesSpringEnd',...
                'Reference', l_heel_spring_frame,...
                'Offset', [0.11877, -0.01, 0],...
                'R', [0,0,0]);
            
            %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
            r_foot_frame = obj.Joints(getJointIndices(obj, 'RightFootPitch'));
            
            obj.ContactPoints.RightSole = CoordinateFrame(...
                'Name','RightSole',...
                'Reference', r_foot_frame,...
                'Offset', obj.p_midfoot,...
                'R', Rcontact);
            
            obj.ContactPoints.RightToe = CoordinateFrame(...
                'Name','RightToe',...
                'Reference', obj.ContactPoints.RightSole,...
                'Offset', obj.p_toe,...
                'R', eye(3));
            
            obj.ContactPoints.RightHeel = CoordinateFrame(...
                'Name','RightHeel',...
                'Reference', obj.ContactPoints.RightSole,...
                'Offset', obj.p_heel,...
                'R', eye(3));
            
            % Add contact points for rods and their connections
            r_thigh_frame = obj.Joints(getJointIndices(obj, 'RightHipPitch'));
            r_heel_spring_frame = obj.Joints(getJointIndices(obj, 'RightAchillesSpring'));
            
            obj.ContactPoints.RightThighConnector = CoordinateFrame(...
                'Name','RightThighConnector',...
                'Reference', r_thigh_frame,...
                'Offset', [0,0,-0.045],...
                'R', [0,0,0]);
            
            obj.ContactPoints.RightAchillesSpringEnd = CoordinateFrame(...
                'Name','RightAchillesSpringEnd',...
                'Reference', r_heel_spring_frame,...
                'Offset', [0.11877,-0.01,0],...
                'R', [0,0,0]);
            
            %% Configure robot springs
            k_knee = 2300;
            b_knee = 4.6;
            k_ankle = 2000;
            b_ankle = 4.0;
            fs = SymExpression(zeros(obj.numState,1));
            
            %%% Knee spring
            fs(getJointIndices(obj, 'RightShinPitch'),1) = -obj.States.x('RightShinPitch') * k_knee - obj.States.dx('RightShinPitch') * b_knee;
            fs(getJointIndices(obj, 'LeftShinPitch'), 1) = -obj.States.x('LeftShinPitch')  * k_knee - obj.States.dx('LeftShinPitch')  * b_knee;
            %%% Heel Spring
            fs(getJointIndices(obj, 'RightAchillesSpring'), 1) = -obj.States.x('RightAchillesSpring') * k_ankle - obj.States.dx('RightAchillesSpring') * b_ankle;
            fs(getJointIndices(obj, 'LeftAchillesSpring'), 1)  = -obj.States.x('LeftAchillesSpring')  * k_ankle - obj.States.dx('LeftAchillesSpring')  * b_ankle;
            
            %%%%% Spring forces formulation %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
            obj.fs_fun = SymFunction(['spring_forces_', obj.Name], fs, {x, dx});
            
            
            %% If the robot is rigid, lock up the legs
            if isrigid
                %%%% Rename so the paths will use a separate model dynamics directory.
                % Fix spring joints
                hol_springs = [...
                    x('LeftShinPitch');
                    x('RightShinPitch');
                    x('LeftAchillesSpring');
                    x('RightAchillesSpring');
                    x('LeftKneePitch')  + x('LeftTarsusPitch')  + x('LeftShinPitch') - 13 * pi / 180;
                    x('RightKneePitch') + x('RightTarsusPitch') + x('RightShinPitch')- 13 * pi / 180];
                hol_springs_labels = {'LeftKnee', 'RightKnee', 'LeftHeel', 'RightHeel', 'LeftAchilles', 'RightAchilles'};
                
                hols = HolonomicConstraint(obj, hol_springs, 'SpringTransmissionsRigid',...
                    'ConstrLabel', {hol_springs_labels},...
                    'DerivativeOrder', 2);
                obj = addHolonomicConstraint(obj, hols);
                
            else
                %%% Holonomic Constraints: Spring transmission for the springy-multi-bar
                %%%%%% Achilles rod to heel spring %%%%%%%%%%%%%%%%%%%%%%%%%%%%
                %%% 3D structure
                r_thigh_conn  = getCartesianPosition(obj, obj.ContactPoints.RightThighConnector);
                l_thigh_conn  = getCartesianPosition(obj, obj.ContactPoints.LeftThighConnector);
                achillesRodLength = 0.5012;
                
                %%% define the constraint
                r_heel_sp_end = getCartesianPosition(obj, obj.ContactPoints.RightAchillesSpringEnd);
                l_heel_sp_end = getCartesianPosition(obj, obj.ContactPoints.LeftAchillesSpringEnd);
                rightRod = r_thigh_conn - r_heel_sp_end;
                leftRod  = l_thigh_conn - l_heel_sp_end;
                r_ach = rightRod(1).^2 + rightRod(2).^2 + rightRod(3).^2 - achillesRodLength^2;
                l_ach = leftRod(1).^2  + leftRod(2).^2  + leftRod(3).^2  - achillesRodLength^2;
                
                %%%%%% Create constraint for all %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
                hol_trans_springs = [l_ach, r_ach];
                % Simplification step
                hol_trans_springs = hol_trans_springs.subs(x([1:6, ...
                   7,  8,  9,  14, ...
                   15, 16, 17, 22]), zeros(14,1));
                
                hol_trans_springs_label = {'LeftAchillesConnection',...
                    'RightAchillesConnection'};
                hol_trans_constraint = HolonomicConstraint(obj, hol_trans_springs, 'SpringTransmissions',...
                    'ConstrLabel', {hol_trans_springs_label},...
                    'DerivativeOrder',2);
                obj = addHolonomicConstraint(obj, hol_trans_constraint);
            end
            
            
            
        end
        
        function [] = exportAll(obj, export_coriolis)
            if nargin < 2
                export_coriolis = false;
            end
            obj.exportDynamics(export_coriolis);
%             obj.exportKinematics_ZeroYaw();
%             obj.exportInternalConstraints();
%             obj.exportExternalConstraints();
%             obj.exportWalkOutputs();
%             obj.exportStandCOMOutputs();
%             obj.exportWalkOutputsJorisRelativeDegree2();
%             obj.exportWalkOutputsJorisForwardCoMVelocity();
%             obj.exportPelvisOutputs();
%             obj.exportWalkOutputsJorisRelativeDegree2WithXcom();
%             obj.exportFeetWithRespectToComOutputs();
        end
        
        function [] = exportKinematics_ZeroCartesian(obj)
            % Export path
            module = 'kinematics';
            export_path = [obj.rpath, '/MATLAB/symbolic/+frost_expr/+', module];
            matlab_path = [obj.rpath, '/MATLAB/symbolic/+codegen/+',    module];
            if ~exist(export_path,'dir')
                mkdir(char(export_path));
            end
            if ~exist(matlab_path,'dir')
                mkdir(char(matlab_path));
            end
            
            expr = {};
            
            % Break out states
            q = obj.States.x;
            dq = obj.States.dx;
                                                                  
            % Left Foot Pose - In body frame of Pelvis!!
            leftFootPose = [obj.getCartesianPosition(obj.ContactPoints.LeftSole)';
                            obj.getRelativeEulerAngles(obj.ContactPoints.LeftSole)'];
            leftFootPose = leftFootPose.subs(q(1:6), zeros(6,1));

            JleftFoot = jacobian(leftFootPose, q);
            
            expr{end+1} = SymFunction('pose_leftFoot', leftFootPose, {q});
            expr{end+1} = SymFunction('J_leftFoot', JleftFoot, {q});
            
            expr{end+1} = SymFunction('position_leftFoot', leftFootPose(1:3), {q});
            expr{end+1} = SymFunction('J_position_leftFoot', JleftFoot(1:3,:), {q});
            
            pLeftToe = obj.getCartesianPosition(obj.Joints(obj.getJointIndices('LeftFootPitch')))';
            pLeftToe = pLeftToe.subs(q(1:6), zeros(6,1));
            JleftToe = jacobian(pLeftToe, q);
            
            expr{end+1} = SymFunction('p_leftToe', pLeftToe, {q});
            expr{end+1} = SymFunction('J_leftToe', JleftToe, {q});

            % Right Foot Pose - In body frame of Pelvis!!
            rightFootPose = [obj.getCartesianPosition(obj.ContactPoints.RightSole)';
                             obj.getRelativeEulerAngles(obj.ContactPoints.RightSole)'];
            rightFootPose = rightFootPose.subs(q(1:6), zeros(6,1));
            JrightFoot = jacobian(rightFootPose, q);
            
            expr{end+1} = SymFunction('pose_rightFoot', rightFootPose, {q});
            expr{end+1} = SymFunction('J_rightFoot', JrightFoot, {q});
            
            expr{end+1} = SymFunction('position_rightFoot', rightFootPose(1:3), {q});
            expr{end+1} = SymFunction('J_position_rightFoot', JrightFoot(1:3,:), {q});

            pRightToe = obj.getCartesianPosition(obj.Joints(obj.getJointIndices('RightFootPitch')))';
            pRightToe = pRightToe.subs(q(1:6), zeros(6,1));
            JrightToe = jacobian(pRightToe, q);
            
            expr{end+1} = SymFunction('p_rightToe', pRightToe, {q});
            expr{end+1} = SymFunction('J_rightToe', JrightToe, {q});

            % Center of Mass - In body frame of pelvis!
            % -------------------------changed: only subs pelvis yaw =0
            com = obj.getComPosition()';
            com = com.subs(q(1:6), zeros(6,1));
            Jcom = jacobian(com,q);
            expr{end+1} = SymFunction('p_com', com, {q});
            expr{end+1} = SymFunction('J_com', Jcom, {q});
            % Export the files
            for i = 1:length(expr)
                export_fun(expr{i}, export_path, matlab_path);
            end
            
            % Move the files into the appropriate folder for runtime code
            src_list = dir(strcat(export_path, '/*.cc'));
            hed_list = dir(strcat(export_path, '/*.hh'));
            
            for i = 1:length(src_list)
                tardir= strcat( './gen/src/' );
                srcdir  = strcat(src_list(i).folder, '/', src_list(i).name );
                if ~exist(tardir,'dir')
                    mkdir(char(tardir));
                end
                movefile(srcdir,  tardir);
            end
            for i = 1:length(hed_list)
                tardir  = strcat( './gen/include/frost_expr/kinematics/' );
                srcdir= strcat(hed_list(i).folder, '/', hed_list(i).name );
                if ~exist(tardir,'dir')
                    mkdir(char(tardir));
                end
                movefile(srcdir,  tardir);
            end
        end
        
        function [] = exportKinematics_ZeroYaw(obj)
            % Export path
            module = 'kinematics';
            export_path = [obj.rpath, '/MATLAB/symbolic/+frost_expr/+', module];
            matlab_path = [obj.rpath, '/MATLAB/symbolic/+codegen/+',    module];
            if ~exist(export_path,'dir')
                mkdir(char(export_path));
            end
            if ~exist(matlab_path,'dir')
                mkdir(char(matlab_path));
            end
            
            expr = {};
            
            % Break out states
            q = obj.States.x;
            dq = obj.States.dx;
                                                                  
            % Left Foot Pose - In body frame of Pelvis!!
            leftFootPose = [obj.getCartesianPosition(obj.ContactPoints.LeftSole)';
                            obj.getRelativeEulerAngles(obj.ContactPoints.LeftSole)'];
%             leftFootPose = leftFootPose.subs(q(1:6), zeros(6,1));

%-----------------------only change global xyz and yaw to 0
%             leftFootPose = leftFootPose.subs(q(1:3), zeros(3,1)); 
            leftFootPose = leftFootPose.subs(q(6), 0);
            JleftFoot = jacobian(leftFootPose, q);
            
            expr{end+1} = SymFunction('pose_leftFoot', leftFootPose, {q});
            expr{end+1} = SymFunction('J_leftFoot', JleftFoot, {q});
            
            expr{end+1} = SymFunction('position_leftFoot', leftFootPose(1:3), {q});
            expr{end+1} = SymFunction('J_position_leftFoot', JleftFoot(1:3,:), {q});
            
            

            % Right Foot Pose - In body frame of Pelvis!!
            rightFootPose = [obj.getCartesianPosition(obj.ContactPoints.RightSole)';
                             obj.getRelativeEulerAngles(obj.ContactPoints.RightSole)'];
            rightFootPose = rightFootPose.subs(q(6), zeros(1));
            JrightFoot = jacobian(rightFootPose, q);
            
            expr{end+1} = SymFunction('pose_rightFoot', rightFootPose, {q});
            expr{end+1} = SymFunction('J_rightFoot', JrightFoot, {q});
            
            expr{end+1} = SymFunction('position_rightFoot', rightFootPose(1:3), {q});
            expr{end+1} = SymFunction('J_position_rightFoot', JrightFoot(1:3,:), {q});
            
            % toes
            pLeftToe = obj.getCartesianPosition(obj.Joints(obj.getJointIndices('LeftFootPitch')))';
%             pLeftToe = pLeftToe.subs(q(6), zeros(1));
            JleftToe = jacobian(pLeftToe, q);
            
            expr{end+1} = SymFunction('p_leftToe', pLeftToe, {q});
            expr{end+1} = SymFunction('J_leftToe', JleftToe, {q});
            
            pRightToe = obj.getCartesianPosition(obj.Joints(obj.getJointIndices('RightFootPitch')))';
%             pRightToe = pRightToe.subs(q(6), zeros(1));
            JrightToe = jacobian(pRightToe, q);
            
            expr{end+1} = SymFunction('p_rightToe', pRightToe, {q});
            expr{end+1} = SymFunction('J_rightToe', JrightToe, {q});

            % Center of Mass - In body frame of pelvis!
            % -------------------------changed: only subs pelvis yaw =0
            com = obj.getComPosition()';
%             com = com.subs(q(6), zeros(1));
            com_leftstance = com-pLeftToe;
            com_rightstance = com-pRightToe;
            
            J_com_leftstance = jacobian(com_leftstance,q);
            J_com_rightstance = jacobian(com_rightstance,q);
            
            dp_com_leftstance = J_com_leftstance * dq;
            dp_com_rightstance = J_com_rightstance * dq;
            dJ_com_leftstance = jacobian(dp_com_leftstance, q);
            dJ_com_rightstance = jacobian(dp_com_rightstance,q);
            
%             Jcom = jacobian(com,q);
            expr{end+1} = SymFunction('p_com_LeftStance', com_leftstance, {q});
            expr{end+1} = SymFunction('J_com_LeftStance', J_com_leftstance, {q});
            expr{end+1} = SymFunction('p_com_RightStance', com_rightstance, {q});
            expr{end+1} = SymFunction('J_com_RightStance', J_com_rightstance, {q});
            expr{end+1} = SymFunction('dp_com_absolute',jacobian(com,q)*dq,{q,dq});
            expr{end+1} = SymFunction('p_com_absolute', com, {q});
            
            expr{end+1} = SymFunction('Jdot_com_LeftStance', dJ_com_leftstance,{q,dq});
            expr{end+1} = SymFunction('Jdot_com_RightStance', dJ_com_rightstance,{q,dq});
            
            
            
            % Export the files
            for i = 1:length(expr)
                export_fun(expr{i}, export_path, matlab_path);
            end
            
            % Move the files into the appropriate folder for runtime code
            src_list = dir(strcat(export_path, '/*.cc'));
            hed_list = dir(strcat(export_path, '/*.hh'));
            
            for i = 1:length(src_list)
                tardir= strcat( './gen/src/' );
                srcdir  = strcat(src_list(i).folder, '/', src_list(i).name );
                if ~exist(tardir,'dir')
                    mkdir(char(tardir));
                end
                movefile(srcdir,  tardir);
            end
            for i = 1:length(hed_list)
                tardir  = strcat( './gen/include/frost_expr/kinematics/' );
                srcdir= strcat(hed_list(i).folder, '/', hed_list(i).name );
                if ~exist(tardir,'dir')
                    mkdir(char(tardir));
                end
                movefile(srcdir,  tardir);
            end
        end
        
        function [] = exportDynamics(obj, export_coriolis)
            % Export path
            module = 'dynamics';
            export_path = [obj.rpath, '/MATLAB/symbolic/+frost_expr/+', module];
            matlab_path = [obj.rpath, '/MATLAB/symbolic/+codegen/+',    module];
            if ~(exist(export_path,'dir') == 7)
                mkdir(char(export_path));
            end
            if ~(exist(matlab_path,'dir') == 7)
                mkdir(char(matlab_path));
            end
            
            expr = {};
            
            % Break out states
            q = obj.States.x;
            dq = obj.States.dx;
            
            % Break out robot linkages
            n_link = length(obj.Links);
            links = getTwists(obj.Links);
            for i=1:n_link
                links{i}.Mass = obj.Links(i).Mass;
                links{i}.Inertia = obj.Links(i).Inertia;   
            end
            
            % Evaluate mass-inertia
            De_raw   = eval_math_fun('InertiaMatrix',[links,{obj.numState}]);
            De_motor = zeros(obj.numState);
            for i=1:obj.numState
                if ~isempty(obj.Joints(i).Actuator)
                    actuator = obj.Joints(i).Actuator;
                    if ~isempty(actuator.Inertia) && ~isempty(actuator.Ratio)
                        % Reflected motor inertia: I*r^2
                        De_motor(i,i) = actuator.Inertia * actuator.Ratio^2;
                    end
                end
            end
            De = SymFunction(['De_',obj.Name], De_raw + De_motor, {q});  
%             expr{end+1} = De;
            
            if export_coriolis
                % Evaluate coriolis
                expr{end+1} = SymFunction(['Ce_',obj.Name],eval_math_fun('InertiaToCoriolis',{De,q,dq}, [],'DelayedSet',false),{q,dq});
            end

%             % Evaluate gravity
%             expr{end+1} = SymFunction(['Ge_',obj.Name],eval_math_fun('GravityVector',[links,{q}]),{q});
            
            
%             obj.configureDynamics('DelayCoriolisSet',false);
%             Fvectot = 0;
%             for i = 1:length(obj.Fvec)
%                 Fvectot = Fvectot + obj.Fvec{i};
% %                 expr{end+1} = SymFunction(['Fvec',num2str(i),'_',obj.Name],obj.Fvec{i},{q,dq});
%             end
%             expr{end+1} = SymFunction(['Fvectot_',obj.Name],Fvectot,{q,dq});
%             
%             
%             % Joint torque mapping matrix
%             expr{end+1} = SymFunction(['Be_',obj.Name], obj.Gmap.Control.u, {q});
%             
%             % Spring forcing vector
%             fs = obj.fs_fun;
%             expr{end+1} = SymFunction(['F_spring_',obj.Name], fs, {q,dq});
            
            % Export the files
            for i = 1:length(expr)
                export_fun(expr{i}, export_path, matlab_path);
            end
            
            % Move the files into the appropriate folder for runtime code
            src_list = dir(strcat(export_path, '/*.cc'));
            hed_list = dir(strcat(export_path, '/*.hh'));
            
            for i = 1:length(src_list)
                tardir = strcat('./gen/src/');
                srcdir = strcat(src_list(i).folder, '/', src_list(i).name );
                if ~exist(tardir,'dir')
                    mkdir(char(tardir));
                end
                movefile(srcdir,  tardir);
            end
            for i = 1:length(hed_list)
                tardir = strcat('./gen/include/frost_expr/dynamics/');
                srcdir = strcat(hed_list(i).folder, '/', hed_list(i).name );
                if ~exist(tardir,'dir')
                    mkdir(char(tardir));
                end
                movefile(srcdir,  tardir);
            end
        end
        
        function [] = exportInternalConstraints(obj)
            % Export path
            module = 'constraints';
            export_path = [obj.rpath, '/MATLAB/symbolic/+frost_expr/+', module];
            matlab_path = [obj.rpath, '/MATLAB/symbolic/+codegen/+',    module];
            if ~(exist(export_path,'dir') == 7)
                mkdir(char(export_path));
            end
            if ~(exist(matlab_path,'dir') == 7)
                mkdir(char(matlab_path));
            end
            
            expr = {};
            
            % Break out states
            q = obj.States.x;
            dq = obj.States.dx;
            
            pLeftFixed = [q('LeftShinPitch'); q('LeftAchillesSpring')];
            jacobian_leftFixed = SymFunction('J_left_fixed_constraint', jacobian(pLeftFixed, q), {q});
            
            expr{end+1} = SymFunction('p_left_fixed_constraint', pLeftFixed, {q});
            expr{end+1} = jacobian_leftFixed;
            expr{end+1} = SymFunction('Jdot_left_fixed_constraint', jacobian(jacobian_leftFixed * dq, q), {q, dq});
            
            pRightFixed = [q('RightShinPitch'); q('RightAchillesSpring')];
            jacobian_rightFixed = SymFunction('J_right_fixed_constraint', jacobian(pRightFixed, q), {q});
            
            expr{end+1} = SymFunction('p_right_fixed_constraint', pRightFixed, {q});
            expr{end+1} = jacobian_rightFixed;
            expr{end+1} = SymFunction('Jdot_right_fixed_constraint', jacobian(jacobian_rightFixed * dq, q), {q, dq});
            
            if obj.isrigid
                ptrans = SymVariable(obj.HolonomicConstraints.SpringTransmissionsRigid.ParamName, [6,1]);
                hol_trans_springs = obj.HolonomicConstraints.SpringTransmissionsRigid.ConstrExpr;
                hol_trans_springs = hol_trans_springs.subs(ptrans, zeros(6,1));
                jacobian_achillesConstraint = SymFunction('J_rigidleg_constraint', jacobian(hol_trans_springs, q), {q});
                
                expr{end+1} = SymFunction('p_rigidleg_constraint', hol_trans_springs, {q});
                expr{end+1} = jacobian_achillesConstraint;
                expr{end+1} = SymFunction('Jdot_rigidleg_constraint', jacobian(jacobian_achillesConstraint * dq, q), {q, dq});
            else
                ptrans = SymVariable(obj.HolonomicConstraints.SpringTransmissions.ParamName, [2,1]);
                hol_trans_springs = obj.HolonomicConstraints.SpringTransmissions.ConstrExpr;
                hol_trans_springs = hol_trans_springs.subs(ptrans, zeros(2,1));
                jacobian_achillesConstraint = SymFunction('J_achilles_constraint', jacobian(hol_trans_springs, q), {q});
                
                expr{end+1} = SymFunction('p_achilles_constraint', hol_trans_springs, {q});
                expr{end+1} = jacobian_achillesConstraint;
                expr{end+1} = SymFunction('Jdot_achilles_constraint', jacobian(jacobian_achillesConstraint * dq, q), {q, dq});
            end
            
            if obj.isplanar
                pfloat = SymVariable(obj.HolonomicConstraints.PlanarizedJoints.ParamName, [7,1]);
                pfloat_expr = obj.HolonomicConstraints.PlanarizedJoints.ConstrExpr;
                pfloat_expr = pfloat_expr.subs(pfloat, zeros(7,1));
                jacobian_float = SymFunction('J_planar_constraint', jacobian(pfloat_expr, q), {q});
                
                expr{end+1} = SymFunction('p_planar_constraint', pfloat_expr, {q});
                expr{end+1} = jacobian_float;
                expr{end+1} = SymFunction('Jdot_planar_constraint', jacobian(jacobian_float * dq, q), {q, dq});
            end
            
            % Export the files
            for i = 1:length(expr)
                export_fun(expr{i}, export_path, matlab_path);
            end
            
            % Move the files into the appropriate folder for runtime code
            src_list = dir(strcat(export_path, '/*.cc'));
            hed_list = dir(strcat(export_path, '/*.hh'));
            
            for i = 1:length(src_list)
                tardir = strcat('./gen/src/');
                srcdir = strcat(src_list(i).folder, '/', src_list(i).name );
                if ~exist(tardir,'dir')
                    mkdir(char(tardir));
                end
                movefile(srcdir,  tardir);
            end
            for i = 1:length(hed_list)
                tardir = strcat('./gen/include/frost_expr/constraints/' );
                srcdir = strcat(hed_list(i).folder, '/', hed_list(i).name );
                if ~exist(tardir,'dir')
                    mkdir(char(tardir));
                end
                movefile(srcdir,  tardir);
            end
        end
        
        function [] = exportExternalConstraints(obj)
            % Export path
            module = 'constraints';
            export_path = [obj.rpath, '/MATLAB/symbolic/+frost_expr/+', module];
            matlab_path = [obj.rpath, '/MATLAB/symbolic/+codegen/+',    module];
            if ~(exist(export_path,'dir') == 7)
                mkdir(char(export_path));
            end
            if ~(exist(matlab_path,'dir') == 7)
                mkdir(char(matlab_path));
            end
            
            expr = {};
            
            % Break out states
            q = obj.States.x;
            dq = obj.States.dx;
            
            I = eye(6);
            wrenchBase = I(:,[1,2,3,5,6]); % x, y, z, pitch, yaw
            
            % Get contact frames
            contactLeft = ToContactFrame(obj.ContactPoints.LeftSole, 'PointContactWithFriction');
            contactRight = ToContactFrame(obj.ContactPoints.RightSole, 'PointContactWithFriction');
            pointLeft = ToContactFrame(obj.Joints(getJointIndices(obj, 'LeftFootPitch')), 'PointContactWithFriction');
            pointRight = ToContactFrame(obj.Joints(getJointIndices(obj, 'RightFootPitch')), 'PointContactWithFriction');

            % Left Point Contact
            leftPointPose = [obj.getCartesianPosition(pointLeft)';
                            obj.getRelativeEulerAngles(pointLeft, eye(3))'];
            leftPointConstr = leftPointPose([1,2,3, 6],1);
            J_leftPointConstr = jacobian(leftPointConstr,q);
            dp_leftPointConstr = J_leftPointConstr * dq;
            dJ_leftPointConstr = jacobian(dp_leftPointConstr, q);
            
            expr{end+1} = SymFunction('p_leftPoint_constraint', leftPointConstr, q);
            expr{end+1} = SymFunction('J_leftPoint_constraint', J_leftPointConstr, q);
            expr{end+1} = SymFunction('Jdot_leftPoint_constraint', dJ_leftPointConstr, {q, dq});
            
            % Right Point Contact
            rightPointPose = [obj.getCartesianPosition(pointRight)';
                            obj.getRelativeEulerAngles(pointRight, eye(3))'];
            rightPointConstr = rightPointPose([1,2,3, 6],1);
            J_rightPointConstr = jacobian(rightPointConstr,q);
            dp_rightPointConstr = J_rightPointConstr * dq;
            dJ_rightPointConstr = jacobian(dp_rightPointConstr, q);
            
            expr{end+1} = SymFunction('p_rightPoint_constraint', rightPointConstr, q);
            expr{end+1} = SymFunction('J_rightPoint_constraint', J_rightPointConstr, q);
            expr{end+1} = SymFunction('Jdot_rightPoint_constraint', dJ_rightPointConstr, {q, dq});
            
            
            % Left Sole
            leftFootPose = [obj.getCartesianPosition(contactLeft)';
                            obj.getRelativeEulerAngles(contactLeft, eye(3))'];
            leftSoleConstr = SymExpression(zeros(5,1));     
            leftSoleConstr(:,1) = leftFootPose([1,2,3,5,6],1);
            % J_leftSoleConstr = jacobian(leftSoleConstr,q);
            %J_leftSoleConstr = wrenchBase' *  getBodyJacobian(obj, obj.ContactPoints.LeftSole);
            %J_leftSoleConstr(1:3,:) = jacobian(leftSoleConstr(1:3,:),q);
            J_leftSoleConstr = jacobian(leftSoleConstr,q);
            dp_leftSoleConstr = J_leftSoleConstr * dq;
            dJ_leftSoleConstr = jacobian(dp_leftSoleConstr, q);
            
            expr{end+1} = SymFunction('p_leftSole_constraint', leftSoleConstr, q);
            expr{end+1} = SymFunction('J_leftSole_constraint', J_leftSoleConstr, q);
            expr{end+1} = SymFunction('Jdot_leftSole_constraint', dJ_leftSoleConstr, {q, dq});
            
            % Left Toe
            p_ltoe = SymExpression(zeros(3,1));
            p_ltoe(:,1) = obj.ContactPoints.LeftToe.computeCartesianPosition();
            J_ltoe = jacobian(p_ltoe, q);
            dp_ltoe = J_ltoe * dq;
            dJ_ltoe = jacobian(dp_ltoe, q);

            expr{end+1} = SymFunction('p_leftToe_constraint', p_ltoe, q);
            expr{end+1} = SymFunction('J_leftToe_constraint', J_ltoe, q);
            expr{end+1} = SymFunction('Jdot_leftToe_constraint', dJ_ltoe, {q, dq});

            
            % Left Heel
            p_lheel = SymExpression(zeros(3,1));
            p_lheel(:,1) = obj.ContactPoints.LeftHeel.computeCartesianPosition();
            J_lheel = jacobian(p_lheel, q);
            dp_lheel = J_lheel * dq;
            dJ_lheel = jacobian(dp_lheel, q);

            expr{end+1} = SymFunction('p_leftHeel_constraint', p_lheel, q);
            expr{end+1} = SymFunction('J_leftHeel_constraint', J_lheel, q);
            expr{end+1} = SymFunction('Jdot_leftHeel_constraint', dJ_lheel, {q, dq});
            
            
            % Right Sole
            rightFootPose = [obj.getCartesianPosition(contactRight)';
                            obj.getRelativeEulerAngles(contactRight, eye(3))'];
            rightSoleConstr = SymExpression(zeros(5,1));  
            rightSoleConstr = rightFootPose([1,2,3,5,6],1);
            % J_rightSoleConstr = wrenchBase' *  getBodyJacobian(obj, obj.ContactPoints.RightSole);
            % J_rightSoleConstr(1:3,:) = jacobian(rightSoleConstr(1:3,:),q);
            J_rightSoleConstr = jacobian(rightSoleConstr,q);
            dp_rightSoleConstr = J_rightSoleConstr * dq;
            dJ_rightSoleConstr = jacobian(dp_rightSoleConstr, q);
            
            expr{end+1} = SymFunction('p_rightSole_constraint', rightSoleConstr, q);
            expr{end+1} = SymFunction('J_rightSole_constraint', J_rightSoleConstr, q);
            expr{end+1} = SymFunction('Jdot_rightSole_constraint', dJ_rightSoleConstr, {q, dq});

            
            % Right Toe
            p_rtoe = SymExpression(zeros(3,1));
            p_rtoe(:,1) = obj.ContactPoints.RightToe.computeCartesianPosition();
            J_rtoe = jacobian(p_rtoe, q);
            dp_rtoe = J_rtoe * dq;
            dJ_rtoe = jacobian(dp_rtoe, q);
            
            expr{end+1} = SymFunction('p_rightToe_constraint', p_rtoe, q);
            expr{end+1} = SymFunction('J_rightToe_constraint', J_rtoe, q);
            expr{end+1} = SymFunction('Jdot_rightToe_constraint', dJ_rtoe, {q, dq});

            
            % Right Heel
            p_rheel = SymExpression(zeros(3,1));
            p_rheel(:,1) = obj.ContactPoints.RightHeel.computeCartesianPosition();
            J_rheel = jacobian(p_rheel, q);
            dp_rheel = J_rheel * dq;
            dJ_rheel = jacobian(dp_rheel, q);

            expr{end+1} = SymFunction('p_rightHeel_constraint', p_rheel, q);
            expr{end+1} = SymFunction('J_rightHeel_constraint', J_rheel, q);
            expr{end+1} = SymFunction('Jdot_rightHeel_constraint', dJ_rheel, {q, dq});
            
            
            % Export the files
            for i = 1:length(expr)
                export_fun(expr{i}, export_path, matlab_path);
            end
            
            % Move the files into the appropriate folder for runtime code
            src_list = dir(strcat(export_path, '/*.cc'));
            hed_list = dir(strcat(export_path, '/*.hh'));
            
            for i = 1:length(src_list)
                tardir = strcat('./gen/src/' );
                srcdir = strcat(src_list(i).folder, '/', src_list(i).name );
                if ~exist(tardir,'dir')
                    mkdir(char(tardir));
                end
                movefile(srcdir,  tardir);
            end
            for i = 1:length(hed_list)
                tardir = strcat('./gen/include/frost_expr/constraints/' );
                srcdir = strcat(hed_list(i).folder, '/', hed_list(i).name );
                if ~exist(tardir,'dir')
                    mkdir(char(tardir));
                end
                movefile(srcdir,  tardir);
            end
        end
              
        function [] = exportWalkOutputs(obj)
            % Export path
            module = 'outputs';
            export_path = [obj.rpath, '/MATLAB/symbolic/+frost_expr/+', module];
            matlab_path = [obj.rpath, '/MATLAB/symbolic/+codegen/+',    module];
            if ~(exist(export_path,'dir') == 7)
                mkdir(char(export_path));
            end
            if ~(exist(matlab_path,'dir') == 7)
                mkdir(char(matlab_path));
            end
            
            expr = {};
            
            % Break out states
            q   = obj.States.x;
            dq  = obj.States.dx;
            ddq = obj.States.ddx;
            X   = SymVariable([q;dq]);
            dX  =  SymVariable([dq;ddq]);
            
            % Indexing
            rotorIndexing = obj.getJointIndices({...
                'LeftHipRoll', ...
                'LeftHipYaw', ...
                'LeftHipPitch', ...
                'LeftKneePitch', ...
                'LeftFootPitch', ...
                'RightHipRoll', ...
                'RightHipYaw', ...
                'RightHipPitch', ...
                'RightKneePitch', ...
                'RightFootPitch'});

            % Leg configuration as inverted pendulum
            % Toe Pitch Position
            left_tp_frame = obj.Joints(getJointIndices(obj, 'LeftFootPitch'));
            p_ltp = obj.getCartesianPosition(left_tp_frame)';
            p_ltp = p_ltp.subs(q(1:6), zeros(6,1));
            
            right_tp_frame = obj.Joints(getJointIndices(obj, 'RightFootPitch'));
            p_rtp = obj.getCartesianPosition(right_tp_frame)';
            p_rtp = p_rtp.subs(q(1:6), zeros(6,1));
            
            % Derive the leg shapes
            left_com_frame = obj.Joints(getJointIndices(obj, 'LeftHipPitch'));
            p_CoM = obj.getCartesianPosition(left_com_frame)';
            p_CoM = p_CoM.subs(q(1:6), zeros(6,1));
            
            vector = p_ltp - p_CoM;
            vector = vector.subs(q('LeftHipYaw'), 0);
            vector = vector.subs(q('LeftHipRoll'), 0);
            vector = vector.subs(q('LeftShinPitch'), 0);
            vector = vector.subs(q('LeftTarsusPitch'), deg2rad(13) - q('LeftKneePitch'));
            %vector = eval_math_fun('Simplify', vector);
            %vector = eval_math_fun('Chop', vector);
            left_pitch = atan2(-vector(1), -vector(3));
            
            left_legLength = vector(1).^2 + vector(2).^2 + vector(3).^2;
            %left_legLength = eval_math_fun('Simplify', left_legLength);
            %left_legLength = eval_math_fun('Chop', left_legLength);
            left_legLength = sqrt(left_legLength);
            
            
            right_com_frame = obj.Joints(getJointIndices(obj, 'RightHipPitch'));
            p_CoM = obj.getCartesianPosition(right_com_frame)';
            p_CoM = p_CoM.subs(q(1:6), zeros(6,1));
            
            vector = p_rtp - p_CoM;
            vector = vector.subs(q('RightHipYaw'), 0);
            vector = vector.subs(q('RightHipRoll'), 0);
            
            
            vector = vector.subs(q('RightShinPitch'), 0);
            vector = vector.subs(q('RightTarsusPitch'), deg2rad(13) - q('RightKneePitch'));
            %vector = eval_math_fun('Simplify', vector);
            %vector = eval_math_fun('Chop', vector);
            right_pitch = atan2(-vector(1), -vector(3));
            
            right_legLength = vector(1).^2 + vector(2).^2 + vector(3).^2;
            %right_legLength = eval_math_fun('Simplify', right_legLength);
            %right_legLength = eval_math_fun('Chop', right_legLength);
            right_legLength = sqrt(right_legLength);
            
            % Foot Orientations
            leftFootOrientation  = obj.getRelativeEulerAngles(obj.ContactPoints.LeftSole)';
            rightFootOrientation = obj.getRelativeEulerAngles(obj.ContactPoints.RightSole)';
            footPitches = [leftFootOrientation(2);
                           rightFootOrientation(2)];
            footPitches = footPitches.subs(q('BaseRotX'), 0);
            footPitches = footPitches.subs(q('BaseRotZ'), 0);
            
            yLeftStanceActual = [...
                q('BaseRotX');
                q('BaseRotY');
                q('LeftHipYaw');
                left_legLength;
                right_legLength;
                right_pitch;
                q('RightHipRoll');
                q('RightHipYaw');
                footPitches(2)];
            
            yRightStanceActual = [...
                q('BaseRotX');
                q('BaseRotY');
                q('RightHipYaw');
                right_legLength;
                left_legLength;
                left_pitch;
                q('LeftHipRoll');
                q('LeftHipYaw');
                footPitches(1)];
            
            % Zero compliant elements
            yLeftStanceActual = yLeftStanceActual.subs(q(obj.getJointIndices({'LeftShinPitch', 'RightShinPitch'})), zeros(2,1));
            yLeftStanceActual = yLeftStanceActual.subs(q(obj.getJointIndices({'LeftTarsusPitch', 'RightTarsusPitch'})), deg2rad(13) - q(obj.getJointIndices({'LeftKneePitch', 'RightKneePitch'})));

            yRightStanceActual = yRightStanceActual.subs(q(obj.getJointIndices({'LeftShinPitch', 'RightShinPitch'})), zeros(2,1));
            yRightStanceActual = yRightStanceActual.subs(q(obj.getJointIndices({'LeftTarsusPitch', 'RightTarsusPitch'})), deg2rad(13) - q(obj.getJointIndices({'LeftKneePitch', 'RightKneePitch'})));
            
            % Create main Jacobians
            J_yLeftStanceActual  = jacobian(yLeftStanceActual,  SymVariable(q(rotorIndexing)));
            J_yRightStanceActual = jacobian(yRightStanceActual, SymVariable(q(rotorIndexing)));
            
            % And their time derivatives
            Jdot_yLeftStanceActual  = jacobian(J_yLeftStanceActual*SymVariable(dq(rotorIndexing,1)), SymVariable(dq(rotorIndexing)));
            Jdot_yRightStanceActual = jacobian(J_yRightStanceActual*SymVariable(dq(rotorIndexing,1)), SymVariable(dq(rotorIndexing)));
            
            % Create Jacobians for floating base terms
            % Left
            %leftFootOrientation = leftFootOrientation.subs(q([1:6]), zeros(6,1));
            %leftFootOrientation = leftFootOrientation.subs(q('LeftShinPitch'), 0);
            %leftFootOrientation = leftFootOrientation.subs(q('LeftTarsusPitch'), deg2rad(13) - q('LeftKneePitch'));
            %leftFootOrientation = eval_math_fun('Simplify', leftFootOrientation);
            %leftFootOrientation = eval_math_fun('Chop', leftFootOrientation);
            %             J_yLeftStanceActual(1,:) = jacobian(-leftFootOrientation(1),  SymVariable(q(rotorIndexing)));
            %             J_yLeftStanceActual(1,:) = jacobian(-left_tp_orientation(2),  SymVariable(q(rotorIndexing)));
            J_yLeftStanceActual(1,:) = zeros(1,10); J_yLeftStanceActual(1,1)  = -1;
            J_yLeftStanceActual(2,:) = zeros(1,10); J_yLeftStanceActual(2,3)  =  1;
            J_yLeftStanceActual(9,:) = zeros(1,10); J_yLeftStanceActual(9,10) = -1;
            
            % Right
            %rightFootOrientation = rightFootOrientation.subs(q([1:6]), zeros(6,1));
            %rightFootOrientation = rightFootOrientation.subs(q('RightShinPitch'), 0);
            %rightFootOrientation = rightFootOrientation.subs(q('RightTarsusPitch'), deg2rad(13) - q('RightKneePitch'));
            %rightFootOrientation = eval_math_fun('Simplify', rightFootOrientation);
            %rightFootOrientation = eval_math_fun('Chop', rightFootOrientation);
            %             J_yRightStanceActual(1,:) = jacobian(-rightFootOrientation(1),  SymVariable(q(rotorIndexing)));
            %             J_yRightStanceActual(1,:) = jacobian(-right_tp_orientation(2),  SymVariable(q(rotorIndexing)));
            J_yRightStanceActual(1,:) = zeros(1,10); J_yRightStanceActual(1,6) = -1;
            J_yRightStanceActual(2,:) = zeros(1,10); J_yRightStanceActual(2,8) =  1;
            J_yRightStanceActual(9,:) = zeros(1,10); J_yRightStanceActual(9,5) = -1;
           
            % Actual
            Dya_LeftStanceActual  = jacobian(yLeftStanceActual, X);
            % Dya_LeftStanceActual(1,:) = [jacobian(q('BaseRotX')-leftFootOrientation(1),q), zeros(1,22)];
            % Dya_LeftStanceActual(2,:) = [jacobian(q('BaseRotY')-leftFootOrientation(2),q), zeros(1,22)];
            %            Dya_LeftStanceActual(1,:) = zeros(1,44); Dya_LeftStanceActual(1,rotorIndexing(1))  = -1;
            %            Dya_LeftStanceActual(2,:) = zeros(1,44); Dya_LeftStanceActual(2,rotorIndexing(3))  =  1;
            Dya_LeftStanceActual(9,:) = zeros(1,44); Dya_LeftStanceActual(9,rotorIndexing(10)) = -1;
            
            Dya_RightStanceActual = jacobian(yRightStanceActual, X);
            % Dya_RightStanceActual(1,:) = [jacobian(q('BaseRotX')-rightFootOrientation(1),q), zeros(1,22)];
            % Dya_RightStanceActual(2,:) = [jacobian(q('BaseRotY')-rightFootOrientation(2),q), zeros(1,22)];
            %            Dya_RightStanceActual(1,:) = zeros(1,44); Dya_RightStanceActual(1,rotorIndexing(6)) = -1;
            %            Dya_RightStanceActual(2,:) = zeros(1,44); Dya_RightStanceActual(2,rotorIndexing(8)) =  1;
            Dya_RightStanceActual(9,:) = zeros(1,44); Dya_RightStanceActual(9,rotorIndexing(5)) = -1;
            
            DLfya_LeftStanceActual  = jacobian(Dya_LeftStanceActual*dX, X);
            DLfya_RightStanceActual = jacobian(Dya_RightStanceActual*dX, X);
            
            % Output Velocity
            dyLeftStanceActual  = jacobian(yLeftStanceActual,  q) * dq;
            dyRightStanceActual = jacobian(yRightStanceActual, q) * dq;
            
            % Force feedback kinematic terms
            p_lr = obj.getCartesianPosition(obj.Joints(getJointIndices(obj, 'LeftHipRoll')))';
            p_rr = obj.getCartesianPosition(obj.Joints(getJointIndices(obj, 'RightHipRoll')))';            
            p_lf = obj.getCartesianPosition(left_tp_frame)' - p_lr;
            p_rf = obj.getCartesianPosition(right_tp_frame)' - p_rr;
            p_lf = p_lf.subs(q([1:3,6]), zeros(4,1));
            p_rf = p_rf.subs(q([1:3,6]), zeros(4,1));

            % legangle_left  = atan2(sqrt(p_lf(1).^2 + p_lf(2).^2), -p_lf(3));
            % legangle_right = atan2(sqrt(p_rf(1).^2 + p_rf(2).^2), -p_rf(3));
            legpitch_left  = atan2(p_lf(1), -p_lf(3));
            legpitch_right = atan2(p_rf(1), -p_rf(3));
            legpitch_left = legpitch_left.subs(q(obj.getJointIndices({'LeftShinPitch', 'RightShinPitch'})), zeros(2,1));
            legpitch_left = legpitch_left.subs(q(obj.getJointIndices({'LeftTarsusPitch', 'RightTarsusPitch'})), deg2rad(13) - q(obj.getJointIndices({'LeftKneePitch', 'RightKneePitch'})));
            legpitch_right = legpitch_right.subs(q(obj.getJointIndices({'LeftShinPitch', 'RightShinPitch'})), zeros(2,1));
            legpitch_right = legpitch_right.subs(q(obj.getJointIndices({'LeftTarsusPitch', 'RightTarsusPitch'})), deg2rad(13) - q(obj.getJointIndices({'LeftKneePitch', 'RightKneePitch'})));
            legpitch_dot_left  = jacobian(legpitch_left, q)*dq;
            legpitch_dot_right = jacobian(legpitch_right, q)*dq;
            
            legroll_left  = atan2(p_lf(2), -p_lf(3));
            legroll_right = atan2(p_rf(2), -p_rf(3));
            legroll_left = legroll_left.subs(q(obj.getJointIndices({'LeftShinPitch', 'RightShinPitch'})), zeros(2,1));
            legroll_left = legroll_left.subs(q(obj.getJointIndices({'LeftTarsusPitch', 'RightTarsusPitch'})), deg2rad(13) - q(obj.getJointIndices({'LeftKneePitch', 'RightKneePitch'})));
            legroll_right = legroll_right.subs(q(obj.getJointIndices({'LeftShinPitch', 'RightShinPitch'})), zeros(2,1));
            legroll_right = legroll_right.subs(q(obj.getJointIndices({'LeftTarsusPitch', 'RightTarsusPitch'})), deg2rad(13) - q(obj.getJointIndices({'LeftKneePitch', 'RightKneePitch'})));
            legroll_dot_left  = jacobian(legroll_left, q)*dq;
            legroll_dot_right = jacobian(legroll_right, q)*dq;
            
            % Compile
            expr{end+1} = SymFunction('yaLeftStance', yLeftStanceActual, {q});
            expr{end+1} = SymFunction('yaRightStance', yRightStanceActual, {q});
            expr{end+1} = SymFunction('dyaLeftStance', dyLeftStanceActual, {q, dq});
            expr{end+1} = SymFunction('dyaRightStance', dyRightStanceActual, {q, dq});
            expr{end+1} = SymFunction('J_yaLeftStance', J_yLeftStanceActual, {q});
            expr{end+1} = SymFunction('J_yaRightStance', J_yRightStanceActual, {q});
            expr{end+1} = SymFunction('Jdot_yaLeftStance', Jdot_yLeftStanceActual, {q, dq});
            expr{end+1} = SymFunction('Jdot_yaRightStance', Jdot_yRightStanceActual, {q, dq});
            expr{end+1} = SymFunction('Dya_LeftStanceActual', Dya_LeftStanceActual, {q});
            expr{end+1} = SymFunction('Dya_RightStanceActual', Dya_RightStanceActual, {q});
            expr{end+1} = SymFunction('DLfya_LeftStanceActual', DLfya_LeftStanceActual, {q,dq});
            expr{end+1} = SymFunction('DLfya_RightStanceActual', DLfya_RightStanceActual, {q,dq});
            expr{end+1} = SymFunction('Dya_LeftStanceActual', Dya_LeftStanceActual, {q});
            expr{end+1} = SymFunction('leftLegPitch', legpitch_left, {q});
            expr{end+1} = SymFunction('rightLegPitch', legpitch_right, {q});
            expr{end+1} = SymFunction('leftLegPitchVelocity', legpitch_dot_left, {q,dq});
            expr{end+1} = SymFunction('rightLegPitchVelocity', legpitch_dot_right, {q,dq});
            expr{end+1} = SymFunction('leftLegRoll', legroll_left, {q});
            expr{end+1} = SymFunction('rightLegRoll', legroll_right, {q});
            expr{end+1} = SymFunction('leftLegRollVelocity', legroll_dot_left, {q,dq});
            expr{end+1} = SymFunction('rightLegRollVelocity', legroll_dot_right, {q,dq});
            
            % Export the files
            for i = 1:length(expr)
                export_fun(expr{i}, export_path, matlab_path);
            end
            
            % Move the files into the appropriate folder for runtime code
            src_list = dir(strcat(export_path, '/*.cc'));
            hed_list = dir(strcat(export_path, '/*.hh'));
            
            for i = 1:length(src_list)
                tardir = strcat('./gen/src/' );
                srcdir = strcat(src_list(i).folder, '/', src_list(i).name );
                if ~exist(tardir,'dir')
                    mkdir(char(tardir));
                end
                movefile(srcdir,  tardir);
            end
            for i = 1:length(hed_list)
                tardir = strcat('./gen/include/frost_expr/outputs/' );
                srcdir= strcat(hed_list(i).folder, '/', hed_list(i).name );
                if ~exist(tardir,'dir')
                    mkdir(char(tardir));
                end
                movefile(srcdir,  tardir);
            end
        end
        
        function [] = exportStandCOMOutputs(obj)
            % Export path
            module = 'outputs';
            export_path = [obj.rpath, '/MATLAB/symbolic/+frost_expr/+', module];
            matlab_path = [obj.rpath, '/MATLAB/symbolic/+codegen/+',    module];
            if ~(exist(export_path,'dir') == 7)
                mkdir(char(export_path));
            end
            if ~(exist(matlab_path,'dir') == 7)
                mkdir(char(matlab_path));
            end
            
            expr = {};
            
            % Break out states
            q   = obj.States.x;
            dq  = obj.States.dx;
            ddq = obj.States.ddx;
            X   = SymVariable([q;dq]);
            dX  =  SymVariable([dq;ddq]);
            
            % Indexing
            rotorIndexing = obj.getJointIndices({...
                    'LeftHipRoll', ...
                    'LeftHipYaw', ...
                    'LeftHipPitch', ...
                    'LeftKneePitch', ...
                    'LeftFootPitch', ...
                    'RightHipRoll', ...
                    'RightHipYaw', ...
                    'RightHipPitch', ...
                    'RightKneePitch', ...
                    'RightFootPitch'});

            ya_Stand = q(1:6);
            
            % Create Jacobians
            Jya_Stand  = jacobian(ya_Stand,  SymVariable(q(rotorIndexing)));
            
            % Actual
            Dya_Stand = jacobian(ya_Stand,  X);
            DLfya_Stand  = jacobian(Dya_Stand*dX, X);
            
            % Output Velocity
            dya_Stand = jacobian(ya_Stand,  q) * dq;
                        
            % Compile
            expr{end+1} = SymFunction('yaStandCOM', ya_Stand, {q});
            expr{end+1} = SymFunction('dyaStandCOM', dya_Stand, {q, dq});
            expr{end+1} = SymFunction('Jya_standCOM', Jya_Stand, {q});
            expr{end+1} = SymFunction('Dya_standCOM', Dya_Stand, {q});
            expr{end+1}  = SymFunction('DLfya_standCOM', DLfya_Stand, {q,dq});
            
            % Export the files
            for i = 1:length(expr)
                export_fun(expr{i}, export_path, matlab_path);
            end
            
            % Move the files into the appropriate folder for runtime code
            src_list = dir(strcat(export_path, '/*.cc'));
            hed_list = dir(strcat(export_path, '/*.hh'));
            
            for i = 1:length(src_list)
                tardir = strcat('./gen/src/' );
                srcdir = strcat(src_list(i).folder, '/', src_list(i).name );
                if ~exist(tardir,'dir')
                    mkdir(char(tardir));
                end
                movefile(srcdir,  tardir);
            end
            for i = 1:length(hed_list)
                tardir = strcat('./gen/include/frost_expr/outputs/' );
                srcdir = strcat(hed_list(i).folder, '/', hed_list(i).name );
                if ~exist(tardir,'dir')
                    mkdir(char(tardir));
                end
                movefile(srcdir,  tardir);
            end
        end
          
        function [] = exportStandCOMOutputs_new(obj)
            % control COM xyz relative to support polygon centroid
            % control pelvis roll pitch yaw
            
            % Export path
            module = 'outputs';
            export_path = [obj.rpath, '/MATLAB/symbolic/+frost_expr/+', module];
            matlab_path = [obj.rpath, '/MATLAB/symbolic/+codegen/+',    module];
            if ~(exist(export_path,'dir') == 7)
                mkdir(char(export_path));
            end
            if ~(exist(matlab_path,'dir') == 7)
                mkdir(char(matlab_path));
            end
            
            expr = {};
            
            % Break out states
            q   = obj.States.x;
            dq  = obj.States.dx;
            ddq = obj.States.ddx;
            X   = SymVariable([q;dq]);
            dX  =  SymVariable([dq;ddq]);
            
            % Indexing
            rotorIndexing = obj.getJointIndices({...
                'LeftHipRoll', ...
                'LeftHipYaw', ...
                'LeftHipPitch', ...
                'LeftKneePitch', ...
                'LeftFootPitch', ...
                'RightHipRoll', ...
                'RightHipYaw', ...
                'RightHipPitch', ...
                'RightKneePitch', ...
                'RightFootPitch'});
            
            left_tp_frame = obj.ContactPoints.LeftSole; %obj.Joints(getJointIndices(obj, 'LeftFootPitch'));
            right_tp_frame = obj.ContactPoints.RightSole; %obj.Joints(getJointIndices(obj, 'RightFootPitch'));
            
            
            
            leftFootPos = obj.getCartesianPosition(left_tp_frame)';
            rightFootPos = obj.getCartesianPosition(right_tp_frame)';            
            centroid = (leftFootPos+rightFootPos)/2;
            com = obj.getComPosition()'-centroid;
            

            ya_Stand = [com; q(4:6)];
            
            % Create Jacobians
            Jya_Stand  = jacobian(ya_Stand,  SymVariable(q(rotorIndexing)));
            
            % Actual
            Dya_Stand = jacobian(ya_Stand,  X);
            DLfya_Stand  = jacobian(Dya_Stand*dX, X);
            
            % Output Velocity
            dya_Stand = jacobian(ya_Stand,  q) * dq;
                        
            % Compile
            expr{end+1} = SymFunction('yaStandCOM_new', ya_Stand, {q});
            expr{end+1} = SymFunction('dyaStandCOM_new', dya_Stand, {q, dq});
%             expr{end+1} = SymFunction('Jya_standCOM', Jya_Stand, {q});
            expr{end+1} = SymFunction('Dya_standCOM_new', Dya_Stand, {q});
            expr{end+1}  = SymFunction('DLfya_standCOM_new', DLfya_Stand, {q,dq});
            
            % Export the files
            for i = 1:length(expr)
                export_fun(expr{i}, export_path, matlab_path);
            end
            
            % Move the files into the appropriate folder for runtime code
            src_list = dir(strcat(export_path, '/*.cc'));
            hed_list = dir(strcat(export_path, '/*.hh'));
            
            for i = 1:length(src_list)
                tardir = strcat('./gen/src/' );
                srcdir = strcat(src_list(i).folder, '/', src_list(i).name );
                if ~exist(tardir,'dir')
                    mkdir(char(tardir));
                end
                movefile(srcdir,  tardir);
            end
            for i = 1:length(hed_list)
                tardir = strcat('./gen/include/frost_expr/outputs/' );
                srcdir = strcat(hed_list(i).folder, '/', hed_list(i).name );
                if ~exist(tardir,'dir')
                    mkdir(char(tardir));
                end
                movefile(srcdir,  tardir);
            end
        end
        
        function [] = exportWalkOutputsXiaobinDirectSynthesis(obj)
            %%% use hip roll (delta z) difference to replace the pelvis roll outputs.
            %%% use hip roll to pitch (delta x) difference to replace
            %%% use vertical COM directly
            % base
            module = 'Xiaobin_outputs';
            export_path = [obj.rpath, '/MATLAB/symbolic/+frost_expr/+', module];
            matlab_path = [obj.rpath, '/MATLAB/symbolic/+codegen/+',    module];
            if ~(exist(export_path,'dir') == 7)
                mkdir(char(export_path));
            end
            if ~(exist(matlab_path,'dir') == 7)
                mkdir(char(matlab_path));
            end
            expr = {};
            % Break out states
            q   = obj.States.x;
            dq  = obj.States.dx;
            ddq = obj.States.ddx;
            X   = SymVariable([q;dq]);
            dX  =  SymVariable([dq;ddq]);
            % Indexing
            rotorIndexing = obj.getJointIndices({...
                'LeftHipRoll', ...
                'LeftHipYaw', ...
                'LeftHipPitch', ...
                'LeftKneePitch', ...
                'LeftFootPitch', ...
                'RightHipRoll', ...
                'RightHipYaw', ...
                'RightHipPitch', ...
                'RightKneePitch', ...
                'RightFootPitch'});
            % Leg configuration as inverted pendulum
            % Toe Pitch Position
            left_tp_frame = obj.Joints(getJointIndices(obj, 'LeftFootPitch'));
            right_tp_frame = obj.Joints(getJointIndices(obj, 'RightFootPitch'));
            %%%%%%%% step size %%%%%%%%%%%%
            StepSize_leftStance = obj.getCartesianPosition(right_tp_frame)' -  obj.getCartesianPosition(left_tp_frame)';   %%% toe pitch                        
            StepLocal_leftStance = StepSize_leftStance.subs(q('BaseRotZ'), 0);
%             StepLocal_leftStance = eval_math_fun('Simplify', StepLocal_leftStance);
%             StepLocal_leftStance = eval_math_fun('Chop', StepLocal_leftStance);
            StepSagittal_leftStance = StepLocal_leftStance(1);
            StepLateral_leftStance = StepLocal_leftStance(2);
           
            StepSize_rightStance = obj.getCartesianPosition(left_tp_frame)' - obj.getCartesianPosition(right_tp_frame)';
            StepLocal_rightStance = StepSize_rightStance.subs(q('BaseRotZ'), 0);
%             StepLocal_rightStance = eval_math_fun('Simplify', StepLocal_rightStance);
%             StepLocal_rightStance = eval_math_fun('Chop', StepLocal_rightStance);
            StepSagittal_rightStance = StepLocal_rightStance(1);
            StepLateral_rightStance = StepLocal_rightStance(2);
           
            leftSwingZ =  StepLocal_rightStance(3);
            rightSwingZ = StepLocal_leftStance(3);

            % left stance COM relative to stance pivot
            com = obj.getComPosition();
            deltaLeftCOM = com - obj.getCartesianPosition(obj.Joints(getJointIndices(obj, 'LeftFootPitch')));
%             deltaLeftCOM = deltaLeftCOM.subs(q('LeftShinPitch'), 0);
%             deltaLeftCOM = deltaLeftCOM.subs(q('LeftTarsusPitch'), deg2rad(13) - q('LeftKneePitch'));

            left_COM = deltaLeftCOM(3);
        %    left_COM = eval_math_fun('Simplify', left_COM);
            left_COM = eval_math_fun('Chop', left_COM);
           
            %  right stance COM relative to stance pivot
            deltaRightCOM = com - obj.getCartesianPosition(obj.Joints(getJointIndices(obj, 'RightFootPitch')));
%             deltaRightCOM = deltaRightCOM.subs(q('RightShinPitch'), 0);
%             deltaRightCOM = deltaRightCOM.subs(q('RightTarsusPitch'), deg2rad(13) - q('RightKneePitch'));

            right_COM =  deltaRightCOM(3);
          %  right_COM = eval_math_fun('Simplify', right_COM);
            right_COM = eval_math_fun('Chop', right_COM);    

            % pelvis Orientations replacement y(0) & y(1) 
            leftHipPos =  obj.getCartesianPosition(obj.Joints(obj.getJointIndices('LeftHipRoll')))';
            rightHipPos = obj.getCartesianPosition(obj.Joints(obj.getJointIndices('RightHipRoll')))';
            deltaRoll =  (leftHipPos(3) - rightHipPos(3))/0.27;
            deltaPitch = (-q('BasePosZ') + 0.5*leftHipPos(3) + 0.5*rightHipPos(3))/0.049;

            deltaRoll = eval_math_fun('Simplify', deltaRoll);
            deltaRoll = eval_math_fun('Chop', deltaRoll);
            deltaPitch = eval_math_fun('Simplify', deltaPitch);
            deltaPitch = eval_math_fun('Chop', deltaPitch);
            %%% foot pitch replacement y(8)
            deltaLeftFoot = obj.ContactPoints.LeftHeel.computeCartesianPosition()- ...
                         obj.ContactPoints.LeftToe.computeCartesianPosition();
             
            deltaRightFoot = obj.ContactPoints.RightHeel.computeCartesianPosition()- ...
                         obj.ContactPoints.RightToe.computeCartesianPosition();
                             
            footLeftPitch = deltaLeftFoot(3)/0.14;
            footRightPitch = deltaRightFoot(3)/0.14;
           
            yLeftStanceActual = [...
                deltaRoll;
                deltaPitch;
                q('LeftHipYaw');
                left_COM;
                rightSwingZ;
                StepSagittal_leftStance;
                StepLateral_leftStance;
                q('RightHipYaw');
                footRightPitch];% footPitches(2)];
           
            yRightStanceActual = [...
                deltaRoll;
                deltaPitch;
                q('RightHipYaw');
                right_COM;
                leftSwingZ;
                StepSagittal_rightStance;
                StepLateral_rightStance;
                q('LeftHipYaw');
                footLeftPitch]; %footPitches(1)];
            
            % Zero compliant elements
            yLeftStanceActual = yLeftStanceActual.subs(q(obj.getJointIndices({'RightShinPitch'})), 0);
            yLeftStanceActual = yLeftStanceActual.subs(q(obj.getJointIndices({'RightTarsusPitch'})), deg2rad(13) - q(obj.getJointIndices({'RightKneePitch'})));
           
            yRightStanceActual = yRightStanceActual.subs(q(obj.getJointIndices({'LeftShinPitch'})), 0);
            yRightStanceActual = yRightStanceActual.subs(q(obj.getJointIndices({'LeftTarsusPitch'})), deg2rad(13) - q(obj.getJointIndices({'LeftKneePitch'})));
           
            % try rigid on stance leg 
            yLeftStanceActual = yLeftStanceActual.subs(q(obj.getJointIndices({'LeftShinPitch'})), 0);
            yLeftStanceActual = yLeftStanceActual.subs(q(obj.getJointIndices({'LeftTarsusPitch'})), deg2rad(13) - q(obj.getJointIndices({'LeftKneePitch'})));
           
            yRightStanceActual = yRightStanceActual.subs(q(obj.getJointIndices({'RightShinPitch'})), 0);
            yRightStanceActual = yRightStanceActual.subs(q(obj.getJointIndices({'RightTarsusPitch'})), deg2rad(13) - q(obj.getJointIndices({'RightKneePitch'})));
            
            
            % Create Jacobians
            J_yLeftStanceActual  = jacobian(yLeftStanceActual,  SymVariable(q(rotorIndexing)));
            J_yRightStanceActual = jacobian(yRightStanceActual, SymVariable(q(rotorIndexing)));
            J_yLeftStanceActual_all  = jacobian(yLeftStanceActual,  q);
            J_yRightStanceActual_all = jacobian(yRightStanceActual, q);
            
            % Actual
            Dya_LeftStanceActual  = jacobian(yLeftStanceActual,  X);
            Dya_RightStanceActual = jacobian(yRightStanceActual, X);
           
            DLfya_LeftStanceActual  = jacobian(Dya_LeftStanceActual*dX, X);
            DLfya_RightStanceActual = jacobian(Dya_RightStanceActual*dX, X);
            
            % Output Velocity
            dyLeftStanceActual  = jacobian(yLeftStanceActual,  q) * dq;
            dyRightStanceActual = jacobian(yRightStanceActual, q) * dq;
           
            Jdot_yLeftStanceActual = jacobian(dyLeftStanceActual, q);
            Jdot_yRightStanceActual = jacobian(dyRightStanceActual, q);

            % Compile
            expr{end+1} = SymFunction('yaLeftStance_new', yLeftStanceActual, {q});
            expr{end+1} = SymFunction('yaRightStance_new', yRightStanceActual, {q});
            
            expr{end+1} = SymFunction('dyaLeftStance_new', dyLeftStanceActual, {q, dq});
            expr{end+1} = SymFunction('dyaRightStance_new', dyRightStanceActual, {q, dq});
            
            expr{end+1} = SymFunction('J_yaLeftStance_new', J_yLeftStanceActual, {q});
            expr{end+1} = SymFunction('J_yaRightStance_new', J_yRightStanceActual, {q});
           
            expr{end+1} = SymFunction('J_yaLeftStance_all', J_yLeftStanceActual_all, {q});
            expr{end+1} = SymFunction('J_yaRightStance_all', J_yRightStanceActual_all, {q});
           
            expr{end+1} = SymFunction('Jdot_yLeftStanceActual', Jdot_yLeftStanceActual, {q,dq});
            expr{end+1} = SymFunction('Jdot_yRightStanceActual', Jdot_yRightStanceActual, {q, dq});
           
            expr{end+1} = SymFunction('Dya_LeftStanceActual_new', Dya_LeftStanceActual, {q});
            expr{end+1} = SymFunction('Dya_RightStanceActual_new', Dya_RightStanceActual, {q});
            expr{end+1} = SymFunction('DLfya_LeftStanceActual_new', DLfya_LeftStanceActual, {q,dq});
            expr{end+1} = SymFunction('DLfya_RightStanceActual_new', DLfya_RightStanceActual, {q,dq});
           
            % Export the files
            for i = 1:length(expr)
                export_fun(expr{i}, export_path, matlab_path);
            end
           
            % Move the files into the appropriate folder for runtime code
            src_list = dir(strcat(export_path, '/*.cc'));
            hed_list = dir(strcat(export_path, '/*.hh'));
           
            for i = 1:length(src_list)
                tardir = strcat('./gen/src/' );
                srcdir = strcat(src_list(i).folder, '/', src_list(i).name );
                if ~exist(tardir,'dir')
                    mkdir(char(tardir));
                end
                movefile(srcdir,  tardir);
            end
            for i = 1:length(hed_list)
                tardir = strcat('./gen/include/frost_expr/Xiaobin_outputs/' );
                srcdir= strcat(hed_list(i).folder, '/', hed_list(i).name );
                if ~exist(tardir,'dir')
                    mkdir(char(tardir));
                end
                movefile(srcdir,  tardir);
            end
        end
        
        function [] = exportWalkOutputsXiaobinDirectSynthesis_leglength(obj)
            %%% use hip roll (delta z) difference to replace the pelvis roll outputs.
            %%% use hip roll to pitch (delta x) difference to replace
            %%% use vertical COM directly
            % base
            module = 'Xiaobin_outputs';
            export_path = [obj.rpath, '/MATLAB/symbolic/+frost_expr/+', module];
            matlab_path = [obj.rpath, '/MATLAB/symbolic/+codegen/+',    module];
            if ~(exist(export_path,'dir') == 7)
                mkdir(char(export_path));
            end
            if ~(exist(matlab_path,'dir') == 7)
                mkdir(char(matlab_path));
            end
            expr = {};
            % Break out states
            q   = obj.States.x;
            dq  = obj.States.dx;
            ddq = obj.States.ddx;
            X   = SymVariable([q;dq]);
            dX  =  SymVariable([dq;ddq]);
            % Indexing
            rotorIndexing = obj.getJointIndices({...
                'LeftHipRoll', ...
                'LeftHipYaw', ...
                'LeftHipPitch', ...
                'LeftKneePitch', ...
                'LeftFootPitch', ...
                'RightHipRoll', ...
                'RightHipYaw', ...
                'RightHipPitch', ...
                'RightKneePitch', ...
                'RightFootPitch'});
            % Leg configuration as inverted pendulum
            % Toe Pitch Position
            left_tp_frame = obj.Joints(getJointIndices(obj, 'LeftFootPitch'));
            right_tp_frame = obj.Joints(getJointIndices(obj, 'RightFootPitch'));
            %%%%%%%% step size %%%%%%%%%%%%
            StepSize_leftStance = obj.getCartesianPosition(right_tp_frame)' -  obj.getCartesianPosition(left_tp_frame)';   %%% toe pitch                        
            StepLocal_leftStance = StepSize_leftStance; %.subs(q('BaseRotZ'), 0);
            StepSagittal_leftStance = StepLocal_leftStance(1);
            StepLateral_leftStance = StepLocal_leftStance(2);
           
            StepSize_rightStance = obj.getCartesianPosition(left_tp_frame)' - obj.getCartesianPosition(right_tp_frame)';
            StepLocal_rightStance = StepSize_rightStance; %.subs(q('BaseRotZ'), 0);
            StepSagittal_rightStance = StepLocal_rightStance(1);
            StepLateral_rightStance = StepLocal_rightStance(2);
           
            leftSwingZ =  StepLocal_rightStance(3);
            rightSwingZ = StepLocal_leftStance(3);

            % left stance COM relative to stance pivot
            com = obj.getComPosition();
            deltaLeftCOM =  com - obj.getCartesianPosition(obj.Joints(getJointIndices(obj, 'LeftFootPitch')));

            left_COM = deltaLeftCOM(3);
            left_COM = eval_math_fun('Chop', left_COM);
           
            deltaRightCOM = com - obj.getCartesianPosition(obj.Joints(getJointIndices(obj, 'RightFootPitch')));

            right_COM =  deltaRightCOM(3);
            right_COM = eval_math_fun('Chop', right_COM);    

            % pelvis Orientations replacement y(0) & y(1) 
            leftHipPos =  obj.getCartesianPosition(obj.Joints(obj.getJointIndices('LeftHipRoll')))';
            rightHipPos = obj.getCartesianPosition(obj.Joints(obj.getJointIndices('RightHipRoll')))';
            deltaRoll =  (leftHipPos(3) - rightHipPos(3))/0.27;
            deltaPitch = (-q('BasePosZ') + 0.5*leftHipPos(3) + 0.5*rightHipPos(3))/0.049;

            deltaRoll = eval_math_fun('Simplify', deltaRoll);
            deltaRoll = eval_math_fun('Chop', deltaRoll);
            deltaPitch = eval_math_fun('Simplify', deltaPitch);
            deltaPitch = eval_math_fun('Chop', deltaPitch);
            %%% foot pitch replacement y(8)
            deltaLeftFoot = obj.ContactPoints.LeftHeel.computeCartesianPosition()- ...
                         obj.ContactPoints.LeftToe.computeCartesianPosition();
             
            deltaRightFoot = obj.ContactPoints.RightHeel.computeCartesianPosition()- ...
                         obj.ContactPoints.RightToe.computeCartesianPosition();
                             
            footLeftPitch = deltaLeftFoot(3)/0.14;
            footRightPitch = deltaRightFoot(3)/0.14;
                       
            yLeftStanceActual = [...
                deltaRoll;
                deltaPitch;
                q('LeftHipYaw');
                left_COM;
                rightSwingZ;
                StepSagittal_leftStance;
                StepLateral_leftStance;
                q('RightHipYaw');
                footRightPitch];% footPitches(2)];
           
            yRightStanceActual = [...
                deltaRoll;
                deltaPitch;
                q('RightHipYaw');
                right_COM;
                leftSwingZ;
                StepSagittal_rightStance;
                StepLateral_rightStance;
                q('LeftHipYaw');
                footLeftPitch]; %footPitches(1)];
   
            % Actual
            Dya_LeftStanceActual  = jacobian(yLeftStanceActual,  X);
            Dya_RightStanceActual = jacobian(yRightStanceActual, X);
           
            DLfya_LeftStanceActual  = jacobian(Dya_LeftStanceActual*dX, X);
            DLfya_RightStanceActual = jacobian(Dya_RightStanceActual*dX, X);
           
            % Output Velocity
            dyLeftStanceActual  = jacobian(yLeftStanceActual,  q) * dq;
            dyRightStanceActual = jacobian(yRightStanceActual, q) * dq;

            % Compile
            expr{end+1} = SymFunction('yaLeftStance_new', yLeftStanceActual, {q});
            expr{end+1} = SymFunction('yaRightStance_new', yRightStanceActual, {q});
            expr{end+1} = SymFunction('dyaLeftStance_new', dyLeftStanceActual, {q, dq});
            expr{end+1} = SymFunction('dyaRightStance_new', dyRightStanceActual, {q, dq});

            expr{end+1} = SymFunction('Dya_LeftStanceActual_new', Dya_LeftStanceActual, {q});
            expr{end+1} = SymFunction('Dya_RightStanceActual_new', Dya_RightStanceActual, {q});
            expr{end+1} = SymFunction('DLfya_LeftStanceActual_new', DLfya_LeftStanceActual, {q,dq});
            expr{end+1} = SymFunction('DLfya_RightStanceActual_new', DLfya_RightStanceActual, {q,dq});
           
            % Export the files
            for i = 1:length(expr)
                export_fun(expr{i}, export_path, matlab_path);
            end
           
            % Move the files into the appropriate folder for runtime code
            src_list = dir(strcat(export_path, '/*.cc'));
            hed_list = dir(strcat(export_path, '/*.hh'));
           
            for i = 1:length(src_list)
                tardir = strcat('./gen/src/' );
                srcdir = strcat(src_list(i).folder, '/', src_list(i).name );
                if ~exist(tardir,'dir')
                    mkdir(char(tardir));
                end
                movefile(srcdir,  tardir);
            end
            for i = 1:length(hed_list)
                tardir = strcat('./gen/include/frost_expr/Xiaobin_outputs/' );
                srcdir= strcat(hed_list(i).folder, '/', hed_list(i).name );
                if ~exist(tardir,'dir')
                    mkdir(char(tardir));
                end
                movefile(srcdir,  tardir);
            end
        end
    end
    
    %% Currently used by Joris
    methods  
        function [] = exportFeetWithRespectToComOutputs(obj)
            module = 'Joris_outputs';
            export_path = [obj.rpath, '/MATLAB/symbolic/+frost_expr/+', module];
            matlab_path = [obj.rpath, '/MATLAB/symbolic/+codegen/+',    module];
            if ~(exist(export_path,'dir') == 7)
                mkdir(char(export_path));
            end
            if ~(exist(matlab_path,'dir') == 7)
                mkdir(char(matlab_path));
            end
            expr = {};
            % Break out states
            q   = obj.States.x;
            dq  = obj.States.dx;
            ddq = obj.States.ddx;
            X   = SymVariable([q;dq]);
            dX  =  SymVariable([dq;ddq]);
            % Indexing
            rotorIndexing = obj.getJointIndices({...
                'LeftHipRoll', ...
                'LeftHipYaw', ...
                'LeftHipPitch', ...
                'LeftKneePitch', ...
                'LeftFootPitch', ...
                'RightHipRoll', ...
                'RightHipYaw', ...
                'RightHipPitch', ...
                'RightKneePitch', ...
                'RightFootPitch'});

            % left stance COM relative to stance pivot
            pelvisL = obj.getCartesianPosition(obj.Joints(getJointIndices(obj,'LeftHipRoll')));
            pelvisR = obj.getCartesianPosition(obj.Joints(getJointIndices(obj,'RightHipRoll')));
            com = obj.getComPosition();
            
            
            footPositionLeft = obj.getCartesianPosition(obj.ContactPoints.LeftSole);
            footPositionRight = obj.getCartesianPosition(obj.ContactPoints.RightSole);
%             footPositionLeft = obj.getCartesianPosition(obj.Joints(getJointIndices(obj, 'LeftFootPitch')));% - com;
%             footPositionRight = obj.getCartesianPosition(obj.Joints(getJointIndices(obj, 'RightFootPitch')));% - com;
            
            % Zero compliant elements
            footPositionLeft = footPositionLeft.subs(q(obj.getJointIndices({'RightShinPitch'})), 0);
            footPositionRight = footPositionRight.subs(q(obj.getJointIndices({'LeftShinPitch'})), 0);

            % try rigid on stance leg 
            footPositionLeft = footPositionLeft.subs(q(obj.getJointIndices({'LeftShinPitch'})), 0);
            footPositionRight = footPositionRight.subs(q(obj.getJointIndices({'RightShinPitch'})), 0);
            
            % zero absolute displacement
            footPositionLeft = footPositionLeft.subs(q('BasePosX'), 0);
            footPositionLeft = footPositionLeft.subs(q('BasePosY'), 0);
            footPositionLeft = footPositionLeft.subs(q('BasePosZ'), 0);
            footPositionRight = footPositionRight.subs(q('BasePosX'), 0);
            footPositionRight = footPositionRight.subs(q('BasePosY'), 0);
            footPositionRight = footPositionRight.subs(q('BasePosZ'), 0);
            % zero pitch roll yaw
            footPositionLeft = footPositionLeft.subs(q('BaseRotX'), 0);
            footPositionLeft = footPositionLeft.subs(q('BaseRotY'), 0);
            footPositionLeft = footPositionLeft.subs(q('BaseRotZ'), 0);
            footPositionRight = footPositionRight.subs(q('BaseRotX'), 0);
            footPositionRight = footPositionRight.subs(q('BaseRotY'), 0);
            footPositionRight = footPositionRight.subs(q('BaseRotZ'), 0);
            
            % Create Jacobians
            J_footPositionLeft  = jacobian(footPositionLeft,  SymVariable(q));
            J_footPositionRight = jacobian(footPositionRight, SymVariable(q));
%             J_footPositionLeft_all  = jacobian(footPositionLeft,  q);
%             J_footPositionRight_all = jacobian(footPositionRight, q);

            % Compile
            qInd = [7 8 9 10 11 12 14 15 16 17 18 19 20 22]';
            expr{end+1} = SymFunction('footPositionLeft', footPositionLeft, SymVariable(q(qInd)) );
            expr{end+1} = SymFunction('footPositionRight', footPositionRight, SymVariable(q(qInd)) );
            expr{end+1} = SymFunction('J_footPositionLeft', J_footPositionLeft, SymVariable(q(qInd)) );
            expr{end+1} = SymFunction('J_footPositionRight', J_footPositionRight, SymVariable(q(qInd)) );
%             expr{end+1} = SymFunction('J_footPositionLeft_all', J_footPositionLeft_all, SymVariable(q(qInd)) );
%             expr{end+1} = SymFunction('J_footPositionRight_all', J_footPositionRight_all, SymVariable(q(qInd)) );
            
            % Export the files
            for i = 1:length(expr)
                export_fun(expr{i}, export_path, matlab_path);
            end
           
            % Move the files into the appropriate folder for runtime code
            src_list = dir(strcat(export_path, '/*.cc'));
            hed_list = dir(strcat(export_path, '/*.hh'));
           
            for i = 1:length(src_list)
                tardir = strcat('./gen/src/' );
                srcdir = strcat(src_list(i).folder, '/', src_list(i).name );
                if ~exist(tardir,'dir')
                    mkdir(char(tardir));
                end
                movefile(srcdir,  tardir);
            end
            for i = 1:length(hed_list)
                tardir = strcat('./gen/include/frost_expr/Joris_outputs/' );
                srcdir= strcat(hed_list(i).folder, '/', hed_list(i).name );
                if ~exist(tardir,'dir')
                    mkdir(char(tardir));
                end
                movefile(srcdir,  tardir);
            end
        end
        
        
        function [] = exportWalkOutputsJorisRelativeDegree2WithXcom(obj)
            module = 'Joris_outputs';
            export_path = [obj.rpath, '/MATLAB/symbolic/+frost_expr/+', module];
            matlab_path = [obj.rpath, '/MATLAB/symbolic/+codegen/+',    module];
            if ~(exist(export_path,'dir') == 7)
                mkdir(char(export_path));
            end
            if ~(exist(matlab_path,'dir') == 7)
                mkdir(char(matlab_path));
            end
            expr = {};
            % Break out states
            q   = obj.States.x;
            dq  = obj.States.dx;
            ddq = obj.States.ddx;
            X   = SymVariable([q;dq]);
            dX  =  SymVariable([dq;ddq]);
            % Indexing
            rotorIndexing = obj.getJointIndices({...
                'LeftHipRoll', ...
                'LeftHipYaw', ...
                'LeftHipPitch', ...
                'LeftKneePitch', ...
                'LeftFootPitch', ...
                'RightHipRoll', ...
                'RightHipYaw', ...
                'RightHipPitch', ...
                'RightKneePitch', ...
                'RightFootPitch'});
            % Leg configuration as inverted pendulum
            % Toe Pitch Position
            left_tp_frame = obj.Joints(getJointIndices(obj, 'LeftFootPitch'));
            right_tp_frame = obj.Joints(getJointIndices(obj, 'RightFootPitch'));
            %%%%%%%% step size %%%%%%%%%%%%
            StepSize_leftStance = obj.getCartesianPosition(right_tp_frame)' -  obj.getCartesianPosition(left_tp_frame)';   %%% toe pitch                        
            StepLocal_leftStance = StepSize_leftStance.subs(q('BaseRotZ'), 0);
%             StepLocal_leftStance = eval_math_fun('Simplify', StepLocal_leftStance);
%             StepLocal_leftStance = eval_math_fun('Chop', StepLocal_leftStance);
            StepSagittal_leftStance = StepLocal_leftStance(1);
            StepLateral_leftStance = StepLocal_leftStance(2);
           
            StepSize_rightStance = obj.getCartesianPosition(left_tp_frame)' - obj.getCartesianPosition(right_tp_frame)';
            StepLocal_rightStance = StepSize_rightStance.subs(q('BaseRotZ'), 0);
%             StepLocal_rightStance = eval_math_fun('Simplify', StepLocal_rightStance);
%             StepLocal_rightStance = eval_math_fun('Chop', StepLocal_rightStance);
            StepSagittal_rightStance = StepLocal_rightStance(1);
            StepLateral_rightStance = StepLocal_rightStance(2);
           
            leftSwingZ =  StepLocal_rightStance(3);
            rightSwingZ = StepLocal_leftStance(3);

            % left stance COM relative to stance pivot
            com = obj.getComPosition();
            deltaLeftCOM = com - obj.getCartesianPosition(obj.Joints(getJointIndices(obj, 'LeftFootPitch')));
            deltaLeftCOM = deltaLeftCOM.subs(q('BaseRotZ'), 0);

            deltaLeftCOM = deltaLeftCOM.subs(q('LeftShinPitch'), 0);
          %  deltaLeftCOM = deltaLeftCOM.subs(q('LeftTarsusPitch'), deg2rad(13) - q('LeftKneePitch'));

            left_zCOM = deltaLeftCOM(3);
            left_zCOM = eval_math_fun('Chop', left_zCOM);
            left_xCOM = deltaLeftCOM(1);
            left_xCOM = eval_math_fun('Chop', left_xCOM);
           
            %  right stance COM relative to stance pivot
            deltaRightCOM = com - obj.getCartesianPosition(obj.Joints(getJointIndices(obj, 'RightFootPitch')));
            deltaRightCOM = deltaRightCOM.subs(q('BaseRotZ'), 0);

            deltaRightCOM = deltaRightCOM.subs(q('RightShinPitch'), 0);
           % deltaRightCOM = deltaRightCOM.subs(q('RightTarsusPitch'), deg2rad(13) - q('RightKneePitch'));

            right_zCOM = deltaRightCOM(3);
            right_zCOM = eval_math_fun('Chop', right_zCOM);    
            right_xCOM = deltaRightCOM(1);
            right_xCOM = eval_math_fun('Chop', right_xCOM);

            % pelvis Orientations replacement y(0) & y(1) 
            leftHipPos =  obj.getCartesianPosition(obj.Joints(obj.getJointIndices('LeftHipRoll')))';
            rightHipPos = obj.getCartesianPosition(obj.Joints(obj.getJointIndices('RightHipRoll')))';
            deltaRoll =  (leftHipPos(3) - rightHipPos(3))/0.27;
            deltaPitch = (-q('BasePosZ') + 0.5*leftHipPos(3) + 0.5*rightHipPos(3))/0.049;

            deltaRoll = eval_math_fun('Simplify', deltaRoll);
            deltaRoll = eval_math_fun('Chop', deltaRoll);
            deltaPitch = eval_math_fun('Simplify', deltaPitch);
            deltaPitch = eval_math_fun('Chop', deltaPitch);
            %%% foot pitch replacement y(8)
            deltaLeftFoot = obj.ContactPoints.LeftHeel.computeCartesianPosition()- ...
                         obj.ContactPoints.LeftToe.computeCartesianPosition();
             
            deltaRightFoot = obj.ContactPoints.RightHeel.computeCartesianPosition()- ...
                         obj.ContactPoints.RightToe.computeCartesianPosition();
                             
            footLeftPitch = deltaLeftFoot(3)/0.14;
            footRightPitch = deltaRightFoot(3)/0.14;
           
            yLeftStanceActual = [...
                deltaRoll;
                deltaPitch;
                q('LeftHipYaw');
                left_zCOM;
                StepLocal_leftStance(3);
                StepLocal_leftStance(1);
                StepLocal_leftStance(2);
                q('RightHipYaw');
                footRightPitch;
                left_xCOM];
           
            yRightStanceActual = [...
                deltaRoll;
                deltaPitch;
                q('RightHipYaw');
                right_zCOM;
                StepLocal_rightStance(3);
                StepLocal_rightStance(1);
                StepLocal_rightStance(2);
                q('LeftHipYaw');
                footLeftPitch;
                right_xCOM];
            
            % Zero compliant elements
            yLeftStanceActual = yLeftStanceActual.subs(q(obj.getJointIndices({'RightShinPitch'})), 0);
           % yLeftStanceActual = yLeftStanceActual.subs(q(obj.getJointIndices({'RightTarsusPitch'})), deg2rad(13) - q(obj.getJointIndices({'RightKneePitch'})));
           
            yRightStanceActual = yRightStanceActual.subs(q(obj.getJointIndices({'LeftShinPitch'})), 0);
         %   yRightStanceActual = yRightStanceActual.subs(q(obj.getJointIndices({'LeftTarsusPitch'})), deg2rad(13) - q(obj.getJointIndices({'LeftKneePitch'})));
           
            % try rigid on stance leg 
            yLeftStanceActual = yLeftStanceActual.subs(q(obj.getJointIndices({'LeftShinPitch'})), 0);
          %  yLeftStanceActual = yLeftStanceActual.subs(q(obj.getJointIndices({'LeftTarsusPitch'})), deg2rad(13) - q(obj.getJointIndices({'LeftKneePitch'})));
           
            yRightStanceActual = yRightStanceActual.subs(q(obj.getJointIndices({'RightShinPitch'})), 0);
         %   yRightStanceActual = yRightStanceActual.subs(q(obj.getJointIndices({'RightTarsusPitch'})), deg2rad(13) - q(obj.getJointIndices({'RightKneePitch'})));
            
            
            % Create Jacobians
            J_yLeftStanceActual  = jacobian(yLeftStanceActual,  SymVariable(q(rotorIndexing)));
            J_yRightStanceActual = jacobian(yRightStanceActual, SymVariable(q(rotorIndexing)));
            J_yLeftStanceActual_all  = jacobian(yLeftStanceActual,  q);
            J_yRightStanceActual_all = jacobian(yRightStanceActual, q);
            
            % Actual
            Dya_LeftStanceActual  = jacobian(yLeftStanceActual,  X);
            Dya_RightStanceActual = jacobian(yRightStanceActual, X);
           
            DLfya_LeftStanceActual  = jacobian(Dya_LeftStanceActual*dX, X);
            DLfya_RightStanceActual = jacobian(Dya_RightStanceActual*dX, X);
            
            % Output Velocity
            dyLeftStanceActual  = jacobian(yLeftStanceActual,  q) * dq;
            dyRightStanceActual = jacobian(yRightStanceActual, q) * dq;
           
            Jdot_yLeftStanceActual = jacobian(dyLeftStanceActual, q);
            Jdot_yRightStanceActual = jacobian(dyRightStanceActual, q);

            % Compile
            expr{end+1} = SymFunction('yaLeftStance_SLIP_with_xcom', yLeftStanceActual, {q});
            expr{end+1} = SymFunction('yaRightStance_SLIP_with_xcom', yRightStanceActual, {q});
            
            expr{end+1} = SymFunction('dyaLeftStance_SLIP_with_xcom', dyLeftStanceActual, {q, dq});
            expr{end+1} = SymFunction('dyaRightStance_SLIP_with_xcom', dyRightStanceActual, {q, dq});
            
            expr{end+1} = SymFunction('J_yaLeftStance_SLIP_with_xcom', J_yLeftStanceActual, {q});
            expr{end+1} = SymFunction('J_yaRightStance_SLIP_with_xcom', J_yRightStanceActual, {q});
           
            expr{end+1} = SymFunction('J_yaLeftStance_all_SLIP_with_xcom', J_yLeftStanceActual_all, {q});
            expr{end+1} = SymFunction('J_yaRightStance_all_SLIP_with_xcom', J_yRightStanceActual_all, {q});
           
            expr{end+1} = SymFunction('Jdot_yLeftStanceActual_SLIP_with_xcom', Jdot_yLeftStanceActual, {q,dq});
            expr{end+1} = SymFunction('Jdot_yRightStanceActual_SLIP_with_xcom', Jdot_yRightStanceActual, {q, dq});
           
            expr{end+1} = SymFunction('Dya_LeftStanceActual_SLIP_with_xcom', Dya_LeftStanceActual, {q});
            expr{end+1} = SymFunction('Dya_RightStanceActual_SLIP_with_xcom', Dya_RightStanceActual, {q});
            expr{end+1} = SymFunction('DLfya_LeftStanceActual_SLIP_with_xcom', DLfya_LeftStanceActual, {q,dq});
            expr{end+1} = SymFunction('DLfya_RightStanceActual_SLIP_with_xcom', DLfya_RightStanceActual, {q,dq});
            
            % Export the files
            for i = 1:length(expr)
                export_fun(expr{i}, export_path, matlab_path);
            end
           
            % Move the files into the appropriate folder for runtime code
            src_list = dir(strcat(export_path, '/*.cc'));
            hed_list = dir(strcat(export_path, '/*.hh'));
           
            for i = 1:length(src_list)
                tardir = strcat('./gen/src/' );
                srcdir = strcat(src_list(i).folder, '/', src_list(i).name );
                if ~exist(tardir,'dir')
                    mkdir(char(tardir));
                end
                movefile(srcdir,  tardir);
            end
            for i = 1:length(hed_list)
                tardir = strcat('./gen/include/frost_expr/Joris_outputs/' );
                srcdir= strcat(hed_list(i).folder, '/', hed_list(i).name );
                if ~exist(tardir,'dir')
                    mkdir(char(tardir));
                end
                movefile(srcdir,  tardir);
            end
        end
        
    end 
    
    methods  
        function [] = exportPelvisOutputs(obj)
            module = 'kinematics';
            export_path = [obj.rpath, '/MATLAB/symbolic/+frost_expr/+', module];
            matlab_path = [obj.rpath, '/MATLAB/symbolic/+codegen/+',    module];
            if ~(exist(export_path,'dir') == 7)
                mkdir(char(export_path));
            end
            if ~(exist(matlab_path,'dir') == 7)
                mkdir(char(matlab_path));
            end
            expr = {};
            % Break out states
            q   = obj.States.x;
            dq  = obj.States.dx;
            ddq = obj.States.ddx;
            X   = SymVariable([q;dq]);
            dX  =  SymVariable([dq;ddq]);
            % Indexing
            rotorIndexing = obj.getJointIndices({...
                'LeftHipRoll', ...
                'LeftHipYaw', ...
                'LeftHipPitch', ...
                'LeftKneePitch', ...
                'LeftFootPitch', ...
                'RightHipRoll', ...
                'RightHipYaw', ...
                'RightHipPitch', ...
                'RightKneePitch', ...
                'RightFootPitch'});
            
            % PELVIS
            % Orientations replacement y(0) & y(1) 
            leftHipPos =  obj.getCartesianPosition(obj.Joints(obj.getJointIndices('LeftHipRoll')))';
            rightHipPos = obj.getCartesianPosition(obj.Joints(obj.getJointIndices('RightHipRoll')))';
            
            leftHipPos_leftFoot = leftHipPos - obj.getCartesianPosition(obj.Joints(getJointIndices(obj, 'LeftFootPitch')))';
            leftHipPos_rightFoot = leftHipPos - obj.getCartesianPosition(obj.Joints(getJointIndices(obj, 'RightFootPitch')))';
            rightHipPos_leftFoot = rightHipPos - obj.getCartesianPosition(obj.Joints(getJointIndices(obj, 'LeftFootPitch')))';
            rightHipPos_rightFoot = rightHipPos - obj.getCartesianPosition(obj.Joints(getJointIndices(obj, 'RightFootPitch')))';
            % now substitute the zero yaw and rigid model
            leftHipPos_leftFoot = leftHipPos_leftFoot.subs(q('BaseRotZ'), 0);
            leftHipPos_rightFoot = leftHipPos_rightFoot.subs(q('BaseRotZ'), 0);
            rightHipPos_leftFoot = rightHipPos_leftFoot.subs(q('BaseRotZ'), 0);
            rightHipPos_rightFoot = rightHipPos_rightFoot.subs(q('BaseRotZ'), 0);
            
            pelvisPos_leftFoot = (leftHipPos_leftFoot + rightHipPos_leftFoot)/2.0;
            pelvisPos_rightFoot = (leftHipPos_rightFoot + rightHipPos_rightFoot)/2.0;
            
            pelvisPos_leftFoot = eval_math_fun('Simplify', pelvisPos_leftFoot);
            pelvisPos_leftFoot = eval_math_fun('Chop', pelvisPos_leftFoot);
            pelvisPos_rightFoot = eval_math_fun('Simplify', pelvisPos_rightFoot);
            pelvisPos_rightFoot = eval_math_fun('Chop', pelvisPos_rightFoot);
            
            % pitch roll yaw
            deltaYaw_leftFoot = q('LeftHipYaw');
            deltaYaw_rightFoot = q('RightHipYaw');
            
            deltaRoll =  (leftHipPos(3) - rightHipPos(3))/0.27;
            deltaPitch = (-q('BasePosZ') + 0.5*leftHipPos(3) + 0.5*rightHipPos(3))/0.049;

            deltaRoll = eval_math_fun('Simplify', deltaRoll);
            deltaRoll = eval_math_fun('Chop', deltaRoll);
            deltaPitch = eval_math_fun('Simplify', deltaPitch);
            deltaPitch = eval_math_fun('Chop', deltaPitch);
            
            % put SO(3) in a vector
            pelvis_rightFoot = [deltaPitch;
                                deltaRoll;
                                deltaYaw_rightFoot;
                                pelvisPos_rightFoot];
            pelvis_leftFoot = [deltaPitch;
                               deltaRoll;
                               deltaYaw_leftFoot;
                               pelvisPos_leftFoot];
                            
            
            % rigid swing leg
            pelvis_rightFoot = pelvis_rightFoot.subs(q(obj.getJointIndices({'RightShinPitch'})), 0);
            pelvis_leftFoot = pelvis_leftFoot.subs(q(obj.getJointIndices({'LeftShinPitch'})), 0);

            % rigid stance leg 
            pelvis_rightFoot = pelvis_rightFoot.subs(q(obj.getJointIndices({'LeftShinPitch'})), 0);
            pelvis_leftFoot = pelvis_leftFoot.subs(q(obj.getJointIndices({'RightShinPitch'})), 0);

            % Create Jacobians
            J_pelvis_rightFoot  = jacobian(pelvis_rightFoot,  SymVariable(q(rotorIndexing)));
            J_pelvis_rightFoot_all  = jacobian(pelvis_rightFoot,  q);
            J_pelvis_leftFoot  = jacobian(pelvis_leftFoot,  SymVariable(q(rotorIndexing)));
            J_pelvis_leftFoot_all  = jacobian(pelvis_leftFoot,  q);
            
            % Actual
            Dya_pelvis_rightFoot  = jacobian(pelvis_rightFoot,  X);
            DLfya_pelvis_rightFoot  = jacobian(Dya_pelvis_rightFoot*dX, X);
            Dya_pelvis_leftFoot  = jacobian(pelvis_leftFoot,  X);
            DLfya_pelvis_leftFoot  = jacobian(Dya_pelvis_leftFoot*dX, X);
            
            % Output Velocity
            dypelvis_rightFoot  = jacobian(pelvis_rightFoot,  q) * dq;
            Jdot_pelvis_rightFoot = jacobian(dypelvis_rightFoot, q);
            dypelvis_leftFoot  = jacobian(pelvis_leftFoot,  q) * dq;
            Jdot_pelvis_leftFoot = jacobian(dypelvis_leftFoot, q);

            % Compile
            expr{end+1} = SymFunction('p_pelvis_RightStance', pelvis_rightFoot, {q});
            expr{end+1} = SymFunction('dp_pelvis_RightStance', dypelvis_rightFoot, {q, dq});
            expr{end+1} = SymFunction('J_pelvis_RightStance', J_pelvis_rightFoot, {q});
            expr{end+1} = SymFunction('J_pelvis_RightStance_all', J_pelvis_rightFoot_all, {q});
            expr{end+1} = SymFunction('Jdot_pelvis_RightStance', Jdot_pelvis_rightFoot, {q,dq});
            expr{end+1} = SymFunction('Dya_pelvis_RightStance', Dya_pelvis_rightFoot, {q});
            expr{end+1} = SymFunction('DLfya_pelvis_RightStance', DLfya_pelvis_rightFoot, {q,dq});

            expr{end+1} = SymFunction('p_pelvis_LeftStance', pelvis_leftFoot, {q});
            expr{end+1} = SymFunction('dp_pelvis_LeftStance', dypelvis_leftFoot, {q, dq});
            expr{end+1} = SymFunction('J_pelvis_LeftStance', J_pelvis_leftFoot, {q});
            expr{end+1} = SymFunction('J_pelvis_LeftStance_all', J_pelvis_leftFoot_all, {q});
            expr{end+1} = SymFunction('Jdot_pelvis_LeftStance', Jdot_pelvis_leftFoot, {q,dq});
            expr{end+1} = SymFunction('Dya_pelvis_LeftStance', Dya_pelvis_leftFoot, {q});
            expr{end+1} = SymFunction('DLfya_pelvis_LeftStance', DLfya_pelvis_leftFoot, {q,dq});

            
            % Export the files
            for i = 1:length(expr)
                export_fun(expr{i}, export_path, matlab_path);
            end
           
            % Move the files into the appropriate folder for runtime code
            src_list = dir(strcat(export_path, '/*.cc'));
            hed_list = dir(strcat(export_path, '/*.hh'));
           
            for i = 1:length(src_list)
                tardir = strcat('./gen/src/' );
                srcdir = strcat(src_list(i).folder, '/', src_list(i).name );
                if ~exist(tardir,'dir')
                    mkdir(char(tardir));
                end
                movefile(srcdir,  tardir);
            end
            for i = 1:length(hed_list)
                tardir = strcat('./gen/include/frost_expr/kinematics/' );
                srcdir= strcat(hed_list(i).folder, '/', hed_list(i).name );
                if ~exist(tardir,'dir')
                    mkdir(char(tardir));
                end
                movefile(srcdir,  tardir);
            end
        end
        
    end 
    
    %% Old used by Joris
    methods 
        function [] = exportWalkOutputsJorisForwardCoMVelocity(obj)
            module = 'Joris_outputs';
            export_path = [obj.rpath, '/MATLAB/symbolic/+frost_expr/+', module];
            matlab_path = [obj.rpath, '/MATLAB/symbolic/+codegen/+',    module];
            if ~(exist(export_path,'dir') == 7)
                mkdir(char(export_path));
            end
            if ~(exist(matlab_path,'dir') == 7)
                mkdir(char(matlab_path));
            end
            expr = {};
            % Break out states
            q   = obj.States.x;
            dq  = obj.States.dx;
            ddq = obj.States.ddx;
            X   = SymVariable([q;dq]);
            dX  =  SymVariable([dq;ddq]);

            % COM absolute
            com = obj.getComPosition();
            
            ya1Actual = jacobian(com(1),q)*dq; % f(q,dq)
            dya1Actual = jacobian(ya1Actual,q)*dq + jacobian(ya1Actual,dq)*ddq;
            
            ya1Actual = ya1Actual.subs(q(obj.getJointIndices({'RightShinPitch'})),0);
            ya1Actual = ya1Actual.subs(q(obj.getJointIndices({'LeftShinPitch'})),0);
            ya1Actual = ya1Actual.subs(q(obj.getJointIndices({'RightTarsusPitch'})), deg2rad(13) - q(obj.getJointIndices({'RightKneePitch'})));
            ya1Actual = ya1Actual.subs(q(obj.getJointIndices({'LeftTarsusPitch'})), deg2rad(13) - q(obj.getJointIndices({'LeftKneePitch'})));

            % Actual
            Dya_1Actual = jacobian(ya1Actual,X);
            DLFya_1Actual = jacobian(Dya_1Actual*dX,X);
            
            % Compile
            expr{end+1} = SymFunction('ya1_SLIP',ya1Actual,{q,dq});
            expr{end+1} = SymFunction('dya1_SLIP',dya1Actual,{q,dq,ddq});
            expr{end+1} = SymFunction('Dya_1Actual_SLIP',Dya_1Actual,{q,dq});
            expr{end+1} = SymFunction('DLfya_1Actual_SLIP', DLFya_1Actual, {q,dq,ddq});
           
            % Export the files
            for i = 1:length(expr)
                export_fun(expr{i}, export_path, matlab_path);
            end
           
            % Move the files into the appropriate folder for runtime code
            src_list = dir(strcat(export_path, '/*.cc'));
            hed_list = dir(strcat(export_path, '/*.hh'));
           
            for i = 1:length(src_list)
                tardir = strcat('./gen/src/' );
                srcdir = strcat(src_list(i).folder, '/', src_list(i).name );
                if ~exist(tardir,'dir')
                    mkdir(char(tardir));
                end
                movefile(srcdir,  tardir);
            end
            for i = 1:length(hed_list)
                tardir = strcat('./gen/include/frost_expr/Joris_outputs/' );
                srcdir= strcat(hed_list(i).folder, '/', hed_list(i).name );
                if ~exist(tardir,'dir')
                    mkdir(char(tardir));
                end
                movefile(srcdir,  tardir);
            end
         end     
        function [] = exportWalkOutputsJorisRelativeDegree2(obj)
            module = 'Joris_outputs';
            export_path = [obj.rpath, '/MATLAB/symbolic/+frost_expr/+', module];
            matlab_path = [obj.rpath, '/MATLAB/symbolic/+codegen/+',    module];
            if ~(exist(export_path,'dir') == 7)
                mkdir(char(export_path));
            end
            if ~(exist(matlab_path,'dir') == 7)
                mkdir(char(matlab_path));
            end
            expr = {};
            % Break out states
            q   = obj.States.x;
            dq  = obj.States.dx;
            ddq = obj.States.ddx;
            X   = SymVariable([q;dq]);
            dX  =  SymVariable([dq;ddq]);
            % Indexing
            rotorIndexing = obj.getJointIndices({...
                'LeftHipRoll', ...
                'LeftHipYaw', ...
                'LeftHipPitch', ...
                'LeftKneePitch', ...
                'LeftFootPitch', ...
                'RightHipRoll', ...
                'RightHipYaw', ...
                'RightHipPitch', ...
                'RightKneePitch', ...
                'RightFootPitch'});
            % Leg configuration as inverted pendulum
            % Toe Pitch Position
            left_tp_frame = obj.Joints(getJointIndices(obj, 'LeftFootPitch'));
            right_tp_frame = obj.Joints(getJointIndices(obj, 'RightFootPitch'));
            %%%%%%%% step size %%%%%%%%%%%%
            StepSize_leftStance = obj.getCartesianPosition(right_tp_frame)' -  obj.getCartesianPosition(left_tp_frame)';   %%% toe pitch                        
            StepLocal_leftStance = StepSize_leftStance.subs(q('BaseRotZ'), 0);
%             StepLocal_leftStance = eval_math_fun('Simplify', StepLocal_leftStance);
%             StepLocal_leftStance = eval_math_fun('Chop', StepLocal_leftStance);
            StepSagittal_leftStance = StepLocal_leftStance(1);
            StepLateral_leftStance = StepLocal_leftStance(2);
           
            StepSize_rightStance = obj.getCartesianPosition(left_tp_frame)' - obj.getCartesianPosition(right_tp_frame)';
            StepLocal_rightStance = StepSize_rightStance.subs(q('BaseRotZ'), 0);
%             StepLocal_rightStance = eval_math_fun('Simplify', StepLocal_rightStance);
%             StepLocal_rightStance = eval_math_fun('Chop', StepLocal_rightStance);
            StepSagittal_rightStance = StepLocal_rightStance(1);
            StepLateral_rightStance = StepLocal_rightStance(2);
           
            leftSwingZ =  StepLocal_rightStance(3);
            rightSwingZ = StepLocal_leftStance(3);

            % left stance COM relative to stance pivot
            com = obj.getComPosition();
            deltaLeftCOM = com - obj.getCartesianPosition(obj.Joints(getJointIndices(obj, 'LeftFootPitch')));
%             deltaLeftCOM = deltaLeftCOM.subs(q('LeftShinPitch'), 0);
%             deltaLeftCOM = deltaLeftCOM.subs(q('LeftTarsusPitch'), deg2rad(13) - q('LeftKneePitch'));

            left_COM = deltaLeftCOM(3);
        %    left_COM = eval_math_fun('Simplify', left_COM);
            left_COM = eval_math_fun('Chop', left_COM);
           
            %  right stance COM relative to stance pivot
            deltaRightCOM = com - obj.getCartesianPosition(obj.Joints(getJointIndices(obj, 'RightFootPitch')));
%             deltaRightCOM = deltaRightCOM.subs(q('RightShinPitch'), 0);
%             deltaRightCOM = deltaRightCOM.subs(q('RightTarsusPitch'), deg2rad(13) - q('RightKneePitch'));

            right_COM =  deltaRightCOM(3);
          %  right_COM = eval_math_fun('Simplify', right_COM);
            right_COM = eval_math_fun('Chop', right_COM);    

            % pelvis Orientations replacement y(0) & y(1) 
            leftHipPos =  obj.getCartesianPosition(obj.Joints(obj.getJointIndices('LeftHipRoll')))';
            rightHipPos = obj.getCartesianPosition(obj.Joints(obj.getJointIndices('RightHipRoll')))';
            deltaRoll =  (leftHipPos(3) - rightHipPos(3))/0.27;
            deltaPitch = (-q('BasePosZ') + 0.5*leftHipPos(3) + 0.5*rightHipPos(3))/0.049;

            deltaRoll = eval_math_fun('Simplify', deltaRoll);
            deltaRoll = eval_math_fun('Chop', deltaRoll);
            deltaPitch = eval_math_fun('Simplify', deltaPitch);
            deltaPitch = eval_math_fun('Chop', deltaPitch);
            %%% foot pitch replacement y(8)
            deltaLeftFoot = obj.ContactPoints.LeftHeel.computeCartesianPosition()- ...
                         obj.ContactPoints.LeftToe.computeCartesianPosition();
             
            deltaRightFoot = obj.ContactPoints.RightHeel.computeCartesianPosition()- ...
                         obj.ContactPoints.RightToe.computeCartesianPosition();
                             
            footLeftPitch = deltaLeftFoot(3)/0.14;
            footRightPitch = deltaRightFoot(3)/0.14;
           
            yLeftStanceActual = [...
                deltaRoll;
                deltaPitch;
                q('LeftHipYaw');
                left_COM;
                StepLocal_leftStance(3);
                StepLocal_leftStance(1);
                StepLocal_leftStance(2);
                q('RightHipYaw');
                footRightPitch];
           
            yRightStanceActual = [...
                deltaRoll;
                deltaPitch;
                q('RightHipYaw');
                right_COM;
                StepLocal_rightStance(3);
                StepLocal_rightStance(1);
                StepLocal_rightStance(2);
                q('LeftHipYaw');
                footLeftPitch];
            
            % Zero compliant elements
            yLeftStanceActual = yLeftStanceActual.subs(q(obj.getJointIndices({'RightShinPitch'})), 0);
            yLeftStanceActual = yLeftStanceActual.subs(q(obj.getJointIndices({'RightTarsusPitch'})), deg2rad(13) - q(obj.getJointIndices({'RightKneePitch'})));
           
            yRightStanceActual = yRightStanceActual.subs(q(obj.getJointIndices({'LeftShinPitch'})), 0);
            yRightStanceActual = yRightStanceActual.subs(q(obj.getJointIndices({'LeftTarsusPitch'})), deg2rad(13) - q(obj.getJointIndices({'LeftKneePitch'})));
           
            % try rigid on stance leg 
            yLeftStanceActual = yLeftStanceActual.subs(q(obj.getJointIndices({'LeftShinPitch'})), 0);
            yLeftStanceActual = yLeftStanceActual.subs(q(obj.getJointIndices({'LeftTarsusPitch'})), deg2rad(13) - q(obj.getJointIndices({'LeftKneePitch'})));
           
            yRightStanceActual = yRightStanceActual.subs(q(obj.getJointIndices({'RightShinPitch'})), 0);
            yRightStanceActual = yRightStanceActual.subs(q(obj.getJointIndices({'RightTarsusPitch'})), deg2rad(13) - q(obj.getJointIndices({'RightKneePitch'})));
            
            
            % Create Jacobians
            J_yLeftStanceActual  = jacobian(yLeftStanceActual,  SymVariable(q(rotorIndexing)));
            J_yRightStanceActual = jacobian(yRightStanceActual, SymVariable(q(rotorIndexing)));
            J_yLeftStanceActual_all  = jacobian(yLeftStanceActual,  q);
            J_yRightStanceActual_all = jacobian(yRightStanceActual, q);
            
            % Actual
            Dya_LeftStanceActual  = jacobian(yLeftStanceActual,  X);
            Dya_RightStanceActual = jacobian(yRightStanceActual, X);
           
            DLfya_LeftStanceActual  = jacobian(Dya_LeftStanceActual*dX, X);
            DLfya_RightStanceActual = jacobian(Dya_RightStanceActual*dX, X);
            
            % Output Velocity
            dyLeftStanceActual  = jacobian(yLeftStanceActual,  q) * dq;
            dyRightStanceActual = jacobian(yRightStanceActual, q) * dq;
           
            Jdot_yLeftStanceActual = jacobian(dyLeftStanceActual, q);
            Jdot_yRightStanceActual = jacobian(dyRightStanceActual, q);

            % Compile
            expr{end+1} = SymFunction('yaLeftStance_SLIP', yLeftStanceActual, {q});
            expr{end+1} = SymFunction('yaRightStance_SLIP', yRightStanceActual, {q});
            
            expr{end+1} = SymFunction('dyaLeftStance_SLIP', dyLeftStanceActual, {q, dq});
            expr{end+1} = SymFunction('dyaRightStance_SLIP', dyRightStanceActual, {q, dq});
            
            expr{end+1} = SymFunction('J_yaLeftStance_SLIP', J_yLeftStanceActual, {q});
            expr{end+1} = SymFunction('J_yaRightStance_SLIP', J_yRightStanceActual, {q});
           
            expr{end+1} = SymFunction('J_yaLeftStance_all_SLIP', J_yLeftStanceActual_all, {q});
            expr{end+1} = SymFunction('J_yaRightStance_all_SLIP', J_yRightStanceActual_all, {q});
           
            expr{end+1} = SymFunction('Jdot_yLeftStanceActual_SLIP', Jdot_yLeftStanceActual, {q,dq});
            expr{end+1} = SymFunction('Jdot_yRightStanceActual_SLIP', Jdot_yRightStanceActual, {q, dq});
           
            expr{end+1} = SymFunction('Dya_LeftStanceActual_SLIP', Dya_LeftStanceActual, {q});
            expr{end+1} = SymFunction('Dya_RightStanceActual_SLIP', Dya_RightStanceActual, {q});
            expr{end+1} = SymFunction('DLfya_LeftStanceActual_SLIP', DLfya_LeftStanceActual, {q,dq});
            expr{end+1} = SymFunction('DLfya_RightStanceActual_SLIP', DLfya_RightStanceActual, {q,dq});
            
            % Export the files
            for i = 1:length(expr)
                export_fun(expr{i}, export_path, matlab_path);
            end
           
            % Move the files into the appropriate folder for runtime code
            src_list = dir(strcat(export_path, '/*.cc'));
            hed_list = dir(strcat(export_path, '/*.hh'));
           
            for i = 1:length(src_list)
                tardir = strcat('./gen/src/' );
                srcdir = strcat(src_list(i).folder, '/', src_list(i).name );
                if ~exist(tardir,'dir')
                    mkdir(char(tardir));
                end
                movefile(srcdir,  tardir);
            end
            for i = 1:length(hed_list)
                tardir = strcat('./gen/include/frost_expr/Joris_outputs/' );
                srcdir= strcat(hed_list(i).folder, '/', hed_list(i).name );
                if ~exist(tardir,'dir')
                    mkdir(char(tardir));
                end
                movefile(srcdir,  tardir);
            end
        end        
    end
end
