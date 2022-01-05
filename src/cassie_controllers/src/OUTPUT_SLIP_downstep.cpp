/**
 given radio input (user command) and output_option (either Xiaobin's (0) or Jenna's (1) option)
 filter radio input as needed
 compute output
*/

// #include <cassie_controllers/walking_onedomain.hpp>
#include <cassie_common_toolbox/BasicSpline.hpp>
#include <cassie_controllers/OUTPUT_SLIP.hpp>
#include <cassie_common_toolbox/motion_transition.hpp>
#include <cassie_common_toolbox/RadioButtonMap.hpp>
// #include <cassie_controllers/feedforward_controller.hpp>
#include <cassie_common_toolbox/bezier_tools.hpp>
#include <roslib_utilities/ros_package_utilities.hpp>
#include <control_utilities/limits.hpp>
#include <cassie_common_toolbox/linear_interpolation.hpp>

#include <cassie_controllers/generated/human_data.hpp>
#include <cassie_controllers/generated/human_data_025.hpp>
#include <cassie_controllers/generated/human_data_050.hpp>
#include <cassie_controllers/generated/human_data_075.hpp>
#include <cassie_controllers/generated/human_data_100.hpp>
#include <cassie_controllers/generated/splines_HLIP.hpp>
// #include <cassie_controllers/splines_nominal_debug.hpp>
// #include <cassie_controllers/splines_downstep.hpp>

USING_NAMESPACE_QPOASES
using namespace control_utilities;

void OUTPUT_SLIP::Cache::init(Config *config) {

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

    // Initialize matrices
    this->reset();
}

void OUTPUT_SLIP::Cache::reset() {
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

    // human SLIP related
    this->xcom = 0.0;
    this->vcom = 0.0;
    this->support_phase = 1;

    // Downstep related
    this->downstepLeg = 0;
    this->isDownstep = false;
    this->downstepStep = 0;
    // Transition related
    this->time = 0.0;
    this->time_norm = 0.0;

    // Downstep
    // this->zsw = 0.0;
    // this->isDownstep = false;
    // this->downstepStep = 0;
}

void OUTPUT_SLIP::Memory::init() {
    this->reset();
}

void OUTPUT_SLIP::Memory::reset() {
    this->timer.restart();

    this->iDomain = 1;
    this->iDomainlast = 0;
    this->phaseCnt = 1;
    this->ithstep = 0;
    this->isInitialized = false;

    this->readyToStop = false;
    this->queueStop = false;

    this->qp_initialized = false;
}

void OUTPUT_SLIP::Param::init() {
    this->alpha0.resize(9);
    this->dalpha0.resize(9);
    this->alphaf.resize(9);
    this->reset();
}

