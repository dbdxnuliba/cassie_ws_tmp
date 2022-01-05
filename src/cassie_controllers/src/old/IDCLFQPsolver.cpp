//
// Created by dm on 8/12/21.
//
#include <cassie_controllers/IDCLFQPsolver.hpp>
#include <cassie_common_toolbox/motion_transition.hpp>
#include <cassie_common_toolbox/RadioButtonMap.hpp>
#include <cassie_controllers/feedforward_controller.hpp>
#include <cassie_common_toolbox/bezier_tools.hpp>
#include <roslib_utilities/ros_package_utilities.hpp>
#include <control_utilities/limits.hpp>
#include <cassie_common_toolbox/linear_interpolation.hpp>

using namespace Eigen;
using namespace cassie_model;
using namespace control_utilities;
USING_NAMESPACE_QPOASES

void IDCLFQPsolver::Cache::init() {
    // Size all QP matrices for speeeeeed
    this->Jc.resize(4,22);
    this->dJc.resize(4,22);
    this->Js.resize(7,22);
    this->dJs.resize(7,22);
    this->Jcs.resize(11,22);
    this->dJcs.resize(11,22);
    this->A_holonomics.resize(7,40);
    this->b_holonomics.resize(7);
    this->Aeq_dynamics.resize(22, 40);
    this->beq_dynamics.resize(22);
    this->A_friction.resize(9,40);
    this->b_lb_friction.resize(9);
    this->b_ub_friction.resize(9);
    this->A_y.resize(9,40);
    this->b_y.resize(9);
    this->A_clf.resize(1,40);
    this->A_reg.resize(40,40);
    this->b_reg.resize(40);
    this->Proj.resize(22,22);


    this->qpsol.resize(40);
    this->Fdes.resize(11);
    this->u.resize(10);
    this->ddqtar.resize(22);

    this->G.resize(40,40);
    this->g.resize(40);
    this->Aconstr.resize(32,40);
    this->lbA.resize(32);
    this->ubA.resize(32);

}
void IDCLFQPsolver::Cache::reset() {
    this->Jc.setZero();
    this->dJc.setZero();
    this->Js.setZero();
    this->dJs.setZero();
    this->Jcs.setZero();
    this->dJcs.setZero();
    this->A_holonomics.setZero();
    this->b_holonomics.setZero();
    this->Aeq_dynamics.setZero();
    this->beq_dynamics.setZero();
    this->A_friction.setZero();
    this->b_lb_friction.setZero();
    this->b_ub_friction.setZero();
    this->A_y.setZero();
    this->b_y.setZero();
    this->A_clf.setZero();
    this->A_reg.setZero();
    this->A_reg << MatrixXd::Identity(40,40);
    this->b_reg.setZero();

    this->Proj.setZero();
    this->V = 0.;

    this->qpsol.setZero();
    this->ddqtar.setZero();
    this->u.setZero();
    this->Fdes.setZero();
    this->delta = 0.;

    this->G.setZero();
    this->g.setZero();
    this->Aconstr.setZero();
    this->lbA.setZero();
    this->ubA.setZero();
}
void IDCLFQPsolver::Memory::init() {
    this->u_prev.resize(10);
    this->reset();
}
void IDCLFQPsolver::Memory::reset() {
    this->iDomain = 0;
    this->qp_initialized = false;
    this->u_prev.setZero();
}
void IDCLFQPsolver::Config::init() {
    this->Kp.resize(10); this->Kp.setZero();
    this->Kd.resize(10); this->Kd.setZero();
    this->Su.resize(11,22);
    this->Sc.resize(11,22);
}
void IDCLFQPsolver::Config::reconfigure() {
    this->isSim = false;
    ros::param::get("/cassie/is_simulation", this->isSim);
    this->paramChecker.checkAndUpdate("use_qp", this->use_qp);

    this->paramChecker.checkAndUpdate("vx_offset", this->vx_offset);
    this->paramChecker.checkAndUpdate("vy_offset", this->vy_offset);

    this->paramChecker.checkAndUpdate("leg_angle_offset_center", this->leg_angle_offset_center);
    this->paramChecker.checkAndUpdate("u_stancetoe_offset", this->u_stancetoe_offset);
    this->paramChecker.checkAndUpdate("stoppable_velocity_threshold", this->stoppable_velocity_threshold);
    this->paramChecker.checkAndUpdate("use_contact_switching", this->use_contact_switching);
    this->paramChecker.checkAndUpdateYaml("kp", this->Kp);//("qp/kp", this->Kp);
    this->paramChecker.checkAndUpdateYaml("kd", this->Kd);//("qp/kd", this->Kd);
    this->paramChecker.checkAndUpdateYaml("qp/kp", this->Kpy);//("qp/kp", this->Kp);
    this->paramChecker.checkAndUpdateYaml("qp/kd", this->Kdy);//("qp/kd", this->Kd);
    this->paramChecker.checkAndUpdate("left_stance_gravity_scale", this->left_stance_gravity_scale);
    this->paramChecker.checkAndUpdate("right_stance_gravity_scale", this->right_stance_gravity_scale);


    // Precomputed CLF terms and configurable gains
    this->paramChecker.checkAndUpdate("qp/res_clf_ep", this->res_clf_ep);
    this->paramChecker.checkAndUpdate("qp/clf_gam", this->clf_gam);
    this->ny  = 10;
    this->ep  = this->res_clf_ep;
    this->gam = this->clf_gam / this->ep; // min(eig(obj.Q))/ max(eig(obj.P)) / obj.ep; // precomputed in Matlab

    // CLF terms for output dynamics
    this->F.resize(2*ny,2*ny);
    this->F.setZero();
    this->F.topRightCorner(ny,ny) = MatrixXd::Identity(ny,ny);
    this->G.resize(2*ny,ny);
    this->G.setZero();
    this->G.bottomRows(ny) = MatrixXd::Identity(ny,ny);

    // Exponential CLF and CARE solution
    this->paramChecker.checkAndUpdateYaml("qp/Pdiag", this->Pdiag);
    this->paramChecker.checkAndUpdateYaml("qp/Poffdiag", this->Poffdiag);
    this->P.resize(2*ny,2*ny); this->P.setZero();
    this->P.diagonal() << this->Pdiag;
    this->P.topRightCorner(ny,ny).diagonal() << this->Poffdiag;
    this->P.bottomLeftCorner(ny,ny).diagonal() << this->Poffdiag;

    MatrixXd Iep(2*ny,2*ny);
    Iep.setZero();
    Iep.topLeftCorner(ny,ny) << MatrixXd::Identity(ny,ny) * (1.0/this->ep);
    Iep.bottomRightCorner(ny,ny) << MatrixXd::Identity(ny,ny);
    this->P = Iep.transpose() * this->P * Iep;

    // Derivative of linear output dynamics
    this->LFV_mat = this->F.transpose() * this->P + this->P * this->F;

    // Robot torque
    this->Be.resize(22,10);
    this->Be.setZero();
    this->Be(LeftHipRoll,    0) = 1.;
    this->Be(LeftHipYaw,     1) = 1.;
    this->Be(LeftHipPitch,   2) = 1.;
    this->Be(LeftKneePitch,  3) = 1.;
    this->Be(LeftFootPitch,  4) = 1.;
    this->Be(RightHipRoll,   5) = 1.;
    this->Be(RightHipYaw,    6) = 1.;
    this->Be(RightHipPitch,  7) = 1.;
    this->Be(RightKneePitch, 8) = 1.;
    this->Be(RightFootPitch, 9) = 1.;

    // Orthogonal projection matrices
    this->Su.setZero();
    Su.block(0,11,11,11) << MatrixXd::Identity(11,11);
    this->Sc.setZero();
    Sc.block(0,0,11,11) << MatrixXd::Identity(11,11);

    // Contact conditions
    double mu = 0.6;
    //double foot_length = 0.08;
    double foot_length = 0.14;
    this->contact_pyramid.resize(9, 5);
    this->contact_pyramid << 0., 0., -1., 0., 0.,
    1., 0., -mu/sqrt(2.), 0., 0.,
    -1., 0., -mu/sqrt(2.), 0., 0.,
    0., 1., -mu/sqrt(2.), 0., 0.,
    0., -1., -mu/sqrt(2.), 0., 0.,
    0., 0., -foot_length*mu, 0., 1.,
    0., 0., -foot_length*mu, 0, -1.,
    0., 0., -foot_length*mu, 1., 0.,
    0., 0., -foot_length*mu, -1., 0.;

    // Safe torque bounds
    this->torque_bounds.resize(10);
    this->torque_bounds << 112.5, 112.5, 195.2, 195.2, 45,
    112.5, 112.5, 195.2, 195.2, 45;

    // Bounds on full qp decision variables
    this->lb.resize(40);
    this->lb << -INFTY * VectorXd::Ones(22),      // ddq
    -this->torque_bounds,    // torque
    -600., -600., 0., -400., -400., // f Foot
    -INFTY, -INFTY,                 // springs
    0;                              // qp relaxation delta
    this->ub.resize(40);
    this->ub << INFTY * VectorXd::Ones(22),       // ddq
    this->torque_bounds,     // torque
    600., 600., 1200., 400., 400.,  // f Foot
    INFTY, INFTY,                   // springs
    10000;                          // qp relaxation delta

    // Get all QP tunable parameters
    this->paramChecker.checkAndUpdateYaml("qp/reg_base_ddq", this->reg_base_ddq);
    this->paramChecker.checkAndUpdateYaml("qp/reg_stance_ddq", this->reg_stance_ddq);
    this->paramChecker.checkAndUpdateYaml("qp/reg_swing_ddq", this->reg_swing_ddq);
    this->paramChecker.checkAndUpdate("qp/nQPIter",       this->nQPIter);
    this->paramChecker.checkAndUpdateYaml("qp/reg_stance_u", this->reg_stance_u);
    this->paramChecker.checkAndUpdateYaml("qp/reg_swing_u", this->reg_swing_u);
    this->paramChecker.checkAndUpdate("qp/reg_rigid",     this->reg_rigid);
    this->paramChecker.checkAndUpdate("qp/reg_fx",        this->reg_fx);
    this->paramChecker.checkAndUpdate("qp/reg_fy",        this->reg_fy);
    this->paramChecker.checkAndUpdate("qp/reg_fz",        this->reg_fz);
    this->paramChecker.checkAndUpdate("qp/reg_muy",       this->reg_muy);
    this->paramChecker.checkAndUpdate("qp/reg_muz",       this->reg_muz);
    this->paramChecker.checkAndUpdate("qp/reg_clf_delta", this->reg_clf_delta);
    this->paramChecker.checkAndUpdate("qp/w_outputs",     this->w_outputs);

    this->paramChecker.checkAndUpdate("qp/w_hol_fixed", this->w_hol_fixed);
    this->paramChecker.checkAndUpdate("qp/w_hol_fx",    this->w_hol_fx);
    this->paramChecker.checkAndUpdate("qp/w_hol_fy",    this->w_hol_fy);
    this->paramChecker.checkAndUpdate("qp/w_hol_fz",    this->w_hol_fz);
    this->paramChecker.checkAndUpdate("qp/w_hol_my",    this->w_hol_my);
    this->paramChecker.checkAndUpdate("qp/w_hol_mz",    this->w_hol_mz);
    this->paramChecker.checkAndUpdate("qp/w_Vdot",    this->w_Vdot);

    this->paramChecker.checkAndUpdate("qp/clf_use_task_pd",    this->clf_use_task_pd);
    this->paramChecker.checkAndUpdate("qp/clf_use_inequality", this->clf_use_inequality);
    this->paramChecker.checkAndUpdate("qp/clf_use_Vdot_cost",  this->clf_use_Vdot_cost);
}

