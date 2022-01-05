/*
 * Automatically Generated from Mathematica.
 * Sun 7 Nov 2021 14:28:06 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "rightLegRollVelocity.hh"
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t21;
  double t22;
  double t50;
  double t52;
  double t63;
  double t223;
  double t250;
  double t320;
  double t418;
  double t477;
  double t607;
  double t716;
  double t774;
  double t865;
  double t1156;
  double t1164;
  double t1167;
  double t1178;
  double t1182;
  double t1186;
  double t1226;
  double t1476;
  double t1489;
  double t1315;
  double t1331;
  double t1334;
  double t1452;
  double t1456;
  double t1458;
  double t1527;
  double t1555;
  double t1558;
  double t1598;
  double t1736;
  double t1770;
  double t1784;
  double t1872;
  double t1891;
  double t1900;
  double t1921;
  double t1925;
  double t1927;
  double t1935;
  double t1966;
  double t1969;
  double t1971;
  double t2057;
  double t2064;
  double t2076;
  double t450;
  double t459;
  double t476;
  double t494;
  double t515;
  double t2262;
  double t2270;
  double t2300;
  double t1134;
  double t1152;
  double t1155;
  double t2442;
  double t805;
  double t888;
  double t1023;
  double t1440;
  double t1444;
  double t1446;
  double t2323;
  double t2336;
  double t2378;
  double t2631;
  double t2632;
  double t2652;
  double t1216;
  double t1259;
  double t1266;
  double t1822;
  double t1838;
  double t1855;
  double t2764;
  double t2781;
  double t2842;
  double t2879;
  double t2887;
  double t2889;
  double t1573;
  double t1627;
  double t1714;
  double t1996;
  double t1997;
  double t2055;
  double t2966;
  double t2972;
  double t3006;
  double t3046;
  double t3077;
  double t3110;
  double t1929;
  double t1956;
  double t1963;
  double t3130;
  double t3137;
  double t3154;
  double t3179;
  double t3189;
  double t3220;
  double t2304;
  double t2319;
  double t2390;
  double t2461;
  double t2505;
  double t2562;
  double t2589;
  double t2630;
  double t2687;
  double t2693;
  double t2721;
  double t2727;
  double t2756;
  double t2862;
  double t2931;
  double t3031;
  double t3129;
  double t3158;
  double t3242;
  double t3243;
  double t3255;
  double t3272;
  double t3280;
  double t3289;
  double t3290;
  double t3304;
  double t3319;
  double t3338;
  double t3466;
  double t3468;
  double t3478;
  double t3514;
  double t3565;
  double t3594;
  double t3654;
  double t3691;
  double t3735;
  double t3809;
  double t3827;
  double t3848;
  double t3863;
  double t3869;
  double t3887;
  double t3927;
  double t4004;
  double t4006;
  double t4124;
  double t4130;
  double t4138;
  double t4171;
  double t4202;
  double t4209;
  double t4382;
  double t4485;
  double t4488;
  double t4585;
  double t4586;
  double t4609;
  double t4633;
  double t4634;
  double t4656;
  double t4687;
  double t4691;
  double t4701;
  double t4704;
  double t4705;
  double t4711;
  double t4763;
  double t4767;
  double t4774;
  double t4784;
  double t4825;
  double t4834;
  double t3623;
  double t3628;
  double t3635;
  double t4214;
  double t4259;
  double t4261;
  double t4271;
  double t4282;
  double t4284;
  double t3392;
  double t3449;
  double t3479;
  double t3491;
  double t3500;
  double t3508;
  double t3603;
  double t3641;
  double t3784;
  double t3853;
  double t3918;
  double t4123;
  double t4153;
  double t4210;
  double t4265;
  double t4312;
  double t4323;
  double t4341;
  double t4354;
  double t4373;
  double t5570;
  double t5577;
  double t5578;
  double t5594;
  double t5601;
  double t5602;
  double t5636;
  double t5641;
  double t5656;
  double t5664;
  double t5672;
  double t5676;
  double t5412;
  double t5447;
  double t5461;
  double t5465;
  double t5476;
  double t5896;
  double t5916;
  double t5917;
  double t5924;
  double t5939;
  double t5956;
  double t5966;
  double t5972;
  double t5973;
  double t5977;
  double t5978;
  double t5988;
  double t5110;
  double t5139;
  double t5144;
  double t5146;
  double t5195;
  double t5196;
  double t5198;
  double t5237;
  double t5243;
  double t5255;
  double t5269;
  double t5274;
  double t5275;
  double t5294;
  double t5331;
  double t5335;
  double t6118;
  double t6123;
  double t6124;
  double t6137;
  double t6139;
  double t6179;
  double t6187;
  double t6190;
  double t6197;
  double t6199;
  double t6205;
  double t6216;
  double t6219;
  double t6222;
  double t6067;
  double t6076;
  double t6083;
  double t6086;
  double t6089;
  double t6267;
  double t6277;
  double t6282;
  double t6313;
  double t6318;
  double t6323;
  double t6325;
  double t6329;
  double t6332;
  double t6334;
  double t6337;
  double t6353;
  double t6357;
  double t6369;
  double t6442;
  double t6451;
  double t6453;
  double t6457;
  double t6460;
  double t5833;
  double t6600;
  double t6601;
  double t6602;
  double t6607;
  double t6612;
  double t6631;
  double t6632;
  double t6644;
  double t6683;
  double t6685;
  double t6689;
  double t6710;
  double t6712;
  double t6713;
  double t6716;
  double t6725;
  double t6726;
  double t6729;
  double t6731;
  double t6734;
  double t6737;
  double t6768;
  double t6770;
  double t6885;
  double t6886;
  double t6913;
  double t6916;
  double t6923;
  double t6925;
  double t6930;
  double t6832;
  double t6833;
  double t6838;
  double t6860;
  double t6863;
  double t6877;
  double t6878;
  double t6880;
  double t6900;
  double t6908;
  double t6963;
  double t6964;
  double t6972;
  double t6973;
  double t6981;
  double t6984;
  double t6986;
  double t7038;
  double t7039;
  double t7043;
  double t7048;
  double t7054;
  double t7058;
  double t7063;
  double t7064;
  double t7067;
  double t7069;
  double t7071;
  double t7073;
  double t7079;
  double t7080;
  double t7081;
  double t7083;
  double t7084;
  double t7085;
  double t7087;
  double t7088;
  double t7089;
  double t7115;
  double t7116;
  double t7118;
  double t7120;
  double t7123;
  double t7124;
  double t7126;
  double t7127;
  double t7129;
  double t7131;
  double t7132;
  double t7133;
  double t7136;
  double t7138;
  double t7139;
  double t7141;
  double t7142;
  double t7143;
  double t7145;
  double t7146;
  double t7148;
  t21 = Cos(var1[3]);
  t22 = Sin(var1[14]);
  t50 = -1.*t21*t22;
  t52 = Cos(var1[14]);
  t63 = Cos(var1[4]);
  t223 = Sin(var1[3]);
  t250 = -1.*t52*t63*t223;
  t320 = t50 + t250;
  t418 = Cos(var1[15]);
  t477 = Sin(var1[15]);
  t607 = Cos(var1[16]);
  t716 = -1.*t607;
  t774 = 1. + t716;
  t865 = Sin(var1[16]);
  t1156 = -1.*t52*t21;
  t1164 = t63*t22*t223;
  t1167 = t1156 + t1164;
  t1178 = Cos(var1[17]);
  t1182 = -1.*t1178;
  t1186 = 1. + t1182;
  t1226 = Sin(var1[17]);
  t1476 = -1.*var1[17];
  t1489 = 0.226893 + t1476;
  t1315 = -1.*t477*t865*t320;
  t1331 = t607*t1167;
  t1334 = t1315 + t1331;
  t1452 = t607*t477*t320;
  t1456 = t865*t1167;
  t1458 = t1452 + t1456;
  t1527 = Cos(t1489);
  t1555 = -1.*t1527;
  t1558 = 1. + t1555;
  t1598 = Sin(t1489);
  t1736 = t1226*t1334;
  t1770 = t1178*t1458;
  t1784 = t1736 + t1770;
  t1872 = t1178*t1334;
  t1891 = -1.*t1226*t1458;
  t1900 = t1872 + t1891;
  t1921 = Cos(var1[21]);
  t1925 = -1.*t1921;
  t1927 = 1. + t1925;
  t1935 = Sin(var1[21]);
  t1966 = -1.*t1598*t1784;
  t1969 = t1527*t1900;
  t1971 = t1966 + t1969;
  t2057 = t1527*t1784;
  t2064 = t1598*t1900;
  t2076 = t2057 + t2064;
  t450 = -1.*t418;
  t459 = 1. + t450;
  t476 = -0.135*t459;
  t494 = 0.049*t477;
  t515 = t476 + t494;
  t2262 = t21*t63*t22;
  t2270 = t52*t223;
  t2300 = t2262 + t2270;
  t1134 = -0.09*t774;
  t1152 = 0.049*t865;
  t1155 = t1134 + t1152;
  t2442 = Sin(var1[4]);
  t805 = -0.049*t774;
  t888 = -0.09*t865;
  t1023 = t805 + t888;
  t1440 = -0.049*t1186;
  t1444 = -0.21*t1226;
  t1446 = t1440 + t1444;
  t2323 = t52*t21*t63;
  t2336 = -1.*t22*t223;
  t2378 = t2323 + t2336;
  t2631 = t477*t2300;
  t2632 = -1.*t418*t21*t2442;
  t2652 = t2631 + t2632;
  t1216 = -0.21*t1186;
  t1259 = 0.049*t1226;
  t1266 = t1216 + t1259;
  t1822 = -0.70544*t1558;
  t1838 = -0.01841*t1598;
  t1855 = t1822 + t1838;
  t2764 = t865*t2378;
  t2781 = t607*t2652;
  t2842 = t2764 + t2781;
  t2879 = t607*t2378;
  t2887 = -1.*t865*t2652;
  t2889 = t2879 + t2887;
  t1573 = 0.01841*t1558;
  t1627 = -0.70544*t1598;
  t1714 = t1573 + t1627;
  t1996 = -0.02159*t1927;
  t1997 = -1.11344*t1935;
  t2055 = t1996 + t1997;
  t2966 = -1.*t1226*t2842;
  t2972 = t1178*t2889;
  t3006 = t2966 + t2972;
  t3046 = t1178*t2842;
  t3077 = t1226*t2889;
  t3110 = t3046 + t3077;
  t1929 = -1.11344*t1927;
  t1956 = 0.02159*t1935;
  t1963 = t1929 + t1956;
  t3130 = t1598*t3006;
  t3137 = t1527*t3110;
  t3154 = t3130 + t3137;
  t3179 = t1527*t3006;
  t3189 = -1.*t1598*t3110;
  t3220 = t3179 + t3189;
  t2304 = -0.135*t2300;
  t2319 = -1.*t515*t2300;
  t2390 = -1.*t1155*t2378;
  t2461 = 0.049*t21*t2442;
  t2505 = -0.049*t459;
  t2562 = -0.135*t477;
  t2589 = t2505 + t2562;
  t2630 = t21*t2589*t2442;
  t2687 = -1.*t1023*t2652;
  t2693 = t418*t2300;
  t2721 = t21*t477*t2442;
  t2727 = t2693 + t2721;
  t2756 = 0.1305*t2727;
  t2862 = -1.*t1446*t2842;
  t2931 = -1.*t1266*t2889;
  t3031 = -1.*t1855*t3006;
  t3129 = -1.*t1714*t3110;
  t3158 = -1.*t2055*t3154;
  t3242 = -1.*t1963*t3220;
  t3243 = -1.*t1935*t3154;
  t3255 = t1921*t3220;
  t3272 = t3243 + t3255;
  t3280 = 1.11344*t3272;
  t3289 = t1921*t3154;
  t3290 = t1935*t3220;
  t3304 = t3289 + t3290;
  t3319 = 0.02159*t3304;
  t3338 = t2304 + t2319 + t2390 + t2461 + t2630 + t2687 + t2756 + t2862 + t2931 + t3031 + t3129 + t3158 + t3242 + t3280 + t3319;
  t3466 = t52*t21;
  t3468 = -1.*t63*t22*t223;
  t3478 = t3466 + t3468;
  t3514 = t477*t3478;
  t3565 = t418*t223*t2442;
  t3594 = t3514 + t3565;
  t3654 = t865*t320;
  t3691 = t607*t3594;
  t3735 = t3654 + t3691;
  t3809 = t607*t320;
  t3827 = -1.*t865*t3594;
  t3848 = t3809 + t3827;
  t3863 = -1.*t1226*t3735;
  t3869 = t1178*t3848;
  t3887 = t3863 + t3869;
  t3927 = t1178*t3735;
  t4004 = t1226*t3848;
  t4006 = t3927 + t4004;
  t4124 = t1598*t3887;
  t4130 = t1527*t4006;
  t4138 = t4124 + t4130;
  t4171 = t1527*t3887;
  t4202 = -1.*t1598*t4006;
  t4209 = t4171 + t4202;
  t4382 = -1.*t21*t63*t22;
  t4485 = -1.*t52*t223;
  t4488 = t4382 + t4485;
  t4585 = t865*t4488;
  t4586 = t607*t477*t2378;
  t4609 = t4585 + t4586;
  t4633 = t607*t4488;
  t4634 = -1.*t477*t865*t2378;
  t4656 = t4633 + t4634;
  t4687 = -1.*t1226*t4609;
  t4691 = t1178*t4656;
  t4701 = t4687 + t4691;
  t4704 = t1178*t4609;
  t4705 = t1226*t4656;
  t4711 = t4704 + t4705;
  t4763 = t1598*t4701;
  t4767 = t1527*t4711;
  t4774 = t4763 + t4767;
  t4784 = t1527*t4701;
  t4825 = -1.*t1598*t4711;
  t4834 = t4784 + t4825;
  t3623 = t418*t3478;
  t3628 = -1.*t477*t223*t2442;
  t3635 = t3623 + t3628;
  t4214 = -1.*t1935*t4138;
  t4259 = t1921*t4209;
  t4261 = t4214 + t4259;
  t4271 = t1921*t4138;
  t4282 = t1935*t4209;
  t4284 = t4271 + t4282;
  t3392 = Power(t3338,2);
  t3449 = t1155*t320;
  t3479 = 0.135*t3478;
  t3491 = t515*t3478;
  t3500 = 0.049*t223*t2442;
  t3508 = t2589*t223*t2442;
  t3603 = t1023*t3594;
  t3641 = -0.1305*t3635;
  t3784 = t1446*t3735;
  t3853 = t1266*t3848;
  t3918 = t1855*t3887;
  t4123 = t1714*t4006;
  t4153 = t2055*t4138;
  t4210 = t1963*t4209;
  t4265 = -1.11344*t4261;
  t4312 = -0.02159*t4284;
  t4323 = t3449 + t3479 + t3491 + t3500 + t3508 + t3603 + t3641 + t3784 + t3853 + t3918 + t4123 + t4153 + t4210 + t4265 + t4312;
  t4341 = Power(t4323,2);
  t4354 = t3392 + t4341;
  t4373 = 1/t4354;
  t5570 = -1.*t1178*t865*t3635;
  t5577 = -1.*t607*t1226*t3635;
  t5578 = t5570 + t5577;
  t5594 = t607*t1178*t3635;
  t5601 = -1.*t865*t1226*t3635;
  t5602 = t5594 + t5601;
  t5636 = t1598*t5578;
  t5641 = t1527*t5602;
  t5656 = t5636 + t5641;
  t5664 = t1527*t5578;
  t5672 = -1.*t1598*t5602;
  t5676 = t5664 + t5672;
  t5412 = 0.049*t418;
  t5447 = t5412 + t2562;
  t5461 = -0.135*t418;
  t5465 = -0.049*t477;
  t5476 = t5461 + t5465;
  t5896 = -1.*t1178*t865*t2727;
  t5916 = -1.*t607*t1226*t2727;
  t5917 = t5896 + t5916;
  t5924 = t607*t1178*t2727;
  t5939 = -1.*t865*t1226*t2727;
  t5956 = t5924 + t5939;
  t5966 = t1598*t5917;
  t5972 = t1527*t5956;
  t5973 = t5966 + t5972;
  t5977 = t1527*t5917;
  t5978 = -1.*t1598*t5956;
  t5988 = t5977 + t5978;
  t5110 = -1.*t1155*t320;
  t5139 = -0.135*t3478;
  t5144 = -1.*t515*t3478;
  t5146 = -0.049*t223*t2442;
  t5195 = -1.*t2589*t223*t2442;
  t5196 = -1.*t1023*t3594;
  t5198 = 0.1305*t3635;
  t5237 = -1.*t1446*t3735;
  t5243 = -1.*t1266*t3848;
  t5255 = -1.*t1855*t3887;
  t5269 = -1.*t1714*t4006;
  t5274 = -1.*t2055*t4138;
  t5275 = -1.*t1963*t4209;
  t5294 = 1.11344*t4261;
  t5331 = 0.02159*t4284;
  t5335 = t5110 + t5139 + t5144 + t5146 + t5195 + t5196 + t5198 + t5237 + t5243 + t5255 + t5269 + t5274 + t5275 + t5294 + t5331;
  t6118 = -1.*t865*t320;
  t6123 = -1.*t607*t3594;
  t6124 = t6118 + t6123;
  t6137 = t1226*t6124;
  t6139 = t6137 + t3869;
  t6179 = t1178*t6124;
  t6187 = -1.*t1226*t3848;
  t6190 = t6179 + t6187;
  t6197 = -1.*t1598*t6139;
  t6199 = t1527*t6190;
  t6205 = t6197 + t6199;
  t6216 = t1527*t6139;
  t6219 = t1598*t6190;
  t6222 = t6216 + t6219;
  t6067 = 0.049*t607;
  t6076 = t6067 + t888;
  t6083 = -0.09*t607;
  t6086 = -0.049*t865;
  t6089 = t6083 + t6086;
  t6267 = -1.*t865*t2378;
  t6277 = -1.*t607*t2652;
  t6282 = t6267 + t6277;
  t6313 = t1226*t6282;
  t6318 = t6313 + t2972;
  t6323 = t1178*t6282;
  t6325 = -1.*t1226*t2889;
  t6329 = t6323 + t6325;
  t6332 = -1.*t1598*t6318;
  t6334 = t1527*t6329;
  t6337 = t6332 + t6334;
  t6353 = t1527*t6318;
  t6357 = t1598*t6329;
  t6369 = t6353 + t6357;
  t6442 = -1.11344*t1921;
  t6451 = -0.02159*t1935;
  t6453 = t6442 + t6451;
  t6457 = 0.02159*t1921;
  t6460 = t6457 + t1997;
  t5833 = t418*t21*t2442;
  t6600 = -1.*t52*t21*t63;
  t6601 = t22*t223;
  t6602 = t6600 + t6601;
  t6607 = t477*t4488;
  t6612 = t6607 + t5833;
  t6631 = t865*t6602;
  t6632 = t607*t6612;
  t6644 = t6631 + t6632;
  t6683 = t607*t6602;
  t6685 = -1.*t865*t6612;
  t6689 = t6683 + t6685;
  t6710 = -1.*t1226*t6644;
  t6712 = t1178*t6689;
  t6713 = t6710 + t6712;
  t6716 = t1178*t6644;
  t6725 = t1226*t6689;
  t6726 = t6716 + t6725;
  t6729 = t1598*t6713;
  t6731 = t1527*t6726;
  t6734 = t6729 + t6731;
  t6737 = t1527*t6713;
  t6768 = -1.*t1598*t6726;
  t6770 = t6737 + t6768;
  t6885 = -1.*t1178*t2842;
  t6886 = t6885 + t6325;
  t6913 = t1527*t6886;
  t6916 = t6913 + t3137;
  t6923 = t1598*t6886;
  t6925 = t1598*t3110;
  t6930 = t6923 + t6925;
  t6832 = -0.21*t1178;
  t6833 = -0.049*t1226;
  t6838 = t6832 + t6833;
  t6860 = 0.049*t1178;
  t6863 = t6860 + t1444;
  t6877 = 0.01841*t1527;
  t6878 = 0.70544*t1598;
  t6880 = t6877 + t6878;
  t6900 = 0.70544*t1527;
  t6908 = t6900 + t1838;
  t6963 = -1.*t1178*t3735;
  t6964 = t6963 + t6187;
  t6972 = t1527*t6964;
  t6973 = t6972 + t4130;
  t6981 = t1598*t6964;
  t6984 = t1598*t4006;
  t6986 = t6981 + t6984;
  t7038 = -1.*t418*t21*t63;
  t7039 = -1.*t21*t22*t477*t2442;
  t7043 = t7038 + t7039;
  t7048 = -1.*t52*t21*t865*t2442;
  t7054 = t607*t7043;
  t7058 = t7048 + t7054;
  t7063 = -1.*t52*t607*t21*t2442;
  t7064 = -1.*t865*t7043;
  t7067 = t7063 + t7064;
  t7069 = -1.*t1226*t7058;
  t7071 = t1178*t7067;
  t7073 = t7069 + t7071;
  t7079 = t1178*t7058;
  t7080 = t1226*t7067;
  t7081 = t7079 + t7080;
  t7083 = t1598*t7073;
  t7084 = t1527*t7081;
  t7085 = t7083 + t7084;
  t7087 = t1527*t7073;
  t7088 = -1.*t1598*t7081;
  t7089 = t7087 + t7088;
  t7115 = t418*t63*t223;
  t7116 = t22*t477*t223*t2442;
  t7118 = t7115 + t7116;
  t7120 = t52*t865*t223*t2442;
  t7123 = t607*t7118;
  t7124 = t7120 + t7123;
  t7126 = t52*t607*t223*t2442;
  t7127 = -1.*t865*t7118;
  t7129 = t7126 + t7127;
  t7131 = -1.*t1226*t7124;
  t7132 = t1178*t7129;
  t7133 = t7131 + t7132;
  t7136 = t1178*t7124;
  t7138 = t1226*t7129;
  t7139 = t7136 + t7138;
  t7141 = t1598*t7133;
  t7142 = t1527*t7139;
  t7143 = t7141 + t7142;
  t7145 = t1527*t7133;
  t7146 = -1.*t1598*t7139;
  t7148 = t7145 + t7146;
  p_output1[0]=(t4373*Power(t5335,2) + t3338*t4373*(t2461 + t2630 + 0.135*t4488 - 0.1305*(t418*t4488 - 1.*t21*t2442*t477) + t4488*t515 + t1155*t6602 + t1023*t6612 + t1446*t6644 + t1266*t6689 + t1855*t6713 + t1714*t6726 + t2055*t6734 + t1963*t6770 - 1.11344*(-1.*t1935*t6734 + t1921*t6770) - 0.02159*(t1921*t6734 + t1935*t6770)))*var2[3] + (t4373*t5335*(0.135*t21*t22*t2442 + t21*t22*t2442*t515 + t1155*t21*t2442*t52 + 0.049*t21*t63 + t21*t2589*t63 + 0.1305*(-1.*t21*t22*t2442*t418 + t21*t477*t63) - 1.*t1023*t7043 - 1.*t1446*t7058 - 1.*t1266*t7067 - 1.*t1855*t7073 - 1.*t1714*t7081 - 1.*t2055*t7085 - 1.*t1963*t7089 + 1.11344*(-1.*t1935*t7085 + t1921*t7089) + 0.02159*(t1921*t7085 + t1935*t7089)) + t3338*t4373*(0.135*t22*t223*t2442 + t22*t223*t2442*t515 + t1155*t223*t2442*t52 + 0.049*t223*t63 + t223*t2589*t63 - 0.1305*(t22*t223*t2442*t418 - 1.*t223*t477*t63) + t1023*t7118 + t1446*t7124 + t1266*t7129 + t1855*t7133 + t1714*t7139 + t2055*t7143 + t1963*t7148 - 1.11344*(-1.*t1935*t7143 + t1921*t7148) - 0.02159*(t1921*t7143 + t1935*t7148)))*var2[4] + (t3338*t4373*(t1155*t1167 + t1266*t1334 + t1446*t1458 + t1714*t1784 + t1855*t1900 + t1963*t1971 + t2055*t2076 - 0.02159*(t1935*t1971 + t1921*t2076) - 1.11344*(t1921*t1971 - 1.*t1935*t2076) + 0.135*t320 - 0.1305*t320*t418 + t1023*t320*t477 + t320*t515) + t4373*(-0.135*t2378 + 0.1305*t2378*t418 - 1.*t1155*t4488 - 1.*t1446*t4609 - 1.*t1266*t4656 - 1.*t1855*t4701 - 1.*t1714*t4711 - 1.*t1023*t2378*t477 - 1.*t2055*t4774 - 1.*t1963*t4834 + 1.11344*(-1.*t1935*t4774 + t1921*t4834) + 0.02159*(t1921*t4774 + t1935*t4834) - 1.*t2378*t515)*t5335)*var2[14] + (t4373*t5335*(-1.*t1023*t2727 - 1.*t2300*t5447 + t21*t2442*t5476 + 0.1305*(-1.*t2300*t477 + t5833) - 1.*t1855*t5917 - 1.*t1714*t5956 - 1.*t2055*t5973 - 1.*t1963*t5988 + 1.11344*(-1.*t1935*t5973 + t1921*t5988) + 0.02159*(t1921*t5973 + t1935*t5988) - 1.*t1446*t2727*t607 + t1266*t2727*t865) + t3338*t4373*(t1023*t3635 - 0.1305*(-1.*t223*t2442*t418 - 1.*t3478*t477) + t3478*t5447 + t223*t2442*t5476 + t1855*t5578 + t1714*t5602 + t2055*t5656 + t1963*t5676 - 1.11344*(-1.*t1935*t5656 + t1921*t5676) - 0.02159*(t1921*t5656 + t1935*t5676) + t1446*t3635*t607 - 1.*t1266*t3635*t865))*var2[15] + (t3338*t4373*(t1446*t3848 + t320*t6076 + t3594*t6089 + t1266*t6124 + t1714*t6139 + t1855*t6190 + t1963*t6205 + t2055*t6222 - 0.02159*(t1935*t6205 + t1921*t6222) - 1.11344*(t1921*t6205 - 1.*t1935*t6222)) + t4373*t5335*(-1.*t1446*t2889 - 1.*t2378*t6076 - 1.*t2652*t6089 - 1.*t1266*t6282 - 1.*t1714*t6318 - 1.*t1855*t6329 - 1.*t1963*t6337 - 1.*t2055*t6369 + 0.02159*(t1935*t6337 + t1921*t6369) + 1.11344*(t1921*t6337 - 1.*t1935*t6369)))*var2[16] + (t4373*t5335*(-1.*t1714*t3006 - 1.*t2842*t6838 - 1.*t2889*t6863 - 1.*t3006*t6880 - 1.*t1855*t6886 - 1.*t3110*t6908 - 1.*t1963*t6916 - 1.*t2055*t6930 + 0.02159*(t1935*t6916 + t1921*t6930) + 1.11344*(t1921*t6916 - 1.*t1935*t6930)) + t3338*t4373*(t1714*t3887 + t3735*t6838 + t3848*t6863 + t3887*t6880 + t4006*t6908 + t1855*t6964 + t1963*t6973 + t2055*t6986 - 0.02159*(t1935*t6973 + t1921*t6986) - 1.11344*(t1921*t6973 - 1.*t1935*t6986)))*var2[17] + (t4373*t5335*(1.11344*(-1.*t1921*t3154 - 1.*t1935*t3220) + 0.02159*t3272 - 1.*t3154*t6453 - 1.*t3220*t6460) + t3338*t4373*(-1.11344*(-1.*t1921*t4138 - 1.*t1935*t4209) - 0.02159*t4261 + t4138*t6453 + t4209*t6460))*var2[21];
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
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
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 22 && ncols == 1) && 
      !(mrows == 1 && ncols == 22))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#endif // MATLAB_MEX_FILE

namespace SymFunction
{

void rightLegRollVelocity_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}




