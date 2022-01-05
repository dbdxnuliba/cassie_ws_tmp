#include <cassie_common_toolbox/bezier_tools.hpp>
#ifndef SPLINES_DOWNSTEP_HPP
#define SPLINES_DOWNSTEP_HPP


void OUTPUT_DEBUG::Splines::createDownstepSplines(){

// Eigen::VectorXd x_zcom_step1(2), z_zcom_step1(2), dz_zcom_step1(2);
// x_zcom_step1 << 0.000000, 1.000000;
// z_zcom_step1 << 0.780979, 0.625108;
// dz_zcom_step1 << -0.002346, 0.058654;
// BasicSpline zcom_step1(x_zcom_step1,z_zcom_step1,dz_zcom_step1);

// downstepSplines.zcom_step1 = zcom_step1;

// Eigen::VectorXd x_dzcom_step1(3), z_dzcom_step1(3), dz_dzcom_step1(3);
// x_dzcom_step1 << 0.000000, 0.500000, 1.000000;
// z_dzcom_step1 << 0.068035, -0.652285, 0.167419;
// dz_dzcom_step1 << -2.620416, 1.131044, 2.722066;
// BasicSpline dzcom_step1(x_dzcom_step1,z_dzcom_step1,dz_dzcom_step1);

// downstepSplines.dzcom_step1 = dzcom_step1;

// Eigen::VectorXd x_ddzcom_step1(5), z_ddzcom_step1(5), dz_ddzcom_step1(5);
// x_ddzcom_step1 << 0.000000, 0.250000, 0.500000, 0.750000, 1.000000;
// z_ddzcom_step1 << -6.550064, -4.308968, 4.555442, 3.877390, -12.760535;
// dz_ddzcom_step1 << 0.670015, 24.262160, 22.317738, -35.536848, -56.437139;
// BasicSpline ddzcom_step1(x_ddzcom_step1,z_ddzcom_step1,dz_ddzcom_step1);

// downstepSplines.ddzcom_step1 = ddzcom_step1;

// // Eigen::VectorXd x_GRFst_step1(10), z_GRFst_step1(10), dz_GRFst_step1(10);
// // x_GRFst_step1 << 0.000000, 0.111111, 0.222222, 0.333333, 0.444444, 0.555556, 0.666667, 0.777778, 0.888889, 1.000000;
// // z_GRFst_step1 << 87.672690, 96.546620, 134.056458, 200.496642, 293.867700, 377.671181, 389.308337, 320.416904, 218.077658, -0.132422;
// // dz_GRFst_step1 << 6.289816, 274.332874, 519.743102, 790.670572, 835.298064, 317.446595, -502.684544, -770.304136, -1501.689914, 6.289816;
// // BasicSpline GRFst_step1(x_GRFst_step1,z_GRFst_step1,dz_GRFst_step1);

// // downstepSplines.GRFst_step1 = GRFst_step1;

// // Eigen::VectorXd x_GRFsw_step1(16), z_GRFsw_step1(16), dz_GRFsw_step1(16);
// // x_GRFsw_step1 << 0.000000, 0.066667, 0.133333, 0.200000, 0.266667, 0.333333, 0.400000, 0.466667, 0.533333, 0.600000, 0.666667, 0.733333, 0.800000, 0.866667, 0.933333, 1.000000;
// // z_GRFsw_step1 << 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 51.229677, 244.011556, 419.866054, 471.965061;
// // dz_GRFsw_step1 << 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 3334.695931, 2823.023187, 1432.293162, 0.000000;
// // BasicSpline GRFsw_step1(x_GRFsw_step1,z_GRFsw_step1,dz_GRFsw_step1);

// // downstepSplines.GRFsw_step1 = GRFsw_step1;

// Eigen::VectorXd x_zcom_step2(4), z_zcom_step2(4), dz_zcom_step2(4);
// x_zcom_step2 << 0.000000, 0.333333, 0.666667, 1.000000;
// z_zcom_step2 << 0.725158, 0.787139, 0.782109, 0.796912;
// dz_zcom_step2 << 0.134869, 0.034474, -0.029130, 0.205199;
// BasicSpline zcom_step2(x_zcom_step2,z_zcom_step2,dz_zcom_step2);

// downstepSplines.zcom_step2 = zcom_step2;

// Eigen::VectorXd x_dzcom_step2(5), z_dzcom_step2(5), dz_dzcom_step2(5);
// x_dzcom_step2 << 0.000000, 0.250000, 0.500000, 0.750000, 1.000000;
// z_dzcom_step2 << 0.167537, 0.369872, -0.075635, -0.013262, 0.399034;
// dz_dzcom_step2 << 3.092857, -2.218786, -0.090368, 0.351545, 1.857953;
// BasicSpline dzcom_step2(x_dzcom_step2,z_dzcom_step2,dz_dzcom_step2);

// downstepSplines.dzcom_step2 = dzcom_step2;

// Eigen::VectorXd x_ddzcom_step2(4), z_ddzcom_step2(4), dz_ddzcom_step2(4);
// x_ddzcom_step2 << 0.000000, 0.333333, 0.666667, 1.000000;
// z_ddzcom_step2 << 7.539936, -3.493024, 0.848390, -2.957267;
// dz_ddzcom_step2 << -8.214530, 16.926065, 7.157964, -70.417267;
// BasicSpline ddzcom_step2(x_ddzcom_step2,z_ddzcom_step2,dz_ddzcom_step2);

// downstepSplines.ddzcom_step2 = ddzcom_step2;

// // Eigen::VectorXd x_GRFst_step2(5), z_GRFst_step2(5), dz_GRFst_step2(5);
// // x_GRFst_step2 << 0.000000, 0.250000, 0.500000, 0.750000, 1.000000;
// // z_GRFst_step2 << 0.000000, 0.000000, 0.000000, 0.000000, 362.977307;
// // dz_GRFst_step2 << 0.000000, 0.000000, 0.000000, 0.000000, 0.000000;
// // BasicSpline GRFst_step2(x_GRFst_step2,z_GRFst_step2,dz_GRFst_step2);

// // downstepSplines.GRFst_step2 = GRFst_step2;

// // Eigen::VectorXd x_GRFsw_step2(16), z_GRFsw_step2(16), dz_GRFsw_step2(16);
// // x_GRFsw_step2 << 0.000000, 0.066667, 0.133333, 0.200000, 0.266667, 0.333333, 0.400000, 0.466667, 0.533333, 0.600000, 0.666667, 0.733333, 0.800000, 0.866667, 0.933333, 1.000000;
// // z_GRFsw_step2 << 471.964840, 429.958779, 325.123419, 222.468118, 145.855890, 162.993114, 193.435470, 223.488842, 247.649994, 266.133308, 280.343062, 291.746064, 279.161274, 242.079557, 144.997816, -0.093262;
// // dz_GRFsw_step2 << -721.141186, -1799.766397, -1762.340105, -1056.345915, 294.204170, 522.620694, 515.942801, 414.787799, 317.313244, 243.946681, 160.616184, -216.050026, -463.062117, -1129.565126, -1957.076140, -721.141186;
// // BasicSpline GRFsw_step2(x_GRFsw_step2,z_GRFsw_step2,dz_GRFsw_step2);

// // downstepSplines.GRFsw_step2 = GRFsw_step2;

// downstepSplines.timeMin_step1 = 0.000000;
// downstepSplines.timeMax_step1 = 0.400340;
// downstepSplines.timeMin_step2 = 0.000000;
// downstepSplines.timeMax_step2 = 0.931128;
}

#endif
