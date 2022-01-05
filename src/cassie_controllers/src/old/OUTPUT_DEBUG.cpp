/**
 given radio input (user command) and output_option (either Xiaobin's (0) or Jenna's (1) option)
 filter radio input as needed
 compute output
*/

#include <cassie_controllers/walking_onedomain.hpp>
#include <cassie_controllers/OUTPUT_DEBUG.hpp>
#include <cassie_common_toolbox/motion_transition.hpp>
#include <cassie_common_toolbox/RadioButtonMap.hpp>
#include <cassie_controllers/feedforward_controller.hpp>
#include <cassie_common_toolbox/bezier_tools.hpp>
#include <roslib_utilities/ros_package_utilities.hpp>
#include <control_utilities/limits.hpp>
#include <cassie_common_toolbox/linear_interpolation.hpp>

#include <cassie_controllers/splines_debug.hpp>
#include <cassie_controllers/splines_nominal_debug.hpp>
#include <cassie_controllers/splines_downstep.hpp>

USING_NAMESPACE_QPOASES
using namespace control_utilities;

void OUTPUT_DEBUG::Cache::init(Config *config) {

    this->ya.resize(config->outputsize);
    this->dya.resize(config->outputsize);
    this->Dya.resize(config->outputsize, 44);
    this->DLfya.resize(config->outputsize, 44);

    this->yd.resize(config->outputsize);
    this->dyd.resize(config->outputsize);
    this->d2yd.resize(config->outputsize);

    this->grfd.resize(2);

    this->ddqd.resize(22);
    this->uff.resize(10);
    this->pd.resize(2);
    this->vd.resize(2);
    this->Fd.resize(7);

    int N = config->MPC_N;
    this->G.resize(3 * N + 2, 3 * N + 2);
    this->g.resize(3 * N + 2);
    this->Aconstr.resize(2 * N, 3 * N + 2);
    this->lbA.resize(2 * N);
    this->ubA.resize(2 * N);
    this->mpcsol.resize(3*N+2);

    // Initialize matrices
    this->reset();
}

void OUTPUT_DEBUG::Cache::reset() {
    this->ya.setZero();
    this->dya.setZero();
    this->Dya.setZero();
    this->DLfya.setZero();

    this->yd.setZero();
    this->dyd.setZero();
    this->d2yd.setZero();

    this->grfd.setZero();

    this->ddqd.setZero();
    this->uff.setZero();
    this->pd.setZero();
    this->vd.setZero();
    this->Fd.setZero();

    this->udes = 0;
    this->Ly = 0;
    this->Lx = 0;
    this->xcLIP = 0;
    this->z0LIP = 0;
    this->zcLIP = 0;
    this->dxcLIP = 0;
    this->dzcLIP = 0;
    this->dz0LIP = 0;

    this->xcLIP_minus = 0;
    this->Ly_minus = 0;
    this->z0_minus = 0;

    this->justimpacted = false;
    this->isDSP = false;

    this->Enow = 0;

    this->G.setZero();
    this->g.setZero();
    this->Aconstr.setZero();
    this->lbA.setZero();
    this->ubA.setZero();
    this->mpcsol.setZero();

    // human SLIP related
    this->xcom = 0.0;
    this->vcom = 0.0;
    this->xcom_norm = 0.0;
    this->xcom_foot = 0.0;
    this->support_phase = 1;

    this->time = 0.0;
    this->time_norm = 0.0;

    // Downstep
    this->zsw = 0.0;
    this->isDownstep = false;
    this->downstepStep = 0;
}

void OUTPUT_DEBUG::Memory::init() {
    this->reset();
}

void OUTPUT_DEBUG::Memory::reset() {
    this->timer.restart();
    this->timer2.restart();

    this->iDomain = 1;
    this->iDomainlast = 0;
    this->phaseCnt = 1;
    this->ithstep = 0;
    this->isInitialized = false;

    this->readyToStop = false;
    this->queueStop = false;

    this->qp_initialized = false;
}

void OUTPUT_DEBUG::Param::init() {
    this->alpha0.resize(9);
    this->dalpha0.resize(9);
    this->alphaf.resize(9);
    this->reset();
}

void OUTPUT_DEBUG::Param::reset() {
    this->Ts = .5;
    this->ldes = .5;
    this->hdes = 0;
    this->x_pivot = 0;
    this->z_pivot = 0;
    this->ldesnext = this->ldes;
    this->hdesnext = this->hdes;
    this->hdesprev = 0;
    this->alpha0.setZero();
    this->dalpha0.setZero();
    this->alphaf.setZero();
}

void OUTPUT_DEBUG::Config::init() {
    int N = MPC_N;
    this->lb.resize(3 * N + 2);
    this->ub.resize(3 * N + 2);
    this->lb << -INFTY * VectorXd::Ones(3 * N + 2);
    this->ub << INFTY * VectorXd::Ones(3 * N + 2);
    this->lb.segment(2 * N + 2, N) << -9.81 * VectorXd::Ones(N);
//    this->lb.segment(2 * N + 2, N) << 40 * VectorXd::Ones(N);
}

void OUTPUT_DEBUG::Config::reconfigure() {
    this->isSim = false;
    this->useHLIP = false;
    ros::param::get("/cassie/is_simulation", this->isSim);
    this->paramChecker.checkAndUpdate("useHLIP", this->useHLIP);
    this->paramChecker.checkAndUpdate("nDomain", this->nDomain);
    this->paramChecker.checkAndUpdate("time_scale", this->time_scale);
    this->paramChecker.checkAndUpdate("vx_offset", this->vx_offset);
    this->paramChecker.checkAndUpdate("vy_offset", this->vy_offset);

    this->paramChecker.checkAndUpdate("stoppable_velocity_threshold", this->stoppable_velocity_threshold);

    this->paramChecker.checkAndUpdateYaml("bh", this->bh);
    this->paramChecker.checkAndUpdate("z0des", this->z0des);
    this->paramChecker.checkAndUpdate("zsw_max", this->zsw_max);
    this->paramChecker.checkAndUpdate("zsw_neg", this->zsw_neg);
    this->paramChecker.checkAndUpdate("MPC_N", this->MPC_N);
    this->paramChecker.checkAndUpdate("xratio", this->xratio);
    this->paramChecker.checkAndUpdate("Edes", this->Edes);
    this->paramChecker.checkAndUpdateYaml("stonex", this->stonex);
    this->paramChecker.checkAndUpdateYaml("stonez", this->stonez);
    this->paramChecker.checkAndUpdate("wdes", this->wdes);

    this->paramChecker.checkAndUpdate("HLIP_Ts", this->HLIP_Ts);
    this->paramChecker.checkAndUpdate("HLIP_vxd", this->HLIP_vxd);
    this->paramChecker.checkAndUpdate("HLIP_vyd", this->HLIP_vyd);
    this->paramChecker.checkAndUpdate("HLIP_udes", this->HLIP_udes);

    this->paramChecker.checkAndUpdate("Edes_gamma_in", this->Edes_gamma_in);
    this->paramChecker.checkAndUpdate("Edes_gamma_out", this->Edes_gamma_out);
    this->paramChecker.checkAndUpdate("Edes_eps", this->Edes_eps);

    if (this->control_mode == 0){
        // standing
        this->paramChecker.checkAndUpdate("nom_stand_height", this->nom_stand_height);
        this->paramChecker.checkAndUpdate("stand_radio_ratio", this->stand_radio_ratio);
    }
}

OUTPUT_DEBUG::OUTPUT_DEBUG(ros::NodeHandle &nh, cassie_model::Cassie &robot, int control_mode) : nh(&nh), tarsusSolver(robot) {
    this->robot = &robot;

    this->config.control_mode = control_mode;

    if (this->config.control_mode == 1) {
        // walking
        this->config.outputsize = 9;
        // this->config.outputsize = 10;
        //    this->config.holsize = 12;
        //    this->config.qsize = 22;
        //    this->config.usize = 10;
    } else if(this->config.control_mode == 0){
        // standing
        this->config.outputsize = 6;
    } else if(this->config.control_mode == -1){
        // in the air
        this->config.outputsize = 10;
    } else {
        ROS_ERROR("INVALID CONTROL MODE");
    }

    // Parameter checker
    this->config.paramChecker.init(nh.getNamespace() + "/HLIP");

    // All the storage
    this->reconfigure();
    this->cache.init(&this->config);
    this->memory.init();
    this->config.init();
    this->param.init();

    this->splines.createDebugSplines();
    this->splines.createNominalSplines();
    this->splines.createDownstepSplines();

    //create MPC solver
    mpcsolver = new SQProblem(3 * this->config.MPC_N + 2, 2 * this->config.MPC_N,
                              HST_SEMIDEF); // (num vars, num constr)

    // Set QP Options
    Options options;
    //    options.setToMPC();
        options.enableRegularisation = BT_FALSE;//BT_FALSE;
    options.setToDefault();
    options.printLevel = PL_LOW;//PL_MEDIUM;
    mpcsolver->setOptions(options);

}

void OUTPUT_DEBUG::reset() {
    this->cache.reset();
    this->memory.reset();

    this->lpVaX.reset();
    this->lpVaY.reset();

    this->tarsusSolver.reset();
}