IDCLFQPsolver::IDCLFQPsolver(ros::NodeHandle &nh, cassie_model::Cassie &robot) : nh(&nh) {
    this->robot = &robot;

    // Create the QP solver
    qpsolver = new SQProblem(40, 32, HST_POSDEF); // (num vars, num constr)


    // Set QP Options
    Options options;
    options.setToMPC();
    options.enableRegularisation = BT_FALSE;//BT_FALSE;
    //options.setToDefault();
    options.printLevel = PL_LOW;//PL_MEDIUM;
    qpsolver->setOptions( options );

    // Parameter checker
    this->config.paramChecker.init(nh.getNamespace() + "/stepping");


    // All the storage
    this->cache.init();
    this->memory.init();
    this->config.init();

    this->reconfigure();
}

void IDCLFQPsolver::reset() {
    this->cache.reset();
    this->memory.reset();
}

bool IDCLFQPsolver::reconfigure() {
    std::cout << "Polling rosparams under: " << this->config.paramChecker.node.getNamespace() << std::endl;

    this->config.paramChecker.checkAndUpdate("velocity_integrator_bleed_constant", this->config.velocity_integrator_bleed_constant);
    this->config.paramChecker.checkAndUpdate("force_sp_scale", this->config.force_sp_scale);
    this->config.reconfigure();

    return true;
}

