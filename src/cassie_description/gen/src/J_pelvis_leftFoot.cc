/*
 * Automatically Generated from Mathematica.
 * Thu 23 Dec 2021 16:09:35 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "J_pelvis_leftFoot.hh"
#endif

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
#include<math.h>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;

inline double Sec(double x) { return 1/cos(x); }
inline double Csc(double x) { return 1/sin(x); }

#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1)
{
  double t156;
  double t188;
  double t534;
  double t696;
  double t1048;
  double t1052;
  double t1061;
  double t1144;
  double t1340;
  double t1485;
  double t1513;
  double t1516;
  double t1626;
  double t1719;
  double t1724;
  double t1809;
  double t1852;
  double t1863;
  double t1925;
  double t2160;
  double t2281;
  double t2282;
  double t2405;
  double t2520;
  double t2522;
  double t2528;
  double t2685;
  double t2783;
  double t2846;
  double t2929;
  double t2975;
  double t2993;
  double t3050;
  double t3078;
  double t3080;
  double t3089;
  double t3109;
  double t3118;
  double t3159;
  double t3476;
  double t3482;
  double t3543;
  double t3560;
  double t3567;
  double t3575;
  double t648;
  double t671;
  double t682;
  double t744;
  double t821;
  double t1062;
  double t1215;
  double t1257;
  double t1349;
  double t1353;
  double t1389;
  double t1537;
  double t1669;
  double t1670;
  double t3591;
  double t3602;
  double t3603;
  double t1822;
  double t1823;
  double t1834;
  double t2372;
  double t2471;
  double t2500;
  double t3620;
  double t3623;
  double t3624;
  double t3644;
  double t3648;
  double t3677;
  double t2536;
  double t2547;
  double t2665;
  double t3020;
  double t3062;
  double t3071;
  double t3681;
  double t3690;
  double t3696;
  double t3712;
  double t3715;
  double t3716;
  double t3094;
  double t3101;
  double t3105;
  double t3747;
  double t3751;
  double t3763;
  double t3772;
  double t3775;
  double t3780;
  double t3844;
  double t3845;
  double t3846;
  double t3881;
  double t3882;
  double t3885;
  double t3887;
  double t3889;
  double t3890;
  double t3911;
  double t3919;
  double t3922;
  double t3933;
  double t3942;
  double t3944;
  double t3946;
  double t3949;
  double t3950;
  double t3958;
  double t3961;
  double t3962;
  double t3970;
  double t3971;
  double t3974;
  double t4034;
  double t4037;
  double t4050;
  double t4108;
  double t4111;
  double t4116;
  double t4134;
  double t4139;
  double t4146;
  double t4150;
  double t4155;
  double t4158;
  double t4163;
  double t4164;
  double t4165;
  double t4004;
  double t4005;
  double t4006;
  double t4008;
  double t4009;
  double t4010;
  double t4193;
  double t4198;
  double t4199;
  double t4201;
  double t4202;
  double t4203;
  double t4246;
  double t4261;
  double t4264;
  double t4268;
  double t4273;
  double t4275;
  double t4285;
  double t4286;
  double t4289;
  double t4295;
  double t4296;
  double t4310;
  double t4342;
  double t4343;
  double t4351;
  double t4355;
  double t4360;
  double t4361;
  double t4401;
  double t4404;
  double t4408;
  double t4412;
  double t4415;
  double t4416;
  double t4424;
  double t4426;
  double t4427;
  double t4437;
  double t4440;
  double t4446;
  double t4487;
  double t4490;
  double t4491;
  double t4508;
  double t4511;
  double t4516;
  double t4520;
  double t4524;
  double t4537;
  double t4549;
  double t4552;
  double t4553;
  double t4564;
  double t4567;
  double t4580;
  double t4591;
  double t4595;
  double t4603;
  double t4605;
  double t4607;
  double t4612;
  double t4483;
  double t4484;
  double t4492;
  double t4493;
  double t4503;
  double t4639;
  double t4640;
  double t4653;
  double t4666;
  double t4669;
  double t4670;
  double t4681;
  double t4685;
  double t4686;
  double t4694;
  double t4697;
  double t4698;
  double t4702;
  double t4705;
  double t4711;
  double t4730;
  double t4739;
  double t4741;
  double t4752;
  double t4755;
  double t4762;
  double t4796;
  double t4798;
  double t4799;
  double t4801;
  double t4803;
  double t4804;
  double t4810;
  double t4812;
  double t4820;
  double t4832;
  double t4836;
  double t4841;
  double t4843;
  double t4854;
  double t4859;
  double t4864;
  double t4865;
  double t4868;
  double t4872;
  double t4877;
  double t4882;
  double t4916;
  double t4917;
  double t4920;
  double t4925;
  double t4926;
  double t4931;
  double t4932;
  double t4936;
  double t4937;
  double t4939;
  double t4943;
  double t4944;
  double t4945;
  double t4912;
  double t4913;
  double t4914;
  double t4922;
  double t4923;
  double t4996;
  double t5001;
  double t5006;
  double t5014;
  double t5015;
  double t5017;
  double t5018;
  double t5023;
  double t5026;
  double t5027;
  double t5030;
  double t5031;
  double t5034;
  double t5069;
  double t5075;
  double t5076;
  double t5098;
  double t5101;
  double t5110;
  double t5117;
  double t5119;
  double t5120;
  double t5121;
  double t5127;
  double t5135;
  double t5139;
  double t5206;
  double t5209;
  double t5210;
  double t5203;
  double t5213;
  double t5215;
  double t5220;
  double t5223;
  double t5190;
  double t5191;
  double t5197;
  double t5217;
  double t5219;
  double t5275;
  double t5281;
  double t5282;
  double t5266;
  double t5287;
  double t5288;
  double t5292;
  double t5295;
  double t5328;
  double t5329;
  double t5332;
  double t5324;
  double t5333;
  double t5337;
  double t5341;
  double t5346;
  double t5394;
  double t5397;
  t156 = Cos(var1[6]);
  t188 = Sin(var1[4]);
  t534 = Cos(var1[7]);
  t696 = Sin(var1[7]);
  t1048 = Cos(var1[8]);
  t1052 = -1.*t1048;
  t1061 = 1. + t1052;
  t1144 = Sin(var1[8]);
  t1340 = Sin(var1[6]);
  t1485 = Cos(var1[9]);
  t1513 = -1.*t1485;
  t1516 = 1. + t1513;
  t1626 = Sin(var1[9]);
  t1719 = t156*t1048*t188*t696;
  t1724 = -1.*t188*t1340*t1144;
  t1809 = t1719 + t1724;
  t1852 = -1.*t1048*t188*t1340;
  t1863 = -1.*t156*t188*t696*t1144;
  t1925 = t1852 + t1863;
  t2160 = Cos(var1[11]);
  t2281 = -1.*t2160;
  t2282 = 1. + t2281;
  t2405 = Sin(var1[11]);
  t2520 = -1.*t1626*t1809;
  t2522 = t1485*t1925;
  t2528 = t2520 + t2522;
  t2685 = t1485*t1809;
  t2783 = t1626*t1925;
  t2846 = t2685 + t2783;
  t2929 = Cos(var1[13]);
  t2975 = -1.*t2929;
  t2993 = 1. + t2975;
  t3050 = Sin(var1[13]);
  t3078 = t2405*t2528;
  t3080 = t2160*t2846;
  t3089 = t3078 + t3080;
  t3109 = t2160*t2528;
  t3118 = -1.*t2405*t2846;
  t3159 = t3109 + t3118;
  t3476 = Cos(var1[4]);
  t3482 = Sin(var1[3]);
  t3543 = Cos(var1[3]);
  t3560 = -1.*t3476*t156*t3482;
  t3567 = -1.*t3543*t1340;
  t3575 = t3560 + t3567;
  t648 = -1.*t534;
  t671 = 1. + t648;
  t682 = 0.135*t671;
  t744 = 0.049*t696;
  t821 = t682 + t744;
  t1062 = -0.049*t1061;
  t1215 = -0.09*t1144;
  t1257 = t1062 + t1215;
  t1349 = -0.09*t1061;
  t1353 = 0.049*t1144;
  t1389 = t1349 + t1353;
  t1537 = -0.049*t1516;
  t1669 = -0.21*t1626;
  t1670 = t1537 + t1669;
  t3591 = -1.*t3543*t156;
  t3602 = t3476*t3482*t1340;
  t3603 = t3591 + t3602;
  t1822 = -0.21*t1516;
  t1823 = 0.049*t1626;
  t1834 = t1822 + t1823;
  t2372 = -0.70544*t2282;
  t2471 = -0.01841*t2405;
  t2500 = t2372 + t2471;
  t3620 = t1048*t3575*t696;
  t3623 = t3603*t1144;
  t3624 = t3620 + t3623;
  t3644 = t1048*t3603;
  t3648 = -1.*t3575*t696*t1144;
  t3677 = t3644 + t3648;
  t2536 = 0.01841*t2282;
  t2547 = -0.70544*t2405;
  t2665 = t2536 + t2547;
  t3020 = -0.02159*t2993;
  t3062 = -1.11344*t3050;
  t3071 = t3020 + t3062;
  t3681 = -1.*t1626*t3624;
  t3690 = t1485*t3677;
  t3696 = t3681 + t3690;
  t3712 = t1485*t3624;
  t3715 = t1626*t3677;
  t3716 = t3712 + t3715;
  t3094 = -1.11344*t2993;
  t3101 = 0.02159*t3050;
  t3105 = t3094 + t3101;
  t3747 = t2405*t3696;
  t3751 = t2160*t3716;
  t3763 = t3747 + t3751;
  t3772 = t2160*t3696;
  t3775 = -1.*t2405*t3716;
  t3780 = t3772 + t3775;
  t3844 = t3543*t3476*t156;
  t3845 = -1.*t3482*t1340;
  t3846 = t3844 + t3845;
  t3881 = -1.*t156*t3482;
  t3882 = -1.*t3543*t3476*t1340;
  t3885 = t3881 + t3882;
  t3887 = t1048*t3846*t696;
  t3889 = t3885*t1144;
  t3890 = t3887 + t3889;
  t3911 = t1048*t3885;
  t3919 = -1.*t3846*t696*t1144;
  t3922 = t3911 + t3919;
  t3933 = -1.*t1626*t3890;
  t3942 = t1485*t3922;
  t3944 = t3933 + t3942;
  t3946 = t1485*t3890;
  t3949 = t1626*t3922;
  t3950 = t3946 + t3949;
  t3958 = t2405*t3944;
  t3961 = t2160*t3950;
  t3962 = t3958 + t3961;
  t3970 = t2160*t3944;
  t3971 = -1.*t2405*t3950;
  t3974 = t3970 + t3971;
  t4034 = t534*t188*t1340;
  t4037 = -1.*t3476*t696;
  t4050 = t4034 + t4037;
  t4108 = -1.*t1048*t1626*t4050;
  t4111 = -1.*t1485*t4050*t1144;
  t4116 = t4108 + t4111;
  t4134 = t1485*t1048*t4050;
  t4139 = -1.*t1626*t4050*t1144;
  t4146 = t4134 + t4139;
  t4150 = t2405*t4116;
  t4155 = t2160*t4146;
  t4158 = t4150 + t4155;
  t4163 = t2160*t4116;
  t4164 = -1.*t2405*t4146;
  t4165 = t4163 + t4164;
  t4004 = 0.135*t534;
  t4005 = -0.049*t696;
  t4006 = t4004 + t4005;
  t4008 = 0.049*t534;
  t4009 = 0.135*t696;
  t4010 = t4008 + t4009;
  t4193 = t3543*t156;
  t4198 = -1.*t3476*t3482*t1340;
  t4199 = t4193 + t4198;
  t4201 = t534*t4199;
  t4202 = -1.*t3482*t188*t696;
  t4203 = t4201 + t4202;
  t4246 = -1.*t1048*t1626*t4203;
  t4261 = -1.*t1485*t4203*t1144;
  t4264 = t4246 + t4261;
  t4268 = t1485*t1048*t4203;
  t4273 = -1.*t1626*t4203*t1144;
  t4275 = t4268 + t4273;
  t4285 = t2405*t4264;
  t4286 = t2160*t4275;
  t4289 = t4285 + t4286;
  t4295 = t2160*t4264;
  t4296 = -1.*t2405*t4275;
  t4310 = t4295 + t4296;
  t4342 = t156*t3482;
  t4343 = t3543*t3476*t1340;
  t4351 = t4342 + t4343;
  t4355 = t534*t4351;
  t4360 = t3543*t188*t696;
  t4361 = t4355 + t4360;
  t4401 = -1.*t1048*t1626*t4361;
  t4404 = -1.*t1485*t4361*t1144;
  t4408 = t4401 + t4404;
  t4412 = t1485*t1048*t4361;
  t4415 = -1.*t1626*t4361*t1144;
  t4416 = t4412 + t4415;
  t4424 = t2405*t4408;
  t4426 = t2160*t4416;
  t4427 = t4424 + t4426;
  t4437 = t2160*t4408;
  t4440 = -1.*t2405*t4416;
  t4446 = t4437 + t4440;
  t4487 = t3476*t534;
  t4490 = t188*t1340*t696;
  t4491 = t4487 + t4490;
  t4508 = -1.*t1048*t4491;
  t4511 = -1.*t156*t188*t1144;
  t4516 = t4508 + t4511;
  t4520 = t156*t1048*t188;
  t4524 = -1.*t4491*t1144;
  t4537 = t4520 + t4524;
  t4549 = t1626*t4516;
  t4552 = t1485*t4537;
  t4553 = t4549 + t4552;
  t4564 = t1485*t4516;
  t4567 = -1.*t1626*t4537;
  t4580 = t4564 + t4567;
  t4591 = -1.*t2405*t4553;
  t4595 = t2160*t4580;
  t4603 = t4591 + t4595;
  t4605 = t2160*t4553;
  t4607 = t2405*t4580;
  t4612 = t4605 + t4607;
  t4483 = 0.049*t1048;
  t4484 = t4483 + t1215;
  t4492 = -0.09*t1048;
  t4493 = -0.049*t1144;
  t4503 = t4492 + t4493;
  t4639 = t534*t3482*t188;
  t4640 = t4199*t696;
  t4653 = t4639 + t4640;
  t4666 = -1.*t1048*t4653;
  t4669 = -1.*t3575*t1144;
  t4670 = t4666 + t4669;
  t4681 = t1048*t3575;
  t4685 = -1.*t4653*t1144;
  t4686 = t4681 + t4685;
  t4694 = t1626*t4670;
  t4697 = t1485*t4686;
  t4698 = t4694 + t4697;
  t4702 = t1485*t4670;
  t4705 = -1.*t1626*t4686;
  t4711 = t4702 + t4705;
  t4730 = -1.*t2405*t4698;
  t4739 = t2160*t4711;
  t4741 = t4730 + t4739;
  t4752 = t2160*t4698;
  t4755 = t2405*t4711;
  t4762 = t4752 + t4755;
  t4796 = -1.*t3543*t534*t188;
  t4798 = t4351*t696;
  t4799 = t4796 + t4798;
  t4801 = -1.*t1048*t4799;
  t4803 = -1.*t3846*t1144;
  t4804 = t4801 + t4803;
  t4810 = t1048*t3846;
  t4812 = -1.*t4799*t1144;
  t4820 = t4810 + t4812;
  t4832 = t1626*t4804;
  t4836 = t1485*t4820;
  t4841 = t4832 + t4836;
  t4843 = t1485*t4804;
  t4854 = -1.*t1626*t4820;
  t4859 = t4843 + t4854;
  t4864 = -1.*t2405*t4841;
  t4865 = t2160*t4859;
  t4868 = t4864 + t4865;
  t4872 = t2160*t4841;
  t4877 = t2405*t4859;
  t4882 = t4872 + t4877;
  t4916 = t1048*t4491;
  t4917 = t156*t188*t1144;
  t4920 = t4916 + t4917;
  t4925 = -1.*t1626*t4920;
  t4926 = t4925 + t4552;
  t4931 = -1.*t1485*t4920;
  t4932 = t4931 + t4567;
  t4936 = -1.*t2405*t4926;
  t4937 = t2160*t4932;
  t4939 = t4936 + t4937;
  t4943 = t2160*t4926;
  t4944 = t2405*t4932;
  t4945 = t4943 + t4944;
  t4912 = -0.21*t1485;
  t4913 = -0.049*t1626;
  t4914 = t4912 + t4913;
  t4922 = 0.049*t1485;
  t4923 = t4922 + t1669;
  t4996 = t1048*t4653;
  t5001 = t3575*t1144;
  t5006 = t4996 + t5001;
  t5014 = -1.*t1626*t5006;
  t5015 = t5014 + t4697;
  t5017 = -1.*t1485*t5006;
  t5018 = t5017 + t4705;
  t5023 = -1.*t2405*t5015;
  t5026 = t2160*t5018;
  t5027 = t5023 + t5026;
  t5030 = t2160*t5015;
  t5031 = t2405*t5018;
  t5034 = t5030 + t5031;
  t5069 = t1048*t4799;
  t5075 = t3846*t1144;
  t5076 = t5069 + t5075;
  t5098 = -1.*t1626*t5076;
  t5101 = t5098 + t4836;
  t5110 = -1.*t1485*t5076;
  t5117 = t5110 + t4854;
  t5119 = -1.*t2405*t5101;
  t5120 = t2160*t5117;
  t5121 = t5119 + t5120;
  t5127 = t2160*t5101;
  t5135 = t2405*t5117;
  t5139 = t5127 + t5135;
  t5206 = t1485*t4920;
  t5209 = t1626*t4537;
  t5210 = t5206 + t5209;
  t5203 = t2405*t4926;
  t5213 = t2160*t5210;
  t5215 = t5203 + t5213;
  t5220 = -1.*t2405*t5210;
  t5223 = t4943 + t5220;
  t5190 = -1.11344*t2929;
  t5191 = -0.02159*t3050;
  t5197 = t5190 + t5191;
  t5217 = 0.02159*t2929;
  t5219 = t5217 + t3062;
  t5275 = t1485*t5006;
  t5281 = t1626*t4686;
  t5282 = t5275 + t5281;
  t5266 = t2405*t5015;
  t5287 = t2160*t5282;
  t5288 = t5266 + t5287;
  t5292 = -1.*t2405*t5282;
  t5295 = t5030 + t5292;
  t5328 = t1485*t5076;
  t5329 = t1626*t4820;
  t5332 = t5328 + t5329;
  t5324 = t2405*t5101;
  t5333 = t2160*t5332;
  t5337 = t5324 + t5333;
  t5341 = -1.*t2405*t5332;
  t5346 = t5127 + t5341;
  t5394 = Sin(var1[14]);
  t5397 = Cos(var1[14]);
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0.5*(-2.*t1670*t1809 + 2.*t1340*t1389*t188 + 0.27*t156*t188 - 2.*t1834*t1925 - 2.*t2500*t2528 - 2.*t2665*t2846 - 2.*t3071*t3089 - 2.*t3105*t3159 + 2.22688*(-1.*t3050*t3089 + t2929*t3159) + 0.04318*(t2929*t3089 + t3050*t3159) - 0.261*t156*t188*t534 - 2.*t1257*t156*t188*t696 - 2.*t156*t188*t821);
  p_output1[4]=0.5*(-0.135*t156*t3476*t3482 - 0.135*t1340*t3543 + 0.135*t3575 - 2.*t1389*t3603 - 2.*t1670*t3624 - 2.*t1834*t3677 - 2.*t2500*t3696 - 2.*t2665*t3716 - 2.*t3071*t3763 - 2.*t3105*t3780 + 2.22688*(-1.*t3050*t3763 + t2929*t3780) + 0.04318*(t2929*t3763 + t3050*t3780) - 0.261*t3575*t534 - 2.*t1257*t3575*t696 - 2.*t3575*t821);
  p_output1[5]=0.5*(-0.135*t1340*t3482 + 0.135*t156*t3476*t3543 + 0.135*t3846 - 2.*t1389*t3885 - 2.*t1670*t3890 - 2.*t1834*t3922 - 2.*t2500*t3944 - 2.*t2665*t3950 - 2.*t3071*t3962 - 2.*t3105*t3974 + 2.22688*(-1.*t3050*t3962 + t2929*t3974) + 0.04318*(t2929*t3962 + t3050*t3974) - 0.261*t3846*t534 - 2.*t1257*t3846*t696 - 2.*t3846*t821);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=0.5*(-2.*t3476*t4006 - 2.*t1340*t188*t4010 - 2.*t1257*t4050 - 2.*t1048*t1670*t4050 + 2.*t1144*t1834*t4050 - 2.*t2500*t4116 - 2.*t2665*t4146 - 2.*t3071*t4158 - 2.*t3105*t4165 + 2.22688*(-1.*t3050*t4158 + t2929*t4165) + 0.04318*(t2929*t4158 + t3050*t4165) - 0.261*(-1.*t3476*t534 - 1.*t1340*t188*t696));
  p_output1[10]=0.5*(-2.*t188*t3482*t4006 - 2.*t4010*t4199 - 2.*t1257*t4203 - 2.*t1048*t1670*t4203 + 2.*t1144*t1834*t4203 - 2.*t2500*t4264 - 2.*t2665*t4275 - 2.*t3071*t4289 - 2.*t3105*t4310 + 2.22688*(-1.*t3050*t4289 + t2929*t4310) + 0.04318*(t2929*t4289 + t3050*t4310) - 0.261*(-1.*t188*t3482*t534 - 1.*t4199*t696));
  p_output1[11]=0.5*(2.*t188*t3543*t4006 - 2.*t4010*t4351 - 2.*t1257*t4361 - 2.*t1048*t1670*t4361 + 2.*t1144*t1834*t4361 - 2.*t2500*t4408 - 2.*t2665*t4416 - 2.*t3071*t4427 - 2.*t3105*t4446 + 2.22688*(-1.*t3050*t4427 + t2929*t4446) + 0.04318*(t2929*t4427 + t3050*t4446) - 0.261*(t188*t3543*t534 - 1.*t4351*t696));
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0.5*(-2.*t156*t188*t4484 - 2.*t4491*t4503 - 2.*t1834*t4516 - 2.*t1670*t4537 - 2.*t2665*t4553 - 2.*t2500*t4580 - 2.*t3105*t4603 - 2.*t3071*t4612 + 0.04318*(t3050*t4603 + t2929*t4612) + 2.22688*(t2929*t4603 - 1.*t3050*t4612));
  p_output1[16]=0.5*(-2.*t3575*t4484 - 2.*t4503*t4653 - 2.*t1834*t4670 - 2.*t1670*t4686 - 2.*t2665*t4698 - 2.*t2500*t4711 - 2.*t3105*t4741 - 2.*t3071*t4762 + 0.04318*(t3050*t4741 + t2929*t4762) + 2.22688*(t2929*t4741 - 1.*t3050*t4762));
  p_output1[17]=0.5*(-2.*t3846*t4484 - 2.*t4503*t4799 - 2.*t1834*t4804 - 2.*t1670*t4820 - 2.*t2665*t4841 - 2.*t2500*t4859 - 2.*t3105*t4868 - 2.*t3071*t4882 + 0.04318*(t3050*t4868 + t2929*t4882) + 2.22688*(t2929*t4868 - 1.*t3050*t4882));
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0.5*(-2.*t4914*t4920 - 2.*t4537*t4923 - 2.*t2665*t4926 - 2.*t2500*t4932 - 2.*t3105*t4939 - 2.*t3071*t4945 + 0.04318*(t3050*t4939 + t2929*t4945) + 2.22688*(t2929*t4939 - 1.*t3050*t4945));
  p_output1[22]=0.5*(-2.*t4686*t4923 - 2.*t4914*t5006 - 2.*t2665*t5015 - 2.*t2500*t5018 - 2.*t3105*t5027 - 2.*t3071*t5034 + 0.04318*(t3050*t5027 + t2929*t5034) + 2.22688*(t2929*t5027 - 1.*t3050*t5034));
  p_output1[23]=0.5*(-2.*t4820*t4923 - 2.*t4914*t5076 - 2.*t2665*t5101 - 2.*t2500*t5117 - 2.*t3105*t5121 - 2.*t3071*t5139 + 0.04318*(t3050*t5121 + t2929*t5139) + 2.22688*(t2929*t5121 - 1.*t3050*t5139));
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0.5*(-2.*t5197*t5215 - 2.*t5219*t5223 + 0.04318*(-1.*t3050*t5215 + t2929*t5223) + 2.22688*(-1.*t2929*t5215 - 1.*t3050*t5223));
  p_output1[28]=0.5*(-2.*t5197*t5288 - 2.*t5219*t5295 + 0.04318*(-1.*t3050*t5288 + t2929*t5295) + 2.22688*(-1.*t2929*t5288 - 1.*t3050*t5295));
  p_output1[29]=0.5*(-2.*t5197*t5337 - 2.*t5219*t5346 + 0.04318*(-1.*t3050*t5337 + t2929*t5346) + 2.22688*(-1.*t2929*t5337 - 1.*t3050*t5346));
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0.5*(-0.135*t3543*t5394 - 0.135*t3476*t3482*t5397 - 0.135*(-1.*t3543*t5394 - 1.*t3476*t3482*t5397));
  p_output1[35]=0.5*(-0.135*t3482*t5394 + 0.135*t3476*t3543*t5397 - 0.135*(-1.*t3482*t5394 + t3476*t3543*t5397));
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
}



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 22 && ncols == 1) && 
      !(mrows == 1 && ncols == 22))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 6, (mwSize) 10, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#endif // MATLAB_MEX_FILE

namespace SymFunction
{

void J_pelvis_leftFoot_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




