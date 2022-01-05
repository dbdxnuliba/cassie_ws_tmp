/*
 * Automatically Generated from Mathematica.
 * Sun 7 Nov 2021 14:28:02 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "leftLegPitchVelocity.hh"
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
  double t262;
  double t453;
  double t41;
  double t650;
  double t951;
  double t1271;
  double t1397;
  double t2409;
  double t2423;
  double t2456;
  double t2530;
  double t2187;
  double t2226;
  double t2397;
  double t2685;
  double t2892;
  double t2903;
  double t2937;
  double t2947;
  double t3258;
  double t3265;
  double t3046;
  double t3051;
  double t3065;
  double t3164;
  double t3191;
  double t3205;
  double t3274;
  double t3301;
  double t3327;
  double t3352;
  double t3457;
  double t3479;
  double t3553;
  double t3621;
  double t3628;
  double t3646;
  double t3690;
  double t3728;
  double t3750;
  double t3820;
  double t3898;
  double t3912;
  double t3922;
  double t4018;
  double t4021;
  double t4032;
  double t4189;
  double t4216;
  double t4220;
  double t4226;
  double t4232;
  double t1329;
  double t1420;
  double t1519;
  double t1585;
  double t1655;
  double t1724;
  double t2486;
  double t2609;
  double t2616;
  double t2778;
  double t2853;
  double t2855;
  double t2941;
  double t2996;
  double t3029;
  double t4312;
  double t4315;
  double t4320;
  double t4378;
  double t4384;
  double t4392;
  double t3139;
  double t3153;
  double t3157;
  double t3347;
  double t3356;
  double t3408;
  double t4406;
  double t4432;
  double t4445;
  double t4489;
  double t4496;
  double t4503;
  double t3585;
  double t3590;
  double t3604;
  double t3767;
  double t3859;
  double t3867;
  double t4560;
  double t4585;
  double t4587;
  double t4682;
  double t4701;
  double t4747;
  double t3947;
  double t3992;
  double t4010;
  double t4753;
  double t4796;
  double t4803;
  double t4836;
  double t4851;
  double t4857;
  double t2107;
  double t2130;
  double t2138;
  double t4043;
  double t4044;
  double t4072;
  double t4171;
  double t4173;
  double t4175;
  double t5274;
  double t5291;
  double t5292;
  double t5367;
  double t5372;
  double t5381;
  double t5388;
  double t5391;
  double t5392;
  double t5395;
  double t5398;
  double t5402;
  double t5484;
  double t5539;
  double t5541;
  double t5562;
  double t5570;
  double t5575;
  double t5581;
  double t5582;
  double t5584;
  double t5601;
  double t5602;
  double t5611;
  double t5636;
  double t5640;
  double t5654;
  double t5335;
  double t5342;
  double t5350;
  double t5839;
  double t5842;
  double t5844;
  double t5847;
  double t5850;
  double t5854;
  double t5885;
  double t5888;
  double t5892;
  double t5896;
  double t5900;
  double t5915;
  double t56;
  double t608;
  double t1575;
  double t1976;
  double t2166;
  double t2663;
  double t2873;
  double t3127;
  double t3231;
  double t3572;
  double t3682;
  double t3944;
  double t4040;
  double t4158;
  double t4181;
  double t4187;
  double t5010;
  double t5014;
  double t5064;
  double t5081;
  double t5089;
  double t5092;
  double t5106;
  double t5125;
  double t5137;
  double t5158;
  double t5162;
  double t5186;
  double t5198;
  double t5213;
  double t5234;
  double t5254;
  double t5261;
  double t5264;
  double t5298;
  double t5300;
  double t5315;
  double t5366;
  double t5384;
  double t5393;
  double t5440;
  double t5551;
  double t5580;
  double t5587;
  double t5621;
  double t5675;
  double t5682;
  double t5688;
  double t5689;
  double t5695;
  double t5702;
  double t5704;
  double t5711;
  double t5722;
  double t5734;
  double t5739;
  double t5746;
  double t5748;
  double t5762;
  double t5764;
  double t5776;
  double t5780;
  double t5788;
  double t6046;
  double t6053;
  double t6058;
  double t6064;
  double t6069;
  double t6075;
  double t6083;
  double t6090;
  double t6092;
  double t6105;
  double t6107;
  double t6108;
  double t6168;
  double t6175;
  double t6178;
  double t6186;
  double t6187;
  double t6189;
  double t6192;
  double t6195;
  double t6196;
  double t6198;
  double t6206;
  double t6208;
  double t6219;
  double t6222;
  double t6224;
  double t6229;
  double t6232;
  double t6236;
  double t6238;
  double t6239;
  double t6240;
  double t6270;
  double t6271;
  double t6272;
  double t6274;
  double t6275;
  double t6280;
  double t6287;
  double t6289;
  double t6302;
  double t6312;
  double t6314;
  double t6317;
  double t6319;
  double t6320;
  double t6321;
  double t6325;
  double t6326;
  double t6328;
  double t6400;
  double t6404;
  double t6422;
  double t6436;
  double t6446;
  double t6450;
  double t6455;
  double t6471;
  double t6472;
  double t6475;
  double t6477;
  double t6481;
  double t6483;
  double t6485;
  double t6487;
  double t6493;
  double t6495;
  double t6498;
  double t6513;
  double t6516;
  double t6517;
  double t6571;
  double t6572;
  double t6573;
  double t6577;
  double t6578;
  double t6579;
  double t6591;
  double t6592;
  double t6593;
  double t6595;
  double t6597;
  double t6598;
  double t6601;
  double t6602;
  double t6603;
  double t6607;
  double t6612;
  double t6614;
  double t6618;
  double t6619;
  double t6620;
  double t6658;
  double t6659;
  double t6669;
  double t6677;
  double t6686;
  double t6697;
  double t6700;
  double t6701;
  double t6707;
  double t6710;
  double t6711;
  double t6715;
  double t6716;
  double t6721;
  double t6640;
  double t6643;
  double t6645;
  double t6648;
  double t6651;
  double t6771;
  double t6772;
  double t6776;
  double t6781;
  double t6783;
  double t6785;
  double t6786;
  double t6787;
  double t6789;
  double t6790;
  double t6791;
  double t6794;
  double t6795;
  double t6811;
  double t6844;
  double t6847;
  double t6848;
  double t6853;
  double t6855;
  double t6909;
  double t6910;
  double t6916;
  double t6917;
  double t6919;
  double t6921;
  double t6922;
  double t6893;
  double t6894;
  double t6895;
  double t6897;
  double t6898;
  double t6901;
  double t6902;
  double t6904;
  double t6912;
  double t6914;
  double t6949;
  double t6950;
  double t6953;
  double t6956;
  double t6958;
  double t6959;
  double t6961;
  t262 = Sin(var1[4]);
  t453 = Sin(var1[6]);
  t41 = Cos(var1[4]);
  t650 = Cos(var1[7]);
  t951 = -1.*t650;
  t1271 = 1. + t951;
  t1397 = Sin(var1[7]);
  t2409 = Cos(var1[8]);
  t2423 = -1.*t2409;
  t2456 = 1. + t2423;
  t2530 = Sin(var1[8]);
  t2187 = t41*t650;
  t2226 = t262*t453*t1397;
  t2397 = t2187 + t2226;
  t2685 = Cos(var1[6]);
  t2892 = Cos(var1[9]);
  t2903 = -1.*t2892;
  t2937 = 1. + t2903;
  t2947 = Sin(var1[9]);
  t3258 = -1.*var1[9];
  t3265 = 0.226893 + t3258;
  t3046 = t2409*t2397;
  t3051 = t2685*t262*t2530;
  t3065 = t3046 + t3051;
  t3164 = t2685*t2409*t262;
  t3191 = -1.*t2397*t2530;
  t3205 = t3164 + t3191;
  t3274 = Cos(t3265);
  t3301 = -1.*t3274;
  t3327 = 1. + t3301;
  t3352 = Sin(t3265);
  t3457 = -1.*t2947*t3065;
  t3479 = t2892*t3205;
  t3553 = t3457 + t3479;
  t3621 = t2892*t3065;
  t3628 = t2947*t3205;
  t3646 = t3621 + t3628;
  t3690 = Cos(var1[13]);
  t3728 = -1.*t3690;
  t3750 = 1. + t3728;
  t3820 = Sin(var1[13]);
  t3898 = t3352*t3553;
  t3912 = t3274*t3646;
  t3922 = t3898 + t3912;
  t4018 = t3274*t3553;
  t4021 = -1.*t3352*t3646;
  t4032 = t4018 + t4021;
  t4189 = Sin(var1[3]);
  t4216 = Cos(var1[3]);
  t4220 = t4216*t2685;
  t4226 = -1.*t41*t4189*t453;
  t4232 = t4220 + t4226;
  t1329 = 0.135*t1271;
  t1420 = 0.049*t1397;
  t1519 = t1329 + t1420;
  t1585 = -0.049*t1271;
  t1655 = 0.135*t1397;
  t1724 = t1585 + t1655;
  t2486 = -0.049*t2456;
  t2609 = -0.09*t2530;
  t2616 = t2486 + t2609;
  t2778 = -0.09*t2456;
  t2853 = 0.049*t2530;
  t2855 = t2778 + t2853;
  t2941 = -0.049*t2937;
  t2996 = -0.21*t2947;
  t3029 = t2941 + t2996;
  t4312 = t650*t4189*t262;
  t4315 = t4232*t1397;
  t4320 = t4312 + t4315;
  t4378 = -1.*t41*t2685*t4189;
  t4384 = -1.*t4216*t453;
  t4392 = t4378 + t4384;
  t3139 = -0.21*t2937;
  t3153 = 0.049*t2947;
  t3157 = t3139 + t3153;
  t3347 = -0.70544*t3327;
  t3356 = -0.01841*t3352;
  t3408 = t3347 + t3356;
  t4406 = t2409*t4320;
  t4432 = t4392*t2530;
  t4445 = t4406 + t4432;
  t4489 = t2409*t4392;
  t4496 = -1.*t4320*t2530;
  t4503 = t4489 + t4496;
  t3585 = 0.01841*t3327;
  t3590 = -0.70544*t3352;
  t3604 = t3585 + t3590;
  t3767 = -0.02159*t3750;
  t3859 = -1.11344*t3820;
  t3867 = t3767 + t3859;
  t4560 = -1.*t2947*t4445;
  t4585 = t2892*t4503;
  t4587 = t4560 + t4585;
  t4682 = t2892*t4445;
  t4701 = t2947*t4503;
  t4747 = t4682 + t4701;
  t3947 = -1.11344*t3750;
  t3992 = 0.02159*t3820;
  t4010 = t3947 + t3992;
  t4753 = t3352*t4587;
  t4796 = t3274*t4747;
  t4803 = t4753 + t4796;
  t4836 = t3274*t4587;
  t4851 = -1.*t3352*t4747;
  t4857 = t4836 + t4851;
  t2107 = t650*t262*t453;
  t2130 = -1.*t41*t1397;
  t2138 = t2107 + t2130;
  t4043 = -1.*t3820*t3922;
  t4044 = t3690*t4032;
  t4072 = t4043 + t4044;
  t4171 = t3690*t3922;
  t4173 = t3820*t4032;
  t4175 = t4171 + t4173;
  t5274 = t2685*t4189;
  t5291 = t4216*t41*t453;
  t5292 = t5274 + t5291;
  t5367 = -1.*t4216*t650*t262;
  t5372 = t5292*t1397;
  t5381 = t5367 + t5372;
  t5388 = t4216*t41*t2685;
  t5391 = -1.*t4189*t453;
  t5392 = t5388 + t5391;
  t5395 = t2409*t5381;
  t5398 = t5392*t2530;
  t5402 = t5395 + t5398;
  t5484 = t2409*t5392;
  t5539 = -1.*t5381*t2530;
  t5541 = t5484 + t5539;
  t5562 = -1.*t2947*t5402;
  t5570 = t2892*t5541;
  t5575 = t5562 + t5570;
  t5581 = t2892*t5402;
  t5582 = t2947*t5541;
  t5584 = t5581 + t5582;
  t5601 = t3352*t5575;
  t5602 = t3274*t5584;
  t5611 = t5601 + t5602;
  t5636 = t3274*t5575;
  t5640 = -1.*t3352*t5584;
  t5654 = t5636 + t5640;
  t5335 = t650*t5292;
  t5342 = t4216*t262*t1397;
  t5350 = t5335 + t5342;
  t5839 = -1.*t2409*t2947*t5350;
  t5842 = -1.*t2892*t5350*t2530;
  t5844 = t5839 + t5842;
  t5847 = t2892*t2409*t5350;
  t5850 = -1.*t2947*t5350*t2530;
  t5854 = t5847 + t5850;
  t5885 = t3352*t5844;
  t5888 = t3274*t5854;
  t5892 = t5885 + t5888;
  t5896 = t3274*t5844;
  t5900 = -1.*t3352*t5854;
  t5915 = t5896 + t5900;
  t56 = -0.049*t41;
  t608 = 0.135*t262*t453;
  t1575 = -1.*t262*t453*t1519;
  t1976 = -1.*t41*t1724;
  t2166 = -0.1305*t2138;
  t2663 = -1.*t2397*t2616;
  t2873 = -1.*t2685*t262*t2855;
  t3127 = -1.*t3029*t3065;
  t3231 = -1.*t3157*t3205;
  t3572 = -1.*t3408*t3553;
  t3682 = -1.*t3604*t3646;
  t3944 = -1.*t3867*t3922;
  t4040 = -1.*t4010*t4032;
  t4158 = 1.11344*t4072;
  t4181 = 0.02159*t4175;
  t4187 = t56 + t608 + t1575 + t1976 + t2166 + t2663 + t2873 + t3127 + t3231 + t3572 + t3682 + t3944 + t4040 + t4158 + t4181;
  t5010 = 0.049*t41;
  t5014 = -0.135*t262*t453;
  t5064 = t262*t453*t1519;
  t5081 = t41*t1724;
  t5089 = 0.1305*t2138;
  t5092 = t2397*t2616;
  t5106 = t2685*t262*t2855;
  t5125 = t3029*t3065;
  t5137 = t3157*t3205;
  t5158 = t3408*t3553;
  t5162 = t3604*t3646;
  t5186 = t3867*t3922;
  t5198 = t4010*t4032;
  t5213 = -1.11344*t4072;
  t5234 = -0.02159*t4175;
  t5254 = t5010 + t5014 + t5064 + t5081 + t5089 + t5092 + t5106 + t5125 + t5137 + t5158 + t5162 + t5186 + t5198 + t5213 + t5234;
  t5261 = Power(t5254,2);
  t5264 = 0.049*t4216*t262;
  t5298 = 0.135*t5292;
  t5300 = -1.*t5292*t1519;
  t5315 = t4216*t262*t1724;
  t5366 = -0.1305*t5350;
  t5384 = -1.*t5381*t2616;
  t5393 = -1.*t5392*t2855;
  t5440 = -1.*t3029*t5402;
  t5551 = -1.*t3157*t5541;
  t5580 = -1.*t3408*t5575;
  t5587 = -1.*t3604*t5584;
  t5621 = -1.*t3867*t5611;
  t5675 = -1.*t4010*t5654;
  t5682 = -1.*t3820*t5611;
  t5688 = t3690*t5654;
  t5689 = t5682 + t5688;
  t5695 = 1.11344*t5689;
  t5702 = t3690*t5611;
  t5704 = t3820*t5654;
  t5711 = t5702 + t5704;
  t5722 = 0.02159*t5711;
  t5734 = t5264 + t5298 + t5300 + t5315 + t5366 + t5384 + t5393 + t5440 + t5551 + t5580 + t5587 + t5621 + t5675 + t5695 + t5722;
  t5739 = Power(t5734,2);
  t5746 = t5261 + t5739;
  t5748 = 1/t5746;
  t5762 = 0.135*t650;
  t5764 = -0.049*t1397;
  t5776 = t5762 + t5764;
  t5780 = 0.049*t650;
  t5788 = t5780 + t1655;
  t6046 = -1.*t2409*t2947*t2138;
  t6053 = -1.*t2892*t2138*t2530;
  t6058 = t6046 + t6053;
  t6064 = t2892*t2409*t2138;
  t6069 = -1.*t2947*t2138*t2530;
  t6075 = t6064 + t6069;
  t6083 = t3352*t6058;
  t6090 = t3274*t6075;
  t6092 = t6083 + t6090;
  t6105 = t3274*t6058;
  t6107 = -1.*t3352*t6075;
  t6108 = t6105 + t6107;
  t6168 = -1.*t2685*t4189;
  t6175 = -1.*t4216*t41*t453;
  t6178 = t6168 + t6175;
  t6186 = t2409*t5392*t1397;
  t6187 = t6178*t2530;
  t6189 = t6186 + t6187;
  t6192 = t2409*t6178;
  t6195 = -1.*t5392*t1397*t2530;
  t6196 = t6192 + t6195;
  t6198 = -1.*t2947*t6189;
  t6206 = t2892*t6196;
  t6208 = t6198 + t6206;
  t6219 = t2892*t6189;
  t6222 = t2947*t6196;
  t6224 = t6219 + t6222;
  t6229 = t3352*t6208;
  t6232 = t3274*t6224;
  t6236 = t6229 + t6232;
  t6238 = t3274*t6208;
  t6239 = -1.*t3352*t6224;
  t6240 = t6238 + t6239;
  t6270 = t2685*t2409*t262*t1397;
  t6271 = -1.*t262*t453*t2530;
  t6272 = t6270 + t6271;
  t6274 = -1.*t2409*t262*t453;
  t6275 = -1.*t2685*t262*t1397*t2530;
  t6280 = t6274 + t6275;
  t6287 = -1.*t2947*t6272;
  t6289 = t2892*t6280;
  t6302 = t6287 + t6289;
  t6312 = t2892*t6272;
  t6314 = t2947*t6280;
  t6317 = t6312 + t6314;
  t6319 = t3352*t6302;
  t6320 = t3274*t6317;
  t6321 = t6319 + t6320;
  t6325 = t3274*t6302;
  t6326 = -1.*t3352*t6317;
  t6328 = t6325 + t6326;
  t6400 = -1.*t4216*t41*t650;
  t6404 = -1.*t4216*t262*t453*t1397;
  t6422 = t6400 + t6404;
  t6436 = t2409*t6422;
  t6446 = -1.*t4216*t2685*t262*t2530;
  t6450 = t6436 + t6446;
  t6455 = -1.*t4216*t2685*t2409*t262;
  t6471 = -1.*t6422*t2530;
  t6472 = t6455 + t6471;
  t6475 = -1.*t2947*t6450;
  t6477 = t2892*t6472;
  t6481 = t6475 + t6477;
  t6483 = t2892*t6450;
  t6485 = t2947*t6472;
  t6487 = t6483 + t6485;
  t6493 = t3352*t6481;
  t6495 = t3274*t6487;
  t6498 = t6493 + t6495;
  t6513 = t3274*t6481;
  t6516 = -1.*t3352*t6487;
  t6517 = t6513 + t6516;
  t6571 = -1.*t650*t262;
  t6572 = t41*t453*t1397;
  t6573 = t6571 + t6572;
  t6577 = t2409*t6573;
  t6578 = t41*t2685*t2530;
  t6579 = t6577 + t6578;
  t6591 = t41*t2685*t2409;
  t6592 = -1.*t6573*t2530;
  t6593 = t6591 + t6592;
  t6595 = -1.*t2947*t6579;
  t6597 = t2892*t6593;
  t6598 = t6595 + t6597;
  t6601 = t2892*t6579;
  t6602 = t2947*t6593;
  t6603 = t6601 + t6602;
  t6607 = t3352*t6598;
  t6612 = t3274*t6603;
  t6614 = t6607 + t6612;
  t6618 = t3274*t6598;
  t6619 = -1.*t3352*t6603;
  t6620 = t6618 + t6619;
  t6658 = -1.*t2409*t5381;
  t6659 = -1.*t5392*t2530;
  t6669 = t6658 + t6659;
  t6677 = t2947*t6669;
  t6686 = t6677 + t5570;
  t6697 = t2892*t6669;
  t6700 = -1.*t2947*t5541;
  t6701 = t6697 + t6700;
  t6707 = -1.*t3352*t6686;
  t6710 = t3274*t6701;
  t6711 = t6707 + t6710;
  t6715 = t3274*t6686;
  t6716 = t3352*t6701;
  t6721 = t6715 + t6716;
  t6640 = 0.049*t2409;
  t6643 = t6640 + t2609;
  t6645 = -0.09*t2409;
  t6648 = -0.049*t2530;
  t6651 = t6645 + t6648;
  t6771 = -1.*t2409*t2397;
  t6772 = -1.*t2685*t262*t2530;
  t6776 = t6771 + t6772;
  t6781 = t2947*t6776;
  t6783 = t6781 + t3479;
  t6785 = t2892*t6776;
  t6786 = -1.*t2947*t3205;
  t6787 = t6785 + t6786;
  t6789 = -1.*t3352*t6783;
  t6790 = t3274*t6787;
  t6791 = t6789 + t6790;
  t6794 = t3274*t6783;
  t6795 = t3352*t6787;
  t6811 = t6794 + t6795;
  t6844 = -1.11344*t3690;
  t6847 = -0.02159*t3820;
  t6848 = t6844 + t6847;
  t6853 = 0.02159*t3690;
  t6855 = t6853 + t3859;
  t6909 = -1.*t2892*t3065;
  t6910 = t6909 + t6786;
  t6916 = t3274*t6910;
  t6917 = t6916 + t3912;
  t6919 = t3352*t6910;
  t6921 = t3352*t3646;
  t6922 = t6919 + t6921;
  t6893 = -0.21*t2892;
  t6894 = -0.049*t2947;
  t6895 = t6893 + t6894;
  t6897 = 0.049*t2892;
  t6898 = t6897 + t2996;
  t6901 = 0.01841*t3274;
  t6902 = 0.70544*t3352;
  t6904 = t6901 + t6902;
  t6912 = 0.70544*t3274;
  t6914 = t6912 + t3356;
  t6949 = -1.*t2892*t5402;
  t6950 = t6949 + t6700;
  t6953 = t3274*t6950;
  t6956 = t6953 + t5602;
  t6958 = t3352*t6950;
  t6959 = t3352*t5584;
  t6961 = t6958 + t6959;
  p_output1[0]=t4187*t5748*(-0.049*t262*t4189 - 1.*t1724*t262*t4189 + 0.135*t4232 - 1.*t1519*t4232 - 1.*t2616*t4320 - 1.*t2855*t4392 - 1.*t3029*t4445 - 1.*t3157*t4503 - 1.*t3408*t4587 - 1.*t3604*t4747 - 1.*t3867*t4803 - 1.*t4010*t4857 + 1.11344*(-1.*t3820*t4803 + t3690*t4857) + 0.02159*(t3690*t4803 + t3820*t4857) - 0.1305*(-1.*t1397*t262*t4189 + t4232*t650))*var2[3] + (t4187*t5748*(t262*t2685*t2855*t4216 + 0.049*t41*t4216 + t1724*t41*t4216 - 0.135*t262*t4216*t453 + t1519*t262*t4216*t453 - 1.*t2616*t6422 - 1.*t3029*t6450 - 1.*t3157*t6472 - 1.*t3408*t6481 - 1.*t3604*t6487 - 1.*t3867*t6498 - 0.1305*(t1397*t41*t4216 - 1.*t262*t4216*t453*t650) - 1.*t4010*t6517 + 1.11344*(-1.*t3820*t6498 + t3690*t6517) + 0.02159*(t3690*t6498 + t3820*t6517)) + t5734*t5748*(-0.049*t262 - 1.*t1724*t262 + t2685*t2855*t41 - 0.135*t41*t453 + t1519*t41*t453 + 0.1305*(t1397*t262 + t41*t453*t650) + t2616*t6573 + t3029*t6579 + t3157*t6593 + t3408*t6598 + t3604*t6603 + t3867*t6614 + t4010*t6620 - 1.11344*(-1.*t3820*t6614 + t3690*t6620) - 0.02159*(t3690*t6614 + t3820*t6620)))*var2[4] + (t5734*t5748*(-0.135*t262*t2685 + t1519*t262*t2685 + t1397*t2616*t262*t2685 - 1.*t262*t2855*t453 + t3029*t6272 + t3157*t6280 + t3408*t6302 + t3604*t6317 + t3867*t6321 + t4010*t6328 - 1.11344*(-1.*t3820*t6321 + t3690*t6328) - 0.02159*(t3690*t6321 + t3820*t6328) + 0.1305*t262*t2685*t650) + t4187*t5748*(0.135*t5392 - 1.*t1519*t5392 - 1.*t1397*t2616*t5392 - 1.*t2855*t6178 - 1.*t3029*t6189 - 1.*t3157*t6196 - 1.*t3408*t6208 - 1.*t3604*t6224 - 1.*t3867*t6236 - 1.*t4010*t6240 + 1.11344*(-1.*t3820*t6236 + t3690*t6240) + 0.02159*(t3690*t6236 + t3820*t6240) - 0.1305*t5392*t650))*var2[6] + (t5734*t5748*(t2138*t2616 + t2138*t2409*t3029 - 1.*t2138*t2530*t3157 + t41*t5776 + t262*t453*t5788 + t3408*t6058 + t3604*t6075 + t3867*t6092 + t4010*t6108 - 1.11344*(-1.*t3820*t6092 + t3690*t6108) - 0.02159*(t3690*t6092 + t3820*t6108) + 0.1305*(-1.*t1397*t262*t453 - 1.*t41*t650)) + t4187*t5748*(-1.*t2616*t5350 - 1.*t2409*t3029*t5350 + t2530*t3157*t5350 + t262*t4216*t5776 - 1.*t5292*t5788 - 1.*t3408*t5844 - 1.*t3604*t5854 - 1.*t3867*t5892 - 1.*t4010*t5915 + 1.11344*(-1.*t3820*t5892 + t3690*t5915) + 0.02159*(t3690*t5892 + t3820*t5915) - 0.1305*(-1.*t1397*t5292 + t262*t4216*t650)))*var2[7] + (t4187*t5748*(-1.*t3029*t5541 - 1.*t5392*t6643 - 1.*t5381*t6651 - 1.*t3157*t6669 - 1.*t3604*t6686 - 1.*t3408*t6701 - 1.*t4010*t6711 - 1.*t3867*t6721 + 0.02159*(t3820*t6711 + t3690*t6721) + 1.11344*(t3690*t6711 - 1.*t3820*t6721)) + t5734*t5748*(t3029*t3205 + t262*t2685*t6643 + t2397*t6651 + t3157*t6776 + t3604*t6783 + t3408*t6787 + t4010*t6791 + t3867*t6811 - 0.02159*(t3820*t6791 + t3690*t6811) - 1.11344*(t3690*t6791 - 1.*t3820*t6811)))*var2[8] + (t5734*t5748*(t3553*t3604 + t3065*t6895 + t3205*t6898 + t3553*t6904 + t3408*t6910 + t3646*t6914 + t4010*t6917 + t3867*t6922 - 0.02159*(t3820*t6917 + t3690*t6922) - 1.11344*(t3690*t6917 - 1.*t3820*t6922)) + t4187*t5748*(-1.*t3604*t5575 - 1.*t5402*t6895 - 1.*t5541*t6898 - 1.*t5575*t6904 - 1.*t5584*t6914 - 1.*t3408*t6950 - 1.*t4010*t6956 - 1.*t3867*t6961 + 0.02159*(t3820*t6956 + t3690*t6961) + 1.11344*(t3690*t6956 - 1.*t3820*t6961)))*var2[9] + (t5734*t5748*(-1.11344*(-1.*t3690*t3922 - 1.*t3820*t4032) - 0.02159*t4072 + t3922*t6848 + t4032*t6855) + t4187*t5748*(1.11344*(-1.*t3690*t5611 - 1.*t3820*t5654) + 0.02159*t5689 - 1.*t5611*t6848 - 1.*t5654*t6855))*var2[13];
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

void leftLegPitchVelocity_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}