bool OUTPUT_DEBUG::reconfigure() {
    std::cout << "Polling rosparams under: " << this->config.paramChecker.node.getNamespace() << std::endl;

    this->config.reconfigure();

    return true;
}

void OUTPUT_DEBUG::update(VectorXd &radio) {
    MatrixXd com_absolute(3,1);
    SymFunction::p_com_absolute(com_absolute,this->robot->q);
    this->cache.xcom = com_absolute(1);

    MatrixXd com_rightstance(3,1), com_leftstance(3,1);
    MatrixXd Jcom_rightstance(3,22), Jcom_leftstance(3,22);
    MatrixXd dJcom_rightstance(3,22), dJcom_leftstance(3,22);
    SymFunction::p_com_RightStance(com_rightstance,this->robot->q);
    SymFunction::p_com_LeftStance(com_leftstance,this->robot->q);
    SymFunction::J_com_RightStance(Jcom_rightstance,this->robot->q);
    SymFunction::J_com_LeftStance(Jcom_leftstance,this->robot->q);
    SymFunction::Jdot_com_RightStance(dJcom_rightstance,this->robot->q,this->robot->dq);
    SymFunction::Jdot_com_LeftStance(dJcom_leftstance,this->robot->q,this->robot->dq);

    MatrixXd sw_leftfoot(3,1), sw_rightfoot(3,1);
    SymFunction::position_leftFoot(sw_leftfoot,this->robot->q);
    SymFunction::position_rightFoot(sw_rightfoot,this->robot->q);

    double xcom_ = 0, vcom_ = 0, acom_ = 0;
    double zsw_ = 0;
    switch (this->memory.iDomain){
        case 0 :
            xcom_ = com_rightstance(0);
            vcom_ = (Jcom_rightstance*this->robot->dq)(0);
            acom_ = (dJcom_rightstance*this->robot->dq + 
                        Jcom_rightstance*this->robot->ddq)(0);
            zsw_  = sw_leftfoot(2) - sw_rightfoot(2);
            break;
        case 1 :
            xcom_ = com_leftstance(0);
            vcom_ = (Jcom_leftstance*this->robot->dq)(0);
            acom_ = (dJcom_leftstance*this->robot->dq + 
                        Jcom_leftstance*this->robot->ddq)(0);
            zsw_  = sw_rightfoot(2) - sw_leftfoot(2);
            break;
        case 2 :
            switch (this->memory.iDomainlast){
                case 0 :
                    xcom_ = com_rightstance(0);
                    vcom_ = (Jcom_rightstance*this->robot->dq)(0);
                    acom_ = (dJcom_rightstance*this->robot->dq + 
                                Jcom_rightstance*this->robot->ddq)(0);
                    zsw_  = sw_leftfoot(2) - sw_rightfoot(2);
                    break;
                case 1 :
                    xcom_ = com_leftstance(0);
                    vcom_ = (Jcom_leftstance*this->robot->dq)(0);
                    acom_ = (dJcom_leftstance*this->robot->dq + 
                                Jcom_leftstance*this->robot->ddq)(0);
                    zsw_  = sw_rightfoot(2) - sw_leftfoot(2);
                    break;
            }
    }
    std::cout << "zsw: " << zsw_ << std::endl;
    this->cache.xcom_debug = xcom_;
    this->cache.dxcom_debug = vcom_;
    this->cache.ddxcom_debug = acom_;

    this->cache.xcom_foot = xcom_;

    ////////////////////////
    // Xcom normalization //
    ////////////////////////
    double min, max;
    min = -0.14;
    max = 0.16;

    // And the normalize
    if (xcom_ <= min){
        xcom_ = min;
    } else if (xcom_ >= max){
        xcom_ = max;
    }
    this->cache.xcom_norm = (xcom_ - min)/(max-min);
    this->cache.vcom_norm = vcom_;
    this->cache.acom_norm = acom_;
    // std::cout << "xcom_norm: " << this->cache.xcom_norm << std::endl;

    ////////////////////////
    // Downstep detection //
    ////////////////////////
    if (this->config.control_mode == 1){
        if (zsw_ < -0.02 && ~this->cache.isDownstep){
            this->cache.downstepLeg = this->memory.iDomain;
            this->cache.isDownstep = true;
            this->cache.downstepStep = 1;
        }
        // Back-to-normal detection
        if (zsw_ > 0.01 && this->cache.isDownstep && this->cache.downstepLeg==this->memory.iDomain){
            this->cache.isDownstep = false;
            this->cache.downstepStep = 0;
        }
        std::cout << "isDownstep: " << this->cache.isDownstep << std::endl;
    }

    ///////////////////
    // Control modes //
    ///////////////////
    if (this->config.control_mode == 1){ //walking
        if (this->cache.time_norm >= 1.0){
            std::cout << "WE'RE SWITCHING!!!" << std::endl;
            this->memory.timer2.restart();
        }
        // normalize time
        if (this->memory.phaseCnt == 1){
            min = this->splines.debugSplines.DSP1_timeMin;
            max = this->splines.debugSplines.DSP1_timeMax;
        } else if (this->memory.phaseCnt == 2){
            min = this->splines.debugSplines.DSP2_timeMin;
            max = this->splines.debugSplines.DSP2_timeMax;
        } else {
            min = this->splines.debugSplines.DSP4_timeMin;
            max = this->splines.debugSplines.DSP4_timeMax;
        } 
        double time_ = this->memory.timer2.elapsed();
        this->cache.time = time_;
        if (time_ <= min){
            time_ = min;
        } else if (time_ >= max){
            time_ = max;
        }
        // std::cout << "time: " << time_ << std::endl;
        // std::cout << "time_norm: " << this->cache.time_norm << std::endl;

        this->cache.time_norm = (time_ - min)/(max-min);
        this->cache.dtime_norm = 0.001;

        /*
        //    // update contact with this->robot->leftContact && this->robot->rightContact
        //    if (this->robot->leftContact > this->robot->rightContact){
        //        this->memory.iDomain = 1;
        //    }else if (this->robot->leftContact < this->robot->rightContact ){
        //        this->memory.iDomain = 0;
        //    } else{
        //        this->memory.iDomain = this->memory.iDomainlast;
        //    }
        //
        //    if(this->memory.iDomain != this->memory.iDomainlast){
        //        this->cache.justimpacted = true;
        //    }else{
        //        this->cache.justimpacted = false;
        //    }

        //    this->memory.iDomainlast = this->memory.iDomain;
        */

        //try add DSP (bound is from ground reaction force)
        if (this->robot->leftContact > 5 && this->robot->rightContact > 5) {
            this->cache.isDSP = true;
        } else {
            this->cache.isDSP = false;
        }

        // Compute the phase and average velocity
        /*this->robot->dq(BasePosX) += this->config.vx_offset;

        if (this->memory.iDomain == 0) {
            this->robot->dq(BasePosY) += this->config.vy_offset;
        } else {
            this->robot->dq(BasePosY) -= this->config.vy_offset;
        }
        */
        if (this->cache.justimpacted || this->memory.ithstep == 0) {
            this->computeActual_HLIP(this->cache.ya, this->cache.dya, this->cache.Dya, this->cache.DLfya);
            //after compute actual
            this->param.alpha0 = this->cache.ya;
            this->param.dalpha0 = this->cache.dya;
            //get stance foot position
            this->update_LIP_xz0(this->cache.xcLIP, this->cache.ycLIP, this->cache.z0LIP, this->cache.zcLIP,
                                 this->cache.dxcLIP, this->cache.dycLIP, this->cache.dzcLIP, this->cache.dz0LIP);
            this->update_Lx(this->cache.Lx,this->cache.Ly);

            if (this->memory.ithstep < this->config.stonex.size()-2 ) {
                this->param.ldes = this->config.stonex(this->memory.ithstep+1) - this->config.stonex(this->memory.ithstep) ;
                this->param.hdes = this->config.stonez(this->memory.ithstep + 1) - this->config.stonez(this->memory.ithstep);
                this->param.ldesnext =
                        this->config.stonex(this->memory.ithstep + 2) - this->config.stonex(this->memory.ithstep + 1);
                this->param.hdesnext =
                        this->config.stonez(this->memory.ithstep + 2) - this->config.stonez(this->memory.ithstep + 1);
                if (this->memory.ithstep > 0){
                    this->param.hdesprev = this->config.stonez(this->memory.ithstep) - this->config.stonez(this->memory.ithstep-1);
                }

            } else {
                this->param.ldes = .3;
                this->param.hdes = 0;
                this->param.ldesnext = .3;
                this->param.hdesnext = 0;
                this->param.hdesprev = 0;
            }

            this->param.xratio = this->config.xratio;
            this->param.Edes = this->config.Edes;
            this->param.wdes = this->config.wdes;

            if (!this->config.useHLIP){
                //stepping stone
                if (this->memory.ithstep < 2){
                    this->param.Edes = .3;
                    this->param.wdes = .4;
                    this->param.xratio = this->config.xratio;
                    this->param.Ts = this->config.HLIP_Ts;
                } else {
                    if (this->param.ldesnext >= 0.6){
                        this->param.Edes = 0.9;
                        this->param.wdes = .4;
                    }else{
                        this->param.Edes = this->config.Edes;
                        this->param.wdes = this->config.wdes;
                    }
                }
                this->solve_Ts(this->param.Ts);
                if (this->memory.ithstep <2) {
                    this->param.Ts = 0.3;
                }
                std::cout << "Ts: " << this->param.Ts << std::endl;
            } else {
                // HLIP stepping
                this->param.wdes = this->config.wdes;
                this->param.Ts = .4; //for HLIP stepping
                //        VectorXd TsList(30); TsList.setZero();
                //        TsList << .4, .3, .5 , .4, .3, .4, .3, .4, .5, .3,.4, .3, .5 , .4, .3, .4, .3, .4, .5, .3,.4, .3, .5 , .4, .3, .4, .3, .4, .5, .3;
                //        this->param.Ts = TsList(this->memory.ithstep);
            }

            //get desired preimpact posture -> alphaf
            //zcom_f = z0des + xcom_f*hdes/ldes
            double tmp = this->config.xratio * this->param.hdes + this->param.hdesnext/this->param.ldesnext*(this->config.xratio -1.0)*this->param.ldes + this->param.hdes;
            //        this->param.alphaf << 0, 0, 0, this->config.z0des + this->config.xratio * this->param.hdes, this->param.hdes, this->param.ldes, 0, 0, 0;
            this->param.alphaf << 0, 0, 0, this->config.z0des + tmp/2.0, this->param.hdes, this->param.ldes, 0, 0, 0;
            this->config.paramChecker.checkAndUpdate("HLIP_vxd", this->config.HLIP_vxd);
            this->config.paramChecker.checkAndUpdate("HLIP_vyd", this->config.HLIP_vyd);

            //reconfigure phase
            Vector2d PhaseRange;
            PhaseRange << 0, this->param.Ts;
            phase.reconfigure(PhaseRange, this->config.time_scale);

            //if just impact, update parameters
            this->memory.ithstep += 1;

            // Motion transition on a first loop
            this->memory.timer.restart();
        } else {
            //update parameters needed for actual and desired output
            this->update_LIP_xz0(this->cache.xcLIP, this->cache.ycLIP, this->cache.z0LIP, this->cache.zcLIP,
                                 this->cache.dxcLIP, this->cache.dycLIP, this->cache.dzcLIP, this->cache.dz0LIP);
            // this->update_Ly(this->cache.Ly);
            this->update_Lx(this->cache.Lx,this->cache.Ly);
        }

        if (abs(this->param.hdes) > 0.01 || abs(this->param.hdesprev) > 0.01 ){
            double tmp = std::max(this->param.hdes, this->param.hdesprev);
            this->config.zsw_max = 0.1 + std::max(tmp,0.0);
        }else{
            this->config.zsw_max = 0.1;
        }

        this->phase.update(this->memory.timer.elapsed() * this->config.time_scale);

        this->update_preimpact_estimation(this->phase.pActual,this->param.Ts);

        // Pull the radio outputs for movement
        bool requestTransition = (radio(SB) < 1.0);

        // Get the outputs and update kinematics
        this->robot->kinematics.update(this->robot->model, this->robot->q, this->robot->dq);
        this->computeActual_HLIP(this->cache.ya, this->cache.dya, this->cache.Dya, this->cache.DLfya);
        this->computeDesired_SLIP(this->cache.yd, this->cache.dyd, this->cache.d2yd);


        // Update guard
        this->computeGuard();

        this->cache.uff.setZero();
        this->cache.Fd.setZero();
        this->cache.ddqd.setZero();

        this->cache.stepW_log = 0;
        this->cache.stepW_log = this->cache.udes;
        this->cache.dstepW_log = 0;
        this->cache.dstepW_log = this->cache.d2yd(zCOM);
    }
    //standing
    else if (this->config.control_mode == 0) {

        if (!this->memory.isInitialized) {
            this->memory.timer.restart();
            this->memory.timer2.restart();
            this->memory.isInitialized = true;
            this->computeActual_standing(this->cache.ya, this->cache.dya, this->cache.Dya, this->cache.DLfya);
            this->config.yaw_ref = this->cache.ya(5);
        }
        this->computeActual_standing(this->cache.ya, this->cache.dya, this->cache.Dya, this->cache.DLfya);
        this->computeDesired_standing(this->cache.yd, this->cache.dyd, this->cache.d2yd, radio);
    }
    // in air
    else if (this->config.control_mode == -1) {
        if (!this->memory.isInitialized) {
            this->memory.timer.restart();
            this->memory.timer2.restart();
            this->memory.isInitialized = true;
        }
        this->computeActual_inair(this->cache.ya, this->cache.dya, this->cache.Dya, this->cache.DLfya);
        this->computeDesired_inair(this->cache.yd, this->cache.dyd, this->cache.d2yd);
    }
}

