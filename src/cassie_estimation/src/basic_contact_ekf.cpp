#include <cassie_estimation/basic_contact_ekf.hpp>
#include <unsupported/Eigen/EulerAngles>

basic_contact_ekf::basic_contact_ekf(){
    // Initialize the basic control ekf
    this->init();
}

void basic_contact_ekf::init(){
    // State transition noise
    this->Base_process_std = 0.005;
    this->foothold_std     = 0.01;        
    // Measurement noise
    this->encoder_std      = 0.01;  // [rad]  % trust the encoder reading
    // Sensor model
    this->acceleration_bias_std = 0.1;
    
    this->contact_Slide_std     = 0.01; // [m]
    this->contact_Slide_vel_std = 0.5;  // [m/s]
    this->LIPacc_std.resize(2); this->LIPacc_std << 1.0, 0.1;
    // Initialized std estimate for covariance
    this->init_position_std = 0.01;
    this->init_velocity_std = 0.01;
    this->init_acc_bias_std = 0.50;
    this->init_foothold_std = 0.025;
    // already static 3 size
    this->g << 0.0, 0.0, -9.81;

    this->Qba = this->acceleration_bias_std*this->acceleration_bias_std;
    this->Qpf = this->foothold_std*this->foothold_std;

    MatrixXd tmpI = MatrixXd::Identity(3,3);
    this->Qc.resize(15,15); this->Qc.setZero();
    this->Qc.block(0,0,3,3) = this->Base_process_std*this->Base_process_std*tmpI;
    this->Qc.block(3,3,3,3) = this->Base_process_std*this->Base_process_std*tmpI;
    this->Qc.block(6,6,3,3) = this->Qpf*tmpI;
    this->Qc.block(9,9,3,3) = this->Qpf*tmpI;
    this->Qc.block(12,12,3,3) = this->Qba*tmpI;

    MatrixXd tmpI2 = MatrixXd::Identity(7,7);
    this->Renc.resize(7,7); this->Renc.setZero();
    this->Renc << this->encoder_std*this->encoder_std*tmpI2;

    this->R.resize(3,3); this->R.setZero();
    this->R << tmpI;

    this->tprev = 0.0;

    // Initialize P and x_hat
    this->resetImpl();
}

void basic_contact_ekf::update(bool enabledIn, double t, VectorXd& aIn, VectorXd& qIn, Matrix3d& RIn, VectorXd& contactIn){
    if (!enabledIn){
        this->enabled = false;
    }
    if (this->enabled && !enabledIn){
        this->resetImpl();
        this->enabled = true;
    }
    this->R = RIn; // XYZ Euler convention

    // Get the left foot and right foot position
    MatrixXd Lf(6,1), Rf(6,1);
    VectorXd q(22); q.setZero();
    VectorXi qIdx(14);
    qIdx << 6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 18, 19, 21;
    for (int i=0; i<14; i++){
        q(qIdx(i)) = qIn(i);
    }
    SymFunction::pose_leftFoot(Lf,q);
    SymFunction::pose_rightFoot(Rf,q);
    VectorXd leftFootFromPelvis(3), rightFootFromPelvis(3);
    leftFootFromPelvis << Lf(0), Lf(1), Lf(2);
    rightFootFromPelvis << Rf(0), Rf(1), Rf(2);

    // MatrixXd leftFootFromPelvisMatrix; leftFootFromPelvisMatrix.resize(1,3);
    // MatrixXd rightFootFromPelvisMatrix; rightFootFromPelvisMatrix.resize(1,3);
    // SymFunction::footPositionLeft(leftFootFromPelvisMatrix,qIn);
    // SymFunction::footPositionRight(rightFootFromPelvisMatrix,qIn);
    // Convert to vector
    // VectorXd leftFootFromPelvis(3), rightFootFromPelvis(3);
    // leftFootFromPelvis = leftFootFromPelvisMatrix.row(0);
    // rightFootFromPelvis = rightFootFromPelvisMatrix.row(0);

    // Does nothing if initialized already
    this->initialize(t, qIn, contactIn, leftFootFromPelvis, rightFootFromPelvis);

    // Update timer
    double dt = t - tprev;
    this->tprev = t;

    // Break out contact as switch
    double lC = contactIn(0); 
    double rC = contactIn(1);

    // If filter enabled, run
    MatrixXd X(3,5);
    if (this->isInitialized && this->enabled){
        // Update contacts
        // compute the prediction step
        this->ekf_predict(aIn,dt,lC,rC);

        if (lC > 0.1 || rC > 0.1){
            // Compute the measurement
            this->ekf_update(dt,qIn,leftFootFromPelvis,rightFootFromPelvis);
        }
        X = this->x_hat;
    } else {
        X.setZero();
    }

    VectorXd p, v, pLfoot, pRfoot, ba;
    this->unpackState(X,p,v,pLfoot,pRfoot,ba);
    this->pOut = p;
    this->vOut = v;
    this->pLfootOut = pLfoot;
    this->pRfootOut = pRfoot;
    this->baOut = ba;

    // Aligning the velocities w.r.t. the coronal and sagital plane
    // Matrix3d Rz; Rz.resize(3,3);
    // this->getRotationMatrixZYX(Rz,yaw,0.0,0.0);
    // this->vOut = Rz.transpose()*this->vOut;
}

