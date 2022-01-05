#include <cassie_common_toolbox/bezier_tools.hpp>
#ifndef SPLINES_HLIP_HPP
#define SPLINES_HLIP_HPP


void OUTPUT_SLIP::Splines::createDebugSplines(){

Eigen::VectorXd x_SSP1_zcom(2), z_SSP1_zcom(2), dz_SSP1_zcom(2);
x_SSP1_zcom << 0.000000, 1.000000;
z_SSP1_zcom << 0.725000, 0.725000;
dz_SSP1_zcom << 0.000000, 0.000000;
BasicSpline SSP1_zcom(x_SSP1_zcom,z_SSP1_zcom,dz_SSP1_zcom);
debugSplines.zcom.push_back(SSP1_zcom);

Eigen::VectorXd x_SSP1_xsw(5), z_SSP1_xsw(5), dz_SSP1_xsw(5);
x_SSP1_xsw << 0.000000, 0.250000, 0.500000, 0.750000, 1.000000;
z_SSP1_xsw << -0.007246, -0.017010, -0.035870, -0.035232, -0.004020;
dz_SSP1_xsw << -0.008549, -0.076658, -0.042712, 0.115484, 0.124393;
BasicSpline SSP1_xsw(x_SSP1_xsw,z_SSP1_xsw,dz_SSP1_xsw);
debugSplines.xsw.push_back(SSP1_xsw);

Eigen::VectorXd x_SSP1_xcom(2), z_SSP1_xcom(2), dz_SSP1_xcom(2);
x_SSP1_xcom << 0.000000, 1.000000;
z_SSP1_xcom << 0.017421, 0.039939;
dz_SSP1_xcom << -0.009030, 0.068534;
BasicSpline SSP1_xcom(x_SSP1_xcom,z_SSP1_xcom,dz_SSP1_xcom);
debugSplines.xcom.push_back(SSP1_xcom);

Eigen::VectorXd x_SSP1_dzcom(2), z_SSP1_dzcom(2), dz_SSP1_dzcom(2);
x_SSP1_dzcom << 0.000000, 1.000000;
z_SSP1_dzcom << 0.000000, 0.000000;
dz_SSP1_dzcom << 0.000000, 0.000000;
BasicSpline SSP1_dzcom(x_SSP1_dzcom,z_SSP1_dzcom,dz_SSP1_dzcom);
debugSplines.dzcom.push_back(SSP1_dzcom);

Eigen::VectorXd x_SSP1_dxsw(3), z_SSP1_dxsw(3), dz_SSP1_dxsw(3);
x_SSP1_dxsw << 0.000000, 0.500000, 1.000000;
z_SSP1_dxsw << -0.000408, -0.211444, 0.323213;
dz_SSP1_dxsw << -0.573594, 0.738362, 0.520548;
BasicSpline SSP1_dxsw(x_SSP1_dxsw,z_SSP1_dxsw,dz_SSP1_dxsw);
debugSplines.dxsw.push_back(SSP1_dxsw);

Eigen::VectorXd x_SSP1_dxcom(2), z_SSP1_dxcom(2), dz_SSP1_dxcom(2);
x_SSP1_dxcom << 0.000000, 1.000000;
z_SSP1_dxcom << -0.013283, 0.162925;
dz_SSP1_dxcom << -0.142085, 0.008078;
BasicSpline SSP1_dxcom(x_SSP1_dxcom,z_SSP1_dxcom,dz_SSP1_dxcom);
debugSplines.dxcom.push_back(SSP1_dxcom);

Eigen::VectorXd x_SSP1_ddzcom(4), z_SSP1_ddzcom(4), dz_SSP1_ddzcom(4);
x_SSP1_ddzcom << 0.000000, 0.333333, 0.666667, 1.000000;
z_SSP1_ddzcom << -0.000197, 0.014911, -0.004416, 0.000181;
dz_SSP1_ddzcom << 0.044672, -0.105705, 0.011214, -0.053714;
BasicSpline SSP1_ddzcom(x_SSP1_ddzcom,z_SSP1_ddzcom,dz_SSP1_ddzcom);
debugSplines.ddzcom.push_back(SSP1_ddzcom);

Eigen::VectorXd x_SSP1_ddxsw(6), z_SSP1_ddxsw(6), dz_SSP1_ddxsw(6);
x_SSP1_ddxsw << 0.000000, 0.200000, 0.400000, 0.600000, 0.800000, 1.000000;
z_SSP1_ddxsw << -7.372920, -4.873430, -3.882240, -3.920660, -5.161690, -7.630900;
dz_SSP1_ddxsw << 15.199784, 6.808893, 1.131889, -5.501989, -10.822948, -13.712692;
BasicSpline SSP1_ddxsw(x_SSP1_ddxsw,z_SSP1_ddxsw,dz_SSP1_ddxsw);
debugSplines.ddxsw.push_back(SSP1_ddxsw);

Eigen::VectorXd x_SSP1_ddxcom(2), z_SSP1_ddxcom(2), dz_SSP1_ddxcom(2);
x_SSP1_ddxcom << 0.000000, 1.000000;
z_SSP1_ddxcom << 0.000000, 0.000000;
dz_SSP1_ddxcom << 0.000000, 0.000000;
BasicSpline SSP1_ddxcom(x_SSP1_ddxcom,z_SSP1_ddxcom,dz_SSP1_ddxcom);
debugSplines.ddxcom.push_back(SSP1_ddxcom);

debugSplines.timeMin.push_back(0);
debugSplines.timeMax.push_back(0.396);


Eigen::VectorXd x_SSP2_zcom(2), z_SSP2_zcom(2), dz_SSP2_zcom(2);
x_SSP2_zcom << 0.000000, 1.000000;
z_SSP2_zcom << 0.725000, 0.725000;
dz_SSP2_zcom << 0.000000, 0.000000;
BasicSpline SSP2_zcom(x_SSP2_zcom,z_SSP2_zcom,dz_SSP2_zcom);
debugSplines.zcom.push_back(SSP2_zcom);

Eigen::VectorXd x_SSP2_xsw(8), z_SSP2_xsw(8), dz_SSP2_xsw(8);
x_SSP2_xsw << 0.000000, 0.142857, 0.285714, 0.428571, 0.571429, 0.714286, 0.857143, 1.000000;
z_SSP2_xsw << 0.012776, 0.012819, 0.016035, 0.036127, 0.080477, 0.155365, 0.250924, 0.337103;
dz_SSP2_xsw << -0.000127, 0.012440, 0.111064, 0.273755, 0.509041, 0.700794, 0.610822, 0.571669;
BasicSpline SSP2_xsw(x_SSP2_xsw,z_SSP2_xsw,dz_SSP2_xsw);
debugSplines.xsw.push_back(SSP2_xsw);

Eigen::VectorXd x_SSP2_xcom(2), z_SSP2_xcom(2), dz_SSP2_xcom(2);
x_SSP2_xcom << 0.000000, 1.000000;
z_SSP2_xcom << 0.053215, 0.213780;
dz_SSP2_xcom << 0.065379, 0.284396;
BasicSpline SSP2_xcom(x_SSP2_xcom,z_SSP2_xcom,dz_SSP2_xcom);
debugSplines.xcom.push_back(SSP2_xcom);

Eigen::VectorXd x_SSP2_dzcom(2), z_SSP2_dzcom(2), dz_SSP2_dzcom(2);
x_SSP2_dzcom << 0.000000, 1.000000;
z_SSP2_dzcom << 0.000000, 0.000000;
dz_SSP2_dzcom << 0.000000, 0.000000;
BasicSpline SSP2_dzcom(x_SSP2_dzcom,z_SSP2_dzcom,dz_SSP2_dzcom);
debugSplines.dzcom.push_back(SSP2_dzcom);

Eigen::VectorXd x_SSP2_dxsw(4), z_SSP2_dxsw(4), dz_SSP2_dxsw(4);
x_SSP2_dxsw << 0.000000, 0.333333, 0.666667, 1.000000;
z_SSP2_dxsw << -0.000002, 0.229592, 1.325620, 1.587530;
dz_SSP2_dxsw << 0.009734, 3.027666, 1.933722, 0.603076;
BasicSpline SSP2_dxsw(x_SSP2_dxsw,z_SSP2_dxsw,dz_SSP2_dxsw);
debugSplines.dxsw.push_back(SSP2_dxsw);

Eigen::VectorXd x_SSP2_dxcom(3), z_SSP2_dxcom(3), dz_SSP2_dxcom(3);
x_SSP2_dxcom << 0.000000, 0.500000, 1.000000;
z_SSP2_dxcom << 0.328416, 0.356062, 0.747795;
dz_SSP2_dxcom << -2.036799, 0.785536, 0.675226;
BasicSpline SSP2_dxcom(x_SSP2_dxcom,z_SSP2_dxcom,dz_SSP2_dxcom);
debugSplines.dxcom.push_back(SSP2_dxcom);

Eigen::VectorXd x_SSP2_ddzcom(8), z_SSP2_ddzcom(8), dz_SSP2_ddzcom(8);
x_SSP2_ddzcom << 0.000000, 0.142857, 0.285714, 0.428571, 0.571429, 0.714286, 0.857143, 1.000000;
z_SSP2_ddzcom << -0.000383, 0.007272, 0.003886, 0.007827, -0.005658, -0.026628, 0.011072, 0.000223;
dz_SSP2_ddzcom << 0.117250, 0.014464, 0.051674, -0.083984, -0.072106, 0.199019, -0.074922, -0.010630;
BasicSpline SSP2_ddzcom(x_SSP2_ddzcom,z_SSP2_ddzcom,dz_SSP2_ddzcom);
debugSplines.ddzcom.push_back(SSP2_ddzcom);

Eigen::VectorXd x_SSP2_ddxsw(5), z_SSP2_ddxsw(5), dz_SSP2_ddxsw(5);
x_SSP2_ddxsw << 0.000000, 0.250000, 0.500000, 0.750000, 1.000000;
z_SSP2_ddxsw << -7.685610, -5.102400, -3.852990, -4.675150, -7.630900;
dz_SSP2_ddxsw << 11.834921, 7.708897, -0.825659, -10.032809, -13.363704;
BasicSpline SSP2_ddxsw(x_SSP2_ddxsw,z_SSP2_ddxsw,dz_SSP2_ddxsw);
debugSplines.ddxsw.push_back(SSP2_ddxsw);

Eigen::VectorXd x_SSP2_ddxcom(2), z_SSP2_ddxcom(2), dz_SSP2_ddxcom(2);
x_SSP2_ddxcom << 0.000000, 1.000000;
z_SSP2_ddxcom << 0.000000, 0.000000;
dz_SSP2_ddxcom << 0.000000, 0.000000;
BasicSpline SSP2_ddxcom(x_SSP2_ddxcom,z_SSP2_ddxcom,dz_SSP2_ddxcom);
debugSplines.ddxcom.push_back(SSP2_ddxcom);

debugSplines.timeMin.push_back(0);
debugSplines.timeMax.push_back(0.3985);


Eigen::VectorXd x_SSP3_zcom(2), z_SSP3_zcom(2), dz_SSP3_zcom(2);
x_SSP3_zcom << 0.000000, 1.000000;
z_SSP3_zcom << 0.725000, 0.725000;
dz_SSP3_zcom << 0.000000, 0.000000;
BasicSpline SSP3_zcom(x_SSP3_zcom,z_SSP3_zcom,dz_SSP3_zcom);
debugSplines.zcom.push_back(SSP3_zcom);

Eigen::VectorXd x_SSP3_xsw(8), z_SSP3_xsw(8), dz_SSP3_xsw(8);
x_SSP3_xsw << 0.000000, 0.142857, 0.285714, 0.428571, 0.571429, 0.714286, 0.857143, 1.000000;
z_SSP3_xsw << -0.336499, -0.320771, -0.234757, -0.123969, -0.008593, 0.123666, 0.222464, 0.286991;
dz_SSP3_xsw << 0.048196, 0.504176, 0.794607, 0.863957, 0.898222, 0.752706, 0.454217, 0.429678;
BasicSpline SSP3_xsw(x_SSP3_xsw,z_SSP3_xsw,dz_SSP3_xsw);
debugSplines.xsw.push_back(SSP3_xsw);

Eigen::VectorXd x_SSP3_xcom(2), z_SSP3_xcom(2), dz_SSP3_xcom(2);
x_SSP3_xcom << 0.000000, 1.000000;
z_SSP3_xcom << -0.121788, 0.148699;
dz_SSP3_xcom << 0.317121, 0.280475;
BasicSpline SSP3_xcom(x_SSP3_xcom,z_SSP3_xcom,dz_SSP3_xcom);
debugSplines.xcom.push_back(SSP3_xcom);

Eigen::VectorXd x_SSP3_dzcom(2), z_SSP3_dzcom(2), dz_SSP3_dzcom(2);
x_SSP3_dzcom << 0.000000, 1.000000;
z_SSP3_dzcom << 0.000000, 0.000000;
dz_SSP3_dzcom << 0.000000, 0.000000;
BasicSpline SSP3_dzcom(x_SSP3_dzcom,z_SSP3_dzcom,dz_SSP3_dzcom);
debugSplines.dzcom.push_back(SSP3_dzcom);

Eigen::VectorXd x_SSP3_dxsw(6), z_SSP3_dxsw(6), dz_SSP3_dxsw(6);
x_SSP3_dxsw << 0.000000, 0.200000, 0.400000, 0.600000, 0.800000, 1.000000;
z_SSP3_dxsw << 0.000355, 1.067530, 2.304380, 2.621140, 1.969320, 1.371250;
dz_SSP3_dxsw << 2.948632, 8.027278, 2.646892, -2.040060, -4.428704, -1.536838;
BasicSpline SSP3_dxsw(x_SSP3_dxsw,z_SSP3_dxsw,dz_SSP3_dxsw);
debugSplines.dxsw.push_back(SSP3_dxsw);

Eigen::VectorXd x_SSP3_dxcom(2), z_SSP3_dxcom(2), dz_SSP3_dxcom(2);
x_SSP3_dxcom << 0.000000, 1.000000;
z_SSP3_dxcom << 0.644432, 0.783951;
dz_SSP3_dxcom << 0.095991, 0.449203;
BasicSpline SSP3_dxcom(x_SSP3_dxcom,z_SSP3_dxcom,dz_SSP3_dxcom);
debugSplines.dxcom.push_back(SSP3_dxcom);

Eigen::VectorXd x_SSP3_ddzcom(8), z_SSP3_ddzcom(8), dz_SSP3_ddzcom(8);
x_SSP3_ddzcom << 0.000000, 0.142857, 0.285714, 0.428571, 0.571429, 0.714286, 0.857143, 1.000000;
z_SSP3_ddzcom << -0.000922, -0.097213, -0.084171, -0.008214, 0.068740, 0.109204, 0.038814, -0.000171;
dz_SSP3_ddzcom << -0.905825, 0.088229, 0.516683, 0.596285, 0.371963, -0.499987, -0.386373, -0.197431;
BasicSpline SSP3_ddzcom(x_SSP3_ddzcom,z_SSP3_ddzcom,dz_SSP3_ddzcom);
debugSplines.ddzcom.push_back(SSP3_ddzcom);

Eigen::VectorXd x_SSP3_ddxsw(5), z_SSP3_ddxsw(5), dz_SSP3_ddxsw(5);
x_SSP3_ddxsw << 0.000000, 0.250000, 0.500000, 0.750000, 1.000000;
z_SSP3_ddxsw << -7.473450, -4.306040, -3.838890, -4.923630, -7.611850;
dz_SSP3_ddxsw << 15.445754, 4.508979, -2.109445, -8.860934, -12.773244;
BasicSpline SSP3_ddxsw(x_SSP3_ddxsw,z_SSP3_ddxsw,dz_SSP3_ddxsw);
debugSplines.ddxsw.push_back(SSP3_ddxsw);

Eigen::VectorXd x_SSP3_ddxcom(2), z_SSP3_ddxcom(2), dz_SSP3_ddxcom(2);
x_SSP3_ddxcom << 0.000000, 1.000000;
z_SSP3_ddxcom << 0.000000, 0.000000;
dz_SSP3_ddxcom << 0.000000, 0.000000;
BasicSpline SSP3_ddxcom(x_SSP3_ddxcom,z_SSP3_ddxcom,dz_SSP3_ddxcom);
debugSplines.ddxcom.push_back(SSP3_ddxcom);

debugSplines.timeMin.push_back(0);
debugSplines.timeMax.push_back(0.398);


Eigen::VectorXd x_SSP4_zcom(2), z_SSP4_zcom(2), dz_SSP4_zcom(2);
x_SSP4_zcom << 0.000000, 1.000000;
z_SSP4_zcom << 0.725000, 0.725000;
dz_SSP4_zcom << 0.000000, 0.000000;
BasicSpline SSP4_zcom(x_SSP4_zcom,z_SSP4_zcom,dz_SSP4_zcom);
debugSplines.zcom.push_back(SSP4_zcom);

Eigen::VectorXd x_SSP4_xsw(8), z_SSP4_xsw(8), dz_SSP4_xsw(8);
x_SSP4_xsw << 0.000000, 0.142857, 0.285714, 0.428571, 0.571429, 0.714286, 0.857143, 1.000000;
z_SSP4_xsw << -0.300167, -0.292719, -0.231651, -0.132834, -0.028376, 0.075362, 0.151092, 0.202844;
dz_SSP4_xsw << 0.022668, 0.327820, 0.745343, 0.696729, 0.733474, 0.551180, 0.380758, 0.342639;
BasicSpline SSP4_xsw(x_SSP4_xsw,z_SSP4_xsw,dz_SSP4_xsw);
debugSplines.xsw.push_back(SSP4_xsw);

Eigen::VectorXd x_SSP4_xcom(2), z_SSP4_xcom(2), dz_SSP4_xcom(2);
x_SSP4_xcom << 0.000000, 1.000000;
z_SSP4_xcom << -0.149577, 0.101190;
dz_SSP4_xcom << 0.259451, 0.234913;
BasicSpline SSP4_xcom(x_SSP4_xcom,z_SSP4_xcom,dz_SSP4_xcom);
debugSplines.xcom.push_back(SSP4_xcom);

Eigen::VectorXd x_SSP4_dzcom(2), z_SSP4_dzcom(2), dz_SSP4_dzcom(2);
x_SSP4_dzcom << 0.000000, 1.000000;
z_SSP4_dzcom << 0.000000, 0.000000;
dz_SSP4_dzcom << 0.000000, 0.000000;
BasicSpline SSP4_dzcom(x_SSP4_dzcom,z_SSP4_dzcom,dz_SSP4_dzcom);
debugSplines.dzcom.push_back(SSP4_dzcom);

Eigen::VectorXd x_SSP4_dxsw(5), z_SSP4_dxsw(5), dz_SSP4_dxsw(5);
x_SSP4_dxsw << 0.000000, 0.250000, 0.500000, 0.750000, 1.000000;
z_SSP4_dxsw << 0.000135, 1.029000, 2.074230, 1.786340, 1.055780;
dz_SSP4_dxsw << 1.689807, 6.606524, 0.454941, -4.000551, -1.377574;
BasicSpline SSP4_dxsw(x_SSP4_dxsw,z_SSP4_dxsw,dz_SSP4_dxsw);
debugSplines.dxsw.push_back(SSP4_dxsw);

Eigen::VectorXd x_SSP4_dxcom(2), z_SSP4_dxcom(2), dz_SSP4_dxcom(2);
x_SSP4_dxcom << 0.000000, 1.000000;
z_SSP4_dxcom << 0.714699, 0.643396;
dz_SSP4_dxcom << -0.312097, 0.214589;
BasicSpline SSP4_dxcom(x_SSP4_dxcom,z_SSP4_dxcom,dz_SSP4_dxcom);
debugSplines.dxcom.push_back(SSP4_dxcom);

Eigen::VectorXd x_SSP4_ddzcom(8), z_SSP4_ddzcom(8), dz_SSP4_ddzcom(8);
x_SSP4_ddzcom << 0.000000, 0.142857, 0.285714, 0.428571, 0.571429, 0.714286, 0.857143, 1.000000;
z_SSP4_ddzcom << 0.000040, 0.010202, -0.006422, 0.000024, 0.001196, -0.006499, 0.031363, 0.000736;
dz_SSP4_ddzcom << 0.222034, 0.042501, 0.075111, 0.025247, -0.041735, 0.240612, -0.135515, -0.306241;
BasicSpline SSP4_ddzcom(x_SSP4_ddzcom,z_SSP4_ddzcom,dz_SSP4_ddzcom);
debugSplines.ddzcom.push_back(SSP4_ddzcom);

Eigen::VectorXd x_SSP4_ddxsw(6), z_SSP4_ddxsw(6), dz_SSP4_ddxsw(6);
x_SSP4_ddxsw << 0.000000, 0.200000, 0.400000, 0.600000, 0.800000, 1.000000;
z_SSP4_ddxsw << -7.502500, -4.947190, -3.824940, -4.058470, -5.291360, -7.630900;
dz_SSP4_ddxsw << 12.585997, 7.925970, 0.049033, -5.096185, -10.456812, -12.977966;
BasicSpline SSP4_ddxsw(x_SSP4_ddxsw,z_SSP4_ddxsw,dz_SSP4_ddxsw);
debugSplines.ddxsw.push_back(SSP4_ddxsw);

Eigen::VectorXd x_SSP4_ddxcom(2), z_SSP4_ddxcom(2), dz_SSP4_ddxcom(2);
x_SSP4_ddxcom << 0.000000, 1.000000;
z_SSP4_ddxcom << 0.000000, 0.000000;
dz_SSP4_ddxcom << 0.000000, 0.000000;
BasicSpline SSP4_ddxcom(x_SSP4_ddxcom,z_SSP4_ddxcom,dz_SSP4_ddxcom);
debugSplines.ddxcom.push_back(SSP4_ddxcom);

debugSplines.timeMin.push_back(0);
debugSplines.timeMax.push_back(0.3985);


Eigen::VectorXd x_SSP5_zcom(2), z_SSP5_zcom(2), dz_SSP5_zcom(2);
x_SSP5_zcom << 0.000000, 1.000000;
z_SSP5_zcom << 0.725000, 0.725000;
dz_SSP5_zcom << 0.000000, 0.000000;
BasicSpline SSP5_zcom(x_SSP5_zcom,z_SSP5_zcom,dz_SSP5_zcom);
debugSplines.zcom.push_back(SSP5_zcom);

Eigen::VectorXd x_SSP5_xsw(8), z_SSP5_xsw(8), dz_SSP5_xsw(8);
x_SSP5_xsw << 0.000000, 0.142857, 0.285714, 0.428571, 0.571429, 0.714286, 0.857143, 1.000000;
z_SSP5_xsw << -0.213676, -0.208167, -0.164005, -0.062954, 0.024036, 0.101393, 0.174573, 0.227222;
dz_SSP5_xsw << 0.018245, 0.224541, 0.713693, 0.625976, 0.527897, 0.566648, 0.370785, 0.353012;
BasicSpline SSP5_xsw(x_SSP5_xsw,z_SSP5_xsw,dz_SSP5_xsw);
debugSplines.xsw.push_back(SSP5_xsw);

Eigen::VectorXd x_SSP5_xcom(2), z_SSP5_xcom(2), dz_SSP5_xcom(2);
x_SSP5_xcom << 0.000000, 1.000000;
z_SSP5_xcom << -0.110415, 0.119432;
dz_SSP5_xcom << 0.236823, 0.220088;
BasicSpline SSP5_xcom(x_SSP5_xcom,z_SSP5_xcom,dz_SSP5_xcom);
debugSplines.xcom.push_back(SSP5_xcom);

Eigen::VectorXd x_SSP5_dzcom(2), z_SSP5_dzcom(2), dz_SSP5_dzcom(2);
x_SSP5_dzcom << 0.000000, 1.000000;
z_SSP5_dzcom << 0.000000, 0.000000;
dz_SSP5_dzcom << 0.000000, 0.000000;
BasicSpline SSP5_dzcom(x_SSP5_dzcom,z_SSP5_dzcom,dz_SSP5_dzcom);
debugSplines.dzcom.push_back(SSP5_dzcom);

Eigen::VectorXd x_SSP5_dxsw(5), z_SSP5_dxsw(5), dz_SSP5_dxsw(5);
x_SSP5_dxsw << 0.000000, 0.250000, 0.500000, 0.750000, 1.000000;
z_SSP5_dxsw << 0.000213, 0.775909, 1.760120, 1.589560, 1.150140;
dz_SSP5_dxsw << 1.329998, 5.922656, 0.314047, -2.718526, -0.417541;
BasicSpline SSP5_dxsw(x_SSP5_dxsw,z_SSP5_dxsw,dz_SSP5_dxsw);
debugSplines.dxsw.push_back(SSP5_dxsw);

Eigen::VectorXd x_SSP5_dxcom(2), z_SSP5_dxcom(2), dz_SSP5_dxcom(2);
x_SSP5_dxcom << 0.000000, 1.000000;
z_SSP5_dxcom << 0.626984, 0.682874;
dz_SSP5_dxcom << -0.668017, 0.383917;
BasicSpline SSP5_dxcom(x_SSP5_dxcom,z_SSP5_dxcom,dz_SSP5_dxcom);
debugSplines.dxcom.push_back(SSP5_dxcom);

Eigen::VectorXd x_SSP5_ddzcom(8), z_SSP5_ddzcom(8), dz_SSP5_ddzcom(8);
x_SSP5_ddzcom << 0.000000, 0.142857, 0.285714, 0.428571, 0.571429, 0.714286, 0.857143, 1.000000;
z_SSP5_ddzcom << -0.002316, -0.095725, -0.081273, 0.006511, 0.048450, 0.075018, 0.051149, 0.000600;
dz_SSP5_ddzcom << -0.906282, -0.030044, 0.685772, 0.358829, 0.212939, -0.082063, -0.336132, -0.392339;
BasicSpline SSP5_ddzcom(x_SSP5_ddzcom,z_SSP5_ddzcom,dz_SSP5_ddzcom);
debugSplines.ddzcom.push_back(SSP5_ddzcom);

Eigen::VectorXd x_SSP5_ddxsw(6), z_SSP5_ddxsw(6), dz_SSP5_ddxsw(6);
x_SSP5_ddxsw << 0.000000, 0.200000, 0.400000, 0.600000, 0.800000, 1.000000;
z_SSP5_ddxsw << -7.471750, -5.035590, -3.797550, -4.172050, -5.500340, -7.630900;
dz_SSP5_ddxsw << 13.448138, 9.018973, -1.023091, -4.941707, -9.887399, -11.615655;
BasicSpline SSP5_ddxsw(x_SSP5_ddxsw,z_SSP5_ddxsw,dz_SSP5_ddxsw);
debugSplines.ddxsw.push_back(SSP5_ddxsw);

Eigen::VectorXd x_SSP5_ddxcom(2), z_SSP5_ddxcom(2), dz_SSP5_ddxcom(2);
x_SSP5_ddxcom << 0.000000, 1.000000;
z_SSP5_ddxcom << 0.000000, 0.000000;
dz_SSP5_ddxcom << 0.000000, 0.000000;
BasicSpline SSP5_ddxcom(x_SSP5_ddxcom,z_SSP5_ddxcom,dz_SSP5_ddxcom);
debugSplines.ddxcom.push_back(SSP5_ddxcom);

debugSplines.timeMin.push_back(0);
debugSplines.timeMax.push_back(0.3985);


Eigen::VectorXd x_SSP6_zcom(2), z_SSP6_zcom(2), dz_SSP6_zcom(2);
x_SSP6_zcom << 0.000000, 1.000000;
z_SSP6_zcom << 0.725000, 0.725000;
dz_SSP6_zcom << 0.000000, 0.000000;
BasicSpline SSP6_zcom(x_SSP6_zcom,z_SSP6_zcom,dz_SSP6_zcom);
debugSplines.zcom.push_back(SSP6_zcom);

Eigen::VectorXd x_SSP6_xsw(8), z_SSP6_xsw(8), dz_SSP6_xsw(8);
x_SSP6_xsw << 0.000000, 0.142857, 0.285714, 0.428571, 0.571429, 0.714286, 0.857143, 1.000000;
z_SSP6_xsw << -0.230727, -0.227707, -0.202587, -0.147918, -0.057883, 0.055971, 0.175956, 0.239575;
dz_SSP6_xsw << 0.007605, 0.132294, 0.338688, 0.605064, 0.722630, 0.886384, 0.439275, 0.434101;
BasicSpline SSP6_xsw(x_SSP6_xsw,z_SSP6_xsw,dz_SSP6_xsw);
debugSplines.xsw.push_back(SSP6_xsw);

Eigen::VectorXd x_SSP6_xcom(2), z_SSP6_xcom(2), dz_SSP6_xcom(2);
x_SSP6_xcom << 0.000000, 1.000000;
z_SSP6_xcom << -0.109345, 0.129409;
dz_SSP6_xcom << 0.187826, 0.279216;
BasicSpline SSP6_xcom(x_SSP6_xcom,z_SSP6_xcom,dz_SSP6_xcom);
debugSplines.xcom.push_back(SSP6_xcom);

Eigen::VectorXd x_SSP6_dzcom(2), z_SSP6_dzcom(2), dz_SSP6_dzcom(2);
x_SSP6_dzcom << 0.000000, 1.000000;
z_SSP6_dzcom << 0.000000, 0.000000;
dz_SSP6_dzcom << 0.000000, 0.000000;
BasicSpline SSP6_dzcom(x_SSP6_dzcom,z_SSP6_dzcom,dz_SSP6_dzcom);
debugSplines.dzcom.push_back(SSP6_dzcom);

Eigen::VectorXd x_SSP6_dxsw(4), z_SSP6_dxsw(4), dz_SSP6_dxsw(4);
x_SSP6_dxsw << 0.000000, 0.333333, 0.666667, 1.000000;
z_SSP6_dxsw << 0.000107, 0.943006, 1.967180, 1.199160;
dz_SSP6_dxsw << 0.805939, 4.280461, -0.942592, -1.073184;
BasicSpline SSP6_dxsw(x_SSP6_dxsw,z_SSP6_dxsw,dz_SSP6_dxsw);
debugSplines.dxsw.push_back(SSP6_dxsw);

Eigen::VectorXd x_SSP6_dxcom(2), z_SSP6_dxcom(2), dz_SSP6_dxcom(2);
x_SSP6_dxcom << 0.000000, 1.000000;
z_SSP6_dxcom << 0.684039, 0.696637;
dz_SSP6_dxcom << -0.926944, 0.478217;
BasicSpline SSP6_dxcom(x_SSP6_dxcom,z_SSP6_dxcom,dz_SSP6_dxcom);
debugSplines.dxcom.push_back(SSP6_dxcom);

Eigen::VectorXd x_SSP6_ddzcom(5), z_SSP6_ddzcom(5), dz_SSP6_ddzcom(5);
x_SSP6_ddzcom << 0.000000, 0.250000, 0.500000, 0.750000, 1.000000;
z_SSP6_ddzcom << -0.001261, 0.030421, 0.007664, -0.039866, -0.000236;
dz_SSP6_ddzcom << 0.212467, -0.038805, -0.220128, 0.090817, 0.093429;
BasicSpline SSP6_ddzcom(x_SSP6_ddzcom,z_SSP6_ddzcom,dz_SSP6_ddzcom);
debugSplines.ddzcom.push_back(SSP6_ddzcom);

Eigen::VectorXd x_SSP6_ddxsw(6), z_SSP6_ddxsw(6), dz_SSP6_ddxsw(6);
x_SSP6_ddxsw << 0.000000, 0.200000, 0.400000, 0.600000, 0.800000, 1.000000;
z_SSP6_ddxsw << -7.486890, -5.380020, -4.078620, -3.839900, -4.996980, -7.611850;
dz_SSP6_ddxsw << 10.364032, 8.013040, 2.616208, -2.828112, -12.420688, -14.318080;
BasicSpline SSP6_ddxsw(x_SSP6_ddxsw,z_SSP6_ddxsw,dz_SSP6_ddxsw);
debugSplines.ddxsw.push_back(SSP6_ddxsw);

Eigen::VectorXd x_SSP6_ddxcom(2), z_SSP6_ddxcom(2), dz_SSP6_ddxcom(2);
x_SSP6_ddxcom << 0.000000, 1.000000;
z_SSP6_ddxcom << 0.000000, 0.000000;
dz_SSP6_ddxcom << 0.000000, 0.000000;
BasicSpline SSP6_ddxcom(x_SSP6_ddxcom,z_SSP6_ddxcom,dz_SSP6_ddxcom);
debugSplines.ddxcom.push_back(SSP6_ddxcom);

debugSplines.timeMin.push_back(0);
debugSplines.timeMax.push_back(0.3975);


Eigen::VectorXd x_SSP7_zcom(2), z_SSP7_zcom(2), dz_SSP7_zcom(2);
x_SSP7_zcom << 0.000000, 1.000000;
z_SSP7_zcom << 0.725000, 0.725000;
dz_SSP7_zcom << 0.000000, 0.000000;
BasicSpline SSP7_zcom(x_SSP7_zcom,z_SSP7_zcom,dz_SSP7_zcom);
debugSplines.zcom.push_back(SSP7_zcom);

Eigen::VectorXd x_SSP7_xsw(8), z_SSP7_xsw(8), dz_SSP7_xsw(8);
x_SSP7_xsw << 0.000000, 0.142857, 0.285714, 0.428571, 0.571429, 0.714286, 0.857143, 1.000000;
z_SSP7_xsw << -0.249188, -0.243260, -0.204445, -0.130243, -0.015580, 0.089117, 0.178610, 0.244973;
dz_SSP7_xsw << 0.022572, 0.227283, 0.458953, 0.844600, 0.735219, 0.641153, 0.474761, 0.435795;
BasicSpline SSP7_xsw(x_SSP7_xsw,z_SSP7_xsw,dz_SSP7_xsw);
debugSplines.xsw.push_back(SSP7_xsw);

Eigen::VectorXd x_SSP7_xcom(2), z_SSP7_xcom(2), dz_SSP7_xcom(2);
x_SSP7_xcom << 0.000000, 1.000000;
z_SSP7_xcom << -0.117729, 0.126533;
dz_SSP7_xcom << 0.258942, 0.276358;
BasicSpline SSP7_xcom(x_SSP7_xcom,z_SSP7_xcom,dz_SSP7_xcom);
debugSplines.xcom.push_back(SSP7_xcom);

Eigen::VectorXd x_SSP7_dzcom(2), z_SSP7_dzcom(2), dz_SSP7_dzcom(2);
x_SSP7_dzcom << 0.000000, 1.000000;
z_SSP7_dzcom << 0.000000, 0.000000;
dz_SSP7_dzcom << 0.000000, 0.000000;
BasicSpline SSP7_dzcom(x_SSP7_dzcom,z_SSP7_dzcom,dz_SSP7_dzcom);
debugSplines.dzcom.push_back(SSP7_dzcom);

Eigen::VectorXd x_SSP7_dxsw(4), z_SSP7_dxsw(4), dz_SSP7_dxsw(4);
x_SSP7_dxsw << 0.000000, 0.333333, 0.666667, 1.000000;
z_SSP7_dxsw << 0.000113, 1.196690, 1.993990, 1.215060;
dz_SSP7_dxsw << 1.643958, 4.451429, -1.943320, -0.994623;
BasicSpline SSP7_dxsw(x_SSP7_dxsw,z_SSP7_dxsw,dz_SSP7_dxsw);
debugSplines.dxsw.push_back(SSP7_dxsw);

Eigen::VectorXd x_SSP7_dxcom(2), z_SSP7_dxcom(2), dz_SSP7_dxcom(2);
x_SSP7_dxcom << 0.000000, 1.000000;
z_SSP7_dxcom << 0.637755, 0.710194;
dz_SSP7_dxcom << -0.475109, 0.382178;
BasicSpline SSP7_dxcom(x_SSP7_dxcom,z_SSP7_dxcom,dz_SSP7_dxcom);
debugSplines.dxcom.push_back(SSP7_dxcom);

Eigen::VectorXd x_SSP7_ddzcom(4), z_SSP7_ddzcom(4), dz_SSP7_ddzcom(4);
x_SSP7_ddzcom << 0.000000, 0.333333, 0.666667, 1.000000;
z_SSP7_ddzcom << 0.000351, 0.008229, -0.001473, -0.000918;
dz_SSP7_ddzcom << -0.117377, -0.090384, 0.058201, 0.098906;
BasicSpline SSP7_ddzcom(x_SSP7_ddzcom,z_SSP7_ddzcom,dz_SSP7_ddzcom);
debugSplines.ddzcom.push_back(SSP7_ddzcom);

Eigen::VectorXd x_SSP7_ddxsw(5), z_SSP7_ddxsw(5), dz_SSP7_ddxsw(5);
x_SSP7_ddxsw << 0.000000, 0.250000, 0.500000, 0.750000, 1.000000;
z_SSP7_ddxsw << -7.517200, -4.681420, -3.810110, -4.775310, -7.611850;
dz_SSP7_ddxsw << 14.180949, 5.750486, -1.831926, -8.576491, -13.538857;
BasicSpline SSP7_ddxsw(x_SSP7_ddxsw,z_SSP7_ddxsw,dz_SSP7_ddxsw);
debugSplines.ddxsw.push_back(SSP7_ddxsw);

Eigen::VectorXd x_SSP7_ddxcom(2), z_SSP7_ddxcom(2), dz_SSP7_ddxcom(2);
x_SSP7_ddxcom << 0.000000, 1.000000;
z_SSP7_ddxcom << 0.000000, 0.000000;
dz_SSP7_ddxcom << 0.000000, 0.000000;
BasicSpline SSP7_ddxcom(x_SSP7_ddxcom,z_SSP7_ddxcom,dz_SSP7_ddxcom);
debugSplines.ddxcom.push_back(SSP7_ddxcom);

debugSplines.timeMin.push_back(0);
debugSplines.timeMax.push_back(0.3985);


Eigen::VectorXd x_SSP8_zcom(2), z_SSP8_zcom(2), dz_SSP8_zcom(2);
x_SSP8_zcom << 0.000000, 1.000000;
z_SSP8_zcom << 0.725000, 0.725000;
dz_SSP8_zcom << 0.000000, 0.000000;
BasicSpline SSP8_zcom(x_SSP8_zcom,z_SSP8_zcom,dz_SSP8_zcom);
debugSplines.zcom.push_back(SSP8_zcom);

Eigen::VectorXd x_SSP8_xsw(8), z_SSP8_xsw(8), dz_SSP8_xsw(8);
x_SSP8_xsw << 0.000000, 0.142857, 0.285714, 0.428571, 0.571429, 0.714286, 0.857143, 1.000000;
z_SSP8_xsw << -0.251152, -0.239940, -0.185417, -0.083159, 0.029211, 0.140310, 0.205799, 0.254823;
dz_SSP8_xsw << 0.057280, 0.338824, 0.633677, 0.794353, 0.824578, 0.499652, 0.339528, 0.350882;
BasicSpline SSP8_xsw(x_SSP8_xsw,z_SSP8_xsw,dz_SSP8_xsw);
debugSplines.xsw.push_back(SSP8_xsw);

Eigen::VectorXd x_SSP8_xcom(2), z_SSP8_xcom(2), dz_SSP8_xcom(2);
x_SSP8_xcom << 0.000000, 1.000000;
z_SSP8_xcom << -0.122998, 0.130640;
dz_SSP8_xcom << 0.347997, 0.228339;
BasicSpline SSP8_xcom(x_SSP8_xcom,z_SSP8_xcom,dz_SSP8_xcom);
debugSplines.xcom.push_back(SSP8_xcom);

Eigen::VectorXd x_SSP8_dzcom(2), z_SSP8_dzcom(2), dz_SSP8_dzcom(2);
x_SSP8_dzcom << 0.000000, 1.000000;
z_SSP8_dzcom << 0.000000, 0.000000;
dz_SSP8_dzcom << 0.000000, 0.000000;
BasicSpline SSP8_dzcom(x_SSP8_dzcom,z_SSP8_dzcom,dz_SSP8_dzcom);
debugSplines.dzcom.push_back(SSP8_dzcom);

Eigen::VectorXd x_SSP8_dxsw(6), z_SSP8_dxsw(6), dz_SSP8_dxsw(6);
x_SSP8_dxsw << 0.000000, 0.200000, 0.400000, 0.600000, 0.800000, 1.000000;
z_SSP8_dxsw << 0.000115, 0.735208, 1.752660, 2.052630, 1.529890, 1.249920;
dz_SSP8_dxsw << 2.891251, 5.467134, 3.087674, -2.293159, -2.113169, -0.662698;
BasicSpline SSP8_dxsw(x_SSP8_dxsw,z_SSP8_dxsw,dz_SSP8_dxsw);
debugSplines.dxsw.push_back(SSP8_dxsw);

Eigen::VectorXd x_SSP8_dxcom(2), z_SSP8_dxcom(2), dz_SSP8_dxcom(2);
x_SSP8_dxcom << 0.000000, 1.000000;
z_SSP8_dxcom << 0.694990, 0.734094;
dz_SSP8_dxcom << -0.686937, 0.346752;
BasicSpline SSP8_dxcom(x_SSP8_dxcom,z_SSP8_dxcom,dz_SSP8_dxcom);
debugSplines.dxcom.push_back(SSP8_dxcom);

Eigen::VectorXd x_SSP8_ddzcom(8), z_SSP8_ddzcom(8), dz_SSP8_ddzcom(8);
x_SSP8_ddzcom << 0.000000, 0.142857, 0.285714, 0.428571, 0.571429, 0.714286, 0.857143, 1.000000;
z_SSP8_ddzcom << 0.000843, 0.051574, 0.097323, 0.002851, -0.166770, -0.212953, -0.140691, -0.003413;
dz_SSP8_ddzcom << 0.466215, 0.423619, -0.400752, -1.182883, -0.486451, 0.456775, 0.937158, 1.023848;
BasicSpline SSP8_ddzcom(x_SSP8_ddzcom,z_SSP8_ddzcom,dz_SSP8_ddzcom);
debugSplines.ddzcom.push_back(SSP8_ddzcom);

Eigen::VectorXd x_SSP8_ddxsw(8), z_SSP8_ddxsw(8), dz_SSP8_ddxsw(8);
x_SSP8_ddxsw << 0.000000, 0.142857, 0.285714, 0.428571, 0.571429, 0.714286, 0.857143, 1.000000;
z_SSP8_ddxsw << -7.475070, -5.335380, -4.162720, -3.790390, -4.085530, -5.017870, -6.150470, -7.611840;
dz_SSP8_ddxsw << 17.284289, 9.143321, 3.297955, -1.504214, -6.156879, -8.100319, -9.775630, -10.952697;
BasicSpline SSP8_ddxsw(x_SSP8_ddxsw,z_SSP8_ddxsw,dz_SSP8_ddxsw);
debugSplines.ddxsw.push_back(SSP8_ddxsw);

Eigen::VectorXd x_SSP8_ddxcom(2), z_SSP8_ddxcom(2), dz_SSP8_ddxcom(2);
x_SSP8_ddxcom << 0.000000, 1.000000;
z_SSP8_ddxcom << 0.000000, 0.000000;
dz_SSP8_ddxcom << 0.000000, 0.000000;
BasicSpline SSP8_ddxcom(x_SSP8_ddxcom,z_SSP8_ddxcom,dz_SSP8_ddxcom);
debugSplines.ddxcom.push_back(SSP8_ddxcom);

debugSplines.timeMin.push_back(0);
debugSplines.timeMax.push_back(0.3975);


Eigen::VectorXd x_SSP9_zcom(2), z_SSP9_zcom(2), dz_SSP9_zcom(2);
x_SSP9_zcom << 0.000000, 1.000000;
z_SSP9_zcom << 0.725000, 0.725000;
dz_SSP9_zcom << 0.000000, 0.000000;
BasicSpline SSP9_zcom(x_SSP9_zcom,z_SSP9_zcom,dz_SSP9_zcom);
debugSplines.zcom.push_back(SSP9_zcom);

Eigen::VectorXd x_SSP9_xsw(8), z_SSP9_xsw(8), dz_SSP9_xsw(8);
x_SSP9_xsw << 0.000000, 0.142857, 0.285714, 0.428571, 0.571429, 0.714286, 0.857143, 1.000000;
z_SSP9_xsw << -0.261182, -0.255026, -0.220875, -0.148154, -0.034603, 0.082719, 0.180154, 0.245022;
dz_SSP9_xsw << 0.021104, 0.214751, 0.455329, 0.743293, 0.835260, 0.717581, 0.470567, 0.420494;
BasicSpline SSP9_xsw(x_SSP9_xsw,z_SSP9_xsw,dz_SSP9_xsw);
debugSplines.xsw.push_back(SSP9_xsw);

Eigen::VectorXd x_SSP9_xcom(2), z_SSP9_xcom(2), dz_SSP9_xcom(2);
x_SSP9_xcom << 0.000000, 1.000000;
z_SSP9_xcom << -0.128828, 0.124683;
dz_SSP9_xcom << 0.259834, 0.273514;
BasicSpline SSP9_xcom(x_SSP9_xcom,z_SSP9_xcom,dz_SSP9_xcom);
debugSplines.xcom.push_back(SSP9_xcom);

Eigen::VectorXd x_SSP9_dzcom(2), z_SSP9_dzcom(2), dz_SSP9_dzcom(2);
x_SSP9_dzcom << 0.000000, 1.000000;
z_SSP9_dzcom << 0.000000, 0.000000;
dz_SSP9_dzcom << 0.000000, 0.000000;
BasicSpline SSP9_dzcom(x_SSP9_dzcom,z_SSP9_dzcom,dz_SSP9_dzcom);
debugSplines.dzcom.push_back(SSP9_dzcom);

Eigen::VectorXd x_SSP9_dxsw(4), z_SSP9_dxsw(4), dz_SSP9_dxsw(4);
x_SSP9_dxsw << 0.000000, 0.333333, 0.666667, 1.000000;
z_SSP9_dxsw << 0.000121, 1.181510, 2.098430, 1.214960;
dz_SSP9_dxsw << 1.599003, 4.697761, -1.972797, -1.208982;
BasicSpline SSP9_dxsw(x_SSP9_dxsw,z_SSP9_dxsw,dz_SSP9_dxsw);
debugSplines.dxsw.push_back(SSP9_dxsw);

Eigen::VectorXd x_SSP9_dxcom(2), z_SSP9_dxcom(2), dz_SSP9_dxcom(2);
x_SSP9_dxcom << 0.000000, 1.000000;
z_SSP9_dxcom << 0.658262, 0.712383;
dz_SSP9_dxcom << -0.248939, 0.390927;
BasicSpline SSP9_dxcom(x_SSP9_dxcom,z_SSP9_dxcom,dz_SSP9_dxcom);
debugSplines.dxcom.push_back(SSP9_dxcom);

Eigen::VectorXd x_SSP9_ddzcom(8), z_SSP9_ddzcom(8), dz_SSP9_ddzcom(8);
x_SSP9_ddzcom << 0.000000, 0.142857, 0.285714, 0.428571, 0.571429, 0.714286, 0.857143, 1.000000;
z_SSP9_ddzcom << 0.003376, 0.104105, 0.083096, 0.030283, -0.019230, -0.044148, -0.067724, -0.006665;
dz_SSP9_ddzcom << 0.751735, -0.089652, -0.340364, -0.358401, -0.264072, -0.078734, -0.034886, 0.805466;
BasicSpline SSP9_ddzcom(x_SSP9_ddzcom,z_SSP9_ddzcom,dz_SSP9_ddzcom);
debugSplines.ddzcom.push_back(SSP9_ddzcom);

Eigen::VectorXd x_SSP9_ddxsw(5), z_SSP9_ddxsw(5), dz_SSP9_ddxsw(5);
x_SSP9_ddxsw << 0.000000, 0.250000, 0.500000, 0.750000, 1.000000;
z_SSP9_ddxsw << -7.516550, -4.755740, -3.802230, -4.663220, -7.592840;
dz_SSP9_ddxsw << 13.468381, 5.814631, -1.433595, -9.225939, -13.454597;
BasicSpline SSP9_ddxsw(x_SSP9_ddxsw,z_SSP9_ddxsw,dz_SSP9_ddxsw);
debugSplines.ddxsw.push_back(SSP9_ddxsw);

Eigen::VectorXd x_SSP9_ddxcom(2), z_SSP9_ddxcom(2), dz_SSP9_ddxcom(2);
x_SSP9_ddxcom << 0.000000, 1.000000;
z_SSP9_ddxcom << 0.000000, 0.000000;
dz_SSP9_ddxcom << 0.000000, 0.000000;
BasicSpline SSP9_ddxcom(x_SSP9_ddxcom,z_SSP9_ddxcom,dz_SSP9_ddxcom);
debugSplines.ddxcom.push_back(SSP9_ddxcom);

debugSplines.timeMin.push_back(0);
debugSplines.timeMax.push_back(0.3975);


Eigen::VectorXd x_SSP10_zcom(2), z_SSP10_zcom(2), dz_SSP10_zcom(2);
x_SSP10_zcom << 0.000000, 1.000000;
z_SSP10_zcom << 0.725000, 0.725000;
dz_SSP10_zcom << 0.000000, 0.000000;
BasicSpline SSP10_zcom(x_SSP10_zcom,z_SSP10_zcom,dz_SSP10_zcom);
debugSplines.zcom.push_back(SSP10_zcom);

Eigen::VectorXd x_SSP10_xsw(8), z_SSP10_xsw(8), dz_SSP10_xsw(8);
x_SSP10_xsw << 0.000000, 0.142857, 0.285714, 0.428571, 0.571429, 0.714286, 0.857143, 1.000000;
z_SSP10_xsw << -0.255472, -0.250503, -0.213945, -0.143174, -0.041160, 0.067109, 0.153061, 0.211325;
dz_SSP10_xsw << 0.016624, 0.210768, 0.460939, 0.675132, 0.774899, 0.630910, 0.408692, 0.381809;
BasicSpline SSP10_xsw(x_SSP10_xsw,z_SSP10_xsw,dz_SSP10_xsw);
debugSplines.xsw.push_back(SSP10_xsw);

Eigen::VectorXd x_SSP10_xcom(2), z_SSP10_xcom(2), dz_SSP10_xcom(2);
x_SSP10_xcom << 0.000000, 1.000000;
z_SSP10_xcom << -0.128843, 0.111022;
dz_SSP10_xcom << 0.232823, 0.258513;
BasicSpline SSP10_xcom(x_SSP10_xcom,z_SSP10_xcom,dz_SSP10_xcom);
debugSplines.xcom.push_back(SSP10_xcom);

Eigen::VectorXd x_SSP10_dzcom(2), z_SSP10_dzcom(2), dz_SSP10_dzcom(2);
x_SSP10_dzcom << 0.000000, 1.000000;
z_SSP10_dzcom << 0.000000, 0.000000;
dz_SSP10_dzcom << 0.000000, 0.000000;
BasicSpline SSP10_dzcom(x_SSP10_dzcom,z_SSP10_dzcom,dz_SSP10_dzcom);
debugSplines.dzcom.push_back(SSP10_dzcom);

Eigen::VectorXd x_SSP10_dxsw(5), z_SSP10_dxsw(5), dz_SSP10_dxsw(5);
x_SSP10_dxsw << 0.000000, 0.250000, 0.500000, 0.750000, 1.000000;
z_SSP10_dxsw << 0.000029, 0.759736, 1.784780, 1.748650, 1.090900;
dz_SSP10_dxsw << 1.313317, 4.792772, 1.688695, -3.308297, -1.276855;
BasicSpline SSP10_dxsw(x_SSP10_dxsw,z_SSP10_dxsw,dz_SSP10_dxsw);
debugSplines.dxsw.push_back(SSP10_dxsw);

Eigen::VectorXd x_SSP10_dxcom(2), z_SSP10_dxcom(2), dz_SSP10_dxcom(2);
x_SSP10_dxcom << 0.000000, 1.000000;
z_SSP10_dxcom << 0.682354, 0.652561;
dz_SSP10_dxcom << -0.661664, 0.193588;
BasicSpline SSP10_dxcom(x_SSP10_dxcom,z_SSP10_dxcom,dz_SSP10_dxcom);
debugSplines.dxcom.push_back(SSP10_dxcom);

Eigen::VectorXd x_SSP10_ddzcom(8), z_SSP10_ddzcom(8), dz_SSP10_ddzcom(8);
x_SSP10_ddzcom << 0.000000, 0.142857, 0.285714, 0.428571, 0.571429, 0.714286, 0.857143, 1.000000;
z_SSP10_ddzcom << 0.002187, 0.172763, 0.174448, 0.069512, -0.053733, -0.112034, -0.096943, -0.002351;
dz_SSP10_ddzcom << 1.424037, 0.206302, -0.712599, -0.872242, -0.618439, -0.021754, 0.517881, 0.859285;
BasicSpline SSP10_ddzcom(x_SSP10_ddzcom,z_SSP10_ddzcom,dz_SSP10_ddzcom);
debugSplines.ddzcom.push_back(SSP10_ddzcom);

Eigen::VectorXd x_SSP10_ddxsw(6), z_SSP10_ddxsw(6), dz_SSP10_ddxsw(6);
x_SSP10_ddxsw << 0.000000, 0.200000, 0.400000, 0.600000, 0.800000, 1.000000;
z_SSP10_ddxsw << -7.476760, -5.125530, -3.937120, -3.930250, -5.161380, -7.611840;
dz_SSP10_ddxsw << 12.300891, 7.760091, 1.519835, -4.648009, -11.010158, -13.634469;
BasicSpline SSP10_ddxsw(x_SSP10_ddxsw,z_SSP10_ddxsw,dz_SSP10_ddxsw);
debugSplines.ddxsw.push_back(SSP10_ddxsw);

Eigen::VectorXd x_SSP10_ddxcom(2), z_SSP10_ddxcom(2), dz_SSP10_ddxcom(2);
x_SSP10_ddxcom << 0.000000, 1.000000;
z_SSP10_ddxcom << 0.000000, 0.000000;
dz_SSP10_ddxcom << 0.000000, 0.000000;
BasicSpline SSP10_ddxcom(x_SSP10_ddxcom,z_SSP10_ddxcom,dz_SSP10_ddxcom);
debugSplines.ddxcom.push_back(SSP10_ddxcom);

debugSplines.timeMin.push_back(0);
debugSplines.timeMax.push_back(0.399);


Eigen::VectorXd x_SSP11_zcom(2), z_SSP11_zcom(2), dz_SSP11_zcom(2);
x_SSP11_zcom << 0.000000, 1.000000;
z_SSP11_zcom << 0.725000, 0.725000;
dz_SSP11_zcom << 0.000000, 0.000000;
BasicSpline SSP11_zcom(x_SSP11_zcom,z_SSP11_zcom,dz_SSP11_zcom);
debugSplines.zcom.push_back(SSP11_zcom);

Eigen::VectorXd x_SSP11_xsw(8), z_SSP11_xsw(8), dz_SSP11_xsw(8);
x_SSP11_xsw << 0.000000, 0.142857, 0.285714, 0.428571, 0.571429, 0.714286, 0.857143, 1.000000;
z_SSP11_xsw << -0.220940, -0.208013, -0.155591, -0.078271, 0.015678, 0.110852, 0.187639, 0.242907;
dz_SSP11_xsw << 0.044567, 0.344968, 0.488630, 0.655491, 0.665630, 0.560143, 0.382335, 0.371924;
BasicSpline SSP11_xsw(x_SSP11_xsw,z_SSP11_xsw,dz_SSP11_xsw);
debugSplines.xsw.push_back(SSP11_xsw);

Eigen::VectorXd x_SSP11_xcom(2), z_SSP11_xcom(2), dz_SSP11_xcom(2);
x_SSP11_xcom << 0.000000, 1.000000;
z_SSP11_xcom << -0.107175, 0.128410;
dz_SSP11_xcom << 0.313074, 0.238725;
BasicSpline SSP11_xcom(x_SSP11_xcom,z_SSP11_xcom,dz_SSP11_xcom);
debugSplines.xcom.push_back(SSP11_xcom);

Eigen::VectorXd x_SSP11_dzcom(2), z_SSP11_dzcom(2), dz_SSP11_dzcom(2);
x_SSP11_dzcom << 0.000000, 1.000000;
z_SSP11_dzcom << 0.000000, 0.000000;
dz_SSP11_dzcom << 0.000000, 0.000000;
BasicSpline SSP11_dzcom(x_SSP11_dzcom,z_SSP11_dzcom,dz_SSP11_dzcom);
debugSplines.dzcom.push_back(SSP11_dzcom);

Eigen::VectorXd x_SSP11_dxsw(4), z_SSP11_dxsw(4), dz_SSP11_dxsw(4);
x_SSP11_dxsw << 0.000000, 0.333333, 0.666667, 1.000000;
z_SSP11_dxsw << 0.000225, 1.327620, 1.852610, 1.209670;
dz_SSP11_dxsw << 2.390024, 3.546920, -2.038094, -0.601171;
BasicSpline SSP11_dxsw(x_SSP11_dxsw,z_SSP11_dxsw,dz_SSP11_dxsw);
debugSplines.dxsw.push_back(SSP11_dxsw);

Eigen::VectorXd x_SSP11_dxcom(2), z_SSP11_dxcom(2), dz_SSP11_dxcom(2);
x_SSP11_dxcom << 0.000000, 1.000000;
z_SSP11_dxcom << 0.642464, 0.706202;
dz_SSP11_dxcom << -0.889433, 0.401971;
BasicSpline SSP11_dxcom(x_SSP11_dxcom,z_SSP11_dxcom,dz_SSP11_dxcom);
debugSplines.dxcom.push_back(SSP11_dxcom);

Eigen::VectorXd x_SSP11_ddzcom(8), z_SSP11_ddzcom(8), dz_SSP11_ddzcom(8);
x_SSP11_ddzcom << 0.000000, 0.142857, 0.285714, 0.428571, 0.571429, 0.714286, 0.857143, 1.000000;
z_SSP11_ddzcom << 0.003686, 0.087498, 0.035091, 0.002087, -0.015233, -0.036536, -0.042729, -0.000000;
dz_SSP11_ddzcom << 0.523574, -0.298820, -0.250910, -0.143677, -0.128698, -0.055965, 0.148005, 0.431117;
BasicSpline SSP11_ddzcom(x_SSP11_ddzcom,z_SSP11_ddzcom,dz_SSP11_ddzcom);
debugSplines.ddzcom.push_back(SSP11_ddzcom);

Eigen::VectorXd x_SSP11_ddxsw(5), z_SSP11_ddxsw(5), dz_SSP11_ddxsw(5);
x_SSP11_ddxsw << 0.000000, 0.250000, 0.500000, 0.750000, 1.000000;
z_SSP11_ddxsw << -7.467540, -4.249100, -3.837690, -4.975670, -7.650000;
dz_SSP11_ddxsw << 17.141635, 3.562819, -2.666755, -8.937972, -12.214924;
BasicSpline SSP11_ddxsw(x_SSP11_ddxsw,z_SSP11_ddxsw,dz_SSP11_ddxsw);
debugSplines.ddxsw.push_back(SSP11_ddxsw);

Eigen::VectorXd x_SSP11_ddxcom(2), z_SSP11_ddxcom(2), dz_SSP11_ddxcom(2);
x_SSP11_ddxcom << 0.000000, 1.000000;
z_SSP11_ddxcom << 0.000000, 0.000000;
dz_SSP11_ddxcom << 0.000000, 0.000000;
BasicSpline SSP11_ddxcom(x_SSP11_ddxcom,z_SSP11_ddxcom,dz_SSP11_ddxcom);
debugSplines.ddxcom.push_back(SSP11_ddxcom);

debugSplines.timeMin.push_back(0);
debugSplines.timeMax.push_back(0.398);


Eigen::VectorXd x_SSP12_zcom(2), z_SSP12_zcom(2), dz_SSP12_zcom(2);
x_SSP12_zcom << 0.000000, 1.000000;
z_SSP12_zcom << 0.725000, 0.725000;
dz_SSP12_zcom << 0.000000, 0.000000;
BasicSpline SSP12_zcom(x_SSP12_zcom,z_SSP12_zcom,dz_SSP12_zcom);
debugSplines.zcom.push_back(SSP12_zcom);

Eigen::VectorXd x_SSP12_xsw(8), z_SSP12_xsw(8), dz_SSP12_xsw(8);
x_SSP12_xsw << 0.000000, 0.142857, 0.285714, 0.428571, 0.571429, 0.714286, 0.857143, 1.000000;
z_SSP12_xsw << -0.249072, -0.243665, -0.214734, -0.148400, -0.041824, 0.074700, 0.164884, 0.237461;
dz_SSP12_xsw << 0.014889, 0.166542, 0.405322, 0.751934, 0.776522, 0.656941, 0.491565, 0.540135;
BasicSpline SSP12_xsw(x_SSP12_xsw,z_SSP12_xsw,dz_SSP12_xsw);
debugSplines.xsw.push_back(SSP12_xsw);

Eigen::VectorXd x_SSP12_xcom(2), z_SSP12_xcom(2), dz_SSP12_xcom(2);
x_SSP12_xcom << 0.000000, 1.000000;
z_SSP12_xcom << -0.118695, 0.125387;
dz_SSP12_xcom << 0.229555, 0.349708;
BasicSpline SSP12_xcom(x_SSP12_xcom,z_SSP12_xcom,dz_SSP12_xcom);
debugSplines.xcom.push_back(SSP12_xcom);

Eigen::VectorXd x_SSP12_dzcom(2), z_SSP12_dzcom(2), dz_SSP12_dzcom(2);
x_SSP12_dzcom << 0.000000, 1.000000;
z_SSP12_dzcom << 0.000000, 0.000000;
dz_SSP12_dzcom << 0.000000, 0.000000;
BasicSpline SSP12_dzcom(x_SSP12_dzcom,z_SSP12_dzcom,dz_SSP12_dzcom);
debugSplines.dzcom.push_back(SSP12_dzcom);

Eigen::VectorXd x_SSP12_dxsw(4), z_SSP12_dxsw(4), dz_SSP12_dxsw(4);
x_SSP12_dxsw << 0.000000, 0.333333, 0.666667, 1.000000;
z_SSP12_dxsw << 0.000114, 1.084180, 2.024550, 1.188830;
dz_SSP12_dxsw << 1.267044, 4.445507, -1.820927, -2.025066;
BasicSpline SSP12_dxsw(x_SSP12_dxsw,z_SSP12_dxsw,dz_SSP12_dxsw);
debugSplines.dxsw.push_back(SSP12_dxsw);

Eigen::VectorXd x_SSP12_dxcom(2), z_SSP12_dxcom(2), dz_SSP12_dxcom(2);
x_SSP12_dxcom << 0.000000, 1.000000;
z_SSP12_dxcom << 0.628368, 0.676389;
dz_SSP12_dxcom << -0.181535, 0.195820;
BasicSpline SSP12_dxcom(x_SSP12_dxcom,z_SSP12_dxcom,dz_SSP12_dxcom);
debugSplines.dxcom.push_back(SSP12_dxcom);

Eigen::VectorXd x_SSP12_ddzcom(8), z_SSP12_ddzcom(8), dz_SSP12_ddzcom(8);
x_SSP12_ddzcom << 0.000000, 0.142857, 0.285714, 0.428571, 0.571429, 0.714286, 0.857143, 1.000000;
z_SSP12_ddzcom << 0.001815, 0.076750, 0.076100, 0.052899, -0.027864, -0.070307, -0.063531, -0.000887;
dz_SSP12_ddzcom << 0.671030, 0.047095, -0.119621, -0.605253, -0.395513, 0.080356, 0.310841, 0.564621;
BasicSpline SSP12_ddzcom(x_SSP12_ddzcom,z_SSP12_ddzcom,dz_SSP12_ddzcom);
debugSplines.ddzcom.push_back(SSP12_ddzcom);

Eigen::VectorXd x_SSP12_ddxsw(8), z_SSP12_ddxsw(8), dz_SSP12_ddxsw(8);
x_SSP12_ddxsw << 0.000000, 0.142857, 0.285714, 0.428571, 0.571429, 0.714286, 0.857143, 1.000000;
z_SSP12_ddxsw << -7.441630, -5.708260, -4.560270, -3.902520, -3.832910, -4.413850, -5.550290, -7.611840;
dz_SSP12_ddxsw << 12.405047, 8.802675, 5.228866, 1.317142, -2.975509, -7.124237, -11.981330, -17.263795;
BasicSpline SSP12_ddxsw(x_SSP12_ddxsw,z_SSP12_ddxsw,dz_SSP12_ddxsw);
debugSplines.ddxsw.push_back(SSP12_ddxsw);

Eigen::VectorXd x_SSP12_ddxcom(2), z_SSP12_ddxcom(2), dz_SSP12_ddxcom(2);
x_SSP12_ddxcom << 0.000000, 1.000000;
z_SSP12_ddxcom << 0.000000, 0.000000;
dz_SSP12_ddxcom << 0.000000, 0.000000;
BasicSpline SSP12_ddxcom(x_SSP12_ddxcom,z_SSP12_ddxcom,dz_SSP12_ddxcom);
debugSplines.ddxcom.push_back(SSP12_ddxcom);

debugSplines.timeMin.push_back(0);
debugSplines.timeMax.push_back(0.3985);


Eigen::VectorXd x_SSP13_zcom(2), z_SSP13_zcom(2), dz_SSP13_zcom(2);
x_SSP13_zcom << 0.000000, 1.000000;
z_SSP13_zcom << 0.725000, 0.725000;
dz_SSP13_zcom << 0.000000, 0.000000;
BasicSpline SSP13_zcom(x_SSP13_zcom,z_SSP13_zcom,dz_SSP13_zcom);
debugSplines.zcom.push_back(SSP13_zcom);

Eigen::VectorXd x_SSP13_xsw(8), z_SSP13_xsw(8), dz_SSP13_xsw(8);
x_SSP13_xsw << 0.000000, 0.142857, 0.285714, 0.428571, 0.571429, 0.714286, 0.857143, 1.000000;
z_SSP13_xsw << -0.247403, -0.239107, -0.195228, -0.115668, -0.021942, 0.085494, 0.169217, 0.224046;
dz_SSP13_xsw << 0.035753, 0.253820, 0.527197, 0.654538, 0.780854, 0.609026, 0.397169, 0.353276;
BasicSpline SSP13_xsw(x_SSP13_xsw,z_SSP13_xsw,dz_SSP13_xsw);
debugSplines.xsw.push_back(SSP13_xsw);

Eigen::VectorXd x_SSP13_xcom(2), z_SSP13_xcom(2), dz_SSP13_xcom(2);
x_SSP13_xcom << 0.000000, 1.000000;
z_SSP13_xcom << -0.119458, 0.116996;
dz_SSP13_xcom << 0.300278, 0.224690;
BasicSpline SSP13_xcom(x_SSP13_xcom,z_SSP13_xcom,dz_SSP13_xcom);
debugSplines.xcom.push_back(SSP13_xcom);

Eigen::VectorXd x_SSP13_dzcom(2), z_SSP13_dzcom(2), dz_SSP13_dzcom(2);
x_SSP13_dzcom << 0.000000, 1.000000;
z_SSP13_dzcom << 0.000000, 0.000000;
dz_SSP13_dzcom << 0.000000, 0.000000;
BasicSpline SSP13_dzcom(x_SSP13_dzcom,z_SSP13_dzcom,dz_SSP13_dzcom);
debugSplines.dzcom.push_back(SSP13_dzcom);

Eigen::VectorXd x_SSP13_dxsw(5), z_SSP13_dxsw(5), dz_SSP13_dxsw(5);
x_SSP13_dxsw << 0.000000, 0.250000, 0.500000, 0.750000, 1.000000;
z_SSP13_dxsw << 0.000251, 0.870712, 1.836430, 1.751790, 1.138380;
dz_SSP13_dxsw << 2.168229, 4.816533, 1.171420, -3.680443, -0.788311;
BasicSpline SSP13_dxsw(x_SSP13_dxsw,z_SSP13_dxsw,dz_SSP13_dxsw);
debugSplines.dxsw.push_back(SSP13_dxsw);

Eigen::VectorXd x_SSP13_dxcom(2), z_SSP13_dxcom(2), dz_SSP13_dxcom(2);
x_SSP13_dxcom << 0.000000, 1.000000;
z_SSP13_dxcom << 0.662475, 0.669580;
dz_SSP13_dxcom << -0.729178, 0.395557;
BasicSpline SSP13_dxcom(x_SSP13_dxcom,z_SSP13_dxcom,dz_SSP13_dxcom);
debugSplines.dxcom.push_back(SSP13_dxcom);

Eigen::VectorXd x_SSP13_ddzcom(8), z_SSP13_ddzcom(8), dz_SSP13_ddzcom(8);
x_SSP13_ddzcom << 0.000000, 0.142857, 0.285714, 0.428571, 0.571429, 0.714286, 0.857143, 1.000000;
z_SSP13_ddzcom << 0.000787, -0.044390, -0.038063, -0.012478, 0.033712, 0.065383, 0.024123, -0.001039;
dz_SSP13_ddzcom << -0.500820, -0.090042, 0.136182, 0.306376, 0.237778, -0.109047, -0.341295, -0.031572;
BasicSpline SSP13_ddzcom(x_SSP13_ddzcom,z_SSP13_ddzcom,dz_SSP13_ddzcom);
debugSplines.ddzcom.push_back(SSP13_ddzcom);

Eigen::VectorXd x_SSP13_ddxsw(8), z_SSP13_ddxsw(8), dz_SSP13_ddxsw(8);
x_SSP13_ddxsw << 0.000000, 0.142857, 0.285714, 0.428571, 0.571429, 0.714286, 0.857143, 1.000000;
z_SSP13_ddxsw << -7.482830, -5.502720, -4.289770, -3.818560, -3.916450, -4.599890, -5.889410, -7.611850;
dz_SSP13_ddxsw << 15.917083, 9.343557, 4.079409, -0.133729, -4.153726, -8.073929, -11.474863, -12.184734;
BasicSpline SSP13_ddxsw(x_SSP13_ddxsw,z_SSP13_ddxsw,dz_SSP13_ddxsw);
debugSplines.ddxsw.push_back(SSP13_ddxsw);

Eigen::VectorXd x_SSP13_ddxcom(2), z_SSP13_ddxcom(2), dz_SSP13_ddxcom(2);
x_SSP13_ddxcom << 0.000000, 1.000000;
z_SSP13_ddxcom << 0.000000, 0.000000;
dz_SSP13_ddxcom << 0.000000, 0.000000;
BasicSpline SSP13_ddxcom(x_SSP13_ddxcom,z_SSP13_ddxcom,dz_SSP13_ddxcom);
debugSplines.ddxcom.push_back(SSP13_ddxcom);

debugSplines.timeMin.push_back(0);
debugSplines.timeMax.push_back(0.3975);


Eigen::VectorXd x_SSP14_zcom(2), z_SSP14_zcom(2), dz_SSP14_zcom(2);
x_SSP14_zcom << 0.000000, 1.000000;
z_SSP14_zcom << 0.725000, 0.725000;
dz_SSP14_zcom << 0.000000, 0.000000;
BasicSpline SSP14_zcom(x_SSP14_zcom,z_SSP14_zcom,dz_SSP14_zcom);
debugSplines.zcom.push_back(SSP14_zcom);

Eigen::VectorXd x_SSP14_xsw(8), z_SSP14_xsw(8), dz_SSP14_xsw(8);
x_SSP14_xsw << 0.000000, 0.142857, 0.285714, 0.428571, 0.571429, 0.714286, 0.857143, 1.000000;
z_SSP14_xsw << -0.232604, -0.225483, -0.188441, -0.119385, -0.004186, 0.079415, 0.168661, 0.227811;
dz_SSP14_xsw << 0.024154, 0.227919, 0.399279, 0.835594, 0.559247, 0.625559, 0.432827, 0.402716;
BasicSpline SSP14_xsw(x_SSP14_xsw,z_SSP14_xsw,dz_SSP14_xsw);
debugSplines.xsw.push_back(SSP14_xsw);

Eigen::VectorXd x_SSP14_xcom(2), z_SSP14_xcom(2), dz_SSP14_xcom(2);
x_SSP14_xcom << 0.000000, 1.000000;
z_SSP14_xcom << -0.113122, 0.120350;
dz_SSP14_xcom << 0.251292, 0.264730;
BasicSpline SSP14_xcom(x_SSP14_xcom,z_SSP14_xcom,dz_SSP14_xcom);
debugSplines.xcom.push_back(SSP14_xcom);

Eigen::VectorXd x_SSP14_dzcom(2), z_SSP14_dzcom(2), dz_SSP14_dzcom(2);
x_SSP14_dzcom << 0.000000, 1.000000;
z_SSP14_dzcom << 0.000000, 0.000000;
dz_SSP14_dzcom << 0.000000, 0.000000;
BasicSpline SSP14_dzcom(x_SSP14_dzcom,z_SSP14_dzcom,dz_SSP14_dzcom);
debugSplines.dzcom.push_back(SSP14_dzcom);

Eigen::VectorXd x_SSP14_dxsw(4), z_SSP14_dxsw(4), dz_SSP14_dxsw(4);
x_SSP14_dxsw << 0.000000, 0.333333, 0.666667, 1.000000;
z_SSP14_dxsw << 0.000236, 1.121330, 1.870670, 1.153030;
dz_SSP14_dxsw << 1.629160, 4.143138, -1.680552, -1.005210;
BasicSpline SSP14_dxsw(x_SSP14_dxsw,z_SSP14_dxsw,dz_SSP14_dxsw);
debugSplines.dxsw.push_back(SSP14_dxsw);

Eigen::VectorXd x_SSP14_dxcom(2), z_SSP14_dxcom(2), dz_SSP14_dxcom(2);
x_SSP14_dxcom << 0.000000, 1.000000;
z_SSP14_dxcom << 0.602439, 0.685271;
dz_SSP14_dxcom << -0.266600, 0.495247;
BasicSpline SSP14_dxcom(x_SSP14_dxcom,z_SSP14_dxcom,dz_SSP14_dxcom);
debugSplines.dxcom.push_back(SSP14_dxcom);

Eigen::VectorXd x_SSP14_ddzcom(7), z_SSP14_ddzcom(7), dz_SSP14_ddzcom(7);
x_SSP14_ddzcom << 0.000000, 0.166667, 0.333333, 0.500000, 0.666667, 0.833333, 1.000000;
z_SSP14_ddzcom << 0.001523, 0.089223, 0.053135, -0.009566, -0.061008, -0.051607, -0.000089;
dz_SSP14_ddzcom << 0.789637, -0.181176, -0.320574, -0.396786, -0.136736, 0.537466, 0.087903;
BasicSpline SSP14_ddzcom(x_SSP14_ddzcom,z_SSP14_ddzcom,dz_SSP14_ddzcom);
debugSplines.ddzcom.push_back(SSP14_ddzcom);

Eigen::VectorXd x_SSP14_ddxsw(5), z_SSP14_ddxsw(5), dz_SSP14_ddxsw(5);
x_SSP14_ddxsw << 0.000000, 0.250000, 0.500000, 0.750000, 1.000000;
z_SSP14_ddxsw << -7.451100, -4.566830, -3.801240, -4.782000, -7.630900;
dz_SSP14_ddxsw << 13.954314, 4.945470, -2.376702, -9.598302, -13.551312;
BasicSpline SSP14_ddxsw(x_SSP14_ddxsw,z_SSP14_ddxsw,dz_SSP14_ddxsw);
debugSplines.ddxsw.push_back(SSP14_ddxsw);

Eigen::VectorXd x_SSP14_ddxcom(2), z_SSP14_ddxcom(2), dz_SSP14_ddxcom(2);
x_SSP14_ddxcom << 0.000000, 1.000000;
z_SSP14_ddxcom << 0.000000, 0.000000;
dz_SSP14_ddxcom << 0.000000, 0.000000;
BasicSpline SSP14_ddxcom(x_SSP14_ddxcom,z_SSP14_ddxcom,dz_SSP14_ddxcom);
debugSplines.ddxcom.push_back(SSP14_ddxcom);

debugSplines.timeMin.push_back(0);
debugSplines.timeMax.push_back(0.3985);


Eigen::VectorXd x_SSP15_zcom(2), z_SSP15_zcom(2), dz_SSP15_zcom(2);
x_SSP15_zcom << 0.000000, 1.000000;
z_SSP15_zcom << 0.725000, 0.725000;
dz_SSP15_zcom << 0.000000, 0.000000;
BasicSpline SSP15_zcom(x_SSP15_zcom,z_SSP15_zcom,dz_SSP15_zcom);
debugSplines.zcom.push_back(SSP15_zcom);

Eigen::VectorXd x_SSP15_xsw(8), z_SSP15_xsw(8), dz_SSP15_xsw(8);
x_SSP15_xsw << 0.000000, 0.142857, 0.285714, 0.428571, 0.571429, 0.714286, 0.857143, 1.000000;
z_SSP15_xsw << -0.233832, -0.220326, -0.177546, -0.097599, 0.003382, 0.104687, 0.191454, 0.250159;
dz_SSP15_xsw << 0.064177, 0.244671, 0.503749, 0.689967, 0.712200, 0.644525, 0.394311, 0.387505;
BasicSpline SSP15_xsw(x_SSP15_xsw,z_SSP15_xsw,dz_SSP15_xsw);
debugSplines.xsw.push_back(SSP15_xsw);

Eigen::VectorXd x_SSP15_xcom(2), z_SSP15_xcom(2), dz_SSP15_xcom(2);
x_SSP15_xcom << 0.000000, 1.000000;
z_SSP15_xcom << -0.112168, 0.129482;
dz_SSP15_xcom << 0.361037, 0.244350;
BasicSpline SSP15_xcom(x_SSP15_xcom,z_SSP15_xcom,dz_SSP15_xcom);
debugSplines.xcom.push_back(SSP15_xcom);

Eigen::VectorXd x_SSP15_dzcom(2), z_SSP15_dzcom(2), dz_SSP15_dzcom(2);
x_SSP15_dzcom << 0.000000, 1.000000;
z_SSP15_dzcom << 0.000000, 0.000000;
dz_SSP15_dzcom << 0.000000, 0.000000;
BasicSpline SSP15_dzcom(x_SSP15_dzcom,z_SSP15_dzcom,dz_SSP15_dzcom);
debugSplines.dzcom.push_back(SSP15_dzcom);

Eigen::VectorXd x_SSP15_dxsw(4), z_SSP15_dxsw(4), dz_SSP15_dxsw(4);
x_SSP15_dxsw << 0.000000, 0.333333, 0.666667, 1.000000;
z_SSP15_dxsw << 0.000107, 1.325080, 1.954610, 1.235200;
dz_SSP15_dxsw << 3.099290, 3.815377, -2.116459, -0.708486;
BasicSpline SSP15_dxsw(x_SSP15_dxsw,z_SSP15_dxsw,dz_SSP15_dxsw);
debugSplines.dxsw.push_back(SSP15_dxsw);

Eigen::VectorXd x_SSP15_dxcom(2), z_SSP15_dxcom(2), dz_SSP15_dxcom(2);
x_SSP15_dxcom << 0.000000, 1.000000;
z_SSP15_dxcom << 0.652840, 0.708524;
dz_SSP15_dxcom << -0.789428, 0.411546;
BasicSpline SSP15_dxcom(x_SSP15_dxcom,z_SSP15_dxcom,dz_SSP15_dxcom);
debugSplines.dxcom.push_back(SSP15_dxcom);

Eigen::VectorXd x_SSP15_ddzcom(8), z_SSP15_ddzcom(8), dz_SSP15_ddzcom(8);
x_SSP15_ddzcom << 0.000000, 0.142857, 0.285714, 0.428571, 0.571429, 0.714286, 0.857143, 1.000000;
z_SSP15_ddzcom << 0.000217, 0.018832, 0.018631, 0.005065, -0.016023, -0.021615, -0.071576, -0.002446;
dz_SSP15_ddzcom << 0.103341, 0.119760, -0.084094, -0.162338, 0.004259, -0.332202, 0.003890, 0.891591;
BasicSpline SSP15_ddzcom(x_SSP15_ddzcom,z_SSP15_ddzcom,dz_SSP15_ddzcom);
debugSplines.ddzcom.push_back(SSP15_ddzcom);

Eigen::VectorXd x_SSP15_ddxsw(8), z_SSP15_ddxsw(8), dz_SSP15_ddxsw(8);
x_SSP15_ddxsw << 0.000000, 0.142857, 0.285714, 0.428571, 0.571429, 0.714286, 0.857143, 1.000000;
z_SSP15_ddxsw << -7.497910, -5.185540, -4.222100, -3.808690, -3.963640, -4.626020, -5.917630, -7.630900;
dz_SSP15_ddxsw << 19.048957, 7.111438, 3.492783, -0.484253, -4.013753, -8.393642, -10.397985, -12.282763;
BasicSpline SSP15_ddxsw(x_SSP15_ddxsw,z_SSP15_ddxsw,dz_SSP15_ddxsw);
debugSplines.ddxsw.push_back(SSP15_ddxsw);

Eigen::VectorXd x_SSP15_ddxcom(2), z_SSP15_ddxcom(2), dz_SSP15_ddxcom(2);
x_SSP15_ddxcom << 0.000000, 1.000000;
z_SSP15_ddxcom << 0.000000, 0.000000;
dz_SSP15_ddxcom << 0.000000, 0.000000;
BasicSpline SSP15_ddxcom(x_SSP15_ddxcom,z_SSP15_ddxcom,dz_SSP15_ddxcom);
debugSplines.ddxcom.push_back(SSP15_ddxcom);

debugSplines.timeMin.push_back(0);
debugSplines.timeMax.push_back(0.398);


Eigen::VectorXd x_SSP16_zcom(2), z_SSP16_zcom(2), dz_SSP16_zcom(2);
x_SSP16_zcom << 0.000000, 1.000000;
z_SSP16_zcom << 0.725000, 0.725000;
dz_SSP16_zcom << 0.000000, 0.000000;
BasicSpline SSP16_zcom(x_SSP16_zcom,z_SSP16_zcom,dz_SSP16_zcom);
debugSplines.zcom.push_back(SSP16_zcom);

Eigen::VectorXd x_SSP16_xsw(8), z_SSP16_xsw(8), dz_SSP16_xsw(8);
x_SSP16_xsw << 0.000000, 0.142857, 0.285714, 0.428571, 0.571429, 0.714286, 0.857143, 1.000000;
z_SSP16_xsw << -0.257385, -0.249016, -0.205873, -0.130941, -0.033063, 0.078941, 0.164567, 0.232945;
dz_SSP16_xsw << 0.033778, 0.218582, 0.489631, 0.638855, 0.750161, 0.632883, 0.507248, 0.435527;
BasicSpline SSP16_xsw(x_SSP16_xsw,z_SSP16_xsw,dz_SSP16_xsw);
debugSplines.xsw.push_back(SSP16_xsw);

Eigen::VectorXd x_SSP16_xcom(2), z_SSP16_xcom(2), dz_SSP16_xcom(2);
x_SSP16_xcom << 0.000000, 1.000000;
z_SSP16_xcom << -0.126620, 0.119936;
dz_SSP16_xcom << 0.310798, 0.283443;
BasicSpline SSP16_xcom(x_SSP16_xcom,z_SSP16_xcom,dz_SSP16_xcom);
debugSplines.xcom.push_back(SSP16_xcom);

Eigen::VectorXd x_SSP16_dzcom(2), z_SSP16_dzcom(2), dz_SSP16_dzcom(2);
x_SSP16_dzcom << 0.000000, 1.000000;
z_SSP16_dzcom << 0.000000, 0.000000;
dz_SSP16_dzcom << 0.000000, 0.000000;
BasicSpline SSP16_dzcom(x_SSP16_dzcom,z_SSP16_dzcom,dz_SSP16_dzcom);
debugSplines.dzcom.push_back(SSP16_dzcom);

Eigen::VectorXd x_SSP16_dxsw(4), z_SSP16_dxsw(4), dz_SSP16_dxsw(4);
x_SSP16_dxsw << 0.000000, 0.333333, 0.666667, 1.000000;
z_SSP16_dxsw << 0.000116, 1.265540, 2.020250, 1.168880;
dz_SSP16_dxsw << 2.168763, 4.330667, -1.961909, -1.223146;
BasicSpline SSP16_dxsw(x_SSP16_dxsw,z_SSP16_dxsw,dz_SSP16_dxsw);
debugSplines.dxsw.push_back(SSP16_dxsw);

Eigen::VectorXd x_SSP16_dxcom(2), z_SSP16_dxcom(2), dz_SSP16_dxcom(2);
x_SSP16_dxcom << 0.000000, 1.000000;
z_SSP16_dxcom << 0.609892, 0.689659;
dz_SSP16_dxcom << -0.026237, 0.277966;
BasicSpline SSP16_dxcom(x_SSP16_dxcom,z_SSP16_dxcom,dz_SSP16_dxcom);
debugSplines.dxcom.push_back(SSP16_dxcom);

Eigen::VectorXd x_SSP16_ddzcom(8), z_SSP16_ddzcom(8), dz_SSP16_ddzcom(8);
x_SSP16_ddzcom << 0.000000, 0.142857, 0.285714, 0.428571, 0.571429, 0.714286, 0.857143, 1.000000;
z_SSP16_ddzcom << 0.005084, 0.257921, 0.215060, 0.069485, -0.080467, -0.193416, -0.185208, -0.004708;
dz_SSP16_ddzcom << 2.491519, -0.064103, -0.929187, -1.056816, -0.771996, -0.037604, 1.010126, 1.526788;
BasicSpline SSP16_ddzcom(x_SSP16_ddzcom,z_SSP16_ddzcom,dz_SSP16_ddzcom);
debugSplines.ddzcom.push_back(SSP16_ddzcom);

Eigen::VectorXd x_SSP16_ddxsw(8), z_SSP16_ddxsw(8), dz_SSP16_ddxsw(8);
x_SSP16_ddxsw << 0.000000, 0.142857, 0.285714, 0.428571, 0.571429, 0.714286, 0.857143, 1.000000;
z_SSP16_ddxsw << -7.441390, -5.472800, -4.295770, -3.822340, -3.871180, -4.485320, -5.628730, -7.611840;
dz_SSP16_ddxsw << 16.245447, 8.576917, 4.074256, 0.346359, -3.193744, -7.237641, -13.065810, -14.432171;
BasicSpline SSP16_ddxsw(x_SSP16_ddxsw,z_SSP16_ddxsw,dz_SSP16_ddxsw);
debugSplines.ddxsw.push_back(SSP16_ddxsw);

Eigen::VectorXd x_SSP16_ddxcom(2), z_SSP16_ddxcom(2), dz_SSP16_ddxcom(2);
x_SSP16_ddxcom << 0.000000, 1.000000;
z_SSP16_ddxcom << 0.000000, 0.000000;
dz_SSP16_ddxcom << 0.000000, 0.000000;
BasicSpline SSP16_ddxcom(x_SSP16_ddxcom,z_SSP16_ddxcom,dz_SSP16_ddxcom);
debugSplines.ddxcom.push_back(SSP16_ddxcom);

debugSplines.timeMin.push_back(0);
debugSplines.timeMax.push_back(0.3985);


Eigen::VectorXd x_SSP17_zcom(2), z_SSP17_zcom(2), dz_SSP17_zcom(2);
x_SSP17_zcom << 0.000000, 1.000000;
z_SSP17_zcom << 0.725000, 0.725000;
dz_SSP17_zcom << 0.000000, 0.000000;
BasicSpline SSP17_zcom(x_SSP17_zcom,z_SSP17_zcom,dz_SSP17_zcom);
debugSplines.zcom.push_back(SSP17_zcom);

Eigen::VectorXd x_SSP17_xsw(8), z_SSP17_xsw(8), dz_SSP17_xsw(8);
x_SSP17_xsw << 0.000000, 0.142857, 0.285714, 0.428571, 0.571429, 0.714286, 0.857143, 1.000000;
z_SSP17_xsw << -0.241283, -0.237714, -0.216865, -0.172507, -0.026162, 0.092266, 0.203562, 0.260848;
dz_SSP17_xsw << 0.013776, 0.129830, 0.266650, 1.039453, 0.810371, 0.849185, 0.404016, 0.403008;
BasicSpline SSP17_xsw(x_SSP17_xsw,z_SSP17_xsw,dz_SSP17_xsw);
debugSplines.xsw.push_back(SSP17_xsw);

Eigen::VectorXd x_SSP17_xcom(2), z_SSP17_xcom(2), dz_SSP17_xcom(2);
x_SSP17_xcom << 0.000000, 1.000000;
z_SSP17_xcom << -0.119098, 0.132168;
dz_SSP17_xcom << 0.215193, 0.251472;
BasicSpline SSP17_xcom(x_SSP17_xcom,z_SSP17_xcom,dz_SSP17_xcom);
debugSplines.xcom.push_back(SSP17_xcom);

Eigen::VectorXd x_SSP17_dzcom(2), z_SSP17_dzcom(2), dz_SSP17_dzcom(2);
x_SSP17_dzcom << 0.000000, 1.000000;
z_SSP17_dzcom << 0.000000, 0.000000;
dz_SSP17_dzcom << 0.000000, 0.000000;
BasicSpline SSP17_dzcom(x_SSP17_dzcom,z_SSP17_dzcom,dz_SSP17_dzcom);
debugSplines.dzcom.push_back(SSP17_dzcom);

Eigen::VectorXd x_SSP17_dxsw(4), z_SSP17_dxsw(4), dz_SSP17_dxsw(4);
x_SSP17_dxsw << 0.000000, 0.333333, 0.666667, 1.000000;
z_SSP17_dxsw << 0.000111, 0.853299, 2.044700, 1.272840;
dz_SSP17_dxsw << 1.138350, 4.065130, -2.441664, -0.843744;
BasicSpline SSP17_dxsw(x_SSP17_dxsw,z_SSP17_dxsw,dz_SSP17_dxsw);
debugSplines.dxsw.push_back(SSP17_dxsw);

Eigen::VectorXd x_SSP17_dxcom(2), z_SSP17_dxcom(2), dz_SSP17_dxcom(2);
x_SSP17_dxcom << 0.000000, 1.000000;
z_SSP17_dxcom << 0.668376, 0.744606;
dz_SSP17_dxcom << -0.545082, 0.377127;
BasicSpline SSP17_dxcom(x_SSP17_dxcom,z_SSP17_dxcom,dz_SSP17_dxcom);
debugSplines.dxcom.push_back(SSP17_dxcom);

Eigen::VectorXd x_SSP17_ddzcom(8), z_SSP17_ddzcom(8), dz_SSP17_ddzcom(8);
x_SSP17_ddzcom << 0.000000, 0.142857, 0.285714, 0.428571, 0.571429, 0.714286, 0.857143, 1.000000;
z_SSP17_ddzcom << 0.004456, 0.091369, 0.104425, 0.068481, -0.025246, -0.113389, -0.134048, -0.005000;
dz_SSP17_ddzcom << 0.645001, 0.149484, -0.225856, -0.690388, -0.618545, -0.262022, 0.690050, 1.098327;
BasicSpline SSP17_ddzcom(x_SSP17_ddzcom,z_SSP17_ddzcom,dz_SSP17_ddzcom);
debugSplines.ddzcom.push_back(SSP17_ddzcom);

Eigen::VectorXd x_SSP17_ddxsw(8), z_SSP17_ddxsw(8), dz_SSP17_ddxsw(8);
x_SSP17_ddxsw << 0.000000, 0.142857, 0.285714, 0.428571, 0.571429, 0.714286, 0.857143, 1.000000;
z_SSP17_ddxsw << -7.502630, -5.949320, -4.815450, -4.122880, -3.863760, -4.482410, -6.018200, -7.611850;
dz_SSP17_ddxsw << 11.190048, 8.593824, 4.975776, 3.074496, -3.570144, -10.516224, -10.532544, -11.972448;
BasicSpline SSP17_ddxsw(x_SSP17_ddxsw,z_SSP17_ddxsw,dz_SSP17_ddxsw);
debugSplines.ddxsw.push_back(SSP17_ddxsw);

Eigen::VectorXd x_SSP17_ddxcom(2), z_SSP17_ddxcom(2), dz_SSP17_ddxcom(2);
x_SSP17_ddxcom << 0.000000, 1.000000;
z_SSP17_ddxcom << 0.000000, 0.000000;
dz_SSP17_ddxcom << 0.000000, 0.000000;
BasicSpline SSP17_ddxcom(x_SSP17_ddxcom,z_SSP17_ddxcom,dz_SSP17_ddxcom);
debugSplines.ddxcom.push_back(SSP17_ddxcom);

debugSplines.timeMin.push_back(0);
debugSplines.timeMax.push_back(0.3975);


Eigen::VectorXd x_SSP18_zcom(2), z_SSP18_zcom(2), dz_SSP18_zcom(2);
x_SSP18_zcom << 0.000000, 1.000000;
z_SSP18_zcom << 0.725000, 0.725000;
dz_SSP18_zcom << 0.000000, 0.000000;
BasicSpline SSP18_zcom(x_SSP18_zcom,z_SSP18_zcom,dz_SSP18_zcom);
debugSplines.zcom.push_back(SSP18_zcom);

Eigen::VectorXd x_SSP18_xsw(8), z_SSP18_xsw(8), dz_SSP18_xsw(8);
x_SSP18_xsw << 0.000000, 0.142857, 0.285714, 0.428571, 0.571429, 0.714286, 0.857143, 1.000000;
z_SSP18_xsw << -0.265903, -0.260500, -0.219899, -0.138622, -0.029277, 0.090369, 0.175200, 0.226448;
dz_SSP18_xsw << 0.021381, 0.213553, 0.534688, 0.720546, 0.899173, 0.616974, 0.360760, 0.356888;
BasicSpline SSP18_xsw(x_SSP18_xsw,z_SSP18_xsw,dz_SSP18_xsw);
debugSplines.xsw.push_back(SSP18_xsw);

Eigen::VectorXd x_SSP18_xcom(2), z_SSP18_xcom(2), dz_SSP18_xcom(2);
x_SSP18_xcom << 0.000000, 1.000000;
z_SSP18_xcom << -0.132500, 0.116909;
dz_SSP18_xcom << 0.248552, 0.238760;
BasicSpline SSP18_xcom(x_SSP18_xcom,z_SSP18_xcom,dz_SSP18_xcom);
debugSplines.xcom.push_back(SSP18_xcom);

Eigen::VectorXd x_SSP18_dzcom(2), z_SSP18_dzcom(2), dz_SSP18_dzcom(2);
x_SSP18_dzcom << 0.000000, 1.000000;
z_SSP18_dzcom << 0.000000, 0.000000;
dz_SSP18_dzcom << 0.000000, 0.000000;
BasicSpline SSP18_dzcom(x_SSP18_dzcom,z_SSP18_dzcom,dz_SSP18_dzcom);
debugSplines.dzcom.push_back(SSP18_dzcom);

Eigen::VectorXd x_SSP18_dxsw(5), z_SSP18_dxsw(5), dz_SSP18_dxsw(5);
x_SSP18_dxsw << 0.000000, 0.250000, 0.500000, 0.750000, 1.000000;
z_SSP18_dxsw << 0.000272, 0.790223, 1.920080, 1.782680, 1.145360;
dz_SSP18_dxsw << 1.573941, 5.453053, 1.490871, -3.929929, -0.930286;
BasicSpline SSP18_dxsw(x_SSP18_dxsw,z_SSP18_dxsw,dz_SSP18_dxsw);
debugSplines.dxsw.push_back(SSP18_dxsw);

Eigen::VectorXd x_SSP18_dxcom(2), z_SSP18_dxcom(2), dz_SSP18_dxcom(2);
x_SSP18_dxcom << 0.000000, 1.000000;
z_SSP18_dxcom << 0.648924, 0.691056;
dz_SSP18_dxcom << -0.051668, 0.377047;
BasicSpline SSP18_dxcom(x_SSP18_dxcom,z_SSP18_dxcom,dz_SSP18_dxcom);
debugSplines.dxcom.push_back(SSP18_dxcom);

Eigen::VectorXd x_SSP18_ddzcom(8), z_SSP18_ddzcom(8), dz_SSP18_ddzcom(8);
x_SSP18_ddzcom << 0.000000, 0.142857, 0.285714, 0.428571, 0.571429, 0.714286, 0.857143, 1.000000;
z_SSP18_ddzcom << 0.007374, 0.232597, 0.237383, 0.076219, -0.085354, -0.172718, -0.115504, -0.003159;
dz_SSP18_ddzcom << 1.881335, 0.304269, -1.110097, -1.150331, -0.892292, 0.114501, 0.717876, 0.779110;
BasicSpline SSP18_ddzcom(x_SSP18_ddzcom,z_SSP18_ddzcom,dz_SSP18_ddzcom);
debugSplines.ddzcom.push_back(SSP18_ddzcom);

Eigen::VectorXd x_SSP18_ddxsw(6), z_SSP18_ddxsw(6), dz_SSP18_ddxsw(6);
x_SSP18_ddxsw << 0.000000, 0.200000, 0.400000, 0.600000, 0.800000, 1.000000;
z_SSP18_ddxsw << -7.437120, -5.203960, -3.900830, -3.995080, -5.325680, -7.611840;
dz_SSP18_ddxsw << 12.684270, 8.779483, 1.145408, -5.527808, -10.919241, -12.072997;
BasicSpline SSP18_ddxsw(x_SSP18_ddxsw,z_SSP18_ddxsw,dz_SSP18_ddxsw);
debugSplines.ddxsw.push_back(SSP18_ddxsw);

Eigen::VectorXd x_SSP18_ddxcom(2), z_SSP18_ddxcom(2), dz_SSP18_ddxcom(2);
x_SSP18_ddxcom << 0.000000, 1.000000;
z_SSP18_ddxcom << 0.000000, 0.000000;
dz_SSP18_ddxcom << 0.000000, 0.000000;
BasicSpline SSP18_ddxcom(x_SSP18_ddxcom,z_SSP18_ddxcom,dz_SSP18_ddxcom);
debugSplines.ddxcom.push_back(SSP18_ddxcom);

debugSplines.timeMin.push_back(0);
debugSplines.timeMax.push_back(0.3975);


Eigen::VectorXd x_SSP19_zcom(2), z_SSP19_zcom(2), dz_SSP19_zcom(2);
x_SSP19_zcom << 0.000000, 1.000000;
z_SSP19_zcom << 0.725000, 0.725000;
dz_SSP19_zcom << 0.000000, 0.000000;
BasicSpline SSP19_zcom(x_SSP19_zcom,z_SSP19_zcom,dz_SSP19_zcom);
debugSplines.zcom.push_back(SSP19_zcom);

Eigen::VectorXd x_SSP19_xsw(8), z_SSP19_xsw(8), dz_SSP19_xsw(8);
x_SSP19_xsw << 0.000000, 0.142857, 0.285714, 0.428571, 0.571429, 0.714286, 0.857143, 1.000000;
z_SSP19_xsw << -0.236083, -0.231967, -0.201696, -0.122649, -0.016471, 0.098268, 0.172656, 0.243501;
dz_SSP19_xsw << 0.015995, 0.168783, 0.487015, 0.742344, 0.819754, 0.552855, 0.540348, 0.447584;
BasicSpline SSP19_xsw(x_SSP19_xsw,z_SSP19_xsw,dz_SSP19_xsw);
debugSplines.xsw.push_back(SSP19_xsw);

Eigen::VectorXd x_SSP19_xcom(2), z_SSP19_xcom(2), dz_SSP19_xcom(2);
x_SSP19_xcom << 0.000000, 1.000000;
z_SSP19_xcom << -0.117451, 0.125794;
dz_SSP19_xcom << 0.231939, 0.283767;
BasicSpline SSP19_xcom(x_SSP19_xcom,z_SSP19_xcom,dz_SSP19_xcom);
debugSplines.xcom.push_back(SSP19_xcom);

Eigen::VectorXd x_SSP19_dzcom(2), z_SSP19_dzcom(2), dz_SSP19_dzcom(2);
x_SSP19_dzcom << 0.000000, 1.000000;
z_SSP19_dzcom << 0.000000, 0.000000;
dz_SSP19_dzcom << 0.000000, 0.000000;
BasicSpline SSP19_dzcom(x_SSP19_dzcom,z_SSP19_dzcom,dz_SSP19_dzcom);
debugSplines.dzcom.push_back(SSP19_dzcom);

Eigen::VectorXd x_SSP19_dxsw(4), z_SSP19_dxsw(4), dz_SSP19_dxsw(4);
x_SSP19_dxsw << 0.000000, 0.333333, 0.666667, 1.000000;
z_SSP19_dxsw << 0.000107, 1.094540, 1.932080, 1.209930;
dz_SSP19_dxsw << 1.284298, 4.680817, -2.010580, -1.099851;
BasicSpline SSP19_dxsw(x_SSP19_dxsw,z_SSP19_dxsw,dz_SSP19_dxsw);
debugSplines.dxsw.push_back(SSP19_dxsw);

Eigen::VectorXd x_SSP19_dxcom(2), z_SSP19_dxcom(2), dz_SSP19_dxcom(2);
x_SSP19_dxcom << 0.000000, 1.000000;
z_SSP19_dxcom << 0.653130, 0.713989;
dz_SSP19_dxcom << -0.527501, 0.501974;
BasicSpline SSP19_dxcom(x_SSP19_dxcom,z_SSP19_dxcom,dz_SSP19_dxcom);
debugSplines.dxcom.push_back(SSP19_dxcom);

Eigen::VectorXd x_SSP19_ddzcom(8), z_SSP19_ddzcom(8), dz_SSP19_ddzcom(8);
x_SSP19_ddzcom << 0.000000, 0.142857, 0.285714, 0.428571, 0.571429, 0.714286, 0.857143, 1.000000;
z_SSP19_ddzcom << 0.003324, 0.098598, 0.118128, 0.036184, -0.049528, -0.095220, -0.099980, -0.000000;
dz_SSP19_ddzcom << 0.689975, 0.270796, -0.600144, -0.620469, -0.423779, -0.104666, 0.475879, 0.909154;
BasicSpline SSP19_ddzcom(x_SSP19_ddzcom,z_SSP19_ddzcom,dz_SSP19_ddzcom);
debugSplines.ddzcom.push_back(SSP19_ddzcom);

Eigen::VectorXd x_SSP19_ddxsw(8), z_SSP19_ddxsw(8), dz_SSP19_ddxsw(8);
x_SSP19_ddxsw << 0.000000, 0.142857, 0.285714, 0.428571, 0.571429, 0.714286, 0.857143, 1.000000;
z_SSP19_ddxsw << -7.511030, -5.870840, -4.563250, -3.859670, -3.908240, -4.618140, -5.630440, -7.650000;
dz_SSP19_ddxsw << 12.664571, 9.929637, 5.792297, 0.400023, -4.177406, -6.620780, -14.029343, -14.405263;
BasicSpline SSP19_ddxsw(x_SSP19_ddxsw,z_SSP19_ddxsw,dz_SSP19_ddxsw);
debugSplines.ddxsw.push_back(SSP19_ddxsw);

Eigen::VectorXd x_SSP19_ddxcom(2), z_SSP19_ddxcom(2), dz_SSP19_ddxcom(2);
x_SSP19_ddxcom << 0.000000, 1.000000;
z_SSP19_ddxcom << 0.000000, 0.000000;
dz_SSP19_ddxcom << 0.000000, 0.000000;
BasicSpline SSP19_ddxcom(x_SSP19_ddxcom,z_SSP19_ddxcom,dz_SSP19_ddxcom);
debugSplines.ddxcom.push_back(SSP19_ddxcom);

debugSplines.timeMin.push_back(0);
debugSplines.timeMax.push_back(0.3985);


Eigen::VectorXd x_SSP20_zcom(2), z_SSP20_zcom(2), dz_SSP20_zcom(2);
x_SSP20_zcom << 0.000000, 1.000000;
z_SSP20_zcom << 0.725000, 0.725000;
dz_SSP20_zcom << 0.000000, 0.000000;
BasicSpline SSP20_zcom(x_SSP20_zcom,z_SSP20_zcom,dz_SSP20_zcom);
debugSplines.zcom.push_back(SSP20_zcom);

Eigen::VectorXd x_SSP20_xsw(8), z_SSP20_xsw(8), dz_SSP20_xsw(8);
x_SSP20_xsw << 0.000000, 0.142857, 0.285714, 0.428571, 0.571429, 0.714286, 0.857143, 1.000000;
z_SSP20_xsw << -0.250471, -0.242584, -0.198834, -0.112675, -0.008618, 0.101670, 0.183575, 0.242682;
dz_SSP20_xsw << 0.018891, 0.257954, 0.549806, 0.718079, 0.812874, 0.595051, 0.428217, 0.386857;
BasicSpline SSP20_xsw(x_SSP20_xsw,z_SSP20_xsw,dz_SSP20_xsw);
debugSplines.xsw.push_back(SSP20_xsw);

Eigen::VectorXd x_SSP20_xcom(2), z_SSP20_xcom(2), dz_SSP20_xcom(2);
x_SSP20_xcom << 0.000000, 1.000000;
z_SSP20_xcom << -0.123102, 0.123514;
dz_SSP20_xcom << 0.257920, 0.249520;
BasicSpline SSP20_xcom(x_SSP20_xcom,z_SSP20_xcom,dz_SSP20_xcom);
debugSplines.xcom.push_back(SSP20_xcom);

Eigen::VectorXd x_SSP20_dzcom(2), z_SSP20_dzcom(2), dz_SSP20_dzcom(2);
x_SSP20_dzcom << 0.000000, 1.000000;
z_SSP20_dzcom << 0.000000, 0.000000;
dz_SSP20_dzcom << 0.000000, 0.000000;
BasicSpline SSP20_dzcom(x_SSP20_dzcom,z_SSP20_dzcom,dz_SSP20_dzcom);
debugSplines.dzcom.push_back(SSP20_dzcom);

Eigen::VectorXd x_SSP20_dxsw(5), z_SSP20_dxsw(5), dz_SSP20_dxsw(5);
x_SSP20_dxsw << 0.000000, 0.250000, 0.500000, 0.750000, 1.000000;
z_SSP20_dxsw << 0.000113, 0.874545, 1.923280, 1.788630, 1.204920;
dz_SSP20_dxsw << 1.492887, 5.524400, 1.102857, -3.290971, -0.686743;
BasicSpline SSP20_dxsw(x_SSP20_dxsw,z_SSP20_dxsw,dz_SSP20_dxsw);
debugSplines.dxsw.push_back(SSP20_dxsw);

Eigen::VectorXd x_SSP20_dxcom(2), z_SSP20_dxcom(2), dz_SSP20_dxcom(2);
x_SSP20_dxcom << 0.000000, 1.000000;
z_SSP20_dxcom << 0.583456, 0.708419;
dz_SSP20_dxcom << 0.340217, 0.395391;
BasicSpline SSP20_dxcom(x_SSP20_dxcom,z_SSP20_dxcom,dz_SSP20_dxcom);
debugSplines.dxcom.push_back(SSP20_dxcom);

Eigen::VectorXd x_SSP20_ddzcom(8), z_SSP20_ddzcom(8), dz_SSP20_ddzcom(8);
x_SSP20_ddzcom << 0.000000, 0.142857, 0.285714, 0.428571, 0.571429, 0.714286, 0.857143, 1.000000;
z_SSP20_ddzcom << 0.003294, 0.140925, 0.128417, 0.028230, -0.071885, -0.123299, -0.058862, 0.000328;
dz_SSP20_ddzcom << 1.266741, 0.061829, -0.680866, -0.727174, -0.498929, 0.314261, 0.609291, 0.232805;
BasicSpline SSP20_ddzcom(x_SSP20_ddzcom,z_SSP20_ddzcom,dz_SSP20_ddzcom);
debugSplines.ddzcom.push_back(SSP20_ddzcom);

Eigen::VectorXd x_SSP20_ddxsw(5), z_SSP20_ddxsw(5), dz_SSP20_ddxsw(5);
x_SSP20_ddxsw << 0.000000, 0.250000, 0.500000, 0.750000, 1.000000;
z_SSP20_ddxsw << -7.461020, -4.528240, -3.808030, -4.911620, -7.630900;
dz_SSP20_ddxsw << 13.770629, 5.929371, -2.096229, -8.809143, -12.662286;
BasicSpline SSP20_ddxsw(x_SSP20_ddxsw,z_SSP20_ddxsw,dz_SSP20_ddxsw);
debugSplines.ddxsw.push_back(SSP20_ddxsw);

Eigen::VectorXd x_SSP20_ddxcom(2), z_SSP20_ddxcom(2), dz_SSP20_ddxcom(2);
x_SSP20_ddxcom << 0.000000, 1.000000;
z_SSP20_ddxcom << 0.000000, 0.000000;
dz_SSP20_ddxcom << 0.000000, 0.000000;
BasicSpline SSP20_ddxcom(x_SSP20_ddxcom,z_SSP20_ddxcom,dz_SSP20_ddxcom);
debugSplines.ddxcom.push_back(SSP20_ddxcom);

debugSplines.timeMin.push_back(0);
debugSplines.timeMax.push_back(0.399);


}

#endif
