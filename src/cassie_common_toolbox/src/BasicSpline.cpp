#include <cassie_common_toolbox/BasicSpline.hpp>

BasicSpline::BasicSpline(){
    this->xData.resize(1);
    this->zData.resize(1);
    this->dzData.resize(1);
    this->xPoints.resize(1,2);
}

BasicSpline::BasicSpline(Eigen::VectorXd xData, Eigen::VectorXd zData, Eigen::VectorXd dzData){
    this->xData.resize(xData.size());
    this->zData.resize(zData.size());
    this->dzData.resize(dzData.size());
    this->xPoints.resize(xData.size()-1,2);

    this->xData = xData;
    this->zData = zData;
    this->dzData = dzData;

    this->compute();
}

BasicSpline::BasicSpline(Eigen::VectorXd time_norm, Eigen::VectorXd zData, double accuracy, bool continuous){
    this->xData.resize(time_norm.size());
    this->zData.resize(zData.size());

    this->xData = time_norm;
    this->zData = zData;

    // This creates a spline and tests the accuracy iteratively until reached
    // then we overwrite the internal data of xData, zData, and dzData, and resize xPoints
    this->fitWithAccuracy(accuracy, continuous);
    
    // Now we call compute to create the spline as if nothing happens, after all,
    // we changed x, z, and dz so it is as if we have the basic constructor above!
    this->compute();
}

void BasicSpline::compute(){
    double x0, x1, z0, z1, dz0, dz1;

    std::vector<Eigen::MatrixXd> Acell;
    Eigen::VectorXd b;

    for (int i=0; i<xData.size()-1; i++){
        x0 = xData(i);
        x1 = xData(i+1);
        z0 = zData(i);
        z1 = zData(i+1);
        dz0 = dzData(i);
        dz1 = dzData(i+1);

        // Points in which we should use this specific spline
        xPoints(i,0) = x0;
        xPoints(i,1) = x1;

        Eigen::MatrixXd Ablock;
        Ablock.resize(4,4);
        Ablock.setZero();
        Ablock << pow(x0,3),   pow(x0,2), x0, 1,
                  pow(x1,3),   pow(x1,2), x1, 1,
                  3*pow(x0,2), 2*x0,      1,  0,
                  3*pow(x1,2), 2*x1,      1,  0;

        Eigen::VectorXd bblock;
        bblock.resize(4);
        bblock << z0,
                  z1,
                  dz0,
                  dz1;

        Acell.push_back(Ablock);

        Eigen::VectorXd bTemp = b;
        b.resize(b.size()+bblock.size());
        b << bTemp, bblock;
    }
    // Fill in the individual blocks to a larger matrix
    Eigen::MatrixXd A(1,1);
    A.resize(4*(xData.size()-1),4*(xData.size()-1));
    A.setZero();
    for (unsigned i=0; i<Acell.size(); i++){
        A.block<4,4>(i*4,i*4) = Acell[i];
    }

    // Eigen::VectorXd pTmp = A.inverse()*b;
    this->p = A.inverse()*b;
    this->A = A;
    this->b = b;
}