void IDCLFQPsolver::update(VectorXd &u, OUTPUT_SLIP &output) {
    // Compute controller
    if (this->config.use_qp )
        this->cache.u = this->getTorqueQP(output);
    else
        this->cache.u = this->getTorqueID(output);

    u = this->cache.u;
}

VectorXd IDCLFQPsolver::getTorqueQP(OUTPUT_SLIP &output) {
    // Output error
    VectorXd eta(18);
    eta << output.cache.ya - output.cache.yd,
           output.cache.dya - output.cache.dyd;

    // Formulate the QP
    // States are X = [ddq; u; F; delta] \in \mathbb{R}^{40}
    // Compute model dynamics
    MatrixXd Fs(22,1); Fs.setZero();
    Fs(LeftShinPitch) = -this->robot->q(LeftShinPitch) * 2300.;
    Fs(LeftHeelSpring) = -this->robot->q(LeftHeelSpring) * 2000.;
    Fs(RightShinPitch) = -this->robot->q(RightShinPitch) * 2300.; //*0.95
    Fs(RightHeelSpring) = -this->robot->q(RightHeelSpring) * 2000.;
    this->robot->dynamics.calcHandC(this->robot->model, this->robot->q, this->robot->dq);

    MatrixXd Ge(22,1); Ge.setZero();
    SymFunction::Ge_cassie_v4(Ge, this->robot->q);

    // Compute the robot constraints
    double gravScale = 0.;
    this->robot->kinematics.update(this->robot->model, this->robot->q, this->robot->dq);
    if (output.getDomain() == 0) {
        gravScale = this->config.right_stance_gravity_scale;
        this->cache.Jc << this->robot->kinematics.cache.J_achilles,
        this->robot->kinematics.cache.J_rigid.block(0,0,2,22);
        this->cache.dJc << this->robot->kinematics.cache.Jdot_achilles,
        this->robot->kinematics.cache.Jdot_rigid.block(0,0,2,22);
        this->cache.Js << this->robot->kinematics.cache.J_poseRightConstraint,
        this->robot->kinematics.cache.J_rigid.block(2,0,2,22);
        this->cache.dJs << this->robot->kinematics.cache.Jdot_poseRightConstraint,
        this->robot->kinematics.cache.Jdot_rigid.block(2,0,2,22);
    } else {
        gravScale = this->config.left_stance_gravity_scale;
        this->cache.Jc << this->robot->kinematics.cache.J_achilles,
        this->robot->kinematics.cache.J_rigid.block(2,0,2,22);
        this->cache.dJc << this->robot->kinematics.cache.Jdot_achilles,
        this->robot->kinematics.cache.Jdot_rigid.block(2,0,2,22);
        this->cache.Js << this->robot->kinematics.cache.J_poseLeftConstraint,
        this->robot->kinematics.cache.J_rigid.block(0,0,2,22);
        this->cache.dJs << this->robot->kinematics.cache.Jdot_poseLeftConstraint,
        this->robot->kinematics.cache.Jdot_rigid.block(0,0,2,22);
    }
    this->cache.Jcs  << this->cache.Jc, this->cache.Js;
    this->cache.dJcs << this->cache.dJc, this->cache.dJs;
    this->robot->dynamics.C = this->robot->dynamics.C - (1. - gravScale) * Ge;

    // Compute constrained dynamics
    this->cache.Proj = MatrixXd::Identity(22,22) - this->cache.Jc.completeOrthogonalDecomposition().solve(this->cache.Jc);
    this->cache.Aconstr.block(0,0,22,22)   << this->robot->dynamics.H + this->cache.Proj*this->robot->dynamics.H - (this->cache.Proj*this->robot->dynamics.H).transpose();
    this->cache.Aconstr.block(0,22, 22,10) << - this->cache.Proj*this->config.Be;
    this->cache.Aconstr.block(0,32, 22,7)  << - this->cache.Proj*this->cache.Js.transpose();
    this->cache.lbA.segment(0,22) = - this->cache.Proj*this->robot->dynamics.C + (- this->robot->dynamics.H * this->cache.Jc.completeOrthogonalDecomposition().solve(this->cache.dJc))*this->robot->dq;
    this->cache.ubA.segment(0,22) = this->cache.lbA.segment(0,22);

    // Friction cone
    MatrixXd PyramidFull(9,9);
    PyramidFull.setZero();
    PyramidFull.block(0,0, 9,5) << this->config.contact_pyramid;
    this->cache.Aconstr.block(22, 32, 9,5) = this->config.contact_pyramid;
    this->cache.lbA.segment(22,9).setConstant(-INFTY); // -inf
    this->cache.ubA.segment(22,9).setZero();

    // CLF Terms
    MatrixXd Y  = output.cache.Dya.block(0,0,9,22) * (MatrixXd::Identity(22,22) - this->cache.Jcs.completeOrthogonalDecomposition().solve(this->cache.Jcs));
    MatrixXd dY = output.cache.DLfya.block(0,0,9,22) + output.cache.Dya.block(0,0,9,22) * this->cache.Jcs.completeOrthogonalDecomposition().solve(this->cache.dJcs);
    this->cache.V = eta.transpose() * this->config.P * eta;
    double LFV = eta.transpose() * this->config.LFV_mat * eta;
    MatrixXd LGV(1,9);
    LGV << 2. * eta.transpose() * this->config.P * this->config.G;
    double LGVpsi1 = (LGV* (dY * this->robot->dq - Y*output.cache.ddqd)).value();

    // CLF Inequality
    this->cache.Aconstr.block(31,0,1,22) = LGV * Y;
    this->cache.Aconstr(31,39) = -1.;
    this->cache.lbA(31) = -INFTY;
    this->cache.ubA(31) = +INFTY;
    if (this->config.clf_use_inequality)
        this->cache.ubA(31) = - this->config.gam * this->cache.V - LFV - LGVpsi1;

    // Build all constraint matrices
    // Zero stance foot torque
    if (output.getDomain() == 0) {
        // Right Stance
        this->config.lb(22+10 - 1) = 0.;
        this->config.ub(22+10 - 1) = 0.;

        this->config.lb(22+5 - 1) = -this->config.torque_bounds(4);
        this->config.ub(22+5 - 1) =  this->config.torque_bounds(4);
    } else {
        // Left Stance
        this->config.lb(22+5 - 1) = 0.;
        this->config.ub(22+5 - 1) = 0.;

        this->config.lb(22+10 - 1) = -this->config.torque_bounds(9);
        this->config.ub(22+10 - 1) =  this->config.torque_bounds(9);
    }

    // Construct the cost
    // 0.5*x'*H*x + f'*x
    // Task space terms
    this->cache.b_y = Y*output.cache.ddqd - dY * this->robot->dq;
    if (config.clf_use_task_pd)
        this->cache.b_y -= (this->config.Kpy.cwiseProduct(eta.segment(0,9)) + this->config.Kdy.cwiseProduct(eta.segment(9,9)));

    // Regularization values
    VectorXd reg_ddq(22);
    if (output.getDomain() == 0)
        reg_ddq << this->config.reg_base_ddq, this->config.reg_swing_ddq, this->config.reg_stance_ddq;
    else
        reg_ddq << this->config.reg_base_ddq, this->config.reg_stance_ddq, this->config.reg_swing_ddq;

    VectorXd reg_u(10);
    if (output.getDomain() == 0) {
        // Use PD controller to add model-free feedback on floating base and swing foot
        output.cache.uff(5) +=  2.;
        reg_u << this->config.reg_swing_u, this->config.reg_stance_u;
    }
    else {
        // Use PD controller to add model-free feedback on floating base and swing foot
        output.cache.uff(0) += -2.;
        reg_u << this->config.reg_stance_u, this->config.reg_swing_u;
    }

    VectorXd reg_Fs(7);
    reg_Fs << this->config.reg_fx, this->config.reg_fy, this->config.reg_fz,
    this->config.reg_muy, this->config.reg_muz,
    this->config.reg_rigid * VectorXd::Ones(2);

    VectorXd Fd(7);
    Fd << output.cache.Fd.segment(2,5), this->cache.Js.block(5,0,2,22) * Fs;
    Fd(5) *= this->config.force_sp_scale;
    Fd(6) *= this->config.force_sp_scale;

    VectorXd w_s(7);
    w_s << this->config.w_hol_fx, this->config.w_hol_fy, this->config.w_hol_fz,
    this->config.w_hol_my, this->config.w_hol_mz,
    this->config.w_hol_fixed * VectorXd::Ones(2);

    // Build the final QP formulation
    // Pow the regularization weights
    for (int i=0; i<reg_ddq.size(); i++)
        reg_ddq(i) = pow(reg_ddq(i),2);
    for (int i=0; i<reg_u.size(); i++)
        reg_u(i) = pow(reg_u(i),2);
    for (int i=0; i<reg_Fs.size(); i++)
        reg_Fs(i) = pow(reg_Fs(i),2);

    // Compute the upper left corner for the accelerations
    MatrixXd Gddq_block(22,22);
    Gddq_block = (Y.transpose() * Y) * pow(this->config.w_outputs,2) +
            ( this->cache.Js.transpose() * w_s.asDiagonal() ) * ( this->cache.Js.transpose() * w_s.asDiagonal() ).transpose() +
            MatrixXd::Identity(22,22) * reg_ddq.asDiagonal();
    this->cache.G.block(0,0,22,22) = Gddq_block;
    for (int i=0; i<10; i++)
        this->cache.G(22+i,22+i) = reg_u(i);
    for (int i=0; i<7; i++)
        this->cache.G(32+i,32+i) = reg_Fs(i);
    this->cache.G(39,39) = pow(this->config.reg_clf_delta,2);

    // Compute linear terms in cost
    this->cache.g.setZero();
    this->cache.g << - pow(this->config.w_outputs,2) * Y.transpose() * this->cache.b_y
    + ( this->cache.Js.transpose() * w_s.asDiagonal() ) * ( (this->cache.dJs * this->robot->dq).transpose() * w_s.asDiagonal() ).transpose()
    - reg_ddq.cwiseProduct(output.cache.ddqd),
    - reg_u.cwiseProduct(output.cache.uff),
    - reg_Fs.cwiseProduct(Fd),
    0.0;

    // Add the Lyapunov gradient if flagged
    if (this->config.clf_use_Vdot_cost)
        this->cache.g.segment(0,22) += this->config.w_Vdot * (LGV * Y).transpose();

    // Flatten matrices in row-major format.
    Map<VectorXd> Gflat(this->cache.G.data(), this->cache.G.size());
    //Map<VectorXd> Gflat(G.data(), G.size());
    Map<VectorXd> AConstrFlat(this->cache.Aconstr.data(), this->cache.Aconstr.size());

    // Run the QP
    qpOASES::returnValue success = RET_QP_NOT_SOLVED;
    int_t nWSR = this->config.nQPIter;
    if (this->memory.qp_initialized) {
        success = this->qpsolver->hotstart(static_cast<real_t*>(Gflat.data()), static_cast<real_t*>(this->cache.g.data()),
                                           static_cast<real_t*>(AConstrFlat.data()),
                                           static_cast<real_t*>(this->config.lb.data()), static_cast<real_t*>(this->config.ub.data()),
                                           static_cast<real_t*>(this->cache.lbA.data()),static_cast<real_t*>(this->cache.ubA.data()),
                                           nWSR );
    } else {
        success = this->qpsolver->init(static_cast<real_t*>(Gflat.data()), static_cast<real_t*>(this->cache.g.data()),
                                       static_cast<real_t*>(AConstrFlat.data()),
                                       static_cast<real_t*>(this->config.lb.data()), static_cast<real_t*>(this->config.ub.data()),
                                       static_cast<real_t*>(this->cache.lbA.data()),static_cast<real_t*>(this->cache.ubA.data()),
                                       nWSR );
        this->memory.qp_initialized = true;
    }

    // Get solution
    this->cache.qpsol.setZero();
    this->qpsolver->getPrimalSolution(static_cast<real_t*>(this->cache.qpsol.data()));
    if (success != SUCCESSFUL_RETURN) {
        ROS_WARN("THE QP DID NOT CONVERGE!");
        this->qpsolver->reset();
        this->memory.qp_initialized = false;
        this->memory.u_prev.setZero();
    } else {
        this->memory.u_prev << this->cache.qpsol.segment(22,10);
        this->cache.u << this->cache.qpsol.segment(22,10);
    }

    this->cache.ddqtar << this->cache.qpsol.segment(0,22);
    this->cache.Fdes << this->cache.Jc.transpose().completeOrthogonalDecomposition().solve((MatrixXd::Identity(22,22) - this->cache.Proj)*this->robot->dynamics.H*this->cache.ddqtar + this->robot->dynamics.C - this->config.Be * this->memory.u_prev),
    this->cache.qpsol.segment(32,7);
    this->cache.delta = this->cache.qpsol(39);

    // Add a small model-free swing toe feedback portion since the friction is so large it does not track well
    if (output.getDomain() == 0)
        this->cache.u(4) += 50. * (output.cache.ya(8) - output.cache.yd(8)) + 2. * (output.cache.dya(8) - output.cache.dyd(8));
    else
        this->cache.u(9) += 50. * (output.cache.ya(8) - output.cache.yd(8)) + 2. * (output.cache.dya(8) - output.cache.dyd(8));

    // Return
    return this->cache.u;
}