//time-based domain switching
void OUTPUT_DEBUG::computeGuard() {
    // Check if we are stoppable
    //    bool stoppable = ((fabs(this->memory.velocityAllocator(0)) + fabs(this->memory.velocityAllocator(1))) / this->memory.nVelocitySamplesThisStep < this->config.stoppable_velocity_threshold);
    bool guard = (this->phase.tau >= 1.0);

    //    if (this->memory.iDomain == 0) {
    //        if (this->phase.tau >= 0.75)
    //            guard = guard || ((this->robot->leftContact > 0.25) && this->config.use_contact_switching);
    //    } else {
    //        if (this->phase.tau >= 0.75)
    //            guard = guard || ((this->robot->rightContact > 0.25) && this->config.use_contact_switching);
    //    }

    // If guard was triggered, handle domain switch
//        this->memory.readyToStop = false;
    if (guard) {
        //        if (this->memory.queueStop)
        //todo add stopable
        this->memory.readyToStop = true;
        this->memory.phaseCnt++;

        // Increment
        this->nextDomain();
    } else {
        this->cache.justimpacted = false;
    }
}

void OUTPUT_DEBUG::nextDomain() {
    // Increment the domain indexing
    this->memory.iDomain += 1;
    if (this->memory.iDomain >= this->config.nDomain){
        this->memory.iDomain = 0;   
    }
//    this->memory.timer.restart();
    this->cache.justimpacted = true;

    if (this->cache.isDownstep){
        this->cache.downstepStep += 1;
    }
}

// get actual and desired output function
void OUTPUT_DEBUG::computeActual_HLIP(VectorXd &ya, VectorXd &dya, MatrixXd &Dya, MatrixXd &DLfya) {
    if (this->config.outputsize == 9){
        if (this->memory.iDomain == 0) {
        VectorWrap ya_(ya), dya_(dya);
        SymFunction::yaRightStance_new(ya_, this->robot->q);
        SymFunction::dyaRightStance_new(dya_, this->robot->q, this->robot->dq);
        SymFunction::Dya_RightStanceActual_new(Dya, this->robot->q);
        SymFunction::DLfya_RightStanceActual_new(DLfya, this->robot->q, this->robot->dq);
        } else {
            VectorWrap ya_(ya), dya_(dya);
            SymFunction::yaLeftStance_new(ya_, this->robot->q);
            SymFunction::dyaLeftStance_new(dya_, this->robot->q, this->robot->dq);
            SymFunction::Dya_LeftStanceActual_new(Dya, this->robot->q);
            SymFunction::DLfya_LeftStanceActual_new(DLfya, this->robot->q, this->robot->dq);
        }
    } else {
        if (this->memory.iDomain == 0) {
        VectorWrap ya_(ya), dya_(dya);
        SymFunction::yaRightStance_SLIP_with_xcom(ya_, this->robot->q);
        SymFunction::dyaRightStance_SLIP_with_xcom(dya_, this->robot->q, this->robot->dq);
        SymFunction::Dya_RightStanceActual_SLIP_with_xcom(Dya, this->robot->q);
        SymFunction::DLfya_RightStanceActual_SLIP_with_xcom(DLfya, this->robot->q, this->robot->dq);
        } else {
            VectorWrap ya_(ya), dya_(dya);
            SymFunction::yaLeftStance_SLIP_with_xcom(ya_, this->robot->q);
            SymFunction::dyaLeftStance_SLIP_with_xcom(dya_, this->robot->q, this->robot->dq);
            SymFunction::Dya_LeftStanceActual_SLIP_with_xcom(Dya, this->robot->q);
            SymFunction::DLfya_LeftStanceActual_SLIP_with_xcom(DLfya, this->robot->q, this->robot->dq);
        }
    }
}