void basic_contact_ekf::initialize(double t, VectorXd& q, VectorXd& contact, VectorXd& leftPos, VectorXd& rightPos){
    // We initialize if time has passed and if both feet are in contact with the ground
    if (!this->isInitialized && t > 0.01){
        if (contact(0) > 0.2 && contact(1) > 0.2){
            VectorXd plf(3);
            VectorXd prf(3);
            plf = this->R*leftPos;
            prf = this->R*rightPos;

            this->x_hat(2,0) = -(plf(2) + prf(2))/2.0;
            this->x_hat.col(2) = this->x_hat.col(0) + plf;
            this->x_hat.col(3) = this->x_hat.col(0) + prf;

            this->isInitialized = true;
        } else {
            // Don't start filter until both feet touch the ground
            return;
        }
    }
}

void basic_contact_ekf::ekf_predict(VectorXd& accMeasured, double dt, double lC, double rC){
    VectorXd pm(3), vm(3), plfm(3), prfm(3), bam(3);
    this->unpackState(this->x_hat,pm,vm,plfm,prfm,bam);

    // Sensor model
    VectorXd a = accMeasured - bam;

    // Propagate the state
    VectorXd p(3), v(3), plf(3), prf(3), ba(3);
    p = pm + vm*dt + 0.5*(this->R*a + this->g)*dt*dt;
    v = vm + (this->R*a + this->g)*dt;
    ba = bam;
    plf = plfm;
    prf = prfm;

    // Compute linearization  dx = Fk*dx + L*(d process noise)
    //       p             v           plf         prf         ba
    // Ft = [eye(3),  eye(3)*dt,     zeros(3),   zeros(3),  -obj.R*dt^2/2; % zeros(3); ...
    //       zeros(3),   eye(3),     zeros(3),   zeros(3),   -obj.R*dt; ...
    //       zeros(3),   zeros(3),    eye(3),   zeros(3),  zeros(3); ...
    //       zeros(3),   zeros(3),    zeros(3),   eye(3),  zeros(3); ...
    //       zeros(3),   zeros(3),    zeros(3),   zeros(3),  eye(3)];
    MatrixXd eye3 = MatrixXd::Identity(3,3);
    MatrixXd Ft(15,15); Ft.setZero();
    Ft.block(0,0,3,3)   = eye3;
    Ft.block(3,3,3,3)   = eye3;
    Ft.block(6,6,3,3)   = eye3;
    Ft.block(9,9,3,3)   = eye3;
    Ft.block(12,12,3,3) = eye3;

    Ft.block(0,3,3,3)   = eye3*dt;
    Ft.block(0,12,3,3)  = -this->R*(dt*dt/2.0);
    Ft.block(3,12,3,3)  = -this->R*dt;
    
    MatrixXd Qc_ = this->Qc;

    if (lC < rC){
        Qc_.block(6,6,3,3) = 1000000*eye3;
        Qc_.block(9,9,3,3) = this->Qpf*eye3;
    } else {
        Qc_.block(6,6,3,3) = this->Qpf*eye3;
        Qc_.block(9,9,3,3) = 1000000*eye3;
    }

    this->P = Ft*this->P*Ft.transpose() + Qc_;

    // pack the state to use in ekf_update
    this->packState(this->x_hat,p,v,plf,prf,ba);

    // std::cout << "predict: " << this->x_hat(1,2) << std::endl;
}