VectorXd IDCLFQPsolver::getTorqueID(OUTPUT_HZD &output) {
    // https://journals.sagepub.com/doi/pdf/10.1177/0278364910388677
    // Learning, planning, and control for quadruped locomotion over challenging terrain
    // Controller based on ^^
    MatrixXd J(9,10);
    if (output.getDomain() == 0) {
        SymFunction::J_yaRightStance(J, this->robot->q);
    } else {
        SymFunction::J_yaLeftStance(J, this->robot->q);
    }

    // Get output PD tracking torques
    this->cache.u = - J.completeOrthogonalDecomposition().solve(this->config.Kp.cwiseProduct(output.cache.ya - output.cache.yd) + this->config.Kd.cwiseProduct(output.cache.dya - output.cache.dyd));

    // Compute model dynamics
    MatrixXd Ge(22,1); Ge.setZero();
    SymFunction::Ge_cassie_v4(Ge, this->robot->q);
    this->robot->dynamics.calcHandC(this->robot->model, this->robot->q, this->robot->dq);

    // Compute the robot constraints
    MatrixXd Jc(11,22);
    double gravScale = 0.;
    if (output.getDomain() == 0) {
        gravScale = this->config.right_stance_gravity_scale;

        Jc << this->robot->kinematics.cache.J_achilles,
        this->robot->kinematics.cache.J_poseRightConstraint,
        this->robot->kinematics.cache.J_rigid;
    } else {
        gravScale = this->config.left_stance_gravity_scale;

        Jc << this->robot->kinematics.cache.J_achilles,
        this->robot->kinematics.cache.J_poseLeftConstraint,
        this->robot->kinematics.cache.J_rigid;
    }
    this->robot->dynamics.C = this->robot->dynamics.C - (1. - gravScale) * Ge;

    // Compute feedforward
    // https://journals.sagepub.com/doi/pdf/10.1177/0278364913519834
    // https://journals.sagepub.com/doi/pdf/10.1177/0278364910388677
    // https://ieeexplore.ieee.org/stamp/stamp.jsp?arnumber=5509646
    // Selection matrices for constrained/unconstrained
    // QR decomposition
    HouseholderQR<MatrixXd> qr(Jc.transpose());
    MatrixXd Q, RO, R; Q.setZero(); R.setZero();
    RO = qr.matrixQR().triangularView<Upper>();
    Q = qr.householderQ();
    R = RO.block(0,0,11,11);

    // Feedforward
    VectorXd H(22);
    H = this->robot->dynamics.H*(output.cache.ddqd) + this->robot->dynamics.C;
    output.cache.uff = (this->config.Su*Q.transpose()*this->config.Be).completeOrthogonalDecomposition().solve(this->config.Su) * Q.transpose() * H;
    this->cache.u += output.cache.uff;

    // Compute GRF and force control
    VectorXd forces(11);
    forces = R.inverse() * this->config.Sc * Q.transpose() * (H - this->config.Be*this->cache.u);
    this->cache.Fdes << forces;

    // Store the resulting grf
    this->cache.Fdes.setZero();
    this->cache.Fdes.segment(0,2) = forces.segment(0,2); // Pushrods
    this->cache.Fdes.segment(7,4) = forces.segment(7,4); // Pseudo-fixed springs
    if (output.getDomain() == 0) {
        this->cache.Fdes.segment(2,5) = forces.segment(2,5); // Left foot
    } else {
        this->cache.Fdes.segment(2,5) = forces.segment(2,5); // Right foot
    }

    // Cap saggital moment on foot from torque
    double moment_scale = 1.0;
    double foot_length = 0.14;
    double pitch_constr = moment_scale * forces(4) * foot_length / 2;
    if (output.getDomain() == 0) {
        this->cache.u(9) += this->config.u_stancetoe_offset*50.;
        if (this->cache.u(9) > pitch_constr)
            this->cache.u(9) = pitch_constr;
        if (this->cache.u(9) < -pitch_constr)
            this->cache.u(9) = -pitch_constr;
    } else {
        this->cache.u(4) += this->config.u_stancetoe_offset*50.;
        if (this->cache.u(4) > pitch_constr)
            this->cache.u(4) = pitch_constr;
        if (this->cache.u(4) < -pitch_constr)
            this->cache.u(4) = -pitch_constr;
    }

    // Return
    return this->cache.u;
}

void IDCLFQPsolver::getDebug(VectorXf &dbg) {
    double tsec = static_cast<double>(ros::Time::now().sec);
    double tnsec = 1e-9 * static_cast<double>(ros::Time::now().nsec);
    // Move zero to closer time rather than 1970 so it fits in a float
    // Still bad practice to put time in floats, but this is just for logging
    if ( !this->config.isSim )
        tsec -= 1.6074545e9;

    // Use floats for logging size and speed 23
    dbg <<
        static_cast<float>(this->cache.V),     // 1
        this->cache.u.cast <float> (),         // 10
        this->cache.Fdes.cast <float> (),      // 11
        static_cast<float>(this->cache.delta); // 1

}