void OUTPUT_DEBUG::computeDesired_HLIP(VectorXd &yd, VectorXd &dyd, VectorXd &d2yd) {
    // if (this->config.useHLIP ){
    this->get_steppingstone_swx_traj_steppinginplace(yd(SwingStepx), dyd(SwingStepx), d2yd(SwingStepx));
    this->get_steppingstone_comz_traj(yd(zCOM),dyd(zCOM),d2yd(zCOM));
    // } else{
    //     this->get_steppingstone_swx_traj(yd(SwingStepx), dyd(SwingStepx), d2yd(SwingStepx));
    //     //update pre-impact dzcom: udes
    //     this->update_dzcomf(this->phase.pActual, this->cache.udes);
    //     std::cout << "udes: " << this->cache.udes << std::endl;
    //     //update MPC ddzcom -> d2yd
    //     this->get_z_traj(d2yd);

    //     this->cache.yd(zCOM) = this->cache.ya(zCOM);
    //     this->cache.dyd(zCOM) = this->cache.dya(zCOM);
    // }
    this->get_steppingstone_swy_traj(yd(SwingStepy), dyd(SwingStepy), d2yd(SwingStepy));
    this->get_steppingstone_swz_traj(yd(SwingStepz), dyd(SwingStepz), d2yd(SwingStepz));

    yd.segment(0, 3).setZero();
    dyd.segment(0, 3).setZero();
    d2yd.segment(0, 3).setZero();
    yd.segment(7, 2).setZero();
    dyd.segment(7, 2).setZero();
    d2yd.segment(7, 2).setZero();

    this->update_turning_yaw(yd, dyd, d2yd);

    if (this->memory.ithstep<=2){
        this->get_steppingstone_comz_traj(yd(zCOM),dyd(zCOM),d2yd(zCOM));
    }
}


void OUTPUT_DEBUG::computeDesired_SLIP(VectorXd &yd, VectorXd &dyd, VectorXd &d2yd){
    this->get_steppingstone_swx_traj_steppinginplace(yd(SwingStepx), dyd(SwingStepx), d2yd(SwingStepx));
    // this->get_SLIP_swx_traj(yd(SwingStepx), dyd(SwingStepx), d2yd(SwingStepx));

    // this->get_steppingstone_comz_traj(yd(zCOM),dyd(zCOM),d2yd(zCOM));
    this->get_SLIP_comz_traj(yd(zCOM),dyd(zCOM),d2yd(zCOM));

    this->get_steppingstone_swy_traj(yd(SwingStepy), dyd(SwingStepy), d2yd(SwingStepy));

    this->get_steppingstone_swz_traj(yd(SwingStepz), dyd(SwingStepz), d2yd(SwingStepz));
    // this->get_SLIP_swz_traj(yd(SwingStepz), dyd(SwingStepz), d2yd(SwingStepz));

    if (this->config.outputsize == 10){
        this->get_SLIP_comx_traj(yd(xCOM),dyd(xCOM),d2yd(xCOM));
    }

    yd.segment(0, 3).setZero();
    dyd.segment(0, 3).setZero();
    d2yd.segment(0, 3).setZero();
    yd.segment(7, 2).setZero();
    dyd.segment(7, 2).setZero();
    d2yd.segment(7, 2).setZero();

    this->update_turning_yaw(yd, dyd, d2yd);

    if (this->memory.ithstep<=2){
        this->get_steppingstone_comz_traj(yd(zCOM),dyd(zCOM),d2yd(zCOM));
    }
}

void OUTPUT_DEBUG::get_SLIP_comx_traj(double &ydcomx, double &dydcomx, double &d2ydcomx){
    double x0, x1, x2;
    if (this->memory.phaseCnt == 1){
        x0 = this->splines.debugSplines.DSP1_xcom.evaluate(this->cache.time_norm,0);
        x1 = this->splines.debugSplines.DSP1_dxcom.evaluate(this->cache.time_norm,0);
        x2 = this->splines.debugSplines.DSP1_ddxcom.evaluate(this->cache.time_norm,0);
    } else if (this->memory.phaseCnt == 2){
        x0 = this->splines.debugSplines.DSP2_xcom.evaluate(this->cache.time_norm,0);
        x1 = this->splines.debugSplines.DSP2_dxcom.evaluate(this->cache.time_norm,0);
        x2 = this->splines.debugSplines.DSP2_ddxcom.evaluate(this->cache.time_norm,0);
    } else if (this->memory.phaseCnt == 3){
        x0 = this->splines.debugSplines.DSP3_xcom.evaluate(this->cache.time_norm,0);
        x1 = this->splines.debugSplines.DSP3_dxcom.evaluate(this->cache.time_norm,0);
        x2 = this->splines.debugSplines.DSP3_ddxcom.evaluate(this->cache.time_norm,0);
    } else {
        x0 = this->splines.debugSplines.DSP4_xcom.evaluate(this->cache.time_norm,0);
        x1 = this->splines.debugSplines.DSP4_dxcom.evaluate(this->cache.time_norm,0);
        x2 = this->splines.debugSplines.DSP4_ddxcom.evaluate(this->cache.time_norm,0);
    }
    ydcomx = x0;
    dydcomx = x1;
    d2ydcomx = x2;
}

void OUTPUT_DEBUG::get_SLIP_comz_traj(double &ydcomz, double &dydcomz, double &d2ydcomz){
    double x0, x1, x2;
    if (this->memory.phaseCnt == 1){
        x0 = this->splines.debugSplines.DSP1_zcom.evaluate(this->cache.time_norm,0);
        x1 = this->splines.debugSplines.DSP1_dzcom.evaluate(this->cache.time_norm,0);
        x2 = this->splines.debugSplines.DSP1_ddzcom.evaluate(this->cache.time_norm,0);
    } else if (this->memory.phaseCnt == 2){
        x0 = this->splines.debugSplines.DSP2_zcom.evaluate(this->cache.time_norm,0);
        x1 = this->splines.debugSplines.DSP2_dzcom.evaluate(this->cache.time_norm,0);
        x2 = this->splines.debugSplines.DSP2_ddzcom.evaluate(this->cache.time_norm,0);
    } else if (this->memory.phaseCnt == 3){
        x0 = this->splines.debugSplines.DSP3_zcom.evaluate(this->cache.time_norm,0);
        x1 = this->splines.debugSplines.DSP3_dzcom.evaluate(this->cache.time_norm,0);
        x2 = this->splines.debugSplines.DSP3_ddzcom.evaluate(this->cache.time_norm,0);
    } else {
        // x0 = this->splines.debugSplines.DSP4_zcom.evaluate(this->cache.time_norm,0);
        // x1 = this->splines.debugSplines.DSP4_dzcom.evaluate(this->cache.time_norm,0);
        // x2 = this->splines.debugSplines.DSP4_ddzcom.evaluate(this->cache.time_norm,0);
        if (this->cache.downstepStep == 1){
            x0 = this->splines.downstepSplines.zcom_step1.evaluate(this->cache.time_norm,0);
            x1 = this->splines.downstepSplines.dzcom_step1.evaluate(this->cache.time_norm,0);
            x2 = this->splines.downstepSplines.ddzcom_step1.evaluate(this->cache.time_norm,0);
        } else if (this->cache.downstepStep == 1) {
            x0 = this->splines.downstepSplines.zcom_step2.evaluate(this->cache.time_norm,0);
            x1 = this->splines.downstepSplines.dzcom_step2.evaluate(this->cache.time_norm,0);
            x2 = this->splines.downstepSplines.ddzcom_step2.evaluate(this->cache.time_norm,0);
        } else {
            x0 = this->splines.nominalSplines.zcom.evaluate(this->cache.time_norm,0);
            x1 = this->splines.nominalSplines.dzcom.evaluate(this->cache.time_norm,0);
            x2 = this->splines.nominalSplines.ddzcom.evaluate(this->cache.time_norm,0);
        }
    }
    ydcomz = x0;
    dydcomz = x1;
    d2ydcomz = x2;
}

void OUTPUT_DEBUG::get_SLIP_swx_traj(double &ydswx, double &dydswx, double &d2ydswx){
    double x0, x1, x2;
    if (this->memory.phaseCnt == 1){
        x0 = this->splines.debugSplines.DSP1_xsw.evaluate(this->cache.time_norm,0);
        x1 = this->splines.debugSplines.DSP1_dxsw.evaluate(this->cache.time_norm,0);
        x2 = this->splines.debugSplines.DSP1_ddxsw.evaluate(this->cache.time_norm,0);
    } else if (this->memory.phaseCnt == 2){
        x0 = this->splines.debugSplines.DSP2_xsw.evaluate(this->cache.time_norm,0);
        x1 = this->splines.debugSplines.DSP2_dxsw.evaluate(this->cache.time_norm,0);
        x2 = this->splines.debugSplines.DSP2_ddxsw.evaluate(this->cache.time_norm,0);
    } else if (this->memory.phaseCnt == 3){
        x0 = this->splines.debugSplines.DSP3_xsw.evaluate(this->cache.time_norm,0);
        x1 = this->splines.debugSplines.DSP3_dxsw.evaluate(this->cache.time_norm,0);
        x2 = this->splines.debugSplines.DSP3_ddxsw.evaluate(this->cache.time_norm,0);
    } else {
        x0 = this->splines.debugSplines.DSP4_xsw.evaluate(this->cache.time_norm,0);
        x1 = this->splines.debugSplines.DSP4_dxsw.evaluate(this->cache.time_norm,0);
        x2 = this->splines.debugSplines.DSP4_ddxsw.evaluate(this->cache.time_norm,0);
    }
    ydswx = x0;
    dydswx = x1;
    d2ydswx = x2;
}