void OUTPUT_SLIP::Param::reset() {
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

void OUTPUT_SLIP::Config::reconfigure() {
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

    this->paramChecker.checkAndUpdate("zeroStepping",this->zeroStepping);
    this->paramChecker.checkAndUpdate("useXcomRaibert",this->useXcomRaibert);
    this->paramChecker.checkAndUpdate("Kstep",this->Kstep);
    this->paramChecker.checkAndUpdate("Dstep",this->Dstep);

    this->paramChecker.checkAndUpdate("useHumanOutputsXcomStep",this->useHumanOutputsXcomStep);
    this->paramChecker.checkAndUpdate("useHumanOutputsZcomStep",this->useHumanOutputsZcomStep);
    this->paramChecker.checkAndUpdate("useHumanOutputsXswStep",this->useHumanOutputsXswStep);
    this->paramChecker.checkAndUpdate("useXcomStep",this->useXcomStep);
    this->paramChecker.checkAndUpdate("useXswStep",this->useXswStep);
    this->useHumanOutputs = false;

    if (this->control_mode == 0){
        // standing
        this->paramChecker.checkAndUpdate("nom_stand_height", this->nom_stand_height);
        this->paramChecker.checkAndUpdate("stand_radio_ratio", this->stand_radio_ratio);
    }
}

void OUTPUT_SLIP::Splines::init(){
    // Load in the data of the human nominal gait, later used for scaling in .update()
    this->getHumanData();
    this->getHumanData025();
    this->getHumanData050();
    this->getHumanData075();
    this->getHumanData100();
    std::cout << "HUMAN DATA LOADED" << std::endl;

    // Create a vector of debugSplines for a number of steps from the HLIP walking
    this->createDebugSplines();
    std::cout << "DEBUG SPLINES CREATED" << std::endl;
    this->debugSplines.idx = 0;

    // Get the nominal spline trajectory
    this->updateNominalSplines();
    std::cout << "NOMINAL SPLINES CREATED" << std::endl;

    // Get the downstep spline trajectory
    this->updateDownstepSplines();
    std::cout << "DOWNSTEP SPLINES CREATED" << std::endl;

    /* 
       now we have obtained:
        - debug splines, fitted to HLIP succesfull walking
        - nominal walking splines from human data, function of steplength

       and we need to add:
        - downstep splines, as a function of swing foot height
    */
}

void OUTPUT_SLIP::Splines::updateNominalSplines(double desiredStepLength) {
    double poly1 = 0.07456;
    double poly2 = -1.709;
    this->h_cassie = 0.730;

    // Scaling in walking direction
    double stepLengthHuman = this->xcom_human(this->xcom_human.size()-1) - this->xcom_human(0);
    double stepLengthDesired;
    if (desiredStepLength == 0.0){
        // no desired step length given
        double start = 0.0;
        double end = 1.0;
        stepLengthDesired = (this->debugSplines.xsw[this->useXcomStep].evaluate(end) - this->debugSplines.xsw[this->useXcomStep].evaluate(start));
        // stepLengthDesired = 2*(this->HLIP_vxd*this->HLIP_Ts);
    } else {
        // reset the name if given
        stepLengthDesired = desiredStepLength;
    }
    std::cout << "Ls desired: " << stepLengthDesired << std::endl;
    std::cout << "Ls human:   " << stepLengthHuman << std::endl;
    // Eigen::VectorXd test = Eigen::VectorXd::LinSpaced(50,0.0,1.0);
    // std::cout << "xsw spline: " << this->debugSplines.xsw[this->useXcomStep].evaluate(test) << std::endl;

    // Because a stepsize is double the length of a xcom change per step, we multiply
    // the desired steplength (from the swing leg) with 0.5
    this->x_scaling = (0.5*stepLengthDesired) / stepLengthHuman; 
    this->dx_scaling = this->HLIP_vxd / dxcom_human.mean();
    this->ddx_scaling = this->dx_scaling;

    // Scaling of height, this is based on human zcom relations as a function of stepsize
    // so now we don't multiply with 0.5
    double z_range_human = this->zcom_human.maxCoeff() - this->zcom_human.minCoeff();
    this->z_scaling = (poly1*(stepLengthDesired*100.0) + poly2); // /(z_range_human*100);
    this->dz_scaling = this->z_scaling;
    this->ddz_scaling = this->dz_scaling;

    // Scaling of GRF
    double m_cassie = 31;
    double m_human = 66.5138;
    this->grf_scaling = m_cassie / m_human;

    std::cout << "x_scaling: " << this->x_scaling << std::endl;
    std::cout << "z_scaling: " << this->z_scaling << std::endl;
    std::cout << "grf_scaling: " << this->grf_scaling << std::endl;

    VectorXd time_norm_local = this->time_norm_human;

    // Nominal walking spline generation
    VectorXd zcom_cassie = (this->zcom_human.array() - this->zcom_human.mean())*this->z_scaling + h_cassie;
    BasicSpline zcom_cassie_spline(time_norm_local,zcom_cassie,0.0002,true);
    this->nominalSplines.zcom = zcom_cassie_spline;

    VectorXd dzcom_cassie = this->dzcom_human*this->dz_scaling;
    BasicSpline dzcom_cassie_spline(time_norm_local,dzcom_cassie,0.0005,true);
    this->nominalSplines.dzcom = dzcom_cassie_spline;

    VectorXd ddzcom_cassie = this->ddzcom_human*this->ddz_scaling;
    BasicSpline ddzcom_cassie_spline(time_norm_local,ddzcom_cassie,0.1,true);
    this->nominalSplines.ddzcom = ddzcom_cassie_spline;

    VectorXd xcom_cassie = (this->xcom_human.array()-0.10)*this->x_scaling; // -0.10 to remove half of DSP and add it before SSP
    BasicSpline xcom_cassie_spline(time_norm_local,xcom_cassie,0.005,true);
    this->nominalSplines.xcom = xcom_cassie_spline;

    VectorXd dxcom_cassie = this->dxcom_human*this->dx_scaling;
    BasicSpline dxcom_cassie_spline(time_norm_local,dxcom_cassie,0.005,true);
    this->nominalSplines.dxcom = dxcom_cassie_spline;

    VectorXd ddxcom_cassie = this->ddxcom_human*this->ddx_scaling;
    BasicSpline ddxcom_cassie_spline(time_norm_local,ddxcom_cassie,0.1,true);
    this->nominalSplines.ddxcom = ddxcom_cassie_spline;

    VectorXd time_norm_local_SSP = this->time_norm_human_SSP;
    VectorXd grf_cassie_SSP = this->grf_human_SSP*this->grf_scaling;
    BasicSpline GRF_SSP_spline(time_norm_local_SSP,grf_cassie_SSP,50.0,false);
    this->nominalSplines.GRF_SSP = GRF_SSP_spline;
}

void OUTPUT_SLIP::Splines::updateDownstepSplines(double desiredStepLength){
    std::cout << "updating downstep splines " << std::endl;
    // the scalings are already computed in "updateNominalSplines()"
    // Let's assume we have a 5.0 cm downstep, that's the second index of the vector
    // containing the downstep data
    int idx = 1;
    VectorXd time_norm_local_1 = this->time_norm_human_1[idx];
    
    VectorXd zcom_cassie_1 = (this->zcom_human_1[idx].array() - this->zcom_human_1[idx].mean()) + this->h_cassie;
    BasicSpline zcom_cassie_spline_1(time_norm_local_1,zcom_cassie_1,0.0002,false);
    this->downstepSplines.zcom.push_back(zcom_cassie_spline_1);

    VectorXd dzcom_cassie_1 = this->dzcom_human_1[idx];
    BasicSpline dzcom_cassie_spline_1(time_norm_local_1,dzcom_cassie_1,0.0005,false);
    this->downstepSplines.dzcom.push_back(dzcom_cassie_spline_1);

    VectorXd ddzcom_cassie_1 = this->ddzcom_human_1[idx];
    BasicSpline ddzcom_cassie_spline_1(time_norm_local_1,ddzcom_cassie_1,0.1,false);
    this->downstepSplines.ddzcom.push_back(ddzcom_cassie_spline_1);
    
    VectorXd xcom_cassie = (this->xcom_human_1[idx].array()-0.10)*this->x_scaling; // -0.10 to remove half of DSP and add it before SSP
    BasicSpline xcom_cassie_spline(time_norm_local_1,xcom_cassie,0.005,false);
    this->downstepSplines.xcom.push_back(xcom_cassie_spline);

    VectorXd dxcom_cassie = this->dxcom_human_1[idx]*this->dx_scaling;
    BasicSpline dxcom_cassie_spline(time_norm_local_1,dxcom_cassie,0.005,false);
    this->downstepSplines.dxcom.push_back(dxcom_cassie_spline);

    VectorXd ddxcom_cassie = this->ddxcom_human_1[idx]*this->ddx_scaling;
    BasicSpline ddxcom_cassie_spline(time_norm_local_1,ddxcom_cassie,0.1,false);
    this->downstepSplines.ddxcom.push_back(ddxcom_cassie_spline);

    VectorXd time_norm_local_SSP_1 = this->time_norm_human_SSP_1[idx];
    VectorXd grf_cassie_SSP_1 = this->grf_human_SSP_1[idx]*this->grf_scaling;
    BasicSpline GRF_SSP_spline(time_norm_local_SSP_1,grf_cassie_SSP_1,50.0,false);
    this->downstepSplines.GRF_SSP.push_back(GRF_SSP_spline);
}





OUTPUT_SLIP::OUTPUT_SLIP(ros::NodeHandle &nh, cassie_model::Cassie &robot, int control_mode) : nh(&nh), tarsusSolver(robot) {
    this->robot = &robot;

    this->config.control_mode = control_mode;

    if (this->config.control_mode == 1) {
        // walking
        this->config.outputsize = 10;
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
    this->param.init();

    // Copy some of the config parameters to the splines struct as
    // we need to access this in the initialization of the splines
    if (this->config.control_mode == 1){
        this->splines.HLIP_Ts = this->config.HLIP_Ts;
        this->splines.HLIP_vxd = this->config.HLIP_vxd;
        this->splines.useXcomStep = this->config.useXcomStep;
        this->splines.init();
    }
}

void OUTPUT_SLIP::reset() {
    this->cache.reset();
    this->memory.reset();

    this->lpVaX.reset();
    this->lpVaY.reset();

    this->tarsusSolver.reset();
}

bool OUTPUT_SLIP::reconfigure() {
    std::cout << "Polling rosparams under: " << this->config.paramChecker.node.getNamespace() << std::endl;
    this->config.reconfigure();

    return true;
}

void OUTPUT_SLIP::update(VectorXd &radio) {
    // Creation of outputs, called in locomotion_node for every iteration
    if (this->config.control_mode == 1){
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
                // Right stance
                xcom_ = com_rightstance(0);
                vcom_ = (Jcom_rightstance*this->robot->dq)(0);
                acom_ = (dJcom_rightstance*this->robot->dq + 
                            Jcom_rightstance*this->robot->ddq)(0);
                zsw_  = sw_leftfoot(2) - sw_rightfoot(2);
                break;
            case 1 :
                // Left stance
                xcom_ = com_leftstance(0);
                vcom_ = (Jcom_leftstance*this->robot->dq)(0);
                acom_ = (dJcom_leftstance*this->robot->dq + 
                            Jcom_leftstance*this->robot->ddq)(0);
                zsw_  = sw_rightfoot(2) - sw_leftfoot(2);
                break;
        }
        std::cout << "zsw: " << zsw_ << std::endl;

        ////////////////////////
        // Downstep detection //
        ////////////////////////
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


        ///////////////////
        // Control modes //
        ///////////////////
        if (this->cache.time_norm >= 1.0){
            // std::cout << "WE'RE SWITCHING!!!" << std::endl;
        }

        this->splines.debugSplines.idx = std::min(this->memory.phaseCnt-1,this->config.useXcomStep-1);
        if (this->splines.debugSplines.idx > this->splines.debugSplines.timeMin.size()-1){
            this->splines.debugSplines.idx = this->splines.debugSplines.timeMin.size()-1;
        }
        // std::cout << "idx: " << this->splines.debugSplines.idx << std::endl;
        double min = this->splines.debugSplines.timeMin[this->splines.debugSplines.idx];
        double max = this->splines.debugSplines.timeMax[this->splines.debugSplines.idx];


        double time_ = this->memory.timer.elapsed();
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

            // HLIP stepping
            this->param.wdes = this->config.wdes;
            this->param.Ts = .4; //for HLIP stepping

            //get desired preimpact posture -> alphaf
            //zcom_f = z0des + xcom_f*hdes/ldes
            double tmp = this->config.xratio * this->param.hdes + this->param.hdesnext/this->param.ldesnext*(this->config.xratio -1.0)*this->param.ldes + this->param.hdes;
            //        this->param.alphaf << 0, 0, 0, this->config.z0des + this->config.xratio * this->param.hdes, this->param.hdes, this->param.ldes, 0, 0, 0;
            this->param.alphaf << 0, 0, 0, this->config.z0des + tmp/2.0, this->param.hdes, this->param.ldes, 0, 0, 0;
            this->config.paramChecker.checkAndUpdate("HLIP_vxd", this->config.HLIP_vxd);
            this->config.paramChecker.checkAndUpdate("useHLIP", this->config.useHLIP);

            // Print some booleans at runtime
            bool usingXcomStep = !(this->memory.phaseCnt < this->config.useXcomStep);
            bool usingXswStep = !(this->memory.phaseCnt < this->config.useXswStep);
            std::cout << "\tusingXcomStep:  " << usingXcomStep << std::endl;
            std::cout << "\tusingXswStep:   " << usingXswStep << std::endl;
            bool usingHumanXcom = (this->config.useHumanOutputsXcomStep <= this->memory.phaseCnt);
            bool usingHumanZcom = (this->config.useHumanOutputsZcomStep <= this->memory.phaseCnt);
            std::cout << "\tusingHumanXcom: " << usingHumanXcom << std::endl;
            std::cout << "\tusingHumanZcom: " << usingHumanZcom << std::endl;
            // this->config.paramChecker.checkAndUpdate("HLIP_vyd", this->config.HLIP_vyd);

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

        if (this->config.useHLIP || this->config.zeroStepping){
            this->computeDesired_HLIP(this->cache.yd, this->cache.dyd, this->cache.d2yd);
            // std::cout << "using hlip outputs" << std::endl;
        } else {
            this->computeDesired_SLIP(this->cache.yd, this->cache.dyd, this->cache.d2yd);
            // std::cout << "using slip outputs" << std::endl;
        }

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
            // this->memory.timer2.restart();
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
            this->memory.isInitialized = true;
        }
        this->computeActual_inair(this->cache.ya, this->cache.dya, this->cache.Dya, this->cache.DLfya);
        this->computeDesired_inair(this->cache.yd, this->cache.dyd, this->cache.d2yd);

        // std::cout << "ya: " << this->cache.ya << std::endl;
        // std::cout << "dya: " << this->cache.dya << std::endl;
        // std::cout << "Dya: " << this->cache.Dya << std::endl;
        // std::cout << "DLfya: " << this->cache.DLfya << "\n" << std::endl;
    }
}