// Fit a cubic spline with a given accuracy (rms error), adds interpolation points
// until either the accuracy is obtained or we have more interpolation points than
// halve the number of points in the data set. 'continuous' indicates whether the 
// derivative at the beginning and end should be the same (continuous walking gaits)
void BasicSpline::fitWithAccuracy(double accuracy, bool continuous){
    double error = accuracy + 1.0;
    int numPoints = 2;

    Eigen::VectorXd x0, z0, dz0;
    while (error > accuracy){
        // Create the spacing for the interpolation points
        x0 = Eigen::VectorXd::LinSpaced(numPoints,this->xData(0),this->xData(this->xData.size()-1));
        Eigen::VectorXd idxs; idxs.resize(numPoints); idxs.setZero();
        // For each spline point, find the index in the data array that is closest
        for (int i=0; i<numPoints; i++){
            Eigen::VectorXd x0Idxs; x0Idxs.resize(this->xData.size()); x0Idxs.setConstant(x0(i));
            Eigen::VectorXd diff = this->xData - x0Idxs;
            diff = diff.cwiseAbs();

            double minimum = diff(0);
            int location = 0;
            for (int ii=0; ii<diff.size(); ii++){
                if (diff(ii) < minimum){
                    minimum = diff(ii);
                    location = ii;
                }
            }
            // And add it to the idxs vector, containing which indexes to index
            // in the xData and zData array
            idxs(i) = location;
        }
        // std::cout << "idxs: " << idxs << std::endl;

        // Get the z values at the points of interest
        z0.resize(idxs.size());
        for (int i=0; i<z0.size(); i++){
            z0(i) = this->zData(idxs(i));
        }

        // And get the derivatives at the points of interest, smooth so +1 or -1 (if at end)
        dz0.resize(idxs.size());
        for (int i=0; i<idxs.size(); i++){
            if (idxs(i) < this->zData.size()-1){
                dz0(i) = (this->zData(idxs(i)+1) - this->zData(idxs(i))) / (this->xData(idxs(i)+1) - this->xData(idxs(i)));
            } else {
                dz0(i) = (this->zData(idxs(i)) - this->zData(idxs(i)-1)) / (this->xData(idxs(i)) - this->xData(idxs(i)-1));
            }  
        }  
        if (continuous){
            dz0(dz0.size()-1) = dz0(0);
        }
        
        // Create the temporary spline
        // std::cout << "x0: " << x0 << std::endl;
        // std::cout << "z0: " << z0 << std::endl;
        // std::cout << "dz0: " << dz0 << std::endl;
        BasicSpline spline_tmp = BasicSpline(x0,z0,dz0);
        // Evaluate on the xdata
        Eigen::VectorXd spline_tmp_ydata = spline_tmp.evaluate(this->xData,0);

        // Are we accurate enough?
        Eigen::VectorXd diff = spline_tmp_ydata - this->zData;
        Eigen::VectorXd errors(diff.size());
        for (int i=0; i<diff.size(); i++){
            errors(i) = sqrt(diff(i)*diff(i));
        }
        double error = errors.mean();
        // std::cout << "error: " << error << std::endl;
        // std::cout << "accuracy: " << accuracy << std::endl;
        // std::cout << "round: " << round(this->xData.size()/2)+1 << std::endl;

        numPoints += 1;

        if (numPoints > round(this->xData.size()/2.0)+1 || error < accuracy){
            break;
        }
    }
    // We're successfull so overwrite the internal data
    this->xData.resize(x0.size());
    this->zData.resize(z0.size());
    this->dzData.resize(dz0.size());
    this->xPoints.resize(x0.size()-1,2);

    this->xData = x0;
    this->zData = z0;
    this->dzData = dz0;
}

// Core eval
double BasicSpline::evaluate(double &x, const int &order){
    int cnt = 0;
    double result;
    // Find which spline we need to consider (inbetween two interp points)
    for (int i=0; i<this->xPoints.rows(); i++){
        if (x >= this->xPoints(i,0) && x <= this->xPoints(i,1)){
            cnt = i;
            break;
        }
    }

    // Then get the parameters for that specific spline
    Eigen::Vector4d pCnt;
    for (int i=0; i<4; i++){
        pCnt(i) = this->p(cnt*4+i);
    }

    switch (order){
        case 0 :
            result = pCnt(0)*pow(x,3) + pCnt(1)*pow(x,2) + pCnt(2)*x + pCnt(3);
            break;
        case 1 :
            result = 3*pCnt(0)*pow(x,2) + 2*pCnt(1)*x + pCnt(2);
            break;
        case 2 :
            result = 6*pCnt(0)*x + 2*pCnt(1);
            break;
        case 3 :
            result = 6*pCnt(0);
            break;
        default :
            result = 0.0;
    }
    return result;
}

std::vector<double> BasicSpline::evaluate(std::vector<double> &x, const int &order){
    std::vector<double> result;
    for (unsigned i=0; i<x.size(); i++){
        result.push_back(this->evaluate(x[i],order));
    }
    return result;
}

Eigen::VectorXd BasicSpline::evaluate(Eigen::VectorXd &x, const int &order){
    Eigen::VectorXd result(x.size());
    for (int i=0; i<x.size(); i++){
        result(i) = this->evaluate(x(i),order);
    }
    return result;
}