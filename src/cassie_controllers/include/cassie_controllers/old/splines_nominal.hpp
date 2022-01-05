#include <cassie_common_toolbox/bezier_tools.hpp>
#ifndef SPLINES_NOMINAL_HPP
#define SPLINES_NOMINAL_HPP


void OUTPUT_SLIP::Splines::createNominalSplines(){

// Eigen::VectorXd x_zero(3), z_zero(3), dz_zero(3);
// x_zero << 0.000000, 0.500000, 1.000000;
// z_zero << 0.000000, 0.000000, 0.000000;
// dz_zero << 0.000000, 0.000000, 0.000000;
// BasicSpline zero(x_zero,z_zero,dz_zero);

// nominalSplines.deltaRoll = zero;

// nominalSplines.deltaPitch = zero;

// nominalSplines.stanceHipYaw = zero;

// nominalSplines.ysw = zero;

// nominalSplines.swingHipYaw = zero;

// nominalSplines.deltaswFoot = zero;

// nominalSplines.ddxcom = zero;

// Eigen::VectorXd x_xcom(2), z_xcom(2), dz_xcom(2);
// x_xcom << 0.000000, 1.000000;
// z_xcom << -0.077544, 0.122456;
// dz_xcom << 0.219357, 0.219357;
// BasicSpline xcom(x_xcom,z_xcom,dz_xcom);

// nominalSplines.xcom = xcom;

// Eigen::VectorXd x_dxcom(4), z_dxcom(4), dz_dxcom(4);
// x_dxcom << 0.000000, 0.333333, 0.666667, 1.000000;
// z_dxcom << 0.432739, 0.345293, 0.376272, 0.432748;
// dz_dxcom << -0.480332, -0.033079, 0.336637, -0.480332;
// BasicSpline dxcom(x_dxcom,z_dxcom,dz_dxcom);

// nominalSplines.dxcom = dxcom;

// Eigen::VectorXd x_ddxcom(9), z_ddxcom(9), dz_ddxcom(9);
// x_ddxcom << 0.000000, 0.125000, 0.250000, 0.375000, 0.500000, 0.625000, 0.750000, 0.875000, 1.000000;
// z_ddxcom << -0.969849, -0.618038, -0.249191, -0.035177, 0.143061, 0.441160, 0.864960, 0.312519, -0.972568;
// dz_ddxcom << 2.135869, 3.283744, 2.052250, 1.303960, 1.923854, 3.273633, 2.701684, -8.909556, 2.135869;
// BasicSpline ddxcom(x_ddxcom,z_ddxcom,dz_ddxcom);

// nominalSplines.ddxcom = ddxcom;

// Eigen::VectorXd x_zcom(3), z_zcom(3), dz_zcom(3);
// x_zcom << 0.000000, 0.500000, 1.000000;
// z_zcom << 0.730450, 0.728749, 0.730450;
// dz_zcom << -0.004930, 0.004552, -0.004930;
// BasicSpline zcom(x_zcom,z_zcom,dz_zcom);

// nominalSplines.zcom = zcom;

// Eigen::VectorXd x_dzcom(7), z_dzcom(7), dz_dzcom(7);
// x_dzcom << 0.000000, 0.166667, 0.333333, 0.500000, 0.666667, 0.833333, 1.000000;
// z_dzcom << -0.009024, -0.012376, -0.005346, 0.007585, 0.012688, 0.007591, -0.009029;
// dz_dzcom << -0.024786, 0.013327, 0.077392, 0.058517, -0.017613, -0.083497, -0.024786;
// BasicSpline dzcom(x_dzcom,z_dzcom,dz_dzcom);

// nominalSplines.dzcom = dzcom;

// Eigen::VectorXd x_ddzcom(6), z_ddzcom(6), dz_ddzcom(6);
// x_ddzcom << 0.000000, 0.200000, 0.400000, 0.600000, 0.800000, 1.000000;
// z_ddzcom << -0.096448, 0.021010, 0.157356, 0.038678, -0.116532, 0.292171;
// dz_ddzcom << -0.329981, 1.142341, -0.278934, -1.184043, -0.802849, -0.329981;
// BasicSpline ddzcom(x_ddzcom,z_ddzcom,dz_ddzcom);

// nominalSplines.ddzcom = ddzcom;

// Eigen::VectorXd x_GRFst(3), z_GRFst(3), dz_GRFst(3);
// x_GRFst << 0.000000, 0.500000, 1.000000;
// z_GRFst << 352.011007, 219.997783, -0.005714;
// dz_GRFst << 166.899475, 497.605522, -3269.218533;
// BasicSpline GRFst(x_GRFst,z_GRFst,dz_GRFst);

// nominalSplines.GRFst = GRFst;

// Eigen::VectorXd x_GRFsw(21), z_GRFsw(21), dz_GRFsw(21);
// x_GRFsw << 0.000000, 0.050000, 0.100000, 0.150000, 0.200000, 0.250000, 0.300000, 0.350000, 0.400000, 0.450000, 0.500000, 0.550000, 0.600000, 0.650000, 0.700000, 0.750000, 0.800000, 0.850000, 0.900000, 0.950000, 1.000000;
// z_GRFsw << 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 140.392794, 253.952386, 314.720082, 352.016795;
// dz_GRFsw << 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 2707.673442, 2377.424406, 1665.358267, 996.275453, 413.970511;
// BasicSpline GRFsw(x_GRFsw,z_GRFsw,dz_GRFsw);

// nominalSplines.GRFsw = GRFsw;

// Eigen::VectorXd x_xsw(3), z_xsw(3), dz_xsw(3);
// x_xsw << 0.000000, 0.500000, 1.000000;
// z_xsw << -0.099898, 0.001758, 0.099896;
// dz_xsw << 0.002164, 0.728530, 0.001701;
// BasicSpline xsw(x_xsw,z_xsw,dz_xsw);

// nominalSplines.xsw = xsw;

// Eigen::VectorXd x_dxsw(5), z_dxsw(5), dz_dxsw(5);
// x_dxsw << 0.000000, 0.250000, 0.500000, 0.750000, 1.000000;
// z_dxsw << 0.001551, 0.066674, 0.756853, 0.062336, 0.001567;
// dz_dxsw << 0.032726, 1.293421, -1.877159, -0.683124, -0.025729;
// BasicSpline dxsw(x_dxsw,z_dxsw,dz_dxsw);

// nominalSplines.dxsw = dxsw;

// Eigen::VectorXd x_ddxsw(4), z_ddxsw(4), dz_ddxsw(4);
// x_ddxsw << 0.000000, 0.333333, 0.666667, 1.000000;
// z_ddxsw << 0.000310, 0.035972, -0.034258, -0.000313;
// dz_ddxsw << 0.006526, 0.368668, 0.319054, 0.005134;
// BasicSpline ddxsw(x_ddxsw,z_ddxsw,dz_ddxsw);

// nominalSplines.ddxsw = ddxsw;

// Eigen::VectorXd x_zsw(2), z_zsw(2), dz_zsw(2);
// x_zsw << 0.000000, 1.000000;
// z_zsw << 0.000000, -0.010914;
// dz_zsw << 0.198222, -0.226850;
// BasicSpline zsw(x_zsw,z_zsw,dz_zsw);

// nominalSplines.zsw = zsw;

// Eigen::VectorXd x_dzsw(2), z_dzsw(2), dz_dzsw(2);
// x_dzsw << 0.000000, 1.000000;
// z_dzsw << 0.207366, -0.229195;
// dz_dzsw << -0.436560, -0.436560;
// BasicSpline dzsw(x_dzsw,z_dzsw,dz_dzsw);

// nominalSplines.dzsw = dzsw;

// Eigen::VectorXd x_ddzsw(2), z_ddzsw(2), dz_ddzsw(2);
// x_ddzsw << 0.000000, 1.000000;
// z_ddzsw << -0.436560, -0.436560;
// dz_ddzsw << 0.000000, 0.000000;
// BasicSpline ddzsw(x_ddzsw,z_ddzsw,dz_ddzsw);

// nominalSplines.ddzsw = ddzsw;

// double xcomMin = -0.077544;

// double xcomMax = 0.122456;
// double timeMin = 0.000000;

// double timeMax = 0.519160;



// nominalSplines.xcomMin = xcomMin;
// nominalSplines.xcomMax = xcomMax;
// nominalSplines.timeMin = timeMin;
// nominalSplines.timeMax = timeMax;
}

#endif