void OUTPUT_DEBUG::get_SLIP_swz_traj(double &ydswz, double &dydswz, double &d2ydswz){
    double x0, x1, x2;
    if (this->memory.phaseCnt == 1){
        x0 = this->splines.debugSplines.DSP1_zsw.evaluate(this->cache.time_norm,0);
        x1 = this->splines.debugSplines.DSP1_dzsw.evaluate(this->cache.time_norm,0);
        x2 = this->splines.debugSplines.DSP1_ddzsw.evaluate(this->cache.time_norm,0);
    } else if (this->memory.phaseCnt == 2){
        x0 = this->splines.debugSplines.DSP2_zsw.evaluate(this->cache.time_norm,0);
        x1 = this->splines.debugSplines.DSP2_dzsw.evaluate(this->cache.time_norm,0);
        x2 = this->splines.debugSplines.DSP2_ddzsw.evaluate(this->cache.time_norm,0);
    } else if (this->memory.phaseCnt == 3){
        x0 = this->splines.debugSplines.DSP3_zsw.evaluate(this->cache.time_norm,0);
        x1 = this->splines.debugSplines.DSP3_dzsw.evaluate(this->cache.time_norm,0);
        x2 = this->splines.debugSplines.DSP3_ddzsw.evaluate(this->cache.time_norm,0);
    } else {
        x0 = this->splines.debugSplines.DSP4_zsw.evaluate(this->cache.time_norm,0);
        x1 = this->splines.debugSplines.DSP4_dzsw.evaluate(this->cache.time_norm,0);
        x2 = this->splines.debugSplines.DSP4_ddzsw.evaluate(this->cache.time_norm,0);
    }
    ydswz = x0;
    dydswz = x1;
    d2ydswz = x2;
}


void OUTPUT_DEBUG::computeActual_inair(VectorXd &ya, VectorXd &dya, MatrixXd &Dya, MatrixXd &DLfya) {
    MatrixXd ytmp(5, 1);
    MatrixXd Jtmp(5, 22);
    MatrixXd dJtmp(5, 22);
    ytmp.setZero();
    Jtmp.setZero();
    dJtmp.setZero();
    Dya.setZero();
    DLfya.setZero();

    SymFunction::p_leftSole_constraint(ytmp, this->robot->q);
    SymFunction::J_leftSole_constraint(Jtmp, this->robot->q);
    SymFunction::Jdot_leftSole_constraint(dJtmp, this->robot->q, this->robot->dq);

    ya.segment(0, 5) << ytmp;
    Dya.block(0, 0, 5, 22) << Jtmp;
    dya.segment(0, 5) << Jtmp * this->robot->dq;
    DLfya.block(0, 0, 5, 22) << dJtmp;

    SymFunction::p_rightSole_constraint(ytmp, this->robot->q);
    SymFunction::J_rightSole_constraint(Jtmp, this->robot->q);
    SymFunction::Jdot_rightSole_constraint(dJtmp, this->robot->q, this->robot->dq);
    ya.segment(5, 5) << ytmp;
    Dya.block(5, 0, 5, 22) << Jtmp;
    dya.segment(5, 5) << Jtmp * this->robot->dq;
    DLfya.block(5, 0, 5, 22) << dJtmp;

}

void OUTPUT_DEBUG::computeDesired_inair(VectorXd &yd, VectorXd &dyd, VectorXd &d2yd) {
    yd.setZero();
    dyd.setZero();
    d2yd.setZero();
    double time = ros::Time::now().toSec();
//    double time = this->memory.timer.elapsed();
//    std::cout << "time: " <<time<< std::endl;

    yd(0) = .1 + cos(time) / 10;
    yd(5) = .1 - cos(time) / 10;
    yd(1) = .2 + cos(time) / 10;
    yd(6) = -.2 + cos(time) / 10;
    yd(2) = -.9 + cos(time) / 10;
    yd(7) = -.9 + sin(time) / 10;

    dyd(0) = -sin(time) / 10;
    dyd(5) = sin(time) / 10;
    dyd(1) = -sin(time) / 10;
    dyd(6) = -sin(time) / 10;
    dyd(2) = -sin(time) / 10;
    dyd(7) = cos(time) / 10;

    d2yd(0) = -cos(time) / 10;
    d2yd(5) = cos(time) / 10;
    d2yd(1) = -cos(time) / 10;
    d2yd(6) = -cos(time) / 10;
    d2yd(2) = -cos(time) / 10;
    d2yd(7) = -sin(time) / 10;


}

void OUTPUT_DEBUG::computeActual_standing(VectorXd &ya, VectorXd &dya, MatrixXd &Dya, MatrixXd &DLfya) {
    //output:
    //size = 6
    //COM x,y,z position relative to mid-point of two stance pivot & pelvis roll, pitch, yaw

    VectorWrap ya_(ya), dya_(dya);
    SymFunction::yaStandCOM_new(ya_, this->robot->q);
    SymFunction::dyaStandCOM_new(dya_, this->robot->q, this->robot->dq);
    SymFunction::Dya_standCOM_new(Dya, this->robot->q);
    SymFunction::DLfya_standCOM_new(DLfya, this->robot->q, this->robot->dq);

}

void OUTPUT_DEBUG::computeDesired_standing(VectorXd &yd, VectorXd &dyd, VectorXd &d2yd, VectorXd &radio) {
    yd.setZero();
    dyd.setZero();
    d2yd.setZero();
    double time = ros::Time::now().toSec();
    //    double time = this->memory.timer.elapsed();
//    std::cout << "time: " << time << std::endl;

//    //left: x y z pitch yaw right: x y z pitch yaw
//    yd(2) = .73;

    yd(2) = this->config.nom_stand_height + this->config.stand_radio_ratio*radio(RadioButtonMap::LS) ;
    yd(5) = this->config.yaw_ref;
}


// void OUTPUT_DEBUG::get_z_traj(VectorXd &d2yd) {
//     double time2impact = this->param.Ts - this->phase.pActual;
//     double dt_des;
//     double zcoeff = 100000000;
//     ros::param::get("/cassie/locomotion_control/dt", dt_des);
//     //    ros::param::get("/cassie/locomotion_control/zcoeff", zcoeff);
//     int N = this->config.MPC_N;

//     std::cout << "time2impact" << time2impact << std::endl;
//     if (time2impact < N * dt_des) {
// //        N = floor(time2impact / dt_des);
// //        this->cache.G.resize(3 * N + 2, 3 * N + 2);
// //        this->cache.g.resize(3 * N + 2);
// //        this->cache.Aconstr.resize(2 * N, 3 * N + 2);
// //        this->cache.lbA.resize(2 * N);
// //        this->cache.ubA.resize(2 * N);
// //
// //        this->config.lb.resize(3 * N + 2);
// //        this->config.ub.resize(3 * N + 2);
// //        this->config.lb << -INFTY * VectorXd::Ones(3 * N + 2);
// //        this->config.ub << INFTY * VectorXd::Ones(3 * N + 2);
// //        this->config.lb.segment(2 * N + 2, N) << -10 * VectorXd::Ones(N);
// //
// //        //create MPC solver
// //        mpcsolver = new SQProblem(3 * this->config.MPC_N + 2, 2 * this->config.MPC_N,
// //                                  HST_SEMIDEF); // (num vars, num constr)
// //        // Set QP Options
// //        Options options;
// //        options.setToMPC();
// //        options.enableRegularisation = BT_FALSE;//BT_FALSE;
// //        //options.setToDefault();
// //        options.printLevel = PL_LOW;//PL_MEDIUM;
// //        mpcsolver->setOptions(options);

//       d2yd(zCOM) = (this->cache.udes - this->cache.dzcLIP) / time2impact;
// //        d2yd(zCOM) = (this->cache.udes - this->cache.dya(zCOM)) / time2impact;
//     }else{


//     double dt = time2impact / N;

//     //zoh for double integrator
//     MatrixXd Ad(2, 2);
//     VectorXd Bd(2);
//     Ad << 1, dt,
//             0, 1;
//     Bd << pow(dt, 2) / 2,
//             dt;
//     Vector2d z0, zN;
//     z0 << this->cache.zcLIP, this->cache.dzcLIP;
// //    z0 << this->cache.ya(zCOM), this->cache.dya(zCOM);
//     zN << this->param.alphaf(zCOM), this->cache.udes;
//     if (time2impact >  this->param.Ts/2 ) {
// //        zN(1) = 0;
//         zN(1) = this->cache.dzc_minus;
//     }

//     //X = [z0; z1; ... zN; u0; u1; ... uN-1]

//     double zref;
//     /*
// //old: have 15s+ walking
//     for (int i = 0; i < N; i++) {
//         //dynamics constriants: zN+1 = Ad*zN + Bd*uN
//         this->cache.Aconstr.block(2 * i, 2 * i, 2, 2) = -Ad;
//         this->cache.Aconstr.block(2 * i, 2 * i + 2, 2, 2) = MatrixXd::Identity(2, 2);
//         this->cache.Aconstr.block(2 * i, 2 * N + 2 + i, 2, 1) = -Bd;
//         //Cost: sum(k = from 0 to N) k*u(K)'u(k) + zcoeff*(zpos(k)-zref(k))*(zpos(k)-zref(k)) + zvel(k)*zvel(k);
//         zcoeff = 10000 * pow(10,i+1);
//         this->cache.G(2 * i, 2 * i) = zcoeff;
//         this->cache.G(2 * i + 1, 2 * i + 1) = 1;
//         this->cache.G(2 * N + 2 + i, 2 * N + 2 + i) = i + 1;
//         zref = z0(0) + (zN(0) - z0(0)) * (i + 1) / (N + 1);
//         this->cache.g(2 * i) = -zref * zcoeff;
//     }
//      */