//time-based domain switching
void OUTPUT_SLIP::computeGuard() {
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
        std::cout << "phaseCnt: " << this->memory.phaseCnt << std::endl;

        // Increment
        this->nextDomain();
    } else {
        this->cache.justimpacted = false;
    }
}

void OUTPUT_SLIP::nextDomain() {
    // Increment the domain indexing
    this->memory.iDomain += 1;
    if (this->memory.iDomain >= this->config.nDomain){
        this->memory.iDomain = 0;   
    }

    if (this->cache.isDownstep){
        this->cache.downstepStep++;
    }
//    this->memory.timer.restart();
    this->cache.justimpacted = true;

    // if (this->cache.isDownstep){
    //     this->cache.downstepStep += 1;
    // }
}

// get actual and desired output function
void OUTPUT_SLIP::computeActual_HLIP(VectorXd &ya, VectorXd &dya, MatrixXd &Dya, MatrixXd &DLfya) {
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

void OUTPUT_SLIP::computeDesired_HLIP(VectorXd &yd, VectorXd &dyd, VectorXd &d2yd) {
    // double xcom_desired = 0.0;
    // if (this->config.zeroStepping){
    //     Eigen::VectorXd p_pelvis; p_pelvis.resize(3);
    //     VectorWrap p_pelvis_(p_pelvis);
    //     if (this->memory.iDomain == 0){
    //         // Right stance
    //         SymFunction::p_com_RightStance(p_pelvis_,this->robot->q);
    //         this->cache.beta = -atan2(p_pelvis(0),p_pelvis(1));
    //     } else {
    //         // Left stance
    //         SymFunction::p_com_LeftStance(p_pelvis_,this->robot->q);
    //         this->cache.beta = atan2(p_pelvis(0),-p_pelvis(1));
    //         std::cout << "pelvis: " << p_pelvis << std::endl;
    //         std::cout << "beta: " << this->cache.beta << std::endl;
    //     }
    //     xcom_desired = 0.0;
    // }

    this->get_steppingstone_swx_traj_steppinginplace(yd(SwingStepx), dyd(SwingStepx), d2yd(SwingStepx));
    this->get_steppingstone_comz_traj(yd(zCOM),dyd(zCOM),d2yd(zCOM));
    this->get_steppingstone_swy_traj(yd(SwingStepy), dyd(SwingStepy), d2yd(SwingStepy));
    this->get_steppingstone_swz_traj(yd(SwingStepz), dyd(SwingStepz), d2yd(SwingStepz));

    yd.segment(0, 3).setZero();
    dyd.segment(0, 3).setZero();
    d2yd.segment(0, 3).setZero();
    yd.segment(7, 2).setZero();
    dyd.segment(7, 2).setZero();
    d2yd.segment(7, 2).setZero();

    if (this->config.zeroStepping){
        yd(xCOM) = 0.0;
        dyd(xCOM) = 0.0;
        d2yd(xCOM) = 0.0;
    } else {
        yd(xCOM) = this->cache.ya(xCOM);
        dyd(xCOM) = this->cache.dya(xCOM);
        d2yd(xCOM) = 0.0;
        // this->get_SLIP_comx_traj(yd(xCOM),dyd(xCOM),d2yd(xCOM));
    }

    this->update_turning_yaw(yd, dyd, d2yd);
}

void OUTPUT_SLIP::computeDesired_SLIP(VectorXd &yd, VectorXd &dyd, VectorXd &d2yd){
    // For the standing to walking transition, we still use the HLIP stepping for the swing foot
    if (this->memory.phaseCnt < this->config.useXswStep){
        this->get_steppingstone_swx_traj_steppinginplace(yd(SwingStepx), dyd(SwingStepx), d2yd(SwingStepx));
    } else {
        if (this->config.useXcomRaibert){
            this->get_SLIP_swx_traj_feedback(yd(SwingStepx), dyd(SwingStepx), d2yd(SwingStepx));
            // this->get_SLIP_swx_traj_reconstruction_feedback(yd(SwingStepx), dyd(SwingStepx), d2yd(SwingStepx));
        } else {
            this->get_SLIP_swx_traj(yd(SwingStepx), dyd(SwingStepx), d2yd(SwingStepx));
        }
    }

    // this->get_steppingstone_comz_traj(yd(zCOM),dyd(zCOM),d2yd(zCOM));
    this->get_SLIP_comz_traj(yd(zCOM),dyd(zCOM),d2yd(zCOM));

    this->get_steppingstone_swy_traj(yd(SwingStepy), dyd(SwingStepy), d2yd(SwingStepy));
    this->get_steppingstone_swz_traj(yd(SwingStepz), dyd(SwingStepz), d2yd(SwingStepz));


    yd.segment(0, 3).setZero();
    dyd.segment(0, 3).setZero();
    d2yd.segment(0, 3).setZero();
    yd.segment(7, 2).setZero();
    dyd.segment(7, 2).setZero();
    d2yd.segment(7, 2).setZero();

    // We use the xcom if the number of steps (phaseCnt) is larger than a constant
    if (this->memory.phaseCnt < this->config.useXcomStep){
        yd(xCOM) = this->cache.ya(xCOM);
        dyd(xCOM) = this->cache.dya(xCOM);
        d2yd(xCOM) = 0.0;
    } else {
        this->get_SLIP_comx_traj(yd(xCOM),dyd(xCOM),d2yd(xCOM));
    }

    this->update_turning_yaw(yd, dyd, d2yd);
}

void OUTPUT_SLIP::get_SLIP_comx_traj(double &ydcomx, double &dydcomx, double &d2ydcomx){
    double x0, x1, x2;
    if (this->memory.phaseCnt >= this->config.useHumanOutputsXcomStep){
        x0 = this->splines.nominalSplines.xcom.evaluate(this->phase.tau,0);
        x1 = this->splines.nominalSplines.dxcom.evaluate(this->phase.tau,0);
        x2 = this->splines.nominalSplines.ddxcom.evaluate(this->phase.tau,0);
    } else {
        x0 = this->splines.debugSplines.xcom[this->splines.debugSplines.idx].evaluate(this->phase.tau,0);
        x1 = this->splines.debugSplines.dxcom[this->splines.debugSplines.idx].evaluate(this->phase.tau,0);
        x2 = this->splines.debugSplines.ddxcom[this->splines.debugSplines.idx].evaluate(this->phase.tau,0);
        // std::cout << "using xcom debug splines: " << this->splines.debugSplines.idx << std::endl;
    }

    ydcomx = x0;
    dydcomx = x1;
    d2ydcomx = x2;
}

void OUTPUT_SLIP::get_SLIP_comz_traj(double &ydcomz, double &dydcomz, double &d2ydcomz){
    double x0, x1, x2;
    if (this->memory.phaseCnt >= this->config.useHumanOutputsZcomStep){
        x0 = this->splines.nominalSplines.zcom.evaluate(this->phase.tau,0);
        x1 = this->splines.nominalSplines.dzcom.evaluate(this->phase.tau,0);
        x2 = this->splines.nominalSplines.ddzcom.evaluate(this->phase.tau,0);
    } else {
        x0 = this->splines.debugSplines.zcom[this->splines.debugSplines.idx].evaluate(this->phase.tau,0);
        x1 = this->splines.debugSplines.dzcom[this->splines.debugSplines.idx].evaluate(this->phase.tau,0);
        x2 = this->splines.debugSplines.ddzcom[this->splines.debugSplines.idx].evaluate(this->phase.tau,0);
    }    

    ydcomz = x0;
    dydcomz = x1;
    d2ydcomz = x2;
}

void OUTPUT_SLIP::get_SLIP_swx_traj(double &ydswx, double &dydswx, double &d2ydswx){
    double x0, x1, x2;
    x0 = this->splines.debugSplines.xsw[this->splines.debugSplines.idx].evaluate(this->phase.tau,0);
    x1 = this->splines.debugSplines.dxsw[this->splines.debugSplines.idx].evaluate(this->phase.tau,0);
    x2 = this->splines.debugSplines.ddxsw[this->splines.debugSplines.idx].evaluate(this->phase.tau,0);
    // std::cout << "using xsw debug splines: " << this->splines.debugSplines.idx << std::endl;

    ydswx = x0;
    dydswx = x1;
    d2ydswx = x2;
}

void OUTPUT_SLIP::get_SLIP_swx_traj_feedback(double &ydswx, double &dydswx, double &d2ydswx){
    double x0, x1, x2;
    x0 = this->splines.debugSplines.xsw[this->splines.debugSplines.idx].evaluate(this->phase.tau,0);
    x1 = this->splines.debugSplines.dxsw[this->splines.debugSplines.idx].evaluate(this->phase.tau,0);
    x2 = this->splines.debugSplines.ddxsw[this->splines.debugSplines.idx].evaluate(this->phase.tau,0);
    
    // Eigen::VectorXd test = Eigen::VectorXd::LinSpaced(50,0.0,1.0);
    // std::cout << "xsw: " << this->splines.debugSplines.xsw[this->splines.debugSplines.idx].evaluate(test,0) << std::endl;

    double error = this->cache.ya(xCOM) - this->cache.yd(xCOM);
    double derror = this->cache.dya(xCOM) - this->cache.dyd(xCOM);

    // Simple PD 
    ydswx = x0 + this->config.Kstep*error + this->config.Dstep*derror;
    dydswx = x1 + this->config.Kstep*derror;
    d2ydswx = x2;

    // // Time depedent PD
    // ydswx = x0 + (this->config.Kstep*error + this->config.Dstep*derror)*(1.0 - this->phase.tau);
    // dydswx = x1 + this->config.Kstep*derror*(1.0 - this->phase.tau);
    // d2ydswx = x2;
}

void OUTPUT_SLIP::get_SLIP_swx_traj_reconstruction_feedback(double &ydswx, double &dydswx, double &d2ydswx){
    // Compute the nominal steplength
    // double xMin = 0.0;
    double xMax = 1.0;
    // double xswMin = this->splines.debugSplines.xsw[this->splines.debugSplines.idx].evaluate(xMin,0);
    double xswMax = this->splines.debugSplines.xsw[this->splines.debugSplines.idx].evaluate(xMax,0);

    double stepL = xswMax;
    std::cout << "stepL: " << stepL << std::endl;
    double dstepL = this->splines.debugSplines.dxsw[this->splines.debugSplines.idx].evaluate(this->phase.tau,0);

    // Xcom error
    double error = this->cache.ya(xCOM) - this->cache.yd(xCOM);
    double derror = this->cache.dya(xCOM) - this->cache.dyd(xCOM);
    // Add simple PD
    stepL += this->config.Kstep*error + this->config.Dstep*derror;
    // dstepL += this->config.Kstep*derror;

    // Construct bezier spline from current to steplength
    double bht, dbht, d2bht;
    bht = bezier_tools::bezier(this->config.bh, this->phase.tau);
    dbht = bezier_tools::dbezier(this->config.bh, this->phase.tau);
    d2bht = bezier_tools::d2bezier(this->config.bh, this->phase.tau);
    dbht = dbht * this->phase.dtau;
    d2bht = d2bht * pow(this->phase.dtau, 2);

    ydswx = (1 - bht) * this->param.alpha0(SwingStepx) + bht * stepL;
    // dydswx = -dbht * this->param.alpha0(SwingStepx) + dbht * stepL + bht * dstepL;
    // d2ydswx = -d2bht * this->param.alpha0(SwingStepx) + d2bht * stepL + dbht * dstepL + dbht * dstepL;
    dydswx = this->splines.debugSplines.dxsw[this->splines.debugSplines.idx].evaluate(this->phase.tau,0);
    d2ydswx = this->splines.debugSplines.ddxsw[this->splines.debugSplines.idx].evaluate(this->phase.tau,0);
}

void OUTPUT_SLIP::computeActual_inair(VectorXd &ya, VectorXd &dya, MatrixXd &Dya, MatrixXd &DLfya) {
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

void OUTPUT_SLIP::computeDesired_inair(VectorXd &yd, VectorXd &dyd, VectorXd &d2yd) {
    yd.setZero();
    dyd.setZero();
    d2yd.setZero();
    double time = ros::Time::now().toSec();

    yd(0) =  0.0;
    yd(1) =  0.045;
    yd(2) = -0.95;

    yd(5) =  yd(0);
    yd(6) = -yd(1);
    yd(7) =  yd(2);
}

void OUTPUT_SLIP::computeActual_standing(VectorXd &ya, VectorXd &dya, MatrixXd &Dya, MatrixXd &DLfya) {
    //output:
    //size = 6
    //COM x,y,z position relative to mid-point of two stance pivot & pelvis roll, pitch, yaw

    VectorWrap ya_(ya), dya_(dya);
    SymFunction::yaStandCOM_new(ya_, this->robot->q);
    SymFunction::dyaStandCOM_new(dya_, this->robot->q, this->robot->dq);
    SymFunction::Dya_standCOM_new(Dya, this->robot->q);
    SymFunction::DLfya_standCOM_new(DLfya, this->robot->q, this->robot->dq);

}

void OUTPUT_SLIP::computeDesired_standing(VectorXd &yd, VectorXd &dyd, VectorXd &d2yd, VectorXd &radio) {
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

void OUTPUT_SLIP::get_steppingstone_swx_traj(double &ydswx, double &dydswx, double &d2ydswx) {
    double bht, dbht, d2bht;
    bht = bezier_tools::bezier(this->config.bh, this->phase.tau);
    dbht = bezier_tools::dbezier(this->config.bh, this->phase.tau) * this->phase.dtau;
    d2bht = bezier_tools::d2bezier(this->config.bh, this->phase.tau) * pow(this->phase.dtau, 2);

    ydswx = (1-bht)*this->param.alpha0(SwingStepx) + bht* this->param.alphaf(SwingStepx);
    dydswx = (dbht)* (this->param.alphaf(SwingStepx)-this->param.alpha0(SwingStepx));
    d2ydswx = (d2bht)* (this->param.alphaf(SwingStepx)-this->param.alpha0(SwingStepx));
}

void OUTPUT_SLIP::get_steppingstone_swy_traj(double &ydswy, double &dydswy, double &d2ydswy) {
    double z0 = this->cache.z0LIP;

    // std::cout << "z0: " << z0 << std::endl;

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

    // std::cout << "lambda: " << lambda << std::endl;
    // std::cout << "sigma2: " << sigma2 << std::endl;
    // std::cout << "pActual: " << this->phase.pActual << std::endl;
    // std::cout << "Ts: " << this->param.Ts << std::endl;
    // std::cout << "ycLIPminus: " << ycLIPminus << std::endl;
    // std::cout << "Lxminus: " << Lxminus << std::endl;

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

    // std::cout << "stepW: " << stepW << std::endl;
    // std::cout << "dstepW: " << dstepW << std::endl;

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

void OUTPUT_SLIP::get_steppingstone_swz_traj(double &ydswz, double &dydswz, double &d2ydswz) {
//    VectorXd bv(10);
//    bv << this->param.alpha0(SwingStepz), 0, this->config.zsw_max, this->config.zsw_max, this->config.zsw_max, this->config.zsw_max, this->config.zsw_max, 0, this->param.alphaf(SwingStepz)+this->config.zsw_neg, this->param.alphaf(SwingStepz)+this->config.zsw_neg;
    VectorXd bv(5);
    bv << this->param.alpha0(SwingStepz), this->config.zsw_max, this->config.zsw_max, this->config.zsw_max,
            this->param.alphaf(SwingStepz) + this->config.zsw_neg;

    ydswz = bezier_tools::bezier(bv, this->phase.tau);
    dydswz = bezier_tools::dbezier(bv, this->phase.tau) * this->phase.dtau;
    d2ydswz = bezier_tools::d2bezier(bv, this->phase.tau) * pow(this->phase.dtau, 2);
}


// for HLIP stepping in place SLIP
void OUTPUT_SLIP::get_steppingstone_swx_traj_steppinginplace(double &ydswx, double &dydswx, double &d2ydswx) {
    double lambda = sqrt(this->config.g / this->cache.z0LIP);
    // double sigma2 = lambda * tanh(this->param.Ts / 2 * lambda);
    double sigma1 = lambda * (cosh(this->param.Ts * lambda/2) / sinh(this->param.Ts * lambda/2));


    Vector2d Xdes;
    Xdes << this->config.HLIP_vxd/sigma1, this->config.HLIP_vxd;
    Vector2d X;
    Vector2d dX;
    X << this->cache.xcLIP, this->cache.dxcLIP;
    dX << this->cache.dxcLIP, this->config.g / this->cache.z0LIP * this->cache.xcLIP;

    // Feedback motion planning with deadbeat gain K
    Vector2d K;
    K << 1, (cosh(this->param.Ts * lambda) / sinh(this->param.Ts * lambda)) / lambda;
    double stepL = K.dot(X - Xdes) + 2 * Xdes(0);
    double dstepL = K.dot(dX);
    if (this->config.zeroStepping){
        // stepL = this->cache.ya(xCOM);
        stepL = 0.0;
        dstepL = 0.0;
    } else if (this->config.useXcomRaibert){
        // Simple, Raibert-like controller on the stepsize
        // If we're too far ahead or too fast, we increase or stepsize such that our next step starts with the 
        // correct xcom position and velocity -> a P and a D gain where the D term is augmented with the duration left.
        // stepL is recomputed every time based on the default, nominal, step-size

        // double deltaXcom = this->cache.ya(xCOM) - this->cache.yd(xCOM);
        // double deltadXcom = this->cache.dya(xCOM) - this->cache.dyd(xCOM);
        // stepL += this->config.Kstep*(deltaXcom) + this->config.Dstep*(deltadXcom)*(1.0 - this->phase.tau)*0.40; // 0.40 is step duration
    }

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

void OUTPUT_SLIP::get_steppingstone_comz_traj(double &ydswz, double &dydswz, double &d2ydswz) {
    double bht, dbht, d2bht;
    bht = bezier_tools::bezier(this->config.bh, this->phase.tau);
    dbht = bezier_tools::dbezier(this->config.bh, this->phase.tau);
    d2bht = bezier_tools::d2bezier(this->config.bh, this->phase.tau);
    dbht = dbht * this->phase.dtau;
    d2bht = d2bht * pow(this->phase.dtau, 2);

    // ydswz = (1 - bht) * this->param.alpha0(zCOM) + bht * this->param.alphaf(zCOM);
    ydswz = 0.725;
    dydswz = 0.0; //(dbht) * (this->param.alphaf(zCOM) - this->param.alpha0(zCOM));
    d2ydswz = 0.0; //(d2bht) * (this->param.alphaf(zCOM) - this->param.alpha0(zCOM));
}

//turning controller
void OUTPUT_SLIP::update_turning_yaw(VectorXd &yd, VectorXd &dyd, VectorXd &d2yd) {
    double YawDes = 0;
    double K = 0.4;

    double yaw_error = this->robot->q(BaseRotZ) - YawDes;

    double ToYaw = K*yaw_error;
    // yd(StanceHipYaw) = 0.0;
    // dyd(StanceHipYaw) = 0.0;
    yd(StanceHipYaw) += ToYaw*bezier_tools::bezier(this->config.bh, this->phase.tau);
    dyd(StanceHipYaw) += ToYaw*bezier_tools::dbezier(this->config.bh, this->phase.tau) * this->phase.dtau;
    d2yd(StanceHipYaw) += ToYaw*bezier_tools::d2bezier(this->config.bh, this->phase.tau) * pow(this->phase.dtau, 2);

    // std::cout << bezier_tools::bezier(this->config.bh, this->phase.tau) << std::endl;

    // yd(SwingHipYaw) = 0.0;
    yd(SwingHipYaw) += this->param.alpha0(SwingHipYaw)*bezier_tools::bezier(this->config.bh, 1.0 - this->phase.tau);
    dyd(SwingHipYaw) += this->param.alpha0(SwingHipYaw)*bezier_tools::dbezier(this->config.bh, 1.0 - this->phase.tau) * this->phase.dtau;
    d2yd(SwingHipYaw) += this->param.alpha0(SwingHipYaw)*bezier_tools::d2bezier(this->config.bh, 1.0 - this->phase.tau) * pow(this->phase.dtau, 2);
}

//LIP
void OUTPUT_SLIP::update_LIP_xz0(double &xc, double &yc, double &z0, double &zc, double &dxc, double &dyc, double &dzc,
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
    // std::cout << "ldes: " << this->param.ldes << std::endl;
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

void OUTPUT_SLIP::update_preimpact_xL(double t, double Ts, double &xcminus, double &Lyminus) {
    VectorXd sol(2);
    sol.setZero();
    this->get_LIPsol(Ts - t, this->cache.z0LIP, this->cache.xcLIP, this->cache.Ly, sol);
    xcminus = sol(0);
    Lyminus = sol(1);
}

void OUTPUT_SLIP::update_Lx(double &Lx, double &Ly) {
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

void OUTPUT_SLIP::update_preimpact_yL(double t, double Ts, double &ycminus, double &Lxminus) {
    VectorXd sol(2);
    sol.setZero();
    this->get_LIPsol_lateral(Ts - t, this->cache.z0LIP, this->cache.ycLIP, this->cache.dycLIP, sol);
    ycminus = sol(0);
    Lxminus = sol(1);
}

void OUTPUT_SLIP::get_orbitalenergy(double &Eenergy) {
    Eenergy =
            pow(this->cache.Ly / this->cache.z0LIP, 2) - this->config.g / this->cache.z0LIP * pow(this->cache.xcLIP, 2);
}

void OUTPUT_SLIP::solve_Ts(double &Ts) {
    double xcdes = this->config.xratio * this->param.ldes;
    double lam = sqrt(this->config.g / this->cache.z0LIP);
    double a = this->cache.xcLIP;
    double b = this->cache.Ly / lam / this->cache.z0LIP;
    double c = xcdes;
    Ts = 1 / lam * log((c + sqrt(-pow(a, 2) + pow(b, 2) + pow(c, 2))) / (a + b));
}

void OUTPUT_SLIP::get_LIPsol(double t, double z0, double x0, double L0, VectorXd &sol) {
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

void OUTPUT_SLIP::get_LIPsol_lateral(double t, double z0, double y0, double L0, VectorXd &sol) {
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

void OUTPUT_SLIP::update_preimpact_estimation(double t, double Ts){
    this->update_preimpact_xL(t, Ts, this->cache.xcLIP_minus, this->cache.Ly_minus);
    VectorXd bezierCoeff(4);
    bezierCoeff << 0, 0, 1, 1;
    double coeff = bezier_tools::bezier(bezierCoeff, this->phase.tau);
    double z0_smooth = (1 - coeff) * this->config.z0des + coeff * this->cache.z0LIP;
    double dxc_LIPminus = this->cache.Ly_minus/z0_smooth;
    this->cache.dzc_minus = this->param.hdes/this->param.ldes * dxc_LIPminus;
}

void OUTPUT_SLIP::getDebug(VectorXf &dbg) {
    double tsec = static_cast<double>(ros::Time::now().sec);
    double tnsec = 1e-9 * static_cast<double>(ros::Time::now().nsec);
    // Move zero to closer time rather than 1970 so it fits in a float
    // Still bad practice to put time in floats, but this is just for logging
    if (!this->config.isSim)
        tsec -= 1631496319;//1.6074545e9;

    // Use floats for logging size and speed
    dbg << static_cast<float>(tsec),   // 1
            static_cast<float>(tnsec), // 1
            static_cast<float>(this->phase.tau),   // 1
            static_cast<float>(this->phase.dtau),  // 1
            this->cache.ya.cast<float>(),        // 10
            this->cache.dya.cast<float>(),       // 10
            this->cache.yd.cast<float>(),        // 10
            this->cache.dyd.cast<float>(),       // 10
            static_cast<float>(this->memory.iDomain),      //1
            this->cache.d2yd.cast<float>(),       //10
            static_cast<float>(this->cache.stepW_log), //1
            static_cast<float>(this->cache.dstepW_log),//1
            //for walking
            static_cast<float>(this->cache.xcLIP), static_cast<float>(this->cache.ycLIP), static_cast<float>(this->cache.zcLIP), static_cast<float>(this->cache.z0LIP), //4
            static_cast<float>(this->cache.dxcLIP), static_cast<float>(this->cache.dycLIP), static_cast<float>(this->cache.dzcLIP), static_cast<float>(this->cache.dz0LIP), //4
            static_cast<float>(this->cache.dxcLIP_f), static_cast<float>(this->cache.dycLIP_f), static_cast<float>(this->cache.dzcLIP_f), static_cast<float>(this->cache.dz0LIP_f), //4

            static_cast<float>(this->config.HLIP_vxd), // 1
            static_cast<float>(this->config.HLIP_vyd), // 1
            
            static_cast<float>(this->memory.timer.elapsed()), // 1
            
            this->robot->q.cast<float>(), // 22
            this->robot->dq.cast<float>(), // 22
            this->robot->ddq.cast<float>(), // 22
            this->robot->gyroscope.cast<float>(), // 3
            this->robot->accelerometer.cast<float>(), // 3
            this->robot->GRF.cast<float>(); // 6

            // static_cast<float>(1997.0),
            // static_cast<float>(this->cache.xcom),
            // static_cast<float>(this->cache.vcom),
            // static_cast<float>(this->cache.xcom_norm),
            // static_cast<float>(this->cache.vcom_norm),
            // static_cast<float>(this->cache.acom_norm); //1
}
