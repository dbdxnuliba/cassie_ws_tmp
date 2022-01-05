/*
 * Automatically Generated from Mathematica.
 * Sun 7 Nov 2021 14:28:00 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "Dya_LeftStanceActual.hh"
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
  double t8;
  double t34;
  double t54;
  double t78;
  double t89;
  double t200;
  double t265;
  double t270;
  double t283;
  double t297;
  double t321;
  double t380;
  double t405;
  double t413;
  double t431;
  double t455;
  double t460;
  double t484;
  double t527;
  double t532;
  double t546;
  double t568;
  double t612;
  double t645;
  double t670;
  double t735;
  double t759;
  double t768;
  double t203;
  double t220;
  double t235;
  double t80;
  double t147;
  double t169;
  double t435;
  double t445;
  double t452;
  double t343;
  double t385;
  double t392;
  double t684;
  double t723;
  double t734;
  double t1032;
  double t1078;
  double t1082;
  double t561;
  double t587;
  double t606;
  double t1108;
  double t1137;
  double t1200;
  double t1208;
  double t1220;
  double t27;
  double t180;
  double t202;
  double t253;
  double t432;
  double t492;
  double t682;
  double t803;
  double t808;
  double t810;
  double t832;
  double t845;
  double t851;
  double t854;
  double t882;
  double t920;
  double t921;
  double t929;
  double t932;
  double t943;
  double t1009;
  double t1087;
  double t1092;
  double t1142;
  double t1234;
  double t1249;
  double t1258;
  double t1284;
  double t1292;
  double t1293;
  double t1295;
  double t1299;
  double t1303;
  double t1304;
  double t1351;
  double t1353;
  double t1361;
  double t1370;
  double t1382;
  double t1424;
  double t1486;
  double t1499;
  double t923;
  double t1306;
  double t1317;
  double t1320;
  double t2080;
  double t2138;
  double t2159;
  double t1865;
  double t1876;
  double t1890;
  double t1707;
  double t1792;
  double t1350;
  double t1973;
  double t1974;
  double t2006;
  double t1931;
  double t1953;
  double t1363;
  double t2467;
  double t2496;
  double t2754;
  double t2761;
  double t2637;
  double t2698;
  double t2722;
  double t2905;
  double t2914;
  double t2922;
  double t2923;
  double t2924;
  double t2932;
  double t3026;
  double t3051;
  double t3062;
  double t3072;
  double t3114;
  double t3151;
  double t3212;
  double t3223;
  double t3268;
  double t3457;
  double t3475;
  double t3481;
  double t3530;
  double t3537;
  double t3539;
  double t3544;
  double t3590;
  double t3596;
  double t3608;
  double t3509;
  double t3515;
  double t3516;
  double t2927;
  double t2939;
  double t2946;
  double t2956;
  double t2961;
  double t3018;
  double t3370;
  double t3398;
  double t3448;
  double t3134;
  double t3160;
  double t3165;
  double t3912;
  double t4010;
  double t4031;
  double t3541;
  double t3549;
  double t3554;
  double t3636;
  double t3655;
  double t3670;
  double t4254;
  double t4261;
  double t4274;
  double t4305;
  double t4311;
  double t2908;
  double t2917;
  double t2947;
  double t3023;
  double t3337;
  double t3490;
  double t3585;
  double t3682;
  double t3690;
  double t3712;
  double t3732;
  double t3748;
  double t3751;
  double t3755;
  double t3780;
  double t3786;
  double t3797;
  double t3813;
  double t3815;
  double t3854;
  double t3866;
  double t4216;
  double t4220;
  double t4303;
  double t4312;
  double t4315;
  double t4320;
  double t4348;
  double t4377;
  double t4392;
  double t4443;
  double t4451;
  double t4469;
  double t4470;
  double t4692;
  double t4701;
  double t4706;
  double t4747;
  double t4759;
  double t4813;
  double t4836;
  double t4847;
  double t5148;
  double t5156;
  double t5182;
  double t5213;
  double t5224;
  double t5239;
  double t5246;
  double t5247;
  double t5249;
  double t5253;
  double t5260;
  double t4497;
  double t4516;
  double t4552;
  double t4558;
  double t5272;
  double t5285;
  double t5286;
  double t5288;
  double t5289;
  double t5290;
  double t5297;
  double t4903;
  double t4904;
  double t4913;
  double t5009;
  double t5021;
  double t5079;
  double t5264;
  double t5298;
  double t5300;
  double t5302;
  double t3807;
  double t4481;
  double t4487;
  double t4490;
  double t5541;
  double t5547;
  double t5579;
  double t5396;
  double t5397;
  double t5399;
  double t5410;
  double t5435;
  double t4582;
  double t5485;
  double t5522;
  double t5533;
  double t5471;
  double t5481;
  double t4737;
  double t5716;
  double t5726;
  double t5581;
  double t5582;
  double t5585;
  double t5611;
  double t5620;
  double t5632;
  double t5326;
  double t5333;
  double t5746;
  double t5748;
  double t5758;
  double t5764;
  double t5767;
  double t5770;
  double t5990;
  double t6000;
  double t6028;
  double t6029;
  double t6031;
  double t6055;
  double t6056;
  double t6057;
  double t6037;
  double t6038;
  double t6040;
  t8 = Cos(var1[8]);
  t34 = Cos(var1[9]);
  t54 = -1.*t34;
  t78 = 1. + t54;
  t89 = Sin(var1[9]);
  t200 = Sin(var1[8]);
  t265 = -1.*var1[9];
  t270 = 0.226893 + t265;
  t283 = Cos(t270);
  t297 = -1.*t283;
  t321 = 1. + t297;
  t380 = Sin(t270);
  t405 = -1.*t8*t89;
  t413 = -1.*t34*t200;
  t431 = t405 + t413;
  t455 = t34*t8;
  t460 = -1.*t89*t200;
  t484 = t455 + t460;
  t527 = Cos(var1[13]);
  t532 = -1.*t527;
  t546 = 1. + t532;
  t568 = Sin(var1[13]);
  t612 = t380*t431;
  t645 = t283*t484;
  t670 = t612 + t645;
  t735 = t283*t431;
  t759 = -1.*t380*t484;
  t768 = t735 + t759;
  t203 = -0.21*t78;
  t220 = 0.049*t89;
  t235 = t203 + t220;
  t80 = -0.049*t78;
  t147 = -0.21*t89;
  t169 = t80 + t147;
  t435 = 0.01841*t321;
  t445 = -0.70544*t380;
  t452 = t435 + t445;
  t343 = -0.70544*t321;
  t385 = -0.01841*t380;
  t392 = t343 + t385;
  t684 = -1.11344*t546;
  t723 = 0.02159*t568;
  t734 = t684 + t723;
  t1032 = t8*t89;
  t1078 = t34*t200;
  t1082 = t1032 + t1078;
  t561 = -0.02159*t546;
  t587 = -1.11344*t568;
  t606 = t561 + t587;
  t1108 = -1.*t380*t1082;
  t1137 = t1108 + t645;
  t1200 = t283*t1082;
  t1208 = t380*t484;
  t1220 = t1200 + t1208;
  t27 = 0.049*t8;
  t180 = t8*t169;
  t202 = -0.09*t200;
  t253 = -1.*t235*t200;
  t432 = t392*t431;
  t492 = t452*t484;
  t682 = t606*t670;
  t803 = t734*t768;
  t808 = -1.*t568*t670;
  t810 = t527*t768;
  t832 = t808 + t810;
  t845 = -1.11344*t832;
  t851 = t527*t670;
  t854 = t568*t768;
  t882 = t851 + t854;
  t920 = -0.02159*t882;
  t921 = t27 + t180 + t202 + t253 + t432 + t492 + t682 + t803 + t845 + t920;
  t929 = 0.09*t8;
  t932 = t8*t235;
  t943 = 0.049*t200;
  t1009 = t169*t200;
  t1087 = t452*t1082;
  t1092 = t392*t484;
  t1142 = t734*t1137;
  t1234 = t606*t1220;
  t1249 = t568*t1137;
  t1258 = t527*t1220;
  t1284 = t1249 + t1258;
  t1292 = -0.02159*t1284;
  t1293 = t527*t1137;
  t1295 = -1.*t568*t1220;
  t1299 = t1293 + t1295;
  t1303 = -1.11344*t1299;
  t1304 = t929 + t932 + t943 + t1009 + t1087 + t1092 + t1142 + t1234 + t1292 + t1303;
  t1351 = -1.*t34*t8;
  t1353 = t89*t200;
  t1361 = t1351 + t1353;
  t1370 = -1.*t380*t431;
  t1382 = t283*t1361;
  t1424 = t1370 + t1382;
  t1486 = t380*t1361;
  t1499 = t735 + t1486;
  t923 = Power(t921,2);
  t1306 = Power(t1304,2);
  t1317 = 0.00002025 + t923 + t1306;
  t1320 = 1/Sqrt(t1317);
  t2080 = t735 + t1200;
  t2138 = t380*t1082;
  t2159 = t612 + t2138;
  t1865 = -0.21*t34;
  t1876 = -0.049*t89;
  t1890 = t1865 + t1876;
  t1707 = 0.049*t34;
  t1792 = t1707 + t147;
  t1350 = t452*t431;
  t1973 = 0.01841*t283;
  t1974 = 0.70544*t380;
  t2006 = t1973 + t1974;
  t1931 = 0.70544*t283;
  t1953 = t1931 + t385;
  t1363 = t392*t1361;
  t2467 = t645 + t1382;
  t2496 = t1208 + t1486;
  t2754 = 0.02159*t527;
  t2761 = t2754 + t587;
  t2637 = -1.11344*t527;
  t2698 = -0.02159*t568;
  t2722 = t2637 + t2698;
  t2905 = Cos(var1[16]);
  t2914 = Sin(var1[16]);
  t2922 = Cos(var1[17]);
  t2923 = -1.*t2922;
  t2924 = 1. + t2923;
  t2932 = Sin(var1[17]);
  t3026 = -1.*var1[17];
  t3051 = 0.226893 + t3026;
  t3062 = Cos(t3051);
  t3072 = -1.*t3062;
  t3114 = 1. + t3072;
  t3151 = Sin(t3051);
  t3212 = -1.*t2922*t2914;
  t3223 = -1.*t2905*t2932;
  t3268 = t3212 + t3223;
  t3457 = t2905*t2922;
  t3475 = -1.*t2914*t2932;
  t3481 = t3457 + t3475;
  t3530 = Cos(var1[21]);
  t3537 = -1.*t3530;
  t3539 = 1. + t3537;
  t3544 = Sin(var1[21]);
  t3590 = t3062*t3268;
  t3596 = -1.*t3151*t3481;
  t3608 = t3590 + t3596;
  t3509 = t3151*t3268;
  t3515 = t3062*t3481;
  t3516 = t3509 + t3515;
  t2927 = -0.049*t2924;
  t2939 = -0.21*t2932;
  t2946 = t2927 + t2939;
  t2956 = -0.21*t2924;
  t2961 = 0.049*t2932;
  t3018 = t2956 + t2961;
  t3370 = 0.01841*t3114;
  t3398 = -0.70544*t3151;
  t3448 = t3370 + t3398;
  t3134 = -0.70544*t3114;
  t3160 = -0.01841*t3151;
  t3165 = t3134 + t3160;
  t3912 = t2922*t2914;
  t4010 = t2905*t2932;
  t4031 = t3912 + t4010;
  t3541 = -0.02159*t3539;
  t3549 = -1.11344*t3544;
  t3554 = t3541 + t3549;
  t3636 = -1.11344*t3539;
  t3655 = 0.02159*t3544;
  t3670 = t3636 + t3655;
  t4254 = t3062*t4031;
  t4261 = t3151*t3481;
  t4274 = t4254 + t4261;
  t4305 = -1.*t3151*t4031;
  t4311 = t4305 + t3515;
  t2908 = 0.049*t2905;
  t2917 = -0.09*t2914;
  t2947 = t2905*t2946;
  t3023 = -1.*t2914*t3018;
  t3337 = t3165*t3268;
  t3490 = t3448*t3481;
  t3585 = t3516*t3554;
  t3682 = t3608*t3670;
  t3690 = t3530*t3608;
  t3712 = -1.*t3516*t3544;
  t3732 = t3690 + t3712;
  t3748 = -1.11344*t3732;
  t3751 = t3530*t3516;
  t3755 = t3608*t3544;
  t3780 = t3751 + t3755;
  t3786 = -0.02159*t3780;
  t3797 = t2908 + t2917 + t2947 + t3023 + t3337 + t3490 + t3585 + t3682 + t3748 + t3786;
  t3813 = 0.09*t2905;
  t3815 = 0.049*t2914;
  t3854 = t2914*t2946;
  t3866 = t2905*t3018;
  t4216 = t3448*t4031;
  t4220 = t3165*t3481;
  t4303 = t4274*t3554;
  t4312 = t4311*t3670;
  t4315 = t3530*t4274;
  t4320 = t4311*t3544;
  t4348 = t4315 + t4320;
  t4377 = -0.02159*t4348;
  t4392 = t3530*t4311;
  t4443 = -1.*t4274*t3544;
  t4451 = t4392 + t4443;
  t4469 = -1.11344*t4451;
  t4470 = t3813 + t3815 + t3854 + t3866 + t4216 + t4220 + t4303 + t4312 + t4377 + t4469;
  t4692 = -1.*t2905*t2922;
  t4701 = t2914*t2932;
  t4706 = t4692 + t4701;
  t4747 = t3151*t4706;
  t4759 = t3590 + t4747;
  t4813 = -1.*t3151*t3268;
  t4836 = t3062*t4706;
  t4847 = t4813 + t4836;
  t5148 = -0.049*t2905;
  t5156 = 0.09*t2914;
  t5182 = -1.*t2905*t2946;
  t5213 = t2914*t3018;
  t5224 = -1.*t3165*t3268;
  t5239 = -1.*t3448*t3481;
  t5246 = -1.*t3516*t3554;
  t5247 = -1.*t3608*t3670;
  t5249 = 1.11344*t3732;
  t5253 = 0.02159*t3780;
  t5260 = t5148 + t5156 + t5182 + t5213 + t5224 + t5239 + t5246 + t5247 + t5249 + t5253;
  t4497 = -0.09*t2905;
  t4516 = -0.049*t2914;
  t4552 = -1.*t2914*t2946;
  t4558 = -1.*t2905*t3018;
  t5272 = -1.*t3448*t4031;
  t5285 = -1.*t3165*t3481;
  t5286 = -1.*t4274*t3554;
  t5288 = -1.*t4311*t3670;
  t5289 = 0.02159*t4348;
  t5290 = 1.11344*t4451;
  t5297 = t4497 + t4516 + t4552 + t4558 + t5272 + t5285 + t5286 + t5288 + t5289 + t5290;
  t4903 = t3530*t4759;
  t4904 = t4847*t3544;
  t4913 = t4903 + t4904;
  t5009 = t3530*t4847;
  t5021 = -1.*t4759*t3544;
  t5079 = t5009 + t5021;
  t5264 = Power(t5260,2);
  t5298 = Power(t5297,2);
  t5300 = t5264 + t5298;
  t5302 = 1/t5300;
  t3807 = Power(t3797,2);
  t4481 = Power(t4470,2);
  t4487 = 0.00002025 + t3807 + t4481;
  t4490 = 1/Sqrt(t4487);
  t5541 = t3151*t4031;
  t5547 = t3509 + t5541;
  t5579 = t3590 + t4254;
  t5396 = 0.049*t2922;
  t5397 = t5396 + t2939;
  t5399 = -0.21*t2922;
  t5410 = -0.049*t2932;
  t5435 = t5399 + t5410;
  t4582 = t3448*t3268;
  t5485 = 0.01841*t3062;
  t5522 = 0.70544*t3151;
  t5533 = t5485 + t5522;
  t5471 = 0.70544*t3062;
  t5481 = t5471 + t3160;
  t4737 = t3165*t4706;
  t5716 = t4261 + t4747;
  t5726 = t3515 + t4836;
  t5581 = t3530*t5547;
  t5582 = t5579*t3544;
  t5585 = t5581 + t5582;
  t5611 = t3530*t5579;
  t5620 = -1.*t5547*t3544;
  t5632 = t5611 + t5620;
  t5326 = -1.*t3448*t3268;
  t5333 = -1.*t3165*t4706;
  t5746 = t3530*t5716;
  t5748 = t5726*t3544;
  t5758 = t5746 + t5748;
  t5764 = t3530*t5726;
  t5767 = -1.*t5716*t3544;
  t5770 = t5764 + t5767;
  t5990 = 0.02159*t3530;
  t6000 = t5990 + t3549;
  t6028 = -1.11344*t3530;
  t6029 = -0.02159*t3544;
  t6031 = t6028 + t6029;
  t6055 = -1.*t3530*t4274;
  t6056 = -1.*t4311*t3544;
  t6057 = t6055 + t6056;
  t6037 = -1.*t3530*t3516;
  t6038 = -1.*t3608*t3544;
  t6040 = t6037 + t6038;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=1.;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=1.;
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
  p_output1[60]=0;
  p_output1[61]=0;
  p_output1[62]=0;
  p_output1[63]=0;
  p_output1[64]=0;
  p_output1[65]=1.;
  p_output1[66]=0;
  p_output1[67]=0;
  p_output1[68]=0;
  p_output1[69]=0;
  p_output1[70]=0;
  p_output1[71]=0;
  p_output1[72]=0;
  p_output1[73]=0;
  p_output1[74]=0;
  p_output1[75]=0.5*t1320*(2.*t1304*t921 + 2.*(t1350 + t1363 - 0.049*t200 - 1.*t169*t200 - 0.02159*(t1499*t527 + t1424*t568) - 1.11344*(t1424*t527 - 1.*t1499*t568) + t1499*t606 + t1424*t734 - 0.09*t8 - 1.*t235*t8)*t921);
  p_output1[76]=0;
  p_output1[77]=0;
  p_output1[78]=0;
  p_output1[79]=0;
  p_output1[80]=0;
  p_output1[81]=0;
  p_output1[82]=0;
  p_output1[83]=0;
  p_output1[84]=0.5*t1320*(2.*t1304*(t1082*t1953 + t1890*t200 + t432 + t2006*t484 + t492 - 0.02159*(t2159*t527 + t2080*t568) - 1.11344*(t2080*t527 - 1.*t2159*t568) + t2159*t606 + t2080*t734 + t1792*t8) + 2.*(t1350 + t1363 - 1.*t1792*t200 + t2006*t431 + t1953*t484 - 0.02159*(t2496*t527 + t2467*t568) - 1.11344*(t2467*t527 - 1.*t2496*t568) + t2496*t606 + t2467*t734 + t1890*t8)*t921);
  p_output1[85]=0;
  p_output1[86]=0;
  p_output1[87]=0;
  p_output1[88]=0;
  p_output1[89]=0;
  p_output1[90]=0;
  p_output1[91]=0;
  p_output1[92]=0;
  p_output1[93]=0;
  p_output1[94]=0;
  p_output1[95]=0;
  p_output1[96]=0;
  p_output1[97]=0;
  p_output1[98]=0;
  p_output1[99]=0;
  p_output1[100]=0;
  p_output1[101]=0;
  p_output1[102]=0;
  p_output1[103]=0;
  p_output1[104]=0;
  p_output1[105]=0;
  p_output1[106]=0;
  p_output1[107]=0;
  p_output1[108]=0;
  p_output1[109]=0;
  p_output1[110]=0;
  p_output1[111]=0;
  p_output1[112]=0;
  p_output1[113]=0;
  p_output1[114]=0;
  p_output1[115]=0;
  p_output1[116]=0;
  p_output1[117]=0;
  p_output1[118]=0;
  p_output1[119]=0;
  p_output1[120]=0.5*t1320*(2.*t1304*(-0.02159*t1299 + t1220*t2722 + t1137*t2761 - 1.11344*(-1.*t1220*t527 - 1.*t1137*t568)) + 2.*(t2722*t670 + t2761*t768 - 1.11344*(-1.*t527*t670 - 1.*t568*t768) - 0.02159*t832)*t921);
  p_output1[121]=0;
  p_output1[122]=0;
  p_output1[123]=0;
  p_output1[124]=0;
  p_output1[125]=0;
  p_output1[126]=0;
  p_output1[127]=0;
  p_output1[128]=0;
  p_output1[129]=0;
  p_output1[130]=0;
  p_output1[131]=0;
  p_output1[132]=1.;
  p_output1[133]=0;
  p_output1[134]=0;
  p_output1[135]=0;
  p_output1[136]=0;
  p_output1[137]=0;
  p_output1[138]=0;
  p_output1[139]=0;
  p_output1[140]=0;
  p_output1[141]=0;
  p_output1[142]=1.;
  p_output1[143]=0;
  p_output1[144]=0;
  p_output1[145]=0;
  p_output1[146]=0;
  p_output1[147]=0;
  p_output1[148]=0.5*t4490*(2.*t3797*t4470 + 2.*t3797*(t4497 + t4516 + t4552 + t4558 + t4582 + t4737 + t3554*t4759 + t3670*t4847 - 0.02159*t4913 - 1.11344*t5079));
  p_output1[149]=t3797*t5260*t5302 + t5297*t5302*(t3813 + t3815 + t3854 + t3866 - 1.*t3554*t4759 - 1.*t3670*t4847 + 0.02159*t4913 + 1.11344*t5079 + t5326 + t5333);
  p_output1[150]=0;
  p_output1[151]=0;
  p_output1[152]=0;
  p_output1[153]=0;
  p_output1[154]=0;
  p_output1[155]=0;
  p_output1[156]=0;
  p_output1[157]=0.5*t4490*(2.*t4470*(t3337 + t3490 + t2905*t5397 + t2914*t5435 + t4031*t5481 + t3481*t5533 + t3554*t5547 + t3670*t5579 - 0.02159*t5585 - 1.11344*t5632) + 2.*t3797*(t4582 + t4737 - 1.*t2914*t5397 + t2905*t5435 + t3481*t5481 + t3268*t5533 + t3554*t5716 + t3670*t5726 - 0.02159*t5758 - 1.11344*t5770));
  p_output1[158]=t3797*t5302*(t5224 + t5239 - 1.*t2905*t5397 - 1.*t2914*t5435 - 1.*t4031*t5481 - 1.*t3481*t5533 - 1.*t3554*t5547 - 1.*t3670*t5579 + 0.02159*t5585 + 1.11344*t5632) + t5297*t5302*(t5326 + t5333 + t2914*t5397 - 1.*t2905*t5435 - 1.*t3481*t5481 - 1.*t3268*t5533 - 1.*t3554*t5716 - 1.*t3670*t5726 + 0.02159*t5758 + 1.11344*t5770);
  p_output1[159]=0;
  p_output1[160]=0;
  p_output1[161]=0;
  p_output1[162]=0;
  p_output1[163]=0;
  p_output1[164]=0;
  p_output1[165]=0;
  p_output1[166]=0;
  p_output1[167]=0;
  p_output1[168]=0;
  p_output1[169]=0;
  p_output1[170]=0;
  p_output1[171]=0;
  p_output1[172]=0;
  p_output1[173]=0;
  p_output1[174]=0;
  p_output1[175]=0;
  p_output1[176]=0;
  p_output1[177]=0;
  p_output1[178]=0;
  p_output1[179]=0;
  p_output1[180]=0;
  p_output1[181]=0;
  p_output1[182]=0;
  p_output1[183]=0;
  p_output1[184]=0;
  p_output1[185]=0;
  p_output1[186]=0;
  p_output1[187]=0;
  p_output1[188]=0;
  p_output1[189]=0;
  p_output1[190]=0;
  p_output1[191]=0;
  p_output1[192]=0;
  p_output1[193]=0.5*t4490*(2.*t3797*(-0.02159*t3732 + t3608*t6000 + t3516*t6031 - 1.11344*t6040) + 2.*t4470*(-0.02159*t4451 + t4311*t6000 + t4274*t6031 - 1.11344*t6057));
  p_output1[194]=t5297*t5302*(0.02159*t3732 - 1.*t3608*t6000 - 1.*t3516*t6031 + 1.11344*t6040) + t3797*t5302*(0.02159*t4451 - 1.*t4311*t6000 - 1.*t4274*t6031 + 1.11344*t6057);
  p_output1[195]=0;
  p_output1[196]=0;
  p_output1[197]=-1.;
  p_output1[198]=0;
  p_output1[199]=0;
  p_output1[200]=0;
  p_output1[201]=0;
  p_output1[202]=0;
  p_output1[203]=0;
  p_output1[204]=0;
  p_output1[205]=0;
  p_output1[206]=0;
  p_output1[207]=0;
  p_output1[208]=0;
  p_output1[209]=0;
  p_output1[210]=0;
  p_output1[211]=0;
  p_output1[212]=0;
  p_output1[213]=0;
  p_output1[214]=0;
  p_output1[215]=0;
  p_output1[216]=0;
  p_output1[217]=0;
  p_output1[218]=0;
  p_output1[219]=0;
  p_output1[220]=0;
  p_output1[221]=0;
  p_output1[222]=0;
  p_output1[223]=0;
  p_output1[224]=0;
  p_output1[225]=0;
  p_output1[226]=0;
  p_output1[227]=0;
  p_output1[228]=0;
  p_output1[229]=0;
  p_output1[230]=0;
  p_output1[231]=0;
  p_output1[232]=0;
  p_output1[233]=0;
  p_output1[234]=0;
  p_output1[235]=0;
  p_output1[236]=0;
  p_output1[237]=0;
  p_output1[238]=0;
  p_output1[239]=0;
  p_output1[240]=0;
  p_output1[241]=0;
  p_output1[242]=0;
  p_output1[243]=0;
  p_output1[244]=0;
  p_output1[245]=0;
  p_output1[246]=0;
  p_output1[247]=0;
  p_output1[248]=0;
  p_output1[249]=0;
  p_output1[250]=0;
  p_output1[251]=0;
  p_output1[252]=0;
  p_output1[253]=0;
  p_output1[254]=0;
  p_output1[255]=0;
  p_output1[256]=0;
  p_output1[257]=0;
  p_output1[258]=0;
  p_output1[259]=0;
  p_output1[260]=0;
  p_output1[261]=0;
  p_output1[262]=0;
  p_output1[263]=0;
  p_output1[264]=0;
  p_output1[265]=0;
  p_output1[266]=0;
  p_output1[267]=0;
  p_output1[268]=0;
  p_output1[269]=0;
  p_output1[270]=0;
  p_output1[271]=0;
  p_output1[272]=0;
  p_output1[273]=0;
  p_output1[274]=0;
  p_output1[275]=0;
  p_output1[276]=0;
  p_output1[277]=0;
  p_output1[278]=0;
  p_output1[279]=0;
  p_output1[280]=0;
  p_output1[281]=0;
  p_output1[282]=0;
  p_output1[283]=0;
  p_output1[284]=0;
  p_output1[285]=0;
  p_output1[286]=0;
  p_output1[287]=0;
  p_output1[288]=0;
  p_output1[289]=0;
  p_output1[290]=0;
  p_output1[291]=0;
  p_output1[292]=0;
  p_output1[293]=0;
  p_output1[294]=0;
  p_output1[295]=0;
  p_output1[296]=0;
  p_output1[297]=0;
  p_output1[298]=0;
  p_output1[299]=0;
  p_output1[300]=0;
  p_output1[301]=0;
  p_output1[302]=0;
  p_output1[303]=0;
  p_output1[304]=0;
  p_output1[305]=0;
  p_output1[306]=0;
  p_output1[307]=0;
  p_output1[308]=0;
  p_output1[309]=0;
  p_output1[310]=0;
  p_output1[311]=0;
  p_output1[312]=0;
  p_output1[313]=0;
  p_output1[314]=0;
  p_output1[315]=0;
  p_output1[316]=0;
  p_output1[317]=0;
  p_output1[318]=0;
  p_output1[319]=0;
  p_output1[320]=0;
  p_output1[321]=0;
  p_output1[322]=0;
  p_output1[323]=0;
  p_output1[324]=0;
  p_output1[325]=0;
  p_output1[326]=0;
  p_output1[327]=0;
  p_output1[328]=0;
  p_output1[329]=0;
  p_output1[330]=0;
  p_output1[331]=0;
  p_output1[332]=0;
  p_output1[333]=0;
  p_output1[334]=0;
  p_output1[335]=0;
  p_output1[336]=0;
  p_output1[337]=0;
  p_output1[338]=0;
  p_output1[339]=0;
  p_output1[340]=0;
  p_output1[341]=0;
  p_output1[342]=0;
  p_output1[343]=0;
  p_output1[344]=0;
  p_output1[345]=0;
  p_output1[346]=0;
  p_output1[347]=0;
  p_output1[348]=0;
  p_output1[349]=0;
  p_output1[350]=0;
  p_output1[351]=0;
  p_output1[352]=0;
  p_output1[353]=0;
  p_output1[354]=0;
  p_output1[355]=0;
  p_output1[356]=0;
  p_output1[357]=0;
  p_output1[358]=0;
  p_output1[359]=0;
  p_output1[360]=0;
  p_output1[361]=0;
  p_output1[362]=0;
  p_output1[363]=0;
  p_output1[364]=0;
  p_output1[365]=0;
  p_output1[366]=0;
  p_output1[367]=0;
  p_output1[368]=0;
  p_output1[369]=0;
  p_output1[370]=0;
  p_output1[371]=0;
  p_output1[372]=0;
  p_output1[373]=0;
  p_output1[374]=0;
  p_output1[375]=0;
  p_output1[376]=0;
  p_output1[377]=0;
  p_output1[378]=0;
  p_output1[379]=0;
  p_output1[380]=0;
  p_output1[381]=0;
  p_output1[382]=0;
  p_output1[383]=0;
  p_output1[384]=0;
  p_output1[385]=0;
  p_output1[386]=0;
  p_output1[387]=0;
  p_output1[388]=0;
  p_output1[389]=0;
  p_output1[390]=0;
  p_output1[391]=0;
  p_output1[392]=0;
  p_output1[393]=0;
  p_output1[394]=0;
  p_output1[395]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 9, (mwSize) 44, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#endif // MATLAB_MEX_FILE

namespace SymFunction
{

void Dya_LeftStanceActual_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