void basic_contact_ekf::ekf_update(double dt, VectorXd& qIn, VectorXd& plf_enc, VectorXd& prf_enc){
    // Compute h(x,z)
    VectorXd p(3), v(3), plf(3), prf(3), ba(3);
    this->unpackState(this->x_hat,p,v,plf,prf,ba);
    
    // Get the left foot and right foot jacobian
    MatrixXd Lf(6,1), Rf(6,1);
    VectorXd q(22); q.setZero();
    VectorXi qIdx(14);
    qIdx << 6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 18, 19, 21;
    for (int i=0; i<14; i++){
        q(qIdx(i)) = qIn(i);
    }
    MatrixXd JLf(6,22), JRf(6,22);
    SymFunction::J_leftFoot(JLf,q);
    SymFunction::J_rightFoot(JRf,q);
    // Resize to only get positional rows
    MatrixXd J_lf(3,22), J_rf(3,22);
    J_lf = JLf.block(0,0,3,22);
    J_rf = JRf.block(0,0,3,22);

    // // Compute Jacobians
    // MatrixXd J_lf(3,22), J_rf(3,22);
    // // Symbolic equations see MATLAB
    // SymFunction::J_footPositionLeft(J_lf,qIn);
    // SymFunction::J_footPositionRight(J_rf,qIn);

    // Encoder mappings
    VectorXd iEncLeft(7), iEncRight(7);
    iEncLeft  << 6,  7,  8,  9,  10, 11, 13;        // 12 = left heel spring
    iEncRight << 14, 15, 16, 17, 18, 19, 21;    // 20 = right heel spring
    MatrixXd J_computed_lf(3,7), J_computed_rf(3,7);
    for (int i=0; i<7; i++){
        J_computed_lf.block(0,i,3,1) = J_lf.block(0,iEncLeft(i),3,1);
        J_computed_rf.block(0,i,3,1) = J_rf.block(0,iEncRight(i),3,1);
    }

    VectorXd y(6); y.setZero();
    y.segment(0,3) = this->R*plf_enc - (plf - p);
    y.segment(3,3) = this->R*prf_enc - (prf - p);

    // Compute covariance from encoders
    MatrixXd Rc(6,6); Rc.setZero();
    Rc.block(0,0,3,3) = this->R*J_computed_lf*this->Renc*J_computed_lf.transpose();
    Rc.block(3,3,3,3) = this->R*J_computed_rf*this->Renc*J_computed_rf.transpose();

    MatrixXd eye3 = MatrixXd::Identity(3,3);
    MatrixXd Hk(6,15); Hk.setZero();
    Hk.block(0,0,3,3) = -eye3;
    Hk.block(3,0,3,3) = -eye3;
    Hk.block(0,6,3,3) = eye3;
    Hk.block(3,9,3,3) = eye3;

    // Kalman gain
    MatrixXd Sk(6,6);
    MatrixXd K(15,6);
    VectorXd dx(15);

    Sk = Hk*this->P*Hk.transpose() + Rc;
    K  = (this->P*Hk.transpose())*Sk.inverse();
    dx = K*y;
    this->P = (MatrixXd::Identity(15,15) - K*Hk)*this->P;

    // Pack state
    this->x_hat.col(0) += dx.segment(0,3);  // p
    this->x_hat.col(1) += dx.segment(3,3);  // v
    this->x_hat.col(2) += dx.segment(6,3);  // plf
    this->x_hat.col(3) += dx.segment(9,3);  // prf
    this->x_hat.col(4) += dx.segment(12,3); // ba

    // std::cout << "update:  " << this->x_hat(1,2) << std::endl;
}

