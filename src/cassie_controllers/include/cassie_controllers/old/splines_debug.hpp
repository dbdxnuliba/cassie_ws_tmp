#include <cassie_common_toolbox/bezier_tools.hpp>
#ifndef SPLINES_DEBUG_HPP
#define SPLINES_DEBUG_HPP


void OUTPUT_DEBUG::Splines::createDebugSplines(){

Eigen::VectorXd x_DSP1_zcom(4), z_DSP1_zcom(4), dz_DSP1_zcom(4);
x_DSP1_zcom << 0.000000, 0.333333, 0.666667, 1.000000;
z_DSP1_zcom << 0.724092, 0.729690, 0.744690, 0.750000;
dz_DSP1_zcom << 0.000000, 0.039088, 0.037233, 0.000000;
BasicSpline DSP1_zcom(x_DSP1_zcom,z_DSP1_zcom,dz_DSP1_zcom);

debugSplines.DSP1_zcom = DSP1_zcom;

Eigen::VectorXd x_DSP1_zsw(5), z_DSP1_zsw(5), dz_DSP1_zsw(5);
x_DSP1_zsw << 0.000000, 0.250000, 0.500000, 0.750000, 1.000000;
z_DSP1_zsw << 0.002662, 0.069019, 0.087378, 0.066920, -0.002511;
dz_DSP1_zsw << 0.385694, 0.131697, -0.004804, -0.198458, -0.468614;
BasicSpline DSP1_zsw(x_DSP1_zsw,z_DSP1_zsw,dz_DSP1_zsw);

debugSplines.DSP1_zsw = DSP1_zsw;

Eigen::VectorXd x_DSP1_xsw(5), z_DSP1_xsw(5), dz_DSP1_xsw(5);
x_DSP1_xsw << 0.000000, 0.250000, 0.500000, 0.750000, 1.000000;
z_DSP1_xsw << -0.007067, -0.013043, -0.032079, -0.042999, -0.035804;
dz_DSP1_xsw << -0.000134, -0.050437, -0.066916, 0.000835, -0.057412;
BasicSpline DSP1_xsw(x_DSP1_xsw,z_DSP1_xsw,dz_DSP1_xsw);

debugSplines.DSP1_xsw = DSP1_xsw;

Eigen::VectorXd x_DSP1_xcom(3), z_DSP1_xcom(3), dz_DSP1_xcom(3);
x_DSP1_xcom << 0.000000, 0.500000, 1.000000;
z_DSP1_xcom << 0.016508, 0.011988, 0.018140;
dz_DSP1_xcom << -0.011909, 0.000716, 0.017768;
BasicSpline DSP1_xcom(x_DSP1_xcom,z_DSP1_xcom,dz_DSP1_xcom);

debugSplines.DSP1_xcom = DSP1_xcom;

Eigen::VectorXd x_DSP1_dzcom(3), z_DSP1_dzcom(3), dz_DSP1_dzcom(3);
x_DSP1_dzcom << 0.000000, 0.500000, 1.000000;
z_DSP1_dzcom << 0.000075, 0.121432, 0.000003;
dz_DSP1_dzcom << 0.035157, -0.012379, -0.013863;
BasicSpline DSP1_dzcom(x_DSP1_dzcom,z_DSP1_dzcom,dz_DSP1_dzcom);

debugSplines.DSP1_dzcom = DSP1_dzcom;

Eigen::VectorXd x_DSP1_dzsw(6), z_DSP1_dzsw(6), dz_DSP1_dzsw(6);
x_DSP1_dzsw << 0.000000, 0.200000, 0.400000, 0.600000, 0.800000, 1.000000;
z_DSP1_dzsw << 0.979501, 0.492717, 0.144439, -0.160397, -0.516856, -1.023830;
dz_DSP1_dzsw << -2.920353, -1.997517, -1.550250, -1.578234, -2.086080, -3.525692;
BasicSpline DSP1_dzsw(x_DSP1_dzsw,z_DSP1_dzsw,dz_DSP1_dzsw);

debugSplines.DSP1_dzsw = DSP1_dzsw;

Eigen::VectorXd x_DSP1_dxsw(3), z_DSP1_dxsw(3), dz_DSP1_dxsw(3);
x_DSP1_dxsw << 0.000000, 0.500000, 1.000000;
z_DSP1_dxsw << -0.000144, -0.208205, 0.121820;
dz_DSP1_dxsw << -0.067901, 0.250879, -0.148930;
BasicSpline DSP1_dxsw(x_DSP1_dxsw,z_DSP1_dxsw,dz_DSP1_dxsw);

debugSplines.DSP1_dxsw = DSP1_dxsw;

Eigen::VectorXd x_DSP1_dxcom(4), z_DSP1_dxcom(4), dz_DSP1_dxcom(4);
x_DSP1_dxcom << 0.000000, 0.333333, 0.666667, 1.000000;
z_DSP1_dxcom << -0.043525, -0.015091, 0.020968, 0.046354;
dz_DSP1_dxcom << 1.727296, -0.023254, 0.118508, 0.291275;
BasicSpline DSP1_dxcom(x_DSP1_dxcom,z_DSP1_dxcom,dz_DSP1_dxcom);

debugSplines.DSP1_dxcom = DSP1_dxcom;

Eigen::VectorXd x_DSP1_ddzcom(4), z_DSP1_ddzcom(4), dz_DSP1_ddzcom(4);
x_DSP1_ddzcom << 0.000000, 0.333333, 0.666667, 1.000000;
z_DSP1_ddzcom << -7.392760, -4.156920, -4.249280, -7.669150;
dz_DSP1_ddzcom << 14.596200, 4.612325, -5.390100, -17.629125;
BasicSpline DSP1_ddzcom(x_DSP1_ddzcom,z_DSP1_ddzcom,dz_DSP1_ddzcom);

debugSplines.DSP1_ddzcom = DSP1_ddzcom;

Eigen::VectorXd x_DSP1_ddzsw(5), z_DSP1_ddzsw(5), dz_DSP1_ddzsw(5);
x_DSP1_ddzsw << 0.000000, 0.250000, 0.500000, 0.750000, 1.000000;
z_DSP1_ddzsw << -0.114214, -1.746070, 0.459944, 1.829880, -0.013492;
dz_DSP1_ddzsw << -17.590329, 3.701293, 8.653348, -1.783450, -12.234533;
BasicSpline DSP1_ddzsw(x_DSP1_ddzsw,z_DSP1_ddzsw,dz_DSP1_ddzsw);

debugSplines.DSP1_ddzsw = DSP1_ddzsw;

Eigen::VectorXd x_DSP1_ddxsw(7), z_DSP1_ddxsw(7), dz_DSP1_ddxsw(7);
x_DSP1_ddxsw << 0.000000, 0.166667, 0.333333, 0.500000, 0.666667, 0.833333, 1.000000;
z_DSP1_ddxsw << 0.005959, -1.096990, -3.189090, -3.788060, -1.338600, 2.340280, -0.074189;
dz_DSP1_ddxsw << 0.450803, -13.721700, -10.236950, 4.490614, 22.752900, 14.759970, -66.027506;
BasicSpline DSP1_ddxsw(x_DSP1_ddxsw,z_DSP1_ddxsw,dz_DSP1_ddxsw);

debugSplines.DSP1_ddxsw = DSP1_ddxsw;

Eigen::VectorXd x_DSP1_ddxcom(3), z_DSP1_ddxcom(3), dz_DSP1_ddxcom(3);
x_DSP1_ddxcom << 0.000000, 0.500000, 1.000000;
z_DSP1_ddxcom << 0.059589, -0.018216, 0.012190;
dz_DSP1_ddxcom << 9.117076, -4.134795, 11.053958;
BasicSpline DSP1_ddxcom(x_DSP1_ddxcom,z_DSP1_ddxcom,dz_DSP1_ddxcom);

debugSplines.DSP1_ddxcom = DSP1_ddxcom;

debugSplines.DSP1_timeMin =0;
debugSplines.DSP1_timeMax =0.3975;


Eigen::VectorXd x_DSP2_zcom(2), z_DSP2_zcom(2), dz_DSP2_zcom(2);
x_DSP2_zcom << 0.000000, 1.000000;
z_DSP2_zcom << 0.745699, 0.750000;
dz_DSP2_zcom << 0.000000, 0.000000;
BasicSpline DSP2_zcom(x_DSP2_zcom,z_DSP2_zcom,dz_DSP2_zcom);

debugSplines.DSP2_zcom = DSP2_zcom;

Eigen::VectorXd x_DSP2_zsw(6), z_DSP2_zsw(6), dz_DSP2_zsw(6);
x_DSP2_zsw << 0.000000, 0.200000, 0.400000, 0.600000, 0.800000, 1.000000;
z_DSP2_zsw << -0.001946, 0.057804, 0.084000, 0.083949, 0.057796, -0.002511;
dz_DSP2_zsw << 0.337053, 0.203983, 0.060273, -0.078072, -0.250438, -0.504606;
BasicSpline DSP2_zsw(x_DSP2_zsw,z_DSP2_zsw,dz_DSP2_zsw);

debugSplines.DSP2_zsw = DSP2_zsw;

Eigen::VectorXd x_DSP2_xsw(10), z_DSP2_xsw(10), dz_DSP2_xsw(10);
x_DSP2_xsw << 0.000000, 0.111111, 0.222222, 0.333333, 0.444444, 0.555556, 0.666667, 0.777778, 0.888889, 1.000000;
z_DSP2_xsw << 0.037218, 0.036762, 0.035687, 0.037363, 0.047252, 0.069705, 0.106662, 0.152768, 0.201101, 0.248168;
dz_DSP2_xsw << -0.000066, -0.008142, -0.002977, 0.050530, 0.152169, 0.255548, 0.402458, 0.440984, 0.455790, 0.090346;
BasicSpline DSP2_xsw(x_DSP2_xsw,z_DSP2_xsw,dz_DSP2_xsw);

debugSplines.DSP2_xsw = DSP2_xsw;

Eigen::VectorXd x_DSP2_xcom(9), z_DSP2_xcom(9), dz_DSP2_xcom(9);
x_DSP2_xcom << 0.000000, 0.125000, 0.250000, 0.375000, 0.500000, 0.625000, 0.750000, 0.875000, 1.000000;
z_DSP2_xcom << 0.056108, 0.058774, 0.062953, 0.069703, 0.079443, 0.092596, 0.109873, 0.130653, 0.155544;
dz_DSP2_xcom << 0.115924, 0.024301, 0.044712, 0.066386, 0.091654, 0.122122, 0.153097, 0.182284, 0.205169;
BasicSpline DSP2_xcom(x_DSP2_xcom,z_DSP2_xcom,dz_DSP2_xcom);

debugSplines.DSP2_xcom = DSP2_xcom;

Eigen::VectorXd x_DSP2_dzcom(3), z_DSP2_dzcom(3), dz_DSP2_dzcom(3);
x_DSP2_dzcom << 0.000000, 0.500000, 1.000000;
z_DSP2_dzcom << 0.000012, 0.020161, 0.000001;
dz_DSP2_dzcom << 0.004870, -0.002217, -0.001488;
BasicSpline DSP2_dzcom(x_DSP2_dzcom,z_DSP2_dzcom,dz_DSP2_dzcom);

debugSplines.DSP2_dzcom = DSP2_dzcom;

Eigen::VectorXd x_DSP2_dzsw(8), z_DSP2_dzsw(8), dz_DSP2_dzsw(8);
x_DSP2_dzsw << 0.000000, 0.142857, 0.285714, 0.428571, 0.571429, 0.714286, 0.857143, 1.000000;
z_DSP2_dzsw << 1.025880, 0.644386, 0.349267, 0.108536, -0.111692, -0.350913, -0.640111, -1.023830;
dz_DSP2_dzsw << -2.552507, -2.314768, -1.457954, -1.571132, -1.571941, -1.821407, -2.315723, -3.790950;
BasicSpline DSP2_dzsw(x_DSP2_dzsw,z_DSP2_dzsw,dz_DSP2_dzsw);

debugSplines.DSP2_dzsw = DSP2_dzsw;

Eigen::VectorXd x_DSP2_dxsw(3), z_DSP2_dxsw(3), dz_DSP2_dxsw(3);
x_DSP2_dxsw << 0.000000, 0.500000, 1.000000;
z_DSP2_dxsw << -0.000100, 0.445500, 1.151320;
dz_DSP2_dxsw << -0.038234, 2.595756, 0.378100;
BasicSpline DSP2_dxsw(x_DSP2_dxsw,z_DSP2_dxsw,dz_DSP2_dxsw);

debugSplines.DSP2_dxsw = DSP2_dxsw;

Eigen::VectorXd x_DSP2_dxcom(5), z_DSP2_dxcom(5), dz_DSP2_dxcom(5);
x_DSP2_dxcom << 0.000000, 0.250000, 0.500000, 0.750000, 1.000000;
z_DSP2_dxcom << 0.288247, 0.107889, 0.229038, 0.383398, 0.515518;
dz_DSP2_dxcom << -3.580143, 0.488175, 0.510577, 0.322513, -1.219870;
BasicSpline DSP2_dxcom(x_DSP2_dxcom,z_DSP2_dxcom,dz_DSP2_dxcom);

debugSplines.DSP2_dxcom = DSP2_dxcom;

Eigen::VectorXd x_DSP2_ddzcom(6), z_DSP2_ddzcom(6), dz_DSP2_ddzcom(6);
x_DSP2_ddzcom << 0.000000, 0.200000, 0.400000, 0.600000, 0.800000, 1.000000;
z_DSP2_ddzcom << -7.742760, -5.288350, -4.038330, -4.015790, -5.221010, -7.669150;
dz_DSP2_ddzcom << 12.759880, 9.224048, 3.098032, -3.702992, -11.054848, -18.956740;
BasicSpline DSP2_ddzcom(x_DSP2_ddzcom,z_DSP2_ddzcom,dz_DSP2_ddzcom);

debugSplines.DSP2_ddzcom = DSP2_ddzcom;

Eigen::VectorXd x_DSP2_ddzsw(10), z_DSP2_ddzsw(10), dz_DSP2_ddzsw(10);
x_DSP2_ddzsw << 0.000000, 0.111111, 0.222222, 0.333333, 0.444444, 0.555556, 0.666667, 0.777778, 0.888889, 1.000000;
z_DSP2_ddzsw << -0.078490, -0.590279, 0.857991, 3.000110, 4.681250, 4.770070, 2.739930, -0.763087, -3.327030, 0.099524;
dz_DSP2_ddzsw << -9.367288, 5.772933, 14.714697, 20.210440, 8.338100, -9.478768, -27.606872, -32.590628, -5.210616, 96.323602;
BasicSpline DSP2_ddzsw(x_DSP2_ddzsw,z_DSP2_ddzsw,dz_DSP2_ddzsw);

debugSplines.DSP2_ddzsw = DSP2_ddzsw;

Eigen::VectorXd x_DSP2_ddxsw(7), z_DSP2_ddxsw(7), dz_DSP2_ddxsw(7);
x_DSP2_ddxsw << 0.000000, 0.166667, 0.333333, 0.500000, 0.666667, 0.833333, 1.000000;
z_DSP2_ddxsw << -0.377501, -4.997150, -1.555980, 3.610990, 6.013170, 3.378970, -0.000284;
dz_DSP2_ddxsw << -48.164633, 6.083430, 32.355808, 26.184989, -2.225616, -27.094248, -1.104524;
BasicSpline DSP2_ddxsw(x_DSP2_ddxsw,z_DSP2_ddxsw,dz_DSP2_ddxsw);

debugSplines.DSP2_ddxsw = DSP2_ddxsw;

Eigen::VectorXd x_DSP2_ddxcom(3), z_DSP2_ddxcom(3), dz_DSP2_ddxcom(3);
x_DSP2_ddxcom << 0.000000, 0.500000, 1.000000;
z_DSP2_ddxcom << 0.009893, -0.002016, 0.002024;
dz_DSP2_ddxcom << 1.262940, -0.801945, 1.983666;
BasicSpline DSP2_ddxcom(x_DSP2_ddxcom,z_DSP2_ddxcom,dz_DSP2_ddxcom);

debugSplines.DSP2_ddxcom = DSP2_ddxcom;

debugSplines.DSP2_timeMin =0;
debugSplines.DSP2_timeMax =0.398;


Eigen::VectorXd x_DSP3_zcom(2), z_DSP3_zcom(2), dz_DSP3_zcom(2);
x_DSP3_zcom << 0.000000, 1.000000;
z_DSP3_zcom << 0.749123, 0.750000;
dz_DSP3_zcom << 0.000000, 0.000000;
BasicSpline DSP3_zcom(x_DSP3_zcom,z_DSP3_zcom,dz_DSP3_zcom);

debugSplines.DSP3_zcom = DSP3_zcom;

Eigen::VectorXd x_DSP3_zsw(6), z_DSP3_zsw(6), dz_DSP3_zsw(6);
x_DSP3_zsw << 0.000000, 0.200000, 0.400000, 0.600000, 0.800000, 1.000000;
z_DSP3_zsw << 0.000672, 0.059042, 0.084397, 0.084121, 0.057802, -0.002511;
dz_DSP3_zsw << 0.315859, 0.198143, 0.057319, -0.065721, -0.209315, -0.505874;
BasicSpline DSP3_zsw(x_DSP3_zsw,z_DSP3_zsw,dz_DSP3_zsw);

debugSplines.DSP3_zsw = DSP3_zsw;

Eigen::VectorXd x_DSP3_xsw(10), z_DSP3_xsw(10), dz_DSP3_xsw(10);
x_DSP3_xsw << 0.000000, 0.111111, 0.222222, 0.333333, 0.444444, 0.555556, 0.666667, 0.777778, 0.888889, 1.000000;
z_DSP3_xsw << -0.246839, -0.243757, -0.226363, -0.186971, -0.124462, -0.049073, 0.030672, 0.098085, 0.145499, 0.177611;
dz_DSP3_xsw << 0.000319, 0.080598, 0.254402, 0.473214, 0.491568, 0.640361, 0.614198, 0.445238, 0.395409, -0.088578;
BasicSpline DSP3_xsw(x_DSP3_xsw,z_DSP3_xsw,dz_DSP3_xsw);

debugSplines.DSP3_xsw = DSP3_xsw;

Eigen::VectorXd x_DSP3_xcom(8), z_DSP3_xcom(8), dz_DSP3_xcom(8);
x_DSP3_xcom << 0.000000, 0.142857, 0.285714, 0.428571, 0.571429, 0.714286, 0.857143, 1.000000;
z_DSP3_xcom << -0.090265, -0.064025, -0.038931, -0.013897, 0.011957, 0.038099, 0.065261, 0.093247;
dz_DSP3_xcom << 0.137623, 0.178305, 0.174591, 0.177023, 0.182250, 0.186732, 0.167869, 0.240278;
BasicSpline DSP3_xcom(x_DSP3_xcom,z_DSP3_xcom,dz_DSP3_xcom);

debugSplines.DSP3_xcom = DSP3_xcom;

Eigen::VectorXd x_DSP3_dzcom(2), z_DSP3_dzcom(2), dz_DSP3_dzcom(2);
x_DSP3_dzcom << 0.000000, 1.000000;
z_DSP3_dzcom << 0.000001, 0.000000;
dz_DSP3_dzcom << 0.000643, -0.000304;
BasicSpline DSP3_dzcom(x_DSP3_dzcom,z_DSP3_dzcom,dz_DSP3_dzcom);

debugSplines.DSP3_dzcom = DSP3_dzcom;

Eigen::VectorXd x_DSP3_dzsw(8), z_DSP3_dzsw(8), dz_DSP3_dzsw(8);
x_DSP3_dzsw << 0.000000, 0.142857, 0.285714, 0.428571, 0.571429, 0.714286, 0.857143, 1.000000;
z_DSP3_dzsw << 0.997015, 0.627114, 0.338240, 0.105636, -0.114561, -0.349495, -0.643111, -1.023830;
dz_DSP3_dzsw << -2.383945, -2.256584, -1.769964, -1.541802, -1.556632, -2.120153, -2.333252, -3.800475;
BasicSpline DSP3_dzsw(x_DSP3_dzsw,z_DSP3_dzsw,dz_DSP3_dzsw);

debugSplines.DSP3_dzsw = DSP3_dzsw;

Eigen::VectorXd x_DSP3_dxsw(3), z_DSP3_dxsw(3), dz_DSP3_dxsw(3);
x_DSP3_dxsw << 0.000000, 0.500000, 1.000000;
z_DSP3_dxsw << 0.000259, 1.695120, 0.872867;
dz_DSP3_dxsw << 0.181489, 2.131990, -0.247380;
BasicSpline DSP3_dxsw(x_DSP3_dxsw,z_DSP3_dxsw,dz_DSP3_dxsw);

debugSplines.DSP3_dxsw = DSP3_dxsw;

Eigen::VectorXd x_DSP3_dxcom(10), z_DSP3_dxcom(10), dz_DSP3_dxcom(10);
x_DSP3_dxcom << 0.000000, 0.111111, 0.222222, 0.333333, 0.444444, 0.555556, 0.666667, 0.777778, 0.888889, 1.000000;
z_DSP3_dxcom << 0.320136, 0.456408, 0.438902, 0.439785, 0.477962, 0.453809, 0.466845, 0.471720, 0.485772, 0.483534;
dz_DSP3_dxcom << 37.036457, -0.630739, 0.007820, -0.098633, -3.805795, 0.269952, -0.124260, 0.049932, 0.290339, -0.500146;
BasicSpline DSP3_dxcom(x_DSP3_dxcom,z_DSP3_dxcom,dz_DSP3_dxcom);

debugSplines.DSP3_dxcom = DSP3_dxcom;

Eigen::VectorXd x_DSP3_ddzcom(6), z_DSP3_ddzcom(6), dz_DSP3_ddzcom(6);
x_DSP3_ddzcom << 0.000000, 0.200000, 0.400000, 0.600000, 0.800000, 1.000000;
z_DSP3_ddzcom << -7.505860, -5.123410, -3.942780, -3.967920, -5.210040, -7.669150;
dz_DSP3_ddzcom << 11.917332, 8.846628, 2.775900, -3.292320, -9.343250, -19.006365;
BasicSpline DSP3_ddzcom(x_DSP3_ddzcom,z_DSP3_ddzcom,dz_DSP3_ddzcom);

debugSplines.DSP3_ddzcom = DSP3_ddzcom;

Eigen::VectorXd x_DSP3_ddzsw(10), z_DSP3_ddzsw(10), dz_DSP3_ddzsw(10);
x_DSP3_ddzsw << 0.000000, 0.111111, 0.222222, 0.333333, 0.444444, 0.555556, 0.666667, 0.777778, 0.888889, 1.000000;
z_DSP3_ddzsw << 0.344832, 7.575740, 10.539200, 10.094400, 6.636080, 0.968853, -5.539560, -10.467500, -10.319800, 0.199913;
dz_DSP3_ddzsw << 71.393549, 42.357840, 9.607920, -16.574460, -40.882870, -48.588852, -47.553960, -22.138800, 39.221700, 195.796881;
BasicSpline DSP3_ddzsw(x_DSP3_ddzsw,z_DSP3_ddzsw,dz_DSP3_ddzsw);

debugSplines.DSP3_ddzsw = DSP3_ddzsw;

Eigen::VectorXd x_DSP3_ddxsw(10), z_DSP3_ddxsw(10), dz_DSP3_ddxsw(10);
x_DSP3_ddxsw << 0.000000, 0.111111, 0.222222, 0.333333, 0.444444, 0.555556, 0.666667, 0.777778, 0.888889, 1.000000;
z_DSP3_ddxsw << 0.226167, 4.429780, 4.507830, 1.812600, -1.742390, -4.700240, -5.945620, -4.832610, -2.142870, 0.006151;
dz_DSP3_ddxsw << 46.903567, 17.421936, -15.651972, -30.983148, -26.013470, -17.578800, 0.408120, 17.289240, 27.774390, 7.021546;
BasicSpline DSP3_ddxsw(x_DSP3_ddxsw,z_DSP3_ddxsw,dz_DSP3_ddxsw);

debugSplines.DSP3_ddxsw = DSP3_ddxsw;

Eigen::VectorXd x_DSP3_ddxcom(2), z_DSP3_ddxcom(2), dz_DSP3_ddxcom(2);
x_DSP3_ddxcom << 0.000000, 1.000000;
z_DSP3_ddxcom << 0.001220, 0.000413;
dz_DSP3_ddxcom << 0.252719, 0.405554;
BasicSpline DSP3_ddxcom(x_DSP3_ddxcom,z_DSP3_ddxcom,dz_DSP3_ddxcom);

debugSplines.DSP3_ddxcom = DSP3_ddxcom;

debugSplines.DSP3_timeMin =0;
debugSplines.DSP3_timeMax =0.399;


Eigen::VectorXd x_DSP4_zcom(2), z_DSP4_zcom(2), dz_DSP4_zcom(2);
x_DSP4_zcom << 0.000000, 1.000000;
z_DSP4_zcom << 0.747395, 0.750000;
dz_DSP4_zcom << 0.000000, 0.000000;
BasicSpline DSP4_zcom(x_DSP4_zcom,z_DSP4_zcom,dz_DSP4_zcom);

debugSplines.DSP4_zcom = DSP4_zcom;

Eigen::VectorXd x_DSP4_zsw(3), z_DSP4_zsw(3), dz_DSP4_zsw(3);
x_DSP4_zsw << 0.000000, 0.500000, 1.000000;
z_DSP4_zsw << -0.000636, 0.087207, -0.002000;
dz_DSP4_zsw << 0.398013, -0.003104, -0.402170;
BasicSpline DSP4_zsw(x_DSP4_zsw,z_DSP4_zsw,dz_DSP4_zsw);

debugSplines.DSP4_zsw = DSP4_zsw;

Eigen::VectorXd x_DSP4_xsw(10), z_DSP4_xsw(10), dz_DSP4_xsw(10);
x_DSP4_xsw << 0.000000, 0.111111, 0.222222, 0.333333, 0.444444, 0.555556, 0.666667, 0.777778, 0.888889, 1.000000;
z_DSP4_xsw << -0.183685, -0.181329, -0.168058, -0.138398, -0.090649, -0.030120, 0.034302, 0.090573, 0.134197, 0.166595;
dz_DSP4_xsw << 0.000398, 0.076416, 0.195975, 0.353424, 0.490734, 0.571869, 0.496977, 0.520398, 0.304527, -0.016557;
BasicSpline DSP4_xsw(x_DSP4_xsw,z_DSP4_xsw,dz_DSP4_xsw);

debugSplines.DSP4_xsw = DSP4_xsw;

Eigen::VectorXd x_DSP4_xcom(7), z_DSP4_xcom(7), dz_DSP4_xcom(7);
x_DSP4_xcom << 0.000000, 0.166667, 0.333333, 0.500000, 0.666667, 0.833333, 1.000000;
z_DSP4_xcom << -0.088632, -0.058315, -0.030501, -0.002782, 0.025706, 0.054912, 0.086212;
dz_DSP4_xcom << 0.258143, 0.193735, 0.164565, 0.165998, 0.173346, 0.181138, 0.186551;
BasicSpline DSP4_xcom(x_DSP4_xcom,z_DSP4_xcom,dz_DSP4_xcom);

debugSplines.DSP4_xcom = DSP4_xcom;

Eigen::VectorXd x_DSP4_dzcom(3), z_DSP4_dzcom(3), dz_DSP4_dzcom(3);
x_DSP4_dzcom << 0.000000, 0.500000, 1.000000;
z_DSP4_dzcom << 0.000005, 0.012210, 0.000000;
dz_DSP4_dzcom << 0.003308, -0.001098, -0.001200;
BasicSpline DSP4_dzcom(x_DSP4_dzcom,z_DSP4_dzcom,dz_DSP4_dzcom);

debugSplines.DSP4_dzcom = DSP4_dzcom;

Eigen::VectorXd x_DSP4_dzsw(2), z_DSP4_dzsw(2), dz_DSP4_dzsw(2);
x_DSP4_dzsw << 0.000000, 1.000000;
z_DSP4_dzsw << 1.011410, -1.020000;
dz_DSP4_dzsw << -3.011268, -3.026392;
BasicSpline DSP4_dzsw(x_DSP4_dzsw,z_DSP4_dzsw,dz_DSP4_dzsw);

debugSplines.DSP4_dzsw = DSP4_dzsw;

Eigen::VectorXd x_DSP4_dxsw(3), z_DSP4_dxsw(3), dz_DSP4_dxsw(3);
x_DSP4_dxsw << 0.000000, 0.500000, 1.000000;
z_DSP4_dxsw << 0.000331, 1.337230, 0.831536;
dz_DSP4_dxsw << 0.228914, 1.677968, -0.068297;
BasicSpline DSP4_dxsw(x_DSP4_dxsw,z_DSP4_dxsw,dz_DSP4_dxsw);

debugSplines.DSP4_dxsw = DSP4_dxsw;

Eigen::VectorXd x_DSP4_dxcom(7), z_DSP4_dxcom(7), dz_DSP4_dxcom(7);
x_DSP4_dxcom << 0.000000, 0.166667, 0.333333, 0.500000, 0.666667, 0.833333, 1.000000;
z_DSP4_dxcom << 0.655495, 0.429676, 0.410737, 0.423327, 0.436383, 0.451333, 0.463760;
dz_DSP4_dxcom << -3.905972, -0.523995, 0.558474, -0.583627, -0.039004, 0.560384, -1.712674;
BasicSpline DSP4_dxcom(x_DSP4_dxcom,z_DSP4_dxcom,dz_DSP4_dxcom);

debugSplines.DSP4_dxcom = DSP4_dxcom;

Eigen::VectorXd x_DSP4_ddzcom(2), z_DSP4_ddzcom(2), dz_DSP4_ddzcom(2);
x_DSP4_ddzcom << 0.000000, 1.000000;
z_DSP4_ddzcom << -7.623910, -7.650000;
dz_DSP4_ddzcom << 15.057667, -15.128776;
BasicSpline DSP4_ddzcom(x_DSP4_ddzcom,z_DSP4_ddzcom,dz_DSP4_ddzcom);

debugSplines.DSP4_ddzcom = DSP4_ddzcom;

Eigen::VectorXd x_DSP4_ddzsw(9), z_DSP4_ddzsw(9), dz_DSP4_ddzsw(9);
x_DSP4_ddzsw << 0.000000, 0.125000, 0.250000, 0.375000, 0.500000, 0.625000, 0.750000, 0.875000, 1.000000;
z_DSP4_ddzsw << 0.329927, 6.236280, 8.226370, 7.281580, 3.707670, -1.753760, -7.084440, -8.481420, 0.000000;
dz_DSP4_ddzsw << 64.277398, 27.831344, 1.289520, -19.396928, -39.812736, -46.896909, -31.999200, 19.480110, 127.530822;
BasicSpline DSP4_ddzsw(x_DSP4_ddzsw,z_DSP4_ddzsw,dz_DSP4_ddzsw);

debugSplines.DSP4_ddzsw = DSP4_ddzsw;

Eigen::VectorXd x_DSP4_ddxsw(7), z_DSP4_ddxsw(7), dz_DSP4_ddxsw(7);
x_DSP4_ddxsw << 0.000000, 0.166667, 0.333333, 0.500000, 0.666667, 0.833333, 1.000000;
z_DSP4_ddxsw << -0.275571, -4.658140, -1.716990, 3.147990, 5.539830, 3.344340, -0.000000;
dz_DSP4_ddxsw << -52.985740, -3.152160, 30.076064, 24.927536, -0.263817, -23.822688, -5.638482;
BasicSpline DSP4_ddxsw(x_DSP4_ddxsw,z_DSP4_ddxsw,dz_DSP4_ddxsw);

debugSplines.DSP4_ddxsw = DSP4_ddxsw;

Eigen::VectorXd x_DSP4_ddxcom(2), z_DSP4_ddxcom(2), dz_DSP4_ddxcom(2);
x_DSP4_ddxcom << 0.000000, 1.000000;
z_DSP4_ddxcom << 0.004811, 0.000000;
dz_DSP4_ddxcom << 0.921401, 0.953805;
BasicSpline DSP4_ddxcom(x_DSP4_ddxcom,z_DSP4_ddxcom,dz_DSP4_ddxcom);

debugSplines.DSP4_ddxcom = DSP4_ddxcom;

debugSplines.DSP4_timeMin =0;
debugSplines.DSP4_timeMax =0.398;


}

#endif
