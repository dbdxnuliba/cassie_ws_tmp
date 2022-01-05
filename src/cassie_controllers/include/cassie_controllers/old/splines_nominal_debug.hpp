#include <cassie_common_toolbox/bezier_tools.hpp>
#ifndef SPLINES_NOMINAL_DEBUG_HPP
#define SPLINES_NOMINAL_DEBUG_HPP


void OUTPUT_DEBUG::Splines::createNominalSplines(){

// Eigen::VectorXd x_xcom(3), z_xcom(3), dz_xcom(3);
// x_xcom << 0.000000, 0.500000, 1.000000;
// z_xcom << -0.155089, 0.035555, 0.244911;
// dz_xcom << 0.438714, 0.362673, 0.438714;
// BasicSpline xcom(x_xcom,z_xcom,dz_xcom);

// nominalSplines.xcom = xcom;

// Eigen::VectorXd x_dxcom(5), z_dxcom(5), dz_dxcom(5);
// x_dxcom << 0.000000, 0.250000, 0.500000, 0.750000, 1.000000;
// z_dxcom << 0.865478, 0.704999, 0.694317, 0.815208, 0.865495;
// dz_dxcom << -0.960663, -0.212073, 0.188983, 0.955535, -0.960663;
// BasicSpline dxcom(x_dxcom,z_dxcom,dz_dxcom);

// nominalSplines.dxcom = dxcom;

// Eigen::VectorXd x_ddxcom(21), z_ddxcom(21), dz_ddxcom(21);
// x_ddxcom << 0.000000, 0.050000, 0.100000, 0.150000, 0.200000, 0.250000, 0.300000, 0.350000, 0.400000, 0.450000, 0.500000, 0.550000, 0.600000, 0.650000, 0.700000, 0.750000, 0.800000, 0.850000, 0.900000, 0.950000, 1.000000;
// z_ddxcom << -1.939697, -1.760762, -1.513321, -0.960976, -0.710521, -0.498382, -0.326452, -0.187462, 0.038887, 0.153696, 0.286122, 0.447296, 0.644866, 1.156573, 1.449597, 1.729919, 1.956256, 1.005360, 0.045010, -0.776496, -1.945137;
// dz_ddxcom << 4.271738, 5.907174, 6.618719, 5.979121, 5.064428, 4.104500, 3.318108, 2.795742, 2.740837, 3.161435, 3.847709, 4.716619, 5.668769, 6.995373, 6.692168, 5.403367, -17.724229, -17.677101, -18.489701, -20.399486, 4.271738;
// BasicSpline ddxcom(x_ddxcom,z_ddxcom,dz_ddxcom);

// nominalSplines.ddxcom = ddxcom;

// Eigen::VectorXd x_zcom(3), z_zcom(3), dz_zcom(3);
// x_zcom << 0.000000, 0.500000, 1.000000;
// z_zcom << 0.782374, 0.792309, 0.782374;
// dz_zcom << 0.028794, -0.026587, 0.028794;
// BasicSpline zcom(x_zcom,z_zcom,dz_zcom);

// nominalSplines.zcom = zcom;

// Eigen::VectorXd x_dzcom(6), z_dzcom(6), dz_dzcom(6);
// x_dzcom << 0.000000, 0.200000, 0.400000, 0.600000, 0.800000, 1.000000;
// z_dzcom << 0.052708, 0.069023, -0.007541, -0.068722, -0.054600, 0.052736;
// dz_dzcom << 0.144772, -0.198618, -0.460892, -0.124617, 0.226275, 0.144772;
// BasicSpline dzcom(x_dzcom,z_dzcom,dz_dzcom);

// nominalSplines.dzcom = dzcom;

// Eigen::VectorXd x_ddzcom(13), z_ddzcom(13), dz_ddzcom(13);
// x_ddzcom << 0.000000, 0.083333, 0.166667, 0.250000, 0.333333, 0.416667, 0.500000, 0.583333, 0.666667, 0.750000, 0.833333, 0.916667, 1.000000;
// z_ddzcom << 0.563325, 0.586582, 0.164695, -0.402195, -0.813796, -0.919074, -0.706280, -0.225908, 0.345706, 0.695999, 0.767290, 0.019414, -1.706496;
// dz_ddzcom << 1.927333, -4.102027, -6.861280, -5.651230, -2.273092, 1.629180, 5.132832, 6.915691, 5.408164, -0.366861, -1.491704, -16.759623, 1.927333;
// BasicSpline ddzcom(x_ddzcom,z_ddzcom,dz_ddzcom);

// nominalSplines.ddzcom = ddzcom;

// Eigen::VectorXd x_GRFst(11), z_GRFst(11), dz_GRFst(11);
// x_GRFst << 0.000000, 0.100000, 0.200000, 0.300000, 0.400000, 0.500000, 0.600000, 0.700000, 0.800000, 0.900000, 1.000000;
// z_GRFst << 352.011007, 351.459555, 278.009628, 227.185488, 199.869371, 219.997783, 266.910807, 349.701601, 365.311956, 260.426836, -0.005714;
// dz_GRFst << 166.899475, -446.060062, -660.809603, -407.105220, 151.831702, 497.605522, 692.389286, 355.805225, -246.258328, -2001.942139, 166.899475;
// BasicSpline GRFst(x_GRFst,z_GRFst,dz_GRFst);

// nominalSplines.GRFst = GRFst;

// Eigen::VectorXd x_GRFsw(21), z_GRFsw(21), dz_GRFsw(21);
// x_GRFsw << 0.000000, 0.050000, 0.100000, 0.150000, 0.200000, 0.250000, 0.300000, 0.350000, 0.400000, 0.450000, 0.500000, 0.550000, 0.600000, 0.650000, 0.700000, 0.750000, 0.800000, 0.850000, 0.900000, 0.950000, 1.000000;
// z_GRFsw << 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 140.392794, 253.952386, 314.720082, 352.016795;
// dz_GRFsw << 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 2707.673442, 2377.424406, 1665.358267, 996.275453, 0.000000;
// BasicSpline GRFsw(x_GRFsw,z_GRFsw,dz_GRFsw);

// nominalSplines.GRFsw = GRFsw;

// Eigen::VectorXd x_xsw(7), z_xsw(7), dz_xsw(7);
// x_xsw << 0.000000, 0.166667, 0.333333, 0.500000, 0.666667, 0.833333, 1.000000;
// z_xsw << -0.199898, -0.198377, -0.175497, 0.004409, 0.177448, 0.198257, 0.199898;
// dz_xsw << 0.002429, 0.038457, 0.517671, 1.579656, 0.261443, 0.026341, 0.001842;
// BasicSpline xsw(x_xsw,z_xsw,dz_xsw);

// nominalSplines.xsw = xsw;

// Eigen::VectorXd x_dxsw(9), z_dxsw(9), dz_dxsw(9);
// x_dxsw << 0.000000, 0.125000, 0.250000, 0.375000, 0.500000, 0.625000, 0.750000, 0.875000, 1.000000;
// z_dxsw << 0.001684, 0.013432, 0.104532, 0.676272, 1.654516, 0.631433, 0.095967, 0.014170, 0.001683;
// dz_dxsw << 0.040175, 0.318208, 2.340186, 9.809337, -4.901958, -6.664868, -1.128752, -0.214109, -0.030479;
// BasicSpline dxsw(x_dxsw,z_dxsw,dz_dxsw);

// nominalSplines.dxsw = dxsw;

// Eigen::VectorXd x_ddxsw(13), z_ddxsw(13), dz_ddxsw(13);
// x_ddxsw << 0.000000, 0.083333, 0.166667, 0.250000, 0.333333, 0.416667, 0.500000, 0.583333, 0.666667, 0.750000, 0.833333, 0.916667, 1.000000;
// z_ddxsw << 0.000673, 0.002686, 0.010617, 0.040471, 0.133645, 0.254770, -0.014590, -0.253274, -0.125014, -0.037258, -0.011393, -0.002783, -0.000673;
// dz_ddxsw << 0.016045, 0.063625, 0.245415, 0.845899, 1.775982, -1.611455, -4.535192, 1.304220, 1.307267, 0.431428, 0.170237, 0.042055, 0.012178;
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

// double xcomMin = -0.155089;

// double xcomMax = 0.244911;
// double timeMin = 0.000000;

// double timeMax = 0.519160;



// nominalSplines.xcomMin = xcomMin;
// nominalSplines.xcomMax = xcomMax;
// nominalSplines.timeMin = timeMin;
// nominalSplines.timeMax = timeMax;
}

#endif