//     for (int i = 0; i < N; i++) {
//         //dynamics constriants: zN+1 = Ad*zN + Bd*uN
//         this->cache.Aconstr.block(2 * i, 2 * i, 2, 2) = -Ad;
//         this->cache.Aconstr.block(2 * i, 2 * i + 2, 2, 2) = MatrixXd::Identity(2, 2);
//         this->cache.Aconstr.block(2 * i, 2 * N + 2 + i, 2, 1) = -Bd;
//         //Cost: sum(k = from 0 to N) k*u(K)'u(k) + zcoeff*(zpos(k)-zref(k))*(zpos(k)-zref(k)) + zvel(k)*zvel(k);
//         this->cache.G(2 * i + 1, 2 * i + 1) = 1;
//         this->cache.G(2 * N + 2 + i, 2 * N + 2 + i) = i + 1;
//     }

//     for (int i = 0; i < N+1; i++) {
//         zcoeff =  pow(50,i+1);
//         this->cache.G(2 * i, 2 * i) = zcoeff;
//         zref = z0(0) + (zN(0) - z0(0)) * (i ) / (N );
//         this->cache.g(2 * i) = -zref * zcoeff;
//     }

//     //z0&dzN constraint
//     this->config.lb.segment(0, 2) = z0;
//     this->config.ub.segment(0, 2) = z0;


//     this->config.lb(2 * N + 1) = zN(1);
//     this->config.ub(2 * N + 1) = zN(1);
//     // Flatten matrices in row-major format.
//     Map<VectorXd> Gflat(this->cache.G.data(), this->cache.G.size());
//     Map<VectorXd> AConstrFlat(this->cache.Aconstr.data(), this->cache.Aconstr.size());


//     int_t nWSR = 100;
//     qpOASES::returnValue success = RET_QP_NOT_SOLVED;
//     if (this->memory.qp_initialized) {
//         success = this->mpcsolver->hotstart(static_cast<real_t *>(Gflat.data()),
//                                             static_cast<real_t *>(this->cache.g.data()),
//                                             static_cast<real_t *>(AConstrFlat.data()),
//                                             static_cast<real_t *>(this->config.lb.data()),
//                                             static_cast<real_t *>(this->config.ub.data()),
//                                             static_cast<real_t *>(this->cache.lbA.data()),
//                                             static_cast<real_t *>(this->cache.ubA.data()),
//                                             nWSR);
//     } else {
//         success = this->mpcsolver->init(static_cast<real_t *>(Gflat.data()),
//                                         static_cast<real_t *>(this->cache.g.data()),
//                                         static_cast<real_t *>(AConstrFlat.data()),
//                                         static_cast<real_t *>(this->config.lb.data()),
//                                         static_cast<real_t *>(this->config.ub.data()),
//                                         static_cast<real_t *>(this->cache.lbA.data()),
//                                         static_cast<real_t *>(this->cache.ubA.data()),
//                                         nWSR);
//         this->memory.qp_initialized = true;
//     }

//     // Get solution
//     VectorXd sol(3 * N + 2);
//     sol.setZero();
//     this->mpcsolver->getPrimalSolution(static_cast<real_t *>(sol.data()));
//     this->cache.mpcsol = sol;
//     std::cout << "MPCsolution" << sol << std::endl;
//     if (success != SUCCESSFUL_RETURN) {
//         ROS_WARN("THE QP DID NOT CONVERGE!");
//         this->mpcsolver->reset();
//         this->memory.qp_initialized = false;
//         d2yd(zCOM) = (this->cache.udes - z0(1)) / time2impact;
//     } else {
//         d2yd(zCOM) = sol(2 * N + 2);
//     }

//     std::cout << "MPC solved d2yd is: " << d2yd(zCOM) << std::endl;
//     }
// }

void OUTPUT_DEBUG::get_steppingstone_swx_traj(double &ydswx, double &dydswx, double &d2ydswx) {
    double bht, dbht, d2bht;
    bht = bezier_tools::bezier(this->config.bh, this->phase.tau);
    dbht = bezier_tools::dbezier(this->config.bh, this->phase.tau) * this->phase.dtau;
    d2bht = bezier_tools::d2bezier(this->config.bh, this->phase.tau) * pow(this->phase.dtau, 2);

    ydswx = (1-bht)*this->param.alpha0(SwingStepx) + bht* this->param.alphaf(SwingStepx);
    dydswx = (dbht)* (this->param.alphaf(SwingStepx)-this->param.alpha0(SwingStepx));
    d2ydswx = (d2bht)* (this->param.alphaf(SwingStepx)-this->param.alpha0(SwingStepx));

}

void OUTPUT_DEBUG::get_steppingstone_swy_traj(double &ydswy, double &dydswy, double &d2ydswy) {
    double z0 = this->cache.z0LIP;

    double lambda = sqrt(this->config.g / z0);
    double sigma2 = lambda * tanh(this->param.Ts / 2 * lambda);
    Vector2d Ydes;
    if (this->memory.iDomain == 1) { //left stance
        Ydes << -this->param.wdes / 2., -sigma2 * this->param.wdes / 2.;
    } else {
        Ydes << this->param.wdes / 2., sigma2 * this->param.wdes / 2.;
    }
    double ycLIPminus, Lxminus;

    this->update_preimpact_yL(this->phase.pActual, this->param.Ts, ycLIPminus, Lxminus);

    Vector2d Y, dY;
    Y << this->cache.ycLIP, this->cache.dycLIP;
    dY << this->cache.dycLIP, this->config.g / this->cache.z0LIP * this->cache.ycLIP;

//    Y << ycLIPminus, -Lxminus/this->cache.z0LIP;
//    dY << -Lxminus/this->cache.z0LIP, this->config.g/this->cache.z0LIP*ycLIPminus;

//    // try velocity prediction
//    Y << ycLIPminus, -Lxminus ;
//    dY << -Lxminus, this->config.g/this->cache.z0LIP*ycLIPminus;

    Vector2d K;
    K << 1, (cosh(this->param.Ts * lambda) / sinh(this->param.Ts * lambda)) / lambda;

    double stepW = K.dot(Y - Ydes) + 2 * Ydes(0);
    double dstepW = K.dot(dY);

    if (this->memory.iDomain ==0){
        stepW = clamp(stepW,0.06,0.6);
    } else{
        stepW = clamp(stepW, -0.6, -0.06);
    }

//    stepW = 2*Ydes(0);
//    dstepW = 0;

    double bht, dbht, d2bht;
    bht = bezier_tools::bezier(this->config.bh, this->phase.tau);
    dbht = bezier_tools::dbezier(this->config.bh, this->phase.tau);
    d2bht = bezier_tools::d2bezier(this->config.bh, this->phase.tau);
    dbht = dbht * this->phase.dtau;
    d2bht = d2bht * pow(this->phase.dtau, 2);

    ydswy = (1 - bht) * this->param.alpha0(SwingStepy) + bht * stepW;
    dydswy = -dbht * this->param.alpha0(SwingStepy) + dbht * stepW + bht * dstepW;
    d2ydswy = -d2bht * this->param.alpha0(SwingStepy) + d2bht * stepW + dbht * dstepW +
              dbht * dstepW;// + bht*this->config.g/this->cache.z0LIP*this->cache.ycLIP;

}

void OUTPUT_DEBUG::get_steppingstone_swz_traj(double &ydswz, double &dydswz, double &d2ydswz) {
//    VectorXd bv(10);
//    bv << this->param.alpha0(SwingStepz), 0, this->config.zsw_max, this->config.zsw_max, this->config.zsw_max, this->config.zsw_max, this->config.zsw_max, 0, this->param.alphaf(SwingStepz)+this->config.zsw_neg, this->param.alphaf(SwingStepz)+this->config.zsw_neg;
    VectorXd bv(5);
    bv << this->param.alpha0(SwingStepz), this->config.zsw_max, this->config.zsw_max, this->config.zsw_max,
            this->param.alphaf(SwingStepz) + this->config.zsw_neg;

    ydswz = bezier_tools::bezier(bv, this->phase.tau);
    dydswz = bezier_tools::dbezier(bv, this->phase.tau) * this->phase.dtau;
    d2ydswz = bezier_tools::d2bezier(bv, this->phase.tau) * pow(this->phase.dtau, 2);
}

