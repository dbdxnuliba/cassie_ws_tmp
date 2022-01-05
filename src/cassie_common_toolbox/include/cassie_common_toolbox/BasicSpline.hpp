#ifndef BASICSPLINE_HPP
#define BASICSPLINE_HPP

#include <iostream>
#include <vector>

#include <eigen3/Eigen/Dense>

class BasicSpline {
public:
    BasicSpline();
    BasicSpline(Eigen::VectorXd xData, Eigen::VectorXd zData, Eigen::VectorXd dzData);
    BasicSpline(Eigen::VectorXd time_norm, Eigen::VectorXd zData, double accuracy, bool continuous=false);
    double evaluate(double &x, const int &order=0);
    std::vector<double> evaluate(std::vector<double> &x, const int &order=0);
    Eigen::VectorXd evaluate(Eigen::VectorXd &x, const int &order=0);

private:
    void compute();
    void fitWithAccuracy(double accuracy, bool continuous);

public: // fuck safety
    Eigen::VectorXd xData;
    Eigen::VectorXd zData;
    Eigen::VectorXd dzData;
    Eigen::MatrixXd xPoints;
    
    Eigen::MatrixXd p;
    Eigen::MatrixXd A;
    Eigen::MatrixXd b;
};

#endif