#include <cassie_common_toolbox/bezier_tools.hpp>
#ifndef SPLINES_TRANSITION_HPP
#define SPLINES_TRANSITION_HPP


void OUTPUT_SLIP::Splines::createTransitionSplines(){

// Eigen::VectorXd x_zero(2), z_zero(2), dz_zero(2);
// x_zero << 0.000000, 1.000000;
// z_zero << 0.000000, 0.000000;
// dz_zero << 0.000000, 0.000000;
// BasicSpline zero(x_zero,z_zero,dz_zero);

// transitionSplines.deltaRoll = zero;

// transitionSplines.deltaPitch = zero;

// transitionSplines.stanceHipYaw = zero;

// transitionSplines.ysw = zero;

// transitionSplines.swingHipYaw = zero;

// transitionSplines.deltaswFoot = zero;

// transitionSplines.DSP1_xsw = zero;

// transitionSplines.DSP1_zsw = zero;

// transitionSplines.DSP2_xsw = zero;

// transitionSplines.DSP2_zsw = zero;

// transitionSplines.DSP1_dxsw = zero;

// transitionSplines.DSP1_dzsw = zero;

// transitionSplines.DSP2_dxsw = zero;

// transitionSplines.DSP2_dzsw = zero;

// transitionSplines.DSP1_ddxsw = zero;

// transitionSplines.DSP1_ddzsw = zero;

// transitionSplines.DSP2_ddxsw = zero;

// transitionSplines.DSP2_ddzsw = zero;

// transitionSplines.SSP1_GRFsw = zero;

// Eigen::VectorXd x_DSP1_xcom(2), z_DSP1_xcom(2), dz_DSP1_xcom(2);
// x_DSP1_xcom << 0.000000, 1.000000;
// z_DSP1_xcom << 0.017060, 0.019095;
// dz_DSP1_xcom << 0.000106, 0.003808;
// BasicSpline DSP1_xcom(x_DSP1_xcom,z_DSP1_xcom,dz_DSP1_xcom);

// transitionSplines.DSP1_xcom = DSP1_xcom;

// Eigen::VectorXd x_DSP1_dxcom(2), z_DSP1_dxcom(2), dz_DSP1_dxcom(2);
// x_DSP1_dxcom << 0.000000, 1.000000;
// z_DSP1_dxcom << 0.000000, 0.077493;
// dz_DSP1_dxcom << 0.078912, 0.052107;
// BasicSpline DSP1_dxcom(x_DSP1_dxcom,z_DSP1_dxcom,dz_DSP1_dxcom);

// transitionSplines.DSP1_dxcom = DSP1_dxcom;

// Eigen::VectorXd x_DSP1_ddxcom(11), z_DSP1_ddxcom(11), dz_DSP1_ddxcom(11);
// x_DSP1_ddxcom << 0.000000, 0.100000, 0.200000, 0.300000, 0.400000, 0.500000, 0.600000, 0.700000, 0.800000, 0.900000, 1.000000;
// z_DSP1_ddxcom << 1.575012, 1.599941, 1.639205, 1.679378, 1.719381, 1.737239, 1.699602, 1.576909, 1.418441, 1.224058, 0.978558;
// dz_DSP1_ddxcom << 0.123260, 0.369131, 0.382615, 0.379885, 0.380789, -0.715108, -1.077579, -1.423869, -1.745881, -2.251006, -2.413487;
// BasicSpline DSP1_ddxcom(x_DSP1_ddxcom,z_DSP1_ddxcom,dz_DSP1_ddxcom);

// transitionSplines.DSP1_ddxcom = DSP1_ddxcom;

// Eigen::VectorXd x_DSP1_zcom(2), z_DSP1_zcom(2), dz_DSP1_zcom(2);
// x_DSP1_zcom << 0.000000, 1.000000;
// z_DSP1_zcom << 0.724600, 0.726386;
// dz_DSP1_zcom << 0.000071, 0.002373;
// BasicSpline DSP1_zcom(x_DSP1_zcom,z_DSP1_zcom,dz_DSP1_zcom);

// transitionSplines.DSP1_zcom = DSP1_zcom;

// Eigen::VectorXd x_DSP1_dzcom(2), z_DSP1_dzcom(2), dz_DSP1_dzcom(2);
// x_DSP1_dzcom << 0.000000, 1.000000;
// z_DSP1_dzcom << -0.000000, 0.044118;
// dz_DSP1_dzcom << 0.056238, -0.128928;
// BasicSpline DSP1_dzcom(x_DSP1_dzcom,z_DSP1_dzcom,dz_DSP1_dzcom);

// transitionSplines.DSP1_dzcom = DSP1_dzcom;

// Eigen::VectorXd x_DSP1_ddzcom(11), z_DSP1_ddzcom(11), dz_DSP1_ddzcom(11);
// x_DSP1_ddzcom << 0.000000, 0.100000, 0.200000, 0.300000, 0.400000, 0.500000, 0.600000, 0.700000, 0.800000, 0.900000, 1.000000;
// z_DSP1_ddzcom << 1.176309, 1.346258, 1.613549, 1.882630, 2.145713, 2.250134, 1.977985, 1.104456, -0.015488, -1.365947, -2.936205;
// dz_DSP1_ddzcom << 0.816781, 2.522707, 2.574169, 2.510026, 2.468548, -5.170833, -7.688943, -10.081138, -12.277420, -14.060862, -15.774047;
// BasicSpline DSP1_ddzcom(x_DSP1_ddzcom,z_DSP1_ddzcom,dz_DSP1_ddzcom);

// transitionSplines.DSP1_ddzcom = DSP1_ddzcom;

// Eigen::VectorXd x_DSP1_GRFst(11), z_DSP1_GRFst(11), dz_DSP1_GRFst(11);
// x_DSP1_GRFst << 0.000000, 0.100000, 0.200000, 0.300000, 0.400000, 0.500000, 0.600000, 0.700000, 0.800000, 0.900000, 1.000000;
// z_DSP1_GRFst << 160.504306, 165.699117, 171.287611, 176.902991, 182.385609, 187.820794, 190.539732, 196.016418, 201.390199, 206.778151, 212.105668;
// dz_DSP1_GRFst << 48.256003, 52.717282, 53.664232, 52.186726, 51.792082, 51.659822, 52.614612, 50.889437, 51.758566, 61.754341, 39.468486;
// BasicSpline DSP1_GRFst(x_DSP1_GRFst,z_DSP1_GRFst,dz_DSP1_GRFst);

// transitionSplines.DSP1_GRFst = DSP1_GRFst;

// Eigen::VectorXd x_DSP1_GRFsw(11), z_DSP1_GRFsw(11), dz_DSP1_GRFsw(11);
// x_DSP1_GRFsw << 0.000000, 0.100000, 0.200000, 0.300000, 0.400000, 0.500000, 0.600000, 0.700000, 0.800000, 0.900000, 1.000000;
// z_DSP1_GRFsw << 178.866852, 178.925219, 181.596764, 184.293459, 186.934116, 184.713209, 173.571434, 141.067925, 101.046543, 53.883952, 0.000025;
// dz_DSP1_GRFsw << -23.011500, 25.248755, 25.861859, 25.324436, 24.404726, -211.693724, -290.516668, -362.774833, -431.564831, -496.520095, -527.274501;
// BasicSpline DSP1_GRFsw(x_DSP1_GRFsw,z_DSP1_GRFsw,dz_DSP1_GRFsw);

// transitionSplines.DSP1_GRFsw = DSP1_GRFsw;

// double xcomMin_DSP1 = 0.017060;

// double xcomMax_DSP1 = 0.019095;
// double timeMin_DSP1 = 0.000000;

// double timeMax_DSP1 = 0.050000;



// Eigen::VectorXd x_SSP1_xcom(2), z_SSP1_xcom(2), dz_SSP1_xcom(2);
// x_SSP1_xcom << 0.000000, 1.000000;
// z_SSP1_xcom << 0.019103, 0.133613;
// dz_SSP1_xcom << 0.035218, 0.174192;
// BasicSpline SSP1_xcom(x_SSP1_xcom,z_SSP1_xcom,dz_SSP1_xcom);

// transitionSplines.SSP1_xcom = SSP1_xcom;

// Eigen::VectorXd x_SSP1_dxcom(8), z_SSP1_dxcom(8), dz_SSP1_dxcom(8);
// x_SSP1_dxcom << 0.000000, 0.142857, 0.285714, 0.428571, 0.571429, 0.714286, 0.857143, 1.000000;
// z_SSP1_dxcom << 0.077499, 0.144548, 0.195792, 0.282139, 0.348038, 0.368466, 0.393561, 0.442193;
// dz_SSP1_dxcom << 0.398847, 0.477582, 0.519410, 0.608464, 0.088097, 0.217191, 0.308421, 0.259405;
// BasicSpline SSP1_dxcom(x_SSP1_dxcom,z_SSP1_dxcom,dz_SSP1_dxcom);

// transitionSplines.SSP1_dxcom = SSP1_dxcom;

// Eigen::VectorXd x_SSP1_ddxcom(11), z_SSP1_ddxcom(11), dz_SSP1_ddxcom(11);
// x_SSP1_ddxcom << 0.000000, 0.100000, 0.200000, 0.300000, 0.400000, 0.500000, 0.600000, 0.700000, 0.800000, 0.900000, 1.000000;
// z_SSP1_ddxcom << 0.978513, 1.095553, 1.214338, 1.331488, 1.479437, 0.744035, 0.167255, 0.377138, 0.615342, 0.863596, 0.353636;
// dz_SSP1_ddxcom << 0.690820, 1.481132, 0.983228, 1.261324, 1.591203, -10.958823, 2.018145, 1.806542, 1.252941, 0.983900, -10.673151;
// BasicSpline SSP1_ddxcom(x_SSP1_ddxcom,z_SSP1_ddxcom,dz_SSP1_ddxcom);

// transitionSplines.SSP1_ddxcom = SSP1_ddxcom;

// Eigen::VectorXd x_SSP1_zcom(2), z_SSP1_zcom(2), dz_SSP1_zcom(2);
// x_SSP1_zcom << 0.000000, 1.000000;
// z_SSP1_zcom << 0.726376, 0.731377;
// dz_SSP1_zcom << 0.006463, 0.022482;
// BasicSpline SSP1_zcom(x_SSP1_zcom,z_SSP1_zcom,dz_SSP1_zcom);

// transitionSplines.SSP1_zcom = SSP1_zcom;

// Eigen::VectorXd x_SSP1_dzcom(7), z_SSP1_dzcom(7), dz_SSP1_dzcom(7);
// x_SSP1_dzcom << 0.000000, 0.166667, 0.333333, 0.500000, 0.666667, 0.833333, 1.000000;
// z_SSP1_dzcom << 0.044114, -0.042313, -0.018186, 0.008244, 0.034316, 0.059723, 0.034000;
// dz_SSP1_dzcom << -1.062804, 0.189552, 0.129064, 0.156092, 0.146696, 0.177354, -0.842378;
// BasicSpline SSP1_dzcom(x_SSP1_dzcom,z_SSP1_dzcom,dz_SSP1_dzcom);

// transitionSplines.SSP1_dzcom = SSP1_dzcom;

// Eigen::VectorXd x_SSP1_ddzcom(11), z_SSP1_ddzcom(11), dz_SSP1_ddzcom(11);
// x_SSP1_ddzcom << 0.000000, 0.100000, 0.200000, 0.300000, 0.400000, 0.500000, 0.600000, 0.700000, 0.800000, 0.900000, 1.000000;
// z_SSP1_ddzcom << -2.936195, -0.500199, 0.475043, 0.496636, 0.519225, 0.486966, 0.425956, 0.474525, 0.681658, 0.844994, -4.070953;
// dz_SSP1_ddzcom << 12.835500, 21.929976, -1.076167, -0.953618, -0.250415, -1.159178, 0.819540, -1.376589, -5.674052, -7.280633, -86.122359;
// BasicSpline SSP1_ddzcom(x_SSP1_ddzcom,z_SSP1_ddzcom,dz_SSP1_ddzcom);

// transitionSplines.SSP1_ddzcom = SSP1_ddzcom;

// Eigen::VectorXd x_SSP1_GRFst(11), z_SSP1_GRFst(11), dz_SSP1_GRFst(11);
// x_SSP1_GRFst << 0.000000, 0.100000, 0.200000, 0.300000, 0.400000, 0.500000, 0.600000, 0.700000, 0.800000, 0.900000, 1.000000;
// z_SSP1_GRFst << 212.105632, 287.308557, 317.063425, 316.989469, 316.602857, 316.481458, 315.914080, 316.270271, 321.264493, 324.574518, 165.861473;
// dz_SSP1_GRFst << 395.159702, 675.946747, -39.766682, -39.006332, -21.208947, -10.780176, 15.269499, -56.439221, -194.257044, -248.681988, -2766.865868;
// BasicSpline SSP1_GRFst(x_SSP1_GRFst,z_SSP1_GRFst,dz_SSP1_GRFst);

// transitionSplines.SSP1_GRFst = SSP1_GRFst;

// Eigen::VectorXd x_SSP1_xsw(4), z_SSP1_xsw(4), dz_SSP1_xsw(4);
// x_SSP1_xsw << 0.000000, 0.333333, 0.666667, 1.000000;
// z_SSP1_xsw << 0.001609, 0.032529, 0.214969, 0.248393;
// dz_SSP1_xsw << 0.020213, 0.344326, 0.250560, 0.022097;
// BasicSpline SSP1_xsw(x_SSP1_xsw,z_SSP1_xsw,dz_SSP1_xsw);

// transitionSplines.SSP1_xsw = SSP1_xsw;

// Eigen::VectorXd x_SSP1_dxsw(11), z_SSP1_dxsw(11), dz_SSP1_dxsw(11);
// x_SSP1_dxsw << 0.000000, 0.100000, 0.200000, 0.300000, 0.400000, 0.500000, 0.600000, 0.700000, 0.800000, 0.900000, 1.000000;
// z_SSP1_dxsw << 0.015388, 0.043457, 0.117654, 0.284733, 0.530568, 0.622555, 0.549080, 0.304219, 0.127631, 0.047424, 0.016829;
// dz_SSP1_dxsw << 0.200414, 0.544105, 1.316486, 2.318454, 1.607129, -1.396011, -2.286375, -1.949942, -0.933533, -0.362547, -0.218749;
// BasicSpline SSP1_dxsw(x_SSP1_dxsw,z_SSP1_dxsw,dz_SSP1_dxsw);

// transitionSplines.SSP1_dxsw = SSP1_dxsw;

// Eigen::VectorXd x_SSP1_ddxsw(11), z_SSP1_ddxsw(11), dz_SSP1_ddxsw(11);
// x_SSP1_ddxsw << 0.000000, 0.100000, 0.200000, 0.300000, 0.400000, 0.500000, 0.600000, 0.700000, 0.800000, 0.900000, 1.000000;
// z_SSP1_ddxsw << -0.000050, -0.000388, -0.002905, -0.018524, -0.079999, -0.172779, -0.186578, -0.130795, -0.060420, -0.023264, -0.008361;
// dz_SSP1_ddxsw << -0.001693, -0.013020, -0.088608, -0.430947, -0.953468, -0.262177, 0.355962, 0.737334, 0.426032, 0.175746, 0.107419;
// BasicSpline SSP1_ddxsw(x_SSP1_ddxsw,z_SSP1_ddxsw,dz_SSP1_ddxsw);

// transitionSplines.SSP1_ddxsw = SSP1_ddxsw;

// Eigen::VectorXd x_SSP1_zsw(2), z_SSP1_zsw(2), dz_SSP1_zsw(2);
// x_SSP1_zsw << 0.000000, 1.000000;
// z_SSP1_zsw << 0.000000, -0.000000;
// dz_SSP1_zsw << 0.195311, -0.195312;
// BasicSpline SSP1_zsw(x_SSP1_zsw,z_SSP1_zsw,dz_SSP1_zsw);

// transitionSplines.SSP1_zsw = SSP1_zsw;

// Eigen::VectorXd x_SSP1_dzsw(2), z_SSP1_dzsw(2), dz_SSP1_dzsw(2);
// x_SSP1_dzsw << 0.000000, 1.000000;
// z_SSP1_dzsw << 0.206162, -0.206162;
// dz_SSP1_dzsw << -0.412325, -0.412325;
// BasicSpline SSP1_dzsw(x_SSP1_dzsw,z_SSP1_dzsw,dz_SSP1_dzsw);

// transitionSplines.SSP1_dzsw = SSP1_dzsw;

// Eigen::VectorXd x_SSP1_ddzsw(2), z_SSP1_ddzsw(2), dz_SSP1_ddzsw(2);
// x_SSP1_ddzsw << 0.000000, 1.000000;
// z_SSP1_ddzsw << -0.412325, -0.412325;
// dz_SSP1_ddzsw << 0.000000, 0.000000;
// BasicSpline SSP1_ddzsw(x_SSP1_ddzsw,z_SSP1_ddzsw,dz_SSP1_ddzsw);

// transitionSplines.SSP1_ddzsw = SSP1_ddzsw;

// double xcomMin_SSP1 = 0.019103;

// double xcomMax_SSP1 = 0.133613;
// double timeMin_SSP1 = 0.000000;

// double timeMax_SSP1 = 0.400000;



// Eigen::VectorXd x_DSP2_xcom(2), z_DSP2_xcom(2), dz_DSP2_xcom(2);
// x_DSP2_xcom << 0.000000, 1.000000;
// z_DSP2_xcom << -0.116381, -0.111948;
// dz_DSP2_xcom << 0.004426, 0.004432;
// BasicSpline DSP2_xcom(x_DSP2_xcom,z_DSP2_xcom,dz_DSP2_xcom);

// transitionSplines.DSP2_xcom = DSP2_xcom;

// Eigen::VectorXd x_DSP2_dxcom(2), z_DSP2_dxcom(2), dz_DSP2_dxcom(2);
// x_DSP2_dxcom << 0.000000, 1.000000;
// z_DSP2_dxcom << 0.442183, 0.442739;
// dz_DSP2_dxcom << 0.003389, -0.003465;
// BasicSpline DSP2_dxcom(x_DSP2_dxcom,z_DSP2_dxcom,dz_DSP2_dxcom);

// transitionSplines.DSP2_dxcom = DSP2_dxcom;

// Eigen::VectorXd x_DSP2_ddxcom(11), z_DSP2_ddxcom(11), dz_DSP2_ddxcom(11);
// x_DSP2_ddxcom << 0.000000, 0.100000, 0.200000, 0.300000, 0.400000, 0.500000, 0.600000, 0.700000, 0.800000, 0.900000, 1.000000;
// z_DSP2_ddxcom << 0.353590, 0.292808, 0.226722, 0.157722, 0.090331, 0.061531, 0.009675, -0.038598, -0.092361, -0.147493, -0.535439;
// dz_DSP2_ddxcom << -0.550878, -0.619579, -0.650542, -0.658224, -0.547215, -0.505567, -0.474226, -0.437231, -0.373440, -0.186066, -7.184908;
// BasicSpline DSP2_ddxcom(x_DSP2_ddxcom,z_DSP2_ddxcom,dz_DSP2_ddxcom);

// transitionSplines.DSP2_ddxcom = DSP2_ddxcom;

// Eigen::VectorXd x_DSP2_zcom(2), z_DSP2_zcom(2), dz_DSP2_zcom(2);
// x_DSP2_zcom << 0.000000, 1.000000;
// z_DSP2_zcom << 0.731366, 0.731452;
// dz_DSP2_zcom << 0.000322, -0.000178;
// BasicSpline DSP2_zcom(x_DSP2_zcom,z_DSP2_zcom,dz_DSP2_zcom);

// transitionSplines.DSP2_zcom = DSP2_zcom;

// Eigen::VectorXd x_DSP2_dzcom(2), z_DSP2_dzcom(2), dz_DSP2_dzcom(2);
// x_DSP2_dzcom << 0.000000, 1.000000;
// z_DSP2_dzcom << 0.034007, -0.019024;
// dz_DSP2_dzcom << -0.044805, -0.069127;
// BasicSpline DSP2_dzcom(x_DSP2_dzcom,z_DSP2_dzcom,dz_DSP2_dzcom);

// transitionSplines.DSP2_dzcom = DSP2_dzcom;

// Eigen::VectorXd x_DSP2_ddzcom(11), z_DSP2_ddzcom(11), dz_DSP2_ddzcom(11);
// x_DSP2_ddzcom << 0.000000, 0.100000, 0.200000, 0.300000, 0.400000, 0.500000, 0.600000, 0.700000, 0.800000, 0.900000, 1.000000;
// z_DSP2_ddzcom << -4.070927, -4.255243, -4.438671, -4.620562, -4.799990, -4.887954, -5.061068, -5.231122, -5.399785, -5.566423, -7.538737;
// dz_DSP2_ddzcom << -1.749055, -1.745855, -1.732086, -1.713147, -1.671327, -1.652590, -1.624179, -1.594233, -1.559779, -1.509240, -35.964728;
// BasicSpline DSP2_ddzcom(x_DSP2_ddzcom,z_DSP2_ddzcom,dz_DSP2_ddzcom);

// transitionSplines.DSP2_ddzcom = DSP2_ddzcom;

// Eigen::VectorXd x_DSP2_GRFst(11), z_DSP2_GRFst(11), dz_DSP2_GRFst(11);
// x_DSP2_GRFst << 0.000000, 0.100000, 0.200000, 0.300000, 0.400000, 0.500000, 0.600000, 0.700000, 0.800000, 0.900000, 1.000000;
// z_DSP2_GRFst << 0.074004, 5.100972, 10.484856, 16.226777, 22.327922, 25.513618, 32.156115, 39.160923, 46.528559, 54.258236, 62.378393;
// dz_DSP2_GRFst << 46.908567, 50.298043, 53.696490, 57.106260, 60.528210, 62.244290, 65.684225, 69.131225, 72.575092, 75.986604, 78.296371;
// BasicSpline DSP2_GRFst(x_DSP2_GRFst,z_DSP2_GRFst,dz_DSP2_GRFst);

// transitionSplines.DSP2_GRFst = DSP2_GRFst;

// Eigen::VectorXd x_DSP2_GRFsw(11), z_DSP2_GRFsw(11), dz_DSP2_GRFsw(11);
// x_DSP2_GRFsw << 0.000000, 0.100000, 0.200000, 0.300000, 0.400000, 0.500000, 0.600000, 0.700000, 0.800000, 0.900000, 1.000000;
// z_DSP2_GRFsw << 165.794088, 155.456321, 144.855640, 133.993822, 122.872785, 117.215630, 105.709083, 93.947318, 81.930802, 69.656034, 0.000033;
// dz_DSP2_GRFsw << -97.583479, -100.083923, -102.569390, -105.036415, -107.485944, -108.704646, -111.131819, -113.551015, -115.984160, -118.626128, -1204.837890;
// BasicSpline DSP2_GRFsw(x_DSP2_GRFsw,z_DSP2_GRFsw,dz_DSP2_GRFsw);

// transitionSplines.DSP2_GRFsw = DSP2_GRFsw;

// double xcomMin_DSP2 = 0.133619;

// double xcomMax_DSP2 = 0.138052;
// double timeMin_DSP2 = 0.000000;

// double timeMax_DSP2 = 0.010000;



// transitionSplines.DSP1_timeMin = timeMin_DSP1;
// transitionSplines.DSP1_timeMax = timeMax_DSP1;
// transitionSplines.SSP1_timeMin = timeMin_SSP1;
// transitionSplines.SSP1_timeMax = timeMax_SSP1;
// transitionSplines.DSP2_timeMin = timeMin_DSP2;
// transitionSplines.DSP2_timeMax = timeMax_DSP2;
}

#endif