// for HLIP stepping in place debug
void OUTPUT_DEBUG::get_steppingstone_swx_traj_steppinginplace(double &ydswx, double &dydswx, double &d2ydswx) {
    double lambda = sqrt(this->config.g / this->cache.z0LIP);
    // double sigma2 = lambda * tanh(this->param.Ts / 2 * lambda);
    double sigma1 = lambda * (cosh(this->param.Ts * lambda/2) / sinh(this->param.Ts * lambda/2));


    Vector2d Xdes;
    Xdes << this->config.HLIP_vxd/sigma1, this->config.HLIP_vxd;
    Vector2d X;
    Vector2d dX;
    X << this->cache.xcLIP, this->cache.dxcLIP;
    dX << this->cache.dxcLIP, this->config.g / this->cache.z0LIP * this->cache.xcLIP;


    // Vector2d Y;
    // Vector2d dY;
    // Y << this->cache.xcLIP, this->cache.dxcLIP;
    // dY << this->cache.dxcLIP, this->config.g / this->cache.z0LIP * this->cache.xcLIP;

    //    double xcLIPminus,Lyminus;
    //    this->update_preimpact_xL(this->phase.pActual, this->param.Ts,xcLIPminus,Lyminus);
    //    Y << xcLIPminus, -Lyminus/this->cache.z0LIP;
    //    dY << -Lyminus/this->cache.z0LIP, this->config.g/this->cache.z0LIP*xcLIPminus;


    // Vector2d K;
    // K << 1, (cosh(this->param.Ts * lambda) / sinh(this->param.Ts * lambda)) / lambda;
    // double stepW = K.dot(Y);
    // double dstepW = K.dot(dY);
    Vector2d K;
    K << 1, (cosh(this->param.Ts * lambda) / sinh(this->param.Ts * lambda)) / lambda;
    double stepL = K.dot(X - Xdes) + 2 * Xdes(0);
    double dstepL = K.dot(dX);

    //    stepW = 2*Ydes(0);
    //    dstepW = 0;

    // double bht, dbht, d2bht;
    // bht = bezier_tools::bezier(this->config.bh, this->phase.tau);
    // dbht = bezier_tools::dbezier(this->config.bh, this->phase.tau);
    // d2bht = bezier_tools::d2bezier(this->config.bh, this->phase.tau);
    // dbht = dbht * this->phase.dtau;
    // d2bht = d2bht * pow(this->phase.dtau, 2);

    // ydswx = (1 - bht) * this->param.alpha0(SwingStepx) + bht * stepW;
    // dydswx = -dbht * this->param.alpha0(SwingStepx) + dbht * stepW + bht * dstepW;
    // d2ydswx = -d2bht * this->param.alpha0(SwingStepx) + d2bht * stepW + dbht * dstepW + dbht * dstepW;

    double bht, dbht, d2bht;
    bht = bezier_tools::bezier(this->config.bh, this->phase.tau);
    dbht = bezier_tools::dbezier(this->config.bh, this->phase.tau);
    d2bht = bezier_tools::d2bezier(this->config.bh, this->phase.tau);
    dbht = dbht * this->phase.dtau;
    d2bht = d2bht * pow(this->phase.dtau, 2);

    ydswx = (1 - bht) * this->param.alpha0(SwingStepx) + bht * stepL;
    dydswx = -dbht * this->param.alpha0(SwingStepx) + dbht * stepL + bht * dstepL;
    d2ydswx = -d2bht * this->param.alpha0(SwingStepx) + d2bht * stepL + dbht * dstepL + dbht * dstepL;
}

void OUTPUT_DEBUG::get_steppingstone_comz_traj(double &ydswz, double &dydswz, double &d2ydswz) {
    double bht, dbht, d2bht;
    bht = bezier_tools::bezier(this->config.bh, this->phase.tau);
    dbht = bezier_tools::dbezier(this->config.bh, this->phase.tau);
    d2bht = bezier_tools::d2bezier(this->config.bh, this->phase.tau);
    dbht = dbht * this->phase.dtau;
    d2bht = d2bht * pow(this->phase.dtau, 2);

    ydswz = (1 - bht) * this->param.alpha0(zCOM) + bht * this->param.alphaf(zCOM);
    dydswz = (dbht) * (this->param.alphaf(zCOM) - this->param.alpha0(zCOM));
    d2ydswz = (d2bht) * (this->param.alphaf(zCOM) - this->param.alpha0(zCOM));
//    d2ydswz= 0;
//    ydswz = (1-bht)*this->param.alpha0(zCOM) + bht* this->param.alphaf(zCOM);
//    dydswz = (dbht)* (this->param.alphaf(zCOM)-this->param.alpha0(zCOM)) - (1-bht)*this->param.dalpha0(zCOM);
//    d2ydswz = (d2bht)* (this->param.alphaf(zCOM)-this->param.alpha0(zCOM));

//    //try cubic spline
//    MatrixXd C(4,4);
//    C << 1, 0, 0, 0,
//         0, 1, 0, 0,
//         -3,-2,3, 1,
//         2, 1, -2,1;
//    VectorXd coeff(4);
//    coeff << this->param.alpha0(zCOM), this->param.dalpha0(zCOM), this->param.alphaf(zCOM), 0;
//    coeff << C*coeff;
//    ydswz = coeff(0) + this->phase.tau * coeff(1) + pow(this->phase.tau,2) * coeff(2) + pow(this->phase.tau,3) * coeff(3) ;
//    dydswz = coeff(1) + pow(this->phase.tau,1) * coeff(2) + pow(this->phase.tau,2) * coeff(3) ;
//    d2ydswz =  pow(this->phase.tau,1) * coeff(2) + pow(this->phase.tau,2) * coeff(3) ;
}


//turning controller
void OUTPUT_DEBUG::update_turning_yaw(VectorXd &yd, VectorXd &dyd, VectorXd &d2yd) {
    double YawDes = 0;
    double K = 0.5;

    double yaw_error = this->robot->q(BaseRotZ) - YawDes;

//    if (abs(yaw_error) > 0.05) {
        double ToYaw = K*yaw_error;
        yd(StanceHipYaw) += ToYaw*bezier_tools::bezier(this->config.bh, this->phase.tau);
        dyd(StanceHipYaw) += ToYaw*bezier_tools::dbezier(this->config.bh, this->phase.tau) * this->phase.dtau;
        d2yd(StanceHipYaw) += ToYaw*bezier_tools::d2bezier(this->config.bh, this->phase.tau) * pow(this->phase.dtau, 2);

//    }

    yd(SwingHipYaw) += this->param.alpha0(SwingHipYaw)*bezier_tools::bezier(this->config.bh, 1.0 - this->phase.tau);
    dyd(SwingHipYaw) += this->param.alpha0(SwingHipYaw)*bezier_tools::dbezier(this->config.bh, 1.0 - this->phase.tau) * this->phase.dtau;
    d2yd(SwingHipYaw) += this->param.alpha0(SwingHipYaw)*bezier_tools::d2bezier(this->config.bh, 1.0 - this->phase.tau) * pow(this->phase.dtau, 2);


}

//LIP
void OUTPUT_DEBUG::update_LIP_xz0(double &xc, double &yc, double &z0, double &zc, double &dxc, double &dyc, double &dzc,
                                 double &dz0) {

    MatrixXd p_COM(3, 1); //assumed pelvis yaw angle =0
//    MatrixXd J_COM(3, 22);

    if (this->memory.iDomain == 0) {
        //right stance
        SymFunction::p_com_RightStance(p_COM, this->robot->q);
//        SymFunction::J_com_RightStance(J_COM, this->robot->q);
    } else {
        SymFunction::p_com_LeftStance(p_COM, this->robot->q);
//        SymFunction::J_com_LeftStance(J_COM, this->robot->q);
    }
    xc = p_COM(0, 0);
    yc = p_COM(1, 0);
    zc = p_COM(2, 0);
    z0 = zc - this->param.hdes / this->param.ldes * xc;

//    Vector3d dp_COM;
//    dp_COM.setZero();
//    dp_COM = J_COM * this->robot->dq;
//    dxc = dp_COM(0);
//    dyc = dp_COM(1);
//    dzc = dp_COM(2);


//    //absolute
    MatrixXd dp_COM(3,1);
    SymFunction::dp_com_absolute(dp_COM, this->robot->q, this->robot->dq);

    dxc = dp_COM(0,0);
    dyc = dp_COM(1,0);
    dzc = dp_COM(2,0);
    dz0 = dzc - this->param.hdes / this->param.ldes * dxc;

    this->lpVaX.update(dxc);
    this->lpVaY.update(dyc);
    this->lpVaZ.update(dzc);

    dxc = this->lpVaX.getValue();
    dyc = this->lpVaY.getValue();
    dzc = this->lpVaZ.getValue();
    dz0 = dzc - this->param.hdes / this->param.ldes * dxc;

    this->cache.dxcLIP_f = this->lpVaX.getValue();
    this->cache.dycLIP_f = this->lpVaY.getValue();
    this->cache.dzcLIP_f = this->lpVaZ.getValue();
    this->cache.dz0LIP_f = this->cache.dzcLIP_f - this->param.hdes / this->param.ldes * this->cache.dxcLIP_f;
    //    std::cout << "xc,zc,z0,dxc,dz0 : " << xc << ","<< zc <<","<< z0<<","<< dxc <<","<< dz0 << std::endl;
}

// void OUTPUT_DEBUG::update_Ly(double &Ly) {
//     Vector3d p_com, dp_com, L3d;
//     p_com << this->cache.xcLIP, this->cache.ycLIP, this->cache.zcLIP;
//     dp_com << this->cache.dxcLIP, this->cache.dycLIP, this->cache.dzcLIP;
//     VectorXd Lcom(6);
//     VectorWrap Lcom_(Lcom);
//     VectorXd x(44, 1);
//     x << this->robot->q, this->robot->dq;