void basic_contact_ekf::getRotationMatrixXYZ(Matrix3d& R, double alpha, double beta, double gamma){
    // ZYX
    Matrix3d Rx, Ry, Rz;
    Rz << cos(gamma), -sin(gamma), 0.0,
          sin(gamma),  cos(gamma), 0.0,
          0.0,         0.0,        1.0;

    Ry << cos(beta), 0.0, -sin(beta),
          0.0,       1.0,  0.0,
          sin(beta), 0.0,  cos(beta);

    Rx << 1.0, 0.0,         0.0,
          0.0, cos(alpha), -sin(alpha),
          0.0, sin(alpha),  cos(alpha);

    R = Rz*Ry*Rx;
}

void basic_contact_ekf::getRotationMatrixZYX(Matrix3d& R, double alpha, double beta, double gamma){
    // ZYX
    Matrix3d Rx, Ry, Rz;
    Rz << cos(alpha), -sin(alpha), 0.0,
          sin(alpha),  cos(alpha), 0.0,
          0.0,         0.0,        1.0;

    Ry << cos(beta), 0.0, -sin(beta),
          0.0,       1.0,  0.0,
          sin(beta), 0.0,  cos(beta);

    Rx << 1.0, 0.0,         0.0,
          0.0, cos(gamma), -sin(gamma),
          0.0, sin(gamma),  cos(gamma);

    R = Rx*Ry*Rz;
}

void basic_contact_ekf::resetImpl(){
    MatrixXd tmpI = MatrixXd::Identity(3,3);
    P.resize(15,15); P.setZero();

    P.block(0,0,3,3) = init_position_std*init_position_std*tmpI;
    P.block(3,3,3,3) = init_velocity_std*init_velocity_std*tmpI;
    P.block(6,6,3,3) = init_foothold_std*init_foothold_std*tmpI;
    P.block(9,9,3,3) = init_foothold_std*init_foothold_std*tmpI;
    P.block(12,12,3,3) = init_acc_bias_std*init_acc_bias_std*tmpI;

    x_hat.resize(3,5); x_hat.setZero();

    isInitialized = false;
}

void basic_contact_ekf::unpackState(MatrixXd& x, VectorXd& p, VectorXd& v, VectorXd& plf, VectorXd& prf, VectorXd& ba){
    p.resize(3); v.resize(3); plf.resize(3); prf.resize(3); ba.resize(3);
    p   = x.col(0);
    v   = x.col(1);
    plf = x.col(2);
    prf = x.col(3);
    ba  = x.col(4);

}
void basic_contact_ekf::packState(MatrixXd& x, VectorXd& p, VectorXd& v, VectorXd& plf, VectorXd& prf, VectorXd& ba){
    x.resize(3,5); x.setZero();
    x.col(0) = p;
    x.col(1) = v;
    x.col(2) = plf;
    x.col(3) = prf;
    x.col(4) = ba;
}

void basic_contact_ekf::getValues(VectorXd& p, VectorXd& v, VectorXd& pLfoot, VectorXd& pRfoot, VectorXd& ba){
    p.resize(3); v.resize(3); pLfoot.resize(3); pRfoot.resize(3); ba.resize(3);
    p = this->pOut;
    v = this->vOut;
    pLfoot = this->pLfootOut;
    pRfoot = this->pRfootOut;
    ba = this->baOut;
}