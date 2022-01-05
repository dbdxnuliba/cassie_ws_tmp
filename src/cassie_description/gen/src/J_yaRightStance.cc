/*
 * Automatically Generated from Mathematica.
 * Sun 7 Nov 2021 14:27:53 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "J_yaRightStance.hh"
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
  double t192;
  double t288;
  double t315;
  double t345;
  double t471;
  double t521;
  double t673;
  double t713;
  double t724;
  double t725;
  double t755;
  double t779;
  double t882;
  double t894;
  double t899;
  double t1051;
  double t1054;
  double t1058;
  double t1084;
  double t1095;
  double t1147;
  double t1210;
  double t1253;
  double t1275;
  double t1287;
  double t1515;
  double t1560;
  double t1582;
  double t534;
  double t607;
  double t651;
  double t425;
  double t473;
  double t486;
  double t928;
  double t940;
  double t981;
  double t767;
  double t837;
  double t838;
  double t1434;
  double t1490;
  double t1494;
  double t1762;
  double t1768;
  double t1777;
  double t1152;
  double t1235;
  double t1243;
  double t1813;
  double t1820;
  double t1845;
  double t1863;
  double t1868;
  double t247;
  double t511;
  double t528;
  double t672;
  double t916;
  double t1073;
  double t1367;
  double t1594;
  double t1599;
  double t1618;
  double t1628;
  double t1635;
  double t1701;
  double t1721;
  double t1727;
  double t1729;
  double t1733;
  double t1742;
  double t1754;
  double t1759;
  double t1760;
  double t1799;
  double t1801;
  double t1842;
  double t1875;
  double t1883;
  double t1886;
  double t1888;
  double t1901;
  double t1908;
  double t1914;
  double t1938;
  double t1991;
  double t1995;
  double t2093;
  double t2095;
  double t2097;
  double t2109;
  double t2110;
  double t2111;
  double t2117;
  double t2118;
  double t2213;
  double t2214;
  double t2227;
  double t2229;
  double t2238;
  double t2249;
  double t2253;
  double t2255;
  double t2259;
  double t2282;
  double t2301;
  double t2060;
  double t2068;
  double t2079;
  double t2084;
  double t2318;
  double t2326;
  double t2334;
  double t2337;
  double t2340;
  double t2346;
  double t2350;
  double t2127;
  double t2128;
  double t2133;
  double t2144;
  double t2162;
  double t2171;
  double t2306;
  double t2354;
  double t2356;
  double t2362;
  double t1741;
  double t2003;
  double t2005;
  double t2030;
  double t2623;
  double t2627;
  double t2629;
  double t2513;
  double t2518;
  double t2519;
  double t2433;
  double t2446;
  double t2088;
  double t2582;
  double t2586;
  double t2594;
  double t2532;
  double t2559;
  double t2104;
  double t2777;
  double t2784;
  double t2649;
  double t2651;
  double t2659;
  double t2670;
  double t2675;
  double t2694;
  double t2365;
  double t2369;
  double t2818;
  double t2823;
  double t2824;
  double t2833;
  double t2844;
  double t2845;
  double t3044;
  double t3053;
  double t3030;
  double t3037;
  double t3039;
  double t3071;
  double t3081;
  double t3082;
  double t3056;
  double t3057;
  double t3059;
  double t3147;
  double t3149;
  double t3152;
  double t3156;
  double t3161;
  double t3186;
  double t3226;
  double t3229;
  double t3232;
  double t3237;
  double t3239;
  double t3247;
  double t3256;
  double t3257;
  double t3260;
  double t3275;
  double t3277;
  double t3278;
  double t3295;
  double t3296;
  double t3300;
  double t3305;
  double t3311;
  double t3315;
  double t3318;
  double t3284;
  double t3285;
  double t3291;
  double t3173;
  double t3188;
  double t3197;
  double t3213;
  double t3217;
  double t3218;
  double t3265;
  double t3269;
  double t3273;
  double t3241;
  double t3248;
  double t3249;
  double t3409;
  double t3413;
  double t3414;
  double t3302;
  double t3306;
  double t3307;
  double t3323;
  double t3326;
  double t3329;
  double t3419;
  double t3421;
  double t3425;
  double t3427;
  double t3428;
  double t3148;
  double t3150;
  double t3206;
  double t3225;
  double t3262;
  double t3281;
  double t3310;
  double t3330;
  double t3332;
  double t3334;
  double t3335;
  double t3372;
  double t3377;
  double t3378;
  double t3380;
  double t3385;
  double t3389;
  double t3397;
  double t3399;
  double t3401;
  double t3404;
  double t3415;
  double t3418;
  double t3426;
  double t3430;
  double t3431;
  double t3432;
  double t3434;
  double t3435;
  double t3438;
  double t3440;
  double t3441;
  double t3443;
  double t3445;
  double t3478;
  double t3480;
  double t3483;
  double t3489;
  double t3492;
  double t3494;
  double t3495;
  double t3497;
  double t3393;
  double t3446;
  double t3450;
  double t3451;
  double t3601;
  double t3606;
  double t3610;
  double t3536;
  double t3547;
  double t3552;
  double t3558;
  double t3559;
  double t3472;
  double t3582;
  double t3584;
  double t3591;
  double t3566;
  double t3567;
  double t3485;
  double t3649;
  double t3652;
  double t3683;
  double t3684;
  double t3687;
  double t3688;
  double t3699;
  t192 = Cos(var1[8]);
  t288 = Cos(var1[9]);
  t315 = -1.*t288;
  t345 = 1. + t315;
  t471 = Sin(var1[9]);
  t521 = Sin(var1[8]);
  t673 = -1.*var1[9];
  t713 = 0.226893 + t673;
  t724 = Cos(t713);
  t725 = -1.*t724;
  t755 = 1. + t725;
  t779 = Sin(t713);
  t882 = -1.*t192*t471;
  t894 = -1.*t288*t521;
  t899 = t882 + t894;
  t1051 = t288*t192;
  t1054 = -1.*t471*t521;
  t1058 = t1051 + t1054;
  t1084 = Cos(var1[13]);
  t1095 = -1.*t1084;
  t1147 = 1. + t1095;
  t1210 = Sin(var1[13]);
  t1253 = t779*t899;
  t1275 = t724*t1058;
  t1287 = t1253 + t1275;
  t1515 = t724*t899;
  t1560 = -1.*t779*t1058;
  t1582 = t1515 + t1560;
  t534 = -0.21*t345;
  t607 = 0.049*t471;
  t651 = t534 + t607;
  t425 = -0.049*t345;
  t473 = -0.21*t471;
  t486 = t425 + t473;
  t928 = 0.01841*t755;
  t940 = -0.70544*t779;
  t981 = t928 + t940;
  t767 = -0.70544*t755;
  t837 = -0.01841*t779;
  t838 = t767 + t837;
  t1434 = -1.11344*t1147;
  t1490 = 0.02159*t1210;
  t1494 = t1434 + t1490;
  t1762 = t192*t471;
  t1768 = t288*t521;
  t1777 = t1762 + t1768;
  t1152 = -0.02159*t1147;
  t1235 = -1.11344*t1210;
  t1243 = t1152 + t1235;
  t1813 = -1.*t779*t1777;
  t1820 = t1813 + t1275;
  t1845 = t724*t1777;
  t1863 = t779*t1058;
  t1868 = t1845 + t1863;
  t247 = 0.049*t192;
  t511 = t192*t486;
  t528 = -0.09*t521;
  t672 = -1.*t651*t521;
  t916 = t838*t899;
  t1073 = t981*t1058;
  t1367 = t1243*t1287;
  t1594 = t1494*t1582;
  t1599 = -1.*t1210*t1287;
  t1618 = t1084*t1582;
  t1628 = t1599 + t1618;
  t1635 = -1.11344*t1628;
  t1701 = t1084*t1287;
  t1721 = t1210*t1582;
  t1727 = t1701 + t1721;
  t1729 = -0.02159*t1727;
  t1733 = t247 + t511 + t528 + t672 + t916 + t1073 + t1367 + t1594 + t1635 + t1729;
  t1742 = 0.09*t192;
  t1754 = t192*t651;
  t1759 = 0.049*t521;
  t1760 = t486*t521;
  t1799 = t981*t1777;
  t1801 = t838*t1058;
  t1842 = t1494*t1820;
  t1875 = t1243*t1868;
  t1883 = t1210*t1820;
  t1886 = t1084*t1868;
  t1888 = t1883 + t1886;
  t1901 = -0.02159*t1888;
  t1908 = t1084*t1820;
  t1914 = -1.*t1210*t1868;
  t1938 = t1908 + t1914;
  t1991 = -1.11344*t1938;
  t1995 = t1742 + t1754 + t1759 + t1760 + t1799 + t1801 + t1842 + t1875 + t1901 + t1991;
  t2093 = -1.*t288*t192;
  t2095 = t471*t521;
  t2097 = t2093 + t2095;
  t2109 = -1.*t779*t899;
  t2110 = t724*t2097;
  t2111 = t2109 + t2110;
  t2117 = t779*t2097;
  t2118 = t1515 + t2117;
  t2213 = -0.049*t192;
  t2214 = -1.*t192*t486;
  t2227 = 0.09*t521;
  t2229 = t651*t521;
  t2238 = -1.*t838*t899;
  t2249 = -1.*t981*t1058;
  t2253 = -1.*t1243*t1287;
  t2255 = -1.*t1494*t1582;
  t2259 = 1.11344*t1628;
  t2282 = 0.02159*t1727;
  t2301 = t2213 + t2214 + t2227 + t2229 + t2238 + t2249 + t2253 + t2255 + t2259 + t2282;
  t2060 = -0.09*t192;
  t2068 = -1.*t192*t651;
  t2079 = -0.049*t521;
  t2084 = -1.*t486*t521;
  t2318 = -1.*t981*t1777;
  t2326 = -1.*t838*t1058;
  t2334 = -1.*t1494*t1820;
  t2337 = -1.*t1243*t1868;
  t2340 = 0.02159*t1888;
  t2346 = 1.11344*t1938;
  t2350 = t2060 + t2068 + t2079 + t2084 + t2318 + t2326 + t2334 + t2337 + t2340 + t2346;
  t2127 = t1210*t2111;
  t2128 = t1084*t2118;
  t2133 = t2127 + t2128;
  t2144 = t1084*t2111;
  t2162 = -1.*t1210*t2118;
  t2171 = t2144 + t2162;
  t2306 = Power(t2301,2);
  t2354 = Power(t2350,2);
  t2356 = t2306 + t2354;
  t2362 = 1/t2356;
  t1741 = Power(t1733,2);
  t2003 = Power(t1995,2);
  t2005 = 0.00002025 + t1741 + t2003;
  t2030 = 1/Sqrt(t2005);
  t2623 = t1515 + t1845;
  t2627 = t779*t1777;
  t2629 = t1253 + t2627;
  t2513 = -0.21*t288;
  t2518 = -0.049*t471;
  t2519 = t2513 + t2518;
  t2433 = 0.049*t288;
  t2446 = t2433 + t473;
  t2088 = t981*t899;
  t2582 = 0.01841*t724;
  t2586 = 0.70544*t779;
  t2594 = t2582 + t2586;
  t2532 = 0.70544*t724;
  t2559 = t2532 + t837;
  t2104 = t838*t2097;
  t2777 = t1275 + t2110;
  t2784 = t1863 + t2117;
  t2649 = t1210*t2623;
  t2651 = t1084*t2629;
  t2659 = t2649 + t2651;
  t2670 = t1084*t2623;
  t2675 = -1.*t1210*t2629;
  t2694 = t2670 + t2675;
  t2365 = -1.*t981*t899;
  t2369 = -1.*t838*t2097;
  t2818 = t1210*t2777;
  t2823 = t1084*t2784;
  t2824 = t2818 + t2823;
  t2833 = t1084*t2777;
  t2844 = -1.*t1210*t2784;
  t2845 = t2833 + t2844;
  t3044 = 0.02159*t1084;
  t3053 = t3044 + t1235;
  t3030 = -1.11344*t1084;
  t3037 = -0.02159*t1210;
  t3039 = t3030 + t3037;
  t3071 = -1.*t1210*t1820;
  t3081 = -1.*t1084*t1868;
  t3082 = t3071 + t3081;
  t3056 = -1.*t1084*t1287;
  t3057 = -1.*t1210*t1582;
  t3059 = t3056 + t3057;
  t3147 = Cos(var1[16]);
  t3149 = Sin(var1[16]);
  t3152 = Cos(var1[17]);
  t3156 = -1.*t3152;
  t3161 = 1. + t3156;
  t3186 = Sin(var1[17]);
  t3226 = -1.*var1[17];
  t3229 = 0.226893 + t3226;
  t3232 = Cos(t3229);
  t3237 = -1.*t3232;
  t3239 = 1. + t3237;
  t3247 = Sin(t3229);
  t3256 = -1.*t3152*t3149;
  t3257 = -1.*t3147*t3186;
  t3260 = t3256 + t3257;
  t3275 = t3147*t3152;
  t3277 = -1.*t3149*t3186;
  t3278 = t3275 + t3277;
  t3295 = Cos(var1[21]);
  t3296 = -1.*t3295;
  t3300 = 1. + t3296;
  t3305 = Sin(var1[21]);
  t3311 = t3232*t3260;
  t3315 = -1.*t3247*t3278;
  t3318 = t3311 + t3315;
  t3284 = t3247*t3260;
  t3285 = t3232*t3278;
  t3291 = t3284 + t3285;
  t3173 = -0.049*t3161;
  t3188 = -0.21*t3186;
  t3197 = t3173 + t3188;
  t3213 = -0.21*t3161;
  t3217 = 0.049*t3186;
  t3218 = t3213 + t3217;
  t3265 = 0.01841*t3239;
  t3269 = -0.70544*t3247;
  t3273 = t3265 + t3269;
  t3241 = -0.70544*t3239;
  t3248 = -0.01841*t3247;
  t3249 = t3241 + t3248;
  t3409 = t3152*t3149;
  t3413 = t3147*t3186;
  t3414 = t3409 + t3413;
  t3302 = -0.02159*t3300;
  t3306 = -1.11344*t3305;
  t3307 = t3302 + t3306;
  t3323 = -1.11344*t3300;
  t3326 = 0.02159*t3305;
  t3329 = t3323 + t3326;
  t3419 = t3232*t3414;
  t3421 = t3247*t3278;
  t3425 = t3419 + t3421;
  t3427 = -1.*t3247*t3414;
  t3428 = t3427 + t3285;
  t3148 = 0.049*t3147;
  t3150 = -0.09*t3149;
  t3206 = t3147*t3197;
  t3225 = -1.*t3149*t3218;
  t3262 = t3249*t3260;
  t3281 = t3273*t3278;
  t3310 = t3291*t3307;
  t3330 = t3318*t3329;
  t3332 = t3295*t3318;
  t3334 = -1.*t3291*t3305;
  t3335 = t3332 + t3334;
  t3372 = -1.11344*t3335;
  t3377 = t3295*t3291;
  t3378 = t3318*t3305;
  t3380 = t3377 + t3378;
  t3385 = -0.02159*t3380;
  t3389 = t3148 + t3150 + t3206 + t3225 + t3262 + t3281 + t3310 + t3330 + t3372 + t3385;
  t3397 = 0.09*t3147;
  t3399 = 0.049*t3149;
  t3401 = t3149*t3197;
  t3404 = t3147*t3218;
  t3415 = t3273*t3414;
  t3418 = t3249*t3278;
  t3426 = t3425*t3307;
  t3430 = t3428*t3329;
  t3431 = t3295*t3425;
  t3432 = t3428*t3305;
  t3434 = t3431 + t3432;
  t3435 = -0.02159*t3434;
  t3438 = t3295*t3428;
  t3440 = -1.*t3425*t3305;
  t3441 = t3438 + t3440;
  t3443 = -1.11344*t3441;
  t3445 = t3397 + t3399 + t3401 + t3404 + t3415 + t3418 + t3426 + t3430 + t3435 + t3443;
  t3478 = -1.*t3147*t3152;
  t3480 = t3149*t3186;
  t3483 = t3478 + t3480;
  t3489 = t3247*t3483;
  t3492 = t3311 + t3489;
  t3494 = -1.*t3247*t3260;
  t3495 = t3232*t3483;
  t3497 = t3494 + t3495;
  t3393 = Power(t3389,2);
  t3446 = Power(t3445,2);
  t3450 = 0.00002025 + t3393 + t3446;
  t3451 = 1/Sqrt(t3450);
  t3601 = t3247*t3414;
  t3606 = t3284 + t3601;
  t3610 = t3311 + t3419;
  t3536 = 0.049*t3152;
  t3547 = t3536 + t3188;
  t3552 = -0.21*t3152;
  t3558 = -0.049*t3186;
  t3559 = t3552 + t3558;
  t3472 = t3273*t3260;
  t3582 = 0.01841*t3232;
  t3584 = 0.70544*t3247;
  t3591 = t3582 + t3584;
  t3566 = 0.70544*t3232;
  t3567 = t3566 + t3248;
  t3485 = t3249*t3483;
  t3649 = t3421 + t3489;
  t3652 = t3285 + t3495;
  t3683 = 0.02159*t3295;
  t3684 = t3683 + t3306;
  t3687 = -1.11344*t3295;
  t3688 = -0.02159*t3305;
  t3699 = t3687 + t3688;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=1.;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=1.;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0.5*t2030*(2.*t1733*t1995 + 2.*t1733*(t2060 + t2068 + t2079 + t2084 + t2088 + t2104 + t1494*t2111 + t1243*t2118 - 0.02159*t2133 - 1.11344*t2171));
  p_output1[23]=t1733*t2301*t2362 + t2350*t2362*(t1742 + t1754 + t1759 + t1760 - 1.*t1494*t2111 - 1.*t1243*t2118 + 0.02159*t2133 + 1.11344*t2171 + t2365 + t2369);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0.5*t2030*(2.*t1733*(t2088 + t2104 + t192*t2519 + t1058*t2559 + t1494*t2777 + t1243*t2784 - 0.02159*t2824 - 1.11344*t2845 - 1.*t2446*t521 + t2594*t899) + 2.*t1995*(t1073 + t192*t2446 + t1777*t2559 + t1058*t2594 + t1494*t2623 + t1243*t2629 - 0.02159*t2659 - 1.11344*t2694 + t2519*t521 + t916));
  p_output1[32]=t1733*t2362*(t2238 + t2249 - 1.*t192*t2446 - 1.*t1777*t2559 - 1.*t1058*t2594 - 1.*t1494*t2623 - 1.*t1243*t2629 + 0.02159*t2659 + 1.11344*t2694 - 1.*t2519*t521) + t2350*t2362*(t2365 + t2369 - 1.*t192*t2519 - 1.*t1058*t2559 - 1.*t1494*t2777 - 1.*t1243*t2784 + 0.02159*t2824 + 1.11344*t2845 + t2446*t521 - 1.*t2594*t899);
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0.5*t2030*(2.*t1733*(-0.02159*t1628 + t1287*t3039 + t1582*t3053 - 1.11344*t3059) + 2.*t1995*(-0.02159*t1938 + t1868*t3039 + t1820*t3053 - 1.11344*t3082));
  p_output1[41]=t2350*t2362*(0.02159*t1628 - 1.*t1287*t3039 - 1.*t1582*t3053 + 1.11344*t3059) + t1733*t2362*(0.02159*t1938 - 1.*t1868*t3039 - 1.*t1820*t3053 + 1.11344*t3082);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=-1.;
  p_output1[45]=-1.;
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
  p_output1[56]=1.;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
  p_output1[60]=0;
  p_output1[61]=0;
  p_output1[62]=0;
  p_output1[63]=0;
  p_output1[64]=1.;
  p_output1[65]=0;
  p_output1[66]=0.5*t3451*(2.*t3389*t3445 + 2.*t3389*(-0.09*t3147 - 0.049*t3149 - 1.*t3149*t3197 - 1.*t3147*t3218 + t3472 + t3485 + t3307*t3492 + t3329*t3497 - 1.11344*(-1.*t3305*t3492 + t3295*t3497) - 0.02159*(t3295*t3492 + t3305*t3497)));
  p_output1[67]=0;
  p_output1[68]=0;
  p_output1[69]=0;
  p_output1[70]=0;
  p_output1[71]=0;
  p_output1[72]=0;
  p_output1[73]=0;
  p_output1[74]=0;
  p_output1[75]=0.5*t3451*(2.*t3445*(t3262 + t3281 + t3147*t3547 + t3149*t3559 + t3414*t3567 + t3278*t3591 + t3307*t3606 + t3329*t3610 - 1.11344*(-1.*t3305*t3606 + t3295*t3610) - 0.02159*(t3295*t3606 + t3305*t3610)) + 2.*t3389*(t3472 + t3485 - 1.*t3149*t3547 + t3147*t3559 + t3278*t3567 + t3260*t3591 + t3307*t3649 + t3329*t3652 - 1.11344*(-1.*t3305*t3649 + t3295*t3652) - 0.02159*(t3295*t3649 + t3305*t3652)));
  p_output1[76]=0;
  p_output1[77]=0;
  p_output1[78]=0;
  p_output1[79]=0;
  p_output1[80]=0;
  p_output1[81]=0;
  p_output1[82]=0;
  p_output1[83]=0;
  p_output1[84]=0.5*t3451*(2.*t3389*(-1.11344*(-1.*t3291*t3295 - 1.*t3305*t3318) - 0.02159*t3335 + t3318*t3684 + t3291*t3699) + 2.*t3445*(-1.11344*(-1.*t3295*t3425 - 1.*t3305*t3428) - 0.02159*t3441 + t3428*t3684 + t3425*t3699));
  p_output1[85]=0;
  p_output1[86]=0;
  p_output1[87]=0;
  p_output1[88]=0;
  p_output1[89]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 9, (mwSize) 10, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#endif // MATLAB_MEX_FILE

namespace SymFunction
{

void J_yaRightStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