//     MatrixXd p_com_abs(3,1);
//     SymFunction::p_com_absolute(p_com_abs,this->robot->q);
//     SymFunction::CentroidalMomentum(Lcom_, x, p_com_abs);

// //    Lcom = Lcom / 32.632;
//     L3d = p_com.cross(dp_com);
//     std::cout << "Lcomy_1: " << Lcom(4)/32.632 << "L3d: " <<  L3d(1) << std::endl;
// //    Ly = Lcom(4) + L3d(1);
//     Ly = L3d(1) ;
// }

void OUTPUT_DEBUG::update_preimpact_xL(double t, double Ts, double &xcminus, double &Lyminus) {
    VectorXd sol(2);
    sol.setZero();
    this->get_LIPsol(Ts - t, this->cache.z0LIP, this->cache.xcLIP, this->cache.Ly, sol);
    xcminus = sol(0);
    Lyminus = sol(1);
}

void OUTPUT_DEBUG::update_Lx(double &Lx, double &Ly) {
    Vector3d p_com, dp_com, L3d;
    p_com << this->cache.xcLIP, this->cache.ycLIP, this->cache.zcLIP;
    dp_com << this->cache.dxcLIP, this->cache.dycLIP, this->cache.dzcLIP;
    MatrixXd Lcom(6,1);
    VectorXd x(44, 1);
    x << this->robot->q, this->robot->dq;

    MatrixXd p_com_abs(3, 1);
    SymFunction::p_com_absolute(p_com_abs, this->robot->q);
    SymFunction::CentroidalMomentum(Lcom, x, p_com_abs);

    L3d = p_com.cross(dp_com);
    Lx = Lcom(3)/32.632 + L3d(0);
    Ly = Lcom(4)/32.632 + L3d(1);
//    std::cout << "Lcomy_2: " << Lcom(4)/32.632 << "L3d: " <<  L3d(1) << std::endl;
//    std::cout << "Lcomx_2: " << Lcom(3)/32.632 << "L3d: " <<  L3d(0) << std::endl;

    this->get_orbitalenergy(this->cache.Enow);

}

void OUTPUT_DEBUG::update_preimpact_yL(double t, double Ts, double &ycminus, double &Lxminus) {
    VectorXd sol(2);
    sol.setZero();
    this->get_LIPsol_lateral(Ts - t, this->cache.z0LIP, this->cache.ycLIP, this->cache.dycLIP, sol);
    ycminus = sol(0);
    Lxminus = sol(1);
}

void OUTPUT_DEBUG::get_orbitalenergy(double &Eenergy) {
    Eenergy =
            pow(this->cache.Ly / this->cache.z0LIP, 2) - this->config.g / this->cache.z0LIP * pow(this->cache.xcLIP, 2);
}

void OUTPUT_DEBUG::solve_Ts(double &Ts) {
    double xcdes = this->config.xratio * this->param.ldes;
    double lam = sqrt(this->config.g / this->cache.z0LIP);
    double a = this->cache.xcLIP;
    double b = this->cache.Ly / lam / this->cache.z0LIP;
    double c = xcdes;
    Ts = 1 / lam * log((c + sqrt(-pow(a, 2) + pow(b, 2) + pow(c, 2))) / (a + b));
}

void OUTPUT_DEBUG::get_LIPsol(double t, double z0, double x0, double L0, VectorXd &sol) {
    MatrixXd A(2, 2);
    A << 0, 1 / z0,
            this->config.g, 0;
//    A << 0 , 1,
//        this->config.g/z0 , 0;
    MatrixXd At = A * t;
    VectorXd IC(2);
    IC << x0,
            L0;
    sol = At.exp() * IC;
}

void OUTPUT_DEBUG::get_LIPsol_lateral(double t, double z0, double y0, double L0, VectorXd &sol) {
    MatrixXd A(2, 2);
    A << 0, -1 / z0,
            -this->config.g, 0;

    A << 0, 1,
            this->config.g / z0, 0;
    MatrixXd At = A * t;
    VectorXd IC(2);
    IC << y0,
            L0;
    sol = At.exp() * IC;
}

// void OUTPUT_DEBUG::update_dzcomf(double t, double &udes) {
//     //t is time elapsed in the current step
//     double xcLIPminus;
//     double Lyminus;
//     //    t = this->phase.pActual;
//     if (t > this->param.Ts) {
//         t = this->param.Ts;
//     }

//     this->update_preimpact_xL(t, this->param.Ts, xcLIPminus, Lyminus);
//     double dxcLIPminus_now = this->cache.dxcLIP;

//     VectorXd bezierCoeff(5);
//     bezierCoeff << 0, 0, 1, 1, 1;
//     double coeff = bezier_tools::bezier(bezierCoeff, this->phase.tau);


//     double xcLIPplus = xcLIPminus - this->param.ldes;
//     double z0LIPplus_des =
//             this->param.alphaf(zCOM) - this->param.hdes - this->param.hdesnext / this->param.ldesnext * xcLIPplus;
//     double z0LIPplus_real =
//             this->cache.zcLIP - this->param.hdes - this->param.hdesnext / this->param.ldesnext * xcLIPplus;
//     double z0LIPplus = (1 - coeff) * z0LIPplus_des + coeff * z0LIPplus_real;
//     double Lyplus = z0LIPplus * sqrt(this->param.Edes + this->config.g / z0LIPplus * pow(xcLIPplus, 2));

//     udes = (Lyplus - Lyminus + this->param.hdes * dxcLIPminus_now) / this->param.ldes;
// }

void OUTPUT_DEBUG::update_preimpact_estimation(double t, double Ts){
    this->update_preimpact_xL(t, Ts, this->cache.xcLIP_minus, this->cache.Ly_minus);
    VectorXd bezierCoeff(4);
    bezierCoeff << 0, 0, 1, 1;
    double coeff = bezier_tools::bezier(bezierCoeff, this->phase.tau);
    double z0_smooth = (1 - coeff) * this->config.z0des + coeff * this->cache.z0LIP;
    double dxc_LIPminus = this->cache.Ly_minus/z0_smooth;
    this->cache.dzc_minus = this->param.hdes/this->param.ldes * dxc_LIPminus;
}

void OUTPUT_DEBUG::getDebug(VectorXf &dbg) {
    double tsec = static_cast<double>(ros::Time::now().sec);
    double tnsec = 1e-9 * static_cast<double>(ros::Time::now().nsec);
    // Move zero to closer time rather than 1970 so it fits in a float
    // Still bad practice to put time in floats, but this is just for logging
    if (!this->config.isSim)
        tsec -= 1631496319;//1.6074545e9;

    // Use floats for logging size and speed
    dbg << static_cast<float>(tsec), 
            static_cast<float>(tnsec), // 2
            static_cast<float>(this->phase.tau),   // 1
            static_cast<float>(this->phase.dtau),  // 1
            this->cache.ya.cast<float>(),        // 9
            // static_cast<float>(this->cache.xcom_debug),
            this->cache.dya.cast<float>(),       // 9
            // static_cast<float>(this->cache.dxcom_debug),
            this->cache.yd.cast<float>(),        // 9
            this->cache.dyd.cast<float>(),       // 9
//    static_cast<float>(this->cache.vd[0]), static_cast<float>(this->cache.vd[1]),   // 2
//    static_cast<float>(this->robot->dq[0]), static_cast<float>(this->robot->dq[1]), // 2
//    static_cast<float>(this->lpVaXlastStep.getValue()), static_cast<float>(this->lpVaYlastStep.getValue()), //2
//    this->cache.uff.cast <float> (),            // 10
            static_cast<float>(this->memory.iDomain),      //1
            this->cache.d2yd.cast<float>(),       //9
            static_cast<float>(this->cache.stepW_log), //1
            static_cast<float>(this->cache.dstepW_log),//1
            //for walking
            static_cast<float>(this->cache.xcLIP), static_cast<float>(this->cache.ycLIP), static_cast<float>(this->cache.zcLIP), static_cast<float>(this->cache.z0LIP), //4
            static_cast<float>(this->cache.dxcLIP), static_cast<float>(this->cache.dycLIP), static_cast<float>(this->cache.dzcLIP), static_cast<float>(this->cache.dz0LIP), //4
            static_cast<float>(this->cache.dxcLIP_f), static_cast<float>(this->cache.dycLIP_f), static_cast<float>(this->cache.dzcLIP_f), static_cast<float>(this->cache.dz0LIP_f), //4
            this->cache.mpcsol.cast<float>(), //17
            static_cast<float>(this->cache.Enow), //1
            static_cast<float>(this->cache.Ly), //1

            static_cast<float>(this->config.HLIP_vxd), // 1
            static_cast<float>(this->config.HLIP_vyd);
            
            // static_cast<float>(this->memory.time); //1

            // std::cout << "time: " << this->memory.time << std::endl;
            // 83

            // static_cast<float>(1997.0),
            // static_cast<float>(this->cache.xcom),
            // static_cast<float>(this->cache.vcom),
            // static_cast<float>(this->cache.xcom_norm),
            // static_cast<float>(this->cache.vcom_norm),
            // static_cast<float>(this->cache.acom_norm); //1
}
