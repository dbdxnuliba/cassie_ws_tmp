/*
 * Automatically Generated from Mathematica.
 * Thu 9 Sep 2021 00:06:37 GMT-07:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "yaRightStance_new.hh"
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
  double t124;
  double t48;
  double t126;
  double t110;
  double t130;
  double t114;
  double t185;
  double t188;
  double t404;
  double t430;
  double t431;
  double t538;
  double t345;
  double t355;
  double t598;
  double t581;
  double t592;
  double t594;
  double t703;
  double t709;
  double t715;
  double t733;
  double t734;
  double t739;
  double t765;
  double t780;
  double t794;
  double t795;
  double t893;
  double t897;
  double t925;
  double t957;
  double t963;
  double t966;
  double t975;
  double t1018;
  double t1028;
  double t1031;
  double t1065;
  double t1113;
  double t1123;
  double t1140;
  double t1160;
  double t1163;
  double t1167;
  double t1227;
  double t1228;
  double t1236;
  double t1268;
  double t1269;
  double t1278;
  double t1284;
  double t1294;
  double t1296;
  double t1299;
  double t1316;
  double t1317;
  double t1320;
  double t1357;
  double t1358;
  double t1361;
  double t1372;
  double t1373;
  double t1381;
  double t1385;
  double t1397;
  double t1399;
  double t1400;
  double t1410;
  double t1418;
  double t1427;
  double t617;
  double t636;
  double t1461;
  double t462;
  double t560;
  double t562;
  double t1470;
  double t686;
  double t692;
  double t697;
  double t819;
  double t860;
  double t871;
  double t1489;
  double t1491;
  double t742;
  double t767;
  double t775;
  double t884;
  double t888;
  double t891;
  double t1554;
  double t1556;
  double t974;
  double t978;
  double t980;
  double t1053;
  double t1058;
  double t1063;
  double t1580;
  double t1583;
  double t1166;
  double t1218;
  double t1221;
  double t1250;
  double t1251;
  double t1255;
  double t1600;
  double t1612;
  double t1297;
  double t1304;
  double t1312;
  double t1337;
  double t1352;
  double t1356;
  double t1709;
  double t1714;
  double t1715;
  double t1726;
  double t1656;
  double t1671;
  double t1748;
  double t1725;
  double t1782;
  double t1839;
  double t1860;
  double t1801;
  double t1873;
  double t1785;
  double t1907;
  double t1756;
  double t1866;
  double t1727;
  double t1383;
  double t1393;
  double t1396;
  double t1403;
  double t1405;
  double t1406;
  double t1438;
  double t1441;
  double t1443;
  double t1448;
  double t1449;
  double t1451;
  double t1466;
  double t2012;
  double t2017;
  double t2013;
  double t2014;
  double t2015;
  double t2019;
  double t2042;
  double t2043;
  double t2056;
  double t2022;
  double t2023;
  double t2036;
  double t2090;
  double t2095;
  double t2098;
  double t2104;
  double t2100;
  double t2109;
  double t2119;
  double t2121;
  double t2123;
  double t2138;
  double t2143;
  double t2150;
  double t2158;
  double t2165;
  double t2173;
  double t2175;
  double t2185;
  double t2188;
  double t2204;
  double t2208;
  double t2217;
  double t2220;
  double t2219;
  double t2223;
  double t2224;
  double t2226;
  double t2228;
  double t2229;
  double t2235;
  double t2243;
  double t2250;
  double t2251;
  double t2256;
  double t2293;
  double t2296;
  double t2297;
  double t2304;
  double t2275;
  double t2276;
  double t2277;
  double t2298;
  double t2307;
  double t2309;
  double t2312;
  double t2323;
  double t2339;
  double t2343;
  double t2356;
  double t2358;
  double t2360;
  double t2363;
  double t2429;
  double t2434;
  double t2435;
  double t2441;
  double t2367;
  double t2374;
  double t2375;
  double t2440;
  double t2445;
  double t2446;
  double t2448;
  double t2449;
  double t2451;
  double t2454;
  double t2455;
  double t2457;
  double t2459;
  double t2462;
  double t2533;
  double t2539;
  double t2541;
  double t2549;
  double t2474;
  double t2476;
  double t2483;
  double t2661;
  double t2665;
  double t2674;
  double t2692;
  double t2547;
  double t2550;
  double t2552;
  double t2556;
  double t2557;
  double t2570;
  double t2578;
  double t2584;
  double t2677;
  double t2587;
  double t2589;
  double t2602;
  double t2706;
  double t2739;
  double t2615;
  double t2622;
  double t2624;
  double t2788;
  double t2799;
  double t2761;
  double t2835;
  double t2740;
  double t2862;
  double t2694;
  double t2825;
  double t2707;
  double t2916;
  double t2920;
  double t2923;
  double t2930;
  double t382;
  double t596;
  double t660;
  double t732;
  double t796;
  double t883;
  double t952;
  double t1040;
  double t1133;
  double t1241;
  double t1283;
  double t1321;
  double t1366;
  double t1401;
  double t1436;
  double t1446;
  double t1453;
  double t2929;
  double t2932;
  double t2933;
  double t2935;
  double t2938;
  double t2940;
  double t2943;
  double t2944;
  double t2946;
  double t2947;
  double t2952;
  double t2957;
  double t2958;
  double t2959;
  double t2991;
  double t2995;
  double t2996;
  double t2999;
  double t3000;
  double t3001;
  double t3013;
  double t3014;
  double t3015;
  double t3019;
  double t3020;
  double t3021;
  double t3026;
  double t3027;
  double t3028;
  double t3030;
  double t3033;
  double t3034;
  double t3044;
  double t3052;
  double t3057;
  double t3062;
  double t3063;
  double t3066;
  double t3070;
  double t3071;
  double t3073;
  double t3077;
  double t3080;
  double t3082;
  double t3090;
  double t3091;
  double t3092;
  double t3128;
  double t3133;
  double t3134;
  double t3154;
  double t3156;
  double t3158;
  double t3161;
  double t3164;
  double t3165;
  double t3170;
  double t3171;
  double t3178;
  double t3182;
  double t3183;
  double t3185;
  double t3195;
  double t3197;
  double t3202;
  double t3207;
  double t3211;
  double t3212;
  double t3217;
  double t3218;
  double t3219;
  double t3222;
  double t3224;
  double t3225;
  double t3231;
  double t3236;
  double t3237;
  double t3240;
  double t3244;
  double t3247;
  double t3280;
  double t3282;
  double t3286;
  double t3267;
  double t3270;
  double t3271;
  double t3299;
  double t3301;
  double t3305;
  double t3316;
  double t3318;
  double t3320;
  double t3332;
  double t3335;
  double t3336;
  double t3342;
  double t3343;
  double t3346;
  double t3354;
  double t3356;
  double t3357;
  double t3366;
  double t3369;
  double t3371;
  double t3373;
  double t3374;
  double t3375;
  double t3379;
  double t3382;
  double t3384;
  double t3392;
  double t3393;
  double t3395;
  double t3399;
  double t3400;
  double t3404;
  double t3408;
  double t3409;
  double t3418;
  double t3443;
  double t3449;
  double t3452;
  double t3465;
  double t3469;
  double t3477;
  double t3484;
  double t3489;
  double t3491;
  double t3497;
  double t3505;
  double t3508;
  double t3512;
  double t3513;
  double t3514;
  double t3527;
  double t3534;
  double t3535;
  double t3545;
  double t3547;
  double t3548;
  double t3561;
  double t3562;
  double t3564;
  double t3566;
  double t3567;
  double t3568;
  double t3575;
  double t3581;
  double t3582;
  double t3584;
  double t3586;
  double t3588;
  t124 = Cos(var1[3]);
  t48 = Cos(var1[5]);
  t126 = Sin(var1[4]);
  t110 = Sin(var1[3]);
  t130 = Sin(var1[5]);
  t114 = t48*t110;
  t185 = t124*t126*t130;
  t188 = t114 + t185;
  t404 = Cos(var1[15]);
  t430 = -1.*t404;
  t431 = 1. + t430;
  t538 = Sin(var1[15]);
  t345 = Cos(var1[4]);
  t355 = Sin(var1[14]);
  t598 = Cos(var1[14]);
  t581 = -1.*t124*t48*t126;
  t592 = t110*t130;
  t594 = t581 + t592;
  t703 = t124*t345*t355;
  t709 = t598*t188;
  t715 = t703 + t709;
  t733 = Cos(var1[16]);
  t734 = -1.*t733;
  t739 = 1. + t734;
  t765 = Sin(var1[16]);
  t780 = t598*t124*t345;
  t794 = -1.*t355*t188;
  t795 = t780 + t794;
  t893 = t404*t594;
  t897 = t538*t715;
  t925 = t893 + t897;
  t957 = Cos(var1[17]);
  t963 = -1.*t957;
  t966 = 1. + t963;
  t975 = Sin(var1[17]);
  t1018 = t765*t795;
  t1028 = t733*t925;
  t1031 = t1018 + t1028;
  t1065 = t733*t795;
  t1113 = -1.*t765*t925;
  t1123 = t1065 + t1113;
  t1140 = Cos(var1[18]);
  t1160 = -1.*t1140;
  t1163 = 1. + t1160;
  t1167 = Sin(var1[18]);
  t1227 = -1.*t975*t1031;
  t1228 = t957*t1123;
  t1236 = t1227 + t1228;
  t1268 = t957*t1031;
  t1269 = t975*t1123;
  t1278 = t1268 + t1269;
  t1284 = Cos(var1[19]);
  t1294 = -1.*t1284;
  t1296 = 1. + t1294;
  t1299 = Sin(var1[19]);
  t1316 = t1167*t1236;
  t1317 = t1140*t1278;
  t1320 = t1316 + t1317;
  t1357 = t1140*t1236;
  t1358 = -1.*t1167*t1278;
  t1361 = t1357 + t1358;
  t1372 = Cos(var1[21]);
  t1373 = -1.*t1372;
  t1381 = 1. + t1373;
  t1385 = Sin(var1[21]);
  t1397 = -1.*t1299*t1320;
  t1399 = t1284*t1361;
  t1400 = t1397 + t1399;
  t1410 = t1284*t1320;
  t1418 = t1299*t1361;
  t1427 = t1410 + t1418;
  t617 = -1.*t598;
  t636 = 1. + t617;
  t1461 = 0.135*t124*t345*t355;
  t462 = -0.049*t431;
  t560 = -0.135*t538;
  t562 = t462 + t560;
  t1470 = -0.135*t636*t188;
  t686 = -0.135*t431;
  t692 = 0.049*t538;
  t697 = t686 + t692;
  t819 = -1.*t538*t594;
  t860 = t404*t715;
  t871 = t819 + t860;
  t1489 = t562*t594;
  t1491 = t697*t715;
  t742 = -0.09*t739;
  t767 = 0.049*t765;
  t775 = t742 + t767;
  t884 = -0.049*t739;
  t888 = -0.09*t765;
  t891 = t884 + t888;
  t1554 = t775*t795;
  t1556 = t891*t925;
  t974 = -0.049*t966;
  t978 = -0.21*t975;
  t980 = t974 + t978;
  t1053 = -0.21*t966;
  t1058 = 0.049*t975;
  t1063 = t1053 + t1058;
  t1580 = t980*t1031;
  t1583 = t1063*t1123;
  t1166 = -0.27068*t1163;
  t1218 = 0.00159*t1167;
  t1221 = t1166 + t1218;
  t1250 = -0.00159*t1163;
  t1251 = -0.27068*t1167;
  t1255 = t1250 + t1251;
  t1600 = t1221*t1236;
  t1612 = t1255*t1278;
  t1297 = 0.01841*t1296;
  t1304 = -0.70544*t1299;
  t1312 = t1297 + t1304;
  t1337 = -0.70544*t1296;
  t1352 = -0.01841*t1299;
  t1356 = t1337 + t1352;
  t1709 = Cos(var1[20]);
  t1714 = -1.*t1709;
  t1715 = 1. + t1714;
  t1726 = Sin(var1[20]);
  t1656 = t1312*t1320;
  t1671 = t1356*t1361;
  t1748 = 0.005481192614*t1715;
  t1725 = 0.07769774964800001*t1715;
  t1782 = -0.0004284921280000001*t1715;
  t1839 = 0.005498*t1726;
  t1860 = 0.996943*t1726;
  t1801 = -0.077936*t1726;
  t1873 = 0.0004284921280000001*t1715;
  t1785 = -0.996943*t1726;
  t1907 = -0.005481192614*t1715;
  t1756 = 0.077936*t1726;
  t1866 = -0.07769774964800001*t1715;
  t1727 = -0.005498*t1726;
  t1383 = -1.11344*t1381;
  t1393 = 0.02159*t1385;
  t1396 = t1383 + t1393;
  t1403 = -0.02159*t1381;
  t1405 = -1.11344*t1385;
  t1406 = t1403 + t1405;
  t1438 = t1385*t1400;
  t1441 = t1372*t1427;
  t1443 = t1438 + t1441;
  t1448 = t1372*t1400;
  t1449 = -1.*t1385*t1427;
  t1451 = t1448 + t1449;
  t1466 = -0.0233*t594;
  t2012 = Cos(var1[6]);
  t2017 = Sin(var1[6]);
  t2013 = -1.*t2012;
  t2014 = 1. + t2013;
  t2015 = 0.135*t2014*t188;
  t2019 = -0.135*t124*t345*t2017;
  t2042 = t124*t345*t2012;
  t2043 = -1.*t188*t2017;
  t2056 = t2042 + t2043;
  t2022 = t2012*t188;
  t2023 = t124*t345*t2017;
  t2036 = t2022 + t2023;
  t2090 = Cos(var1[7]);
  t2095 = -1.*t2090;
  t2098 = 1. + t2095;
  t2104 = Sin(var1[7]);
  t2100 = 0.135*t2098;
  t2109 = 0.049*t2104;
  t2119 = t2100 + t2109;
  t2121 = t2036*t2119;
  t2123 = -0.049*t2098;
  t2138 = 0.135*t2104;
  t2143 = t2123 + t2138;
  t2150 = t594*t2143;
  t2158 = t2090*t2036;
  t2165 = -1.*t594*t2104;
  t2173 = t2158 + t2165;
  t2175 = t2090*t594;
  t2185 = t2036*t2104;
  t2188 = t2175 + t2185;
  t2204 = Cos(var1[8]);
  t2208 = -1.*t2204;
  t2217 = 1. + t2208;
  t2220 = Sin(var1[8]);
  t2219 = -0.049*t2217;
  t2223 = -0.09*t2220;
  t2224 = t2219 + t2223;
  t2226 = t2188*t2224;
  t2228 = -0.09*t2217;
  t2229 = 0.049*t2220;
  t2235 = t2228 + t2229;
  t2243 = t2056*t2235;
  t2250 = t2204*t2188;
  t2251 = t2056*t2220;
  t2256 = t2250 + t2251;
  t2293 = Cos(var1[9]);
  t2296 = -1.*t2293;
  t2297 = 1. + t2296;
  t2304 = Sin(var1[9]);
  t2275 = t2204*t2056;
  t2276 = -1.*t2188*t2220;
  t2277 = t2275 + t2276;
  t2298 = -0.049*t2297;
  t2307 = -0.21*t2304;
  t2309 = t2298 + t2307;
  t2312 = t2309*t2256;
  t2323 = -0.21*t2297;
  t2339 = 0.049*t2304;
  t2343 = t2323 + t2339;
  t2356 = t2343*t2277;
  t2358 = -1.*t2304*t2256;
  t2360 = t2293*t2277;
  t2363 = t2358 + t2360;
  t2429 = Cos(var1[10]);
  t2434 = -1.*t2429;
  t2435 = 1. + t2434;
  t2441 = Sin(var1[10]);
  t2367 = t2293*t2256;
  t2374 = t2304*t2277;
  t2375 = t2367 + t2374;
  t2440 = -0.27068*t2435;
  t2445 = 0.00159*t2441;
  t2446 = t2440 + t2445;
  t2448 = t2446*t2363;
  t2449 = -0.00159*t2435;
  t2451 = -0.27068*t2441;
  t2454 = t2449 + t2451;
  t2455 = t2454*t2375;
  t2457 = t2441*t2363;
  t2459 = t2429*t2375;
  t2462 = t2457 + t2459;
  t2533 = Cos(var1[11]);
  t2539 = -1.*t2533;
  t2541 = 1. + t2539;
  t2549 = Sin(var1[11]);
  t2474 = t2429*t2363;
  t2476 = -1.*t2441*t2375;
  t2483 = t2474 + t2476;
  t2661 = Cos(var1[12]);
  t2665 = -1.*t2661;
  t2674 = 1. + t2665;
  t2692 = Sin(var1[12]);
  t2547 = 0.01841*t2541;
  t2550 = -0.70544*t2549;
  t2552 = t2547 + t2550;
  t2556 = t2552*t2462;
  t2557 = -0.70544*t2541;
  t2570 = -0.01841*t2549;
  t2578 = t2557 + t2570;
  t2584 = t2578*t2483;
  t2677 = -0.005481192614*t2674;
  t2587 = -1.*t2549*t2462;
  t2589 = t2533*t2483;
  t2602 = t2587 + t2589;
  t2706 = -0.07769774964800001*t2674;
  t2739 = -0.0004284921280000001*t2674;
  t2615 = t2533*t2462;
  t2622 = t2549*t2483;
  t2624 = t2615 + t2622;
  t2788 = -0.005498*t2692;
  t2799 = 0.996943*t2692;
  t2761 = 0.077936*t2692;
  t2835 = 0.0004284921280000001*t2674;
  t2740 = -0.996943*t2692;
  t2862 = 0.005481192614*t2674;
  t2694 = -0.077936*t2692;
  t2825 = 0.07769774964800001*t2674;
  t2707 = 0.005498*t2692;
  t2916 = Cos(var1[13]);
  t2920 = -1.*t2916;
  t2923 = 1. + t2920;
  t2930 = Sin(var1[13]);
  t382 = -0.135*t124*t345*t355;
  t596 = -1.*t562*t594;
  t660 = 0.135*t636*t188;
  t732 = -1.*t697*t715;
  t796 = -1.*t775*t795;
  t883 = 0.1305*t871;
  t952 = -1.*t891*t925;
  t1040 = -1.*t980*t1031;
  t1133 = -1.*t1063*t1123;
  t1241 = -1.*t1221*t1236;
  t1283 = -1.*t1255*t1278;
  t1321 = -1.*t1312*t1320;
  t1366 = -1.*t1356*t1361;
  t1401 = -1.*t1396*t1400;
  t1436 = -1.*t1406*t1427;
  t1446 = 0.02159*t1443;
  t1453 = 1.11344*t1451;
  t2929 = -1.11344*t2923;
  t2932 = 0.02159*t2930;
  t2933 = t2929 + t2932;
  t2935 = t2933*t2602;
  t2938 = -0.02159*t2923;
  t2940 = -1.11344*t2930;
  t2943 = t2938 + t2940;
  t2944 = t2943*t2624;
  t2946 = t2930*t2602;
  t2947 = t2916*t2624;
  t2952 = t2946 + t2947;
  t2957 = t2916*t2602;
  t2958 = -1.*t2930*t2624;
  t2959 = t2957 + t2958;
  t2991 = t355*t126;
  t2995 = -1.*t598*t345*t130;
  t2996 = t2991 + t2995;
  t2999 = t598*t126;
  t3000 = t345*t355*t130;
  t3001 = t2999 + t3000;
  t3013 = t404*t345*t48;
  t3014 = t538*t2996;
  t3015 = t3013 + t3014;
  t3019 = t765*t3001;
  t3020 = t733*t3015;
  t3021 = t3019 + t3020;
  t3026 = t733*t3001;
  t3027 = -1.*t765*t3015;
  t3028 = t3026 + t3027;
  t3030 = -1.*t975*t3021;
  t3033 = t957*t3028;
  t3034 = t3030 + t3033;
  t3044 = t957*t3021;
  t3052 = t975*t3028;
  t3057 = t3044 + t3052;
  t3062 = t1167*t3034;
  t3063 = t1140*t3057;
  t3066 = t3062 + t3063;
  t3070 = t1140*t3034;
  t3071 = -1.*t1167*t3057;
  t3073 = t3070 + t3071;
  t3077 = -1.*t1299*t3066;
  t3080 = t1284*t3073;
  t3082 = t3077 + t3080;
  t3090 = t1284*t3066;
  t3091 = t1299*t3073;
  t3092 = t3090 + t3091;
  t3128 = -1.*t345*t2012*t130;
  t3133 = t126*t2017;
  t3134 = t3128 + t3133;
  t3154 = t345*t48*t2090;
  t3156 = t3134*t2104;
  t3158 = t3154 + t3156;
  t3161 = t2012*t126;
  t3164 = t345*t130*t2017;
  t3165 = t3161 + t3164;
  t3170 = t2204*t3158;
  t3171 = t3165*t2220;
  t3178 = t3170 + t3171;
  t3182 = t2204*t3165;
  t3183 = -1.*t3158*t2220;
  t3185 = t3182 + t3183;
  t3195 = -1.*t2304*t3178;
  t3197 = t2293*t3185;
  t3202 = t3195 + t3197;
  t3207 = t2293*t3178;
  t3211 = t2304*t3185;
  t3212 = t3207 + t3211;
  t3217 = t2441*t3202;
  t3218 = t2429*t3212;
  t3219 = t3217 + t3218;
  t3222 = t2429*t3202;
  t3224 = -1.*t2441*t3212;
  t3225 = t3222 + t3224;
  t3231 = -1.*t2549*t3219;
  t3236 = t2533*t3225;
  t3237 = t3231 + t3236;
  t3240 = t2533*t3219;
  t3244 = t2549*t3225;
  t3247 = t3240 + t3244;
  t3280 = t124*t48;
  t3282 = -1.*t110*t126*t130;
  t3286 = t3280 + t3282;
  t3267 = t48*t110*t126;
  t3270 = t124*t130;
  t3271 = t3267 + t3270;
  t3299 = -1.*t345*t355*t110;
  t3301 = t598*t3286;
  t3305 = t3299 + t3301;
  t3316 = -1.*t598*t345*t110;
  t3318 = -1.*t355*t3286;
  t3320 = t3316 + t3318;
  t3332 = t404*t3271;
  t3335 = t538*t3305;
  t3336 = t3332 + t3335;
  t3342 = t765*t3320;
  t3343 = t733*t3336;
  t3346 = t3342 + t3343;
  t3354 = t733*t3320;
  t3356 = -1.*t765*t3336;
  t3357 = t3354 + t3356;
  t3366 = -1.*t975*t3346;
  t3369 = t957*t3357;
  t3371 = t3366 + t3369;
  t3373 = t957*t3346;
  t3374 = t975*t3357;
  t3375 = t3373 + t3374;
  t3379 = t1167*t3371;
  t3382 = t1140*t3375;
  t3384 = t3379 + t3382;
  t3392 = t1140*t3371;
  t3393 = -1.*t1167*t3375;
  t3395 = t3392 + t3393;
  t3399 = -1.*t1299*t3384;
  t3400 = t1284*t3395;
  t3404 = t3399 + t3400;
  t3408 = t1284*t3384;
  t3409 = t1299*t3395;
  t3418 = t3408 + t3409;
  t3443 = t2012*t3286;
  t3449 = -1.*t345*t110*t2017;
  t3452 = t3443 + t3449;
  t3465 = t2090*t3271;
  t3469 = t3452*t2104;
  t3477 = t3465 + t3469;
  t3484 = -1.*t345*t2012*t110;
  t3489 = -1.*t3286*t2017;
  t3491 = t3484 + t3489;
  t3497 = t2204*t3477;
  t3505 = t3491*t2220;
  t3508 = t3497 + t3505;
  t3512 = t2204*t3491;
  t3513 = -1.*t3477*t2220;
  t3514 = t3512 + t3513;
  t3527 = -1.*t2304*t3508;
  t3534 = t2293*t3514;
  t3535 = t3527 + t3534;
  t3545 = t2293*t3508;
  t3547 = t2304*t3514;
  t3548 = t3545 + t3547;
  t3561 = t2441*t3535;
  t3562 = t2429*t3548;
  t3564 = t3561 + t3562;
  t3566 = t2429*t3535;
  t3567 = -1.*t2441*t3548;
  t3568 = t3566 + t3567;
  t3575 = -1.*t2549*t3564;
  t3581 = t2533*t3568;
  t3582 = t3575 + t3581;
  t3584 = t2533*t3564;
  t3586 = t2549*t3568;
  t3588 = t3584 + t3586;
  p_output1[0]=t188;
  p_output1[1]=-1.*t110*t130 + t124*t126*t48;
  p_output1[2]=var1[15];
  p_output1[3]=t1040 + t1133 + t1241 + t1283 + t1321 + t1366 + t1401 + t1436 + t1446 + t1453 + t382 + t596 + t660 + t732 + t796 + t883 + t952 - 1.*var1[2] + 0.0288377642750394*(1.965608*(t1466 + t2015 + t2019 + 0.1351*t2036 + 0.01793*t2056 + var1[2]) + 1.316608*(t2015 + t2019 - 0.0343*t2056 + t2121 + t2150 + 0.135*t2173 - 0.049*t2188 + var1[2]) + 5.79228*(t2015 + t2019 + t2121 + t2150 + 0.17081*t2173 + t2226 + t2243 - 0.04895*t2256 - 0.14946*t2277 + var1[2]) + 1.03008*(t2015 + t2019 + t2121 + t2150 + 0.132168*t2173 + t2226 + t2243 + t2312 + t2356 - 0.255862*t2363 - 0.007761*t2375 + var1[2]) + 0.763*(t2015 + t2019 + t2121 + t2150 + 0.130288*t2173 + t2226 + t2243 + t2312 + t2356 + t2448 + t2455 - 0.000421*t2462 - 0.45406*t2483 + var1[2]) + 1.03*(t2015 + t2019 + t2121 + t2150 + 0.127241*t2173 + t2226 + t2243 + t2312 + t2356 + t2448 + t2455 + t2556 + t2584 - 0.826587*t2602 - 0.004179*t2624 + var1[2]) + 0.1498*(t2015 + t2019 + t2121 + t2150 + 0.13064*t2173 + t2226 + t2243 + t2312 + t2356 + t2448 + t2455 + t2556 + t2584 + t2935 + t2944 + 0.00589*t2952 - 1.11818*t2959 + var1[2]) + 10.33*(0.000346*t188 + 0.02841*t124*t345 + 0.05066*t594 + var1[2]) + 1.965608*(t1461 + t1466 + t1470 - 0.1351*t715 + 0.01793*t795 + var1[2]) + 5.79228*(-0.04895*t1031 - 0.14946*t1123 + t1461 + t1470 + t1489 + t1491 + t1554 + t1556 - 0.17081*t871 + var1[2]) + 1.03008*(-0.255862*t1236 - 0.007761*t1278 + t1461 + t1470 + t1489 + t1491 + t1554 + t1556 + t1580 + t1583 - 0.132168*t871 + var1[2]) + 0.1498*(t1396*t1400 + t1406*t1427 + 0.00589*t1443 - 1.11818*t1451 + t1461 + t1470 + t1489 + t1491 + t1554 + t1556 + t1580 + t1583 + t1600 + t1612 + t1656 + t1671 - 0.13064*t871 + var1[2]) + 0.763*(-0.000421*t1320 - 0.45406*t1361 + t1461 + t1470 + t1489 + t1491 + t1554 + t1556 + t1580 + t1583 + t1600 + t1612 - 0.130288*t871 + var1[2]) + 1.03*(-0.826587*t1400 - 0.004179*t1427 + t1461 + t1470 + t1489 + t1491 + t1554 + t1556 + t1580 + t1583 + t1600 + t1612 + t1656 + t1671 - 0.127241*t871 + var1[2]) + 1.316608*(t1461 + t1470 + t1489 + t1491 - 0.0343*t795 - 0.135*t871 - 0.049*t925 + var1[2]) + 0.126*(t2015 + t2019 + t2121 + t2150 + t2226 + t2243 + t2312 + t2356 + t2448 + t2455 + t2556 + t2584 + 0.01889*(t2624*(1. - 0.993925573253*t2674) + t2173*(t2788 + t2825) + t2602*(t2799 + t2835)) + 0.126739*(t2173*(1. - 0.006104248100000001*t2674) + t2624*(t2707 + t2825) + t2602*(t2694 + t2862)) - 0.617968*(t2602*(1. - 0.999969365345*t2674) + t2624*(t2740 + t2835) + t2173*(t2761 + t2862)) + var1[2] + t2173*(0.000033783761634830594*t2674 - 0.6934341012630001*(t2677 + t2694) - 0.021877537552*(t2706 + t2707) - 2.1934241414728571e-7*var1[12]) + t2624*(-0.021744644052735636*t2674 + 0.005534467322*(t2706 + t2788) - 0.6934341012630001*(t2739 + t2799) - 1.7147089040178687e-8*var1[12]) + t2602*(-0.6934128581485427*t2674 - 0.021877537552*(t2739 + t2740) + 0.005534467322*(t2677 + t2761) - 1.2096424700126054e-9*var1[12])) + 0.126*(t1461 + t1470 + t1489 + t1491 + t1554 + t1556 + t1580 + t1583 + t1600 + t1612 + t1656 + t1671 - 0.126739*(t1427*(t1727 + t1866) + t1400*(t1756 + t1907) + (1. - 0.006104248100000001*t1715)*t871) + 0.01889*(t1427*(1. - 0.993925573253*t1715) + t1400*(t1860 + t1873) + (t1839 + t1866)*t871) - 0.617968*(t1400*(1. - 0.999969365345*t1715) + t1427*(t1785 + t1873) + (t1801 + t1907)*t871) + var1[2] + t1427*(-0.021744644052735636*t1715 - 0.005534467322*(t1725 + t1839) - 0.6934341012630001*(t1782 + t1860) - 1.7147089040178687e-8*var1[20]) + t1400*(-0.6934128581485427*t1715 - 0.021877537552*(t1782 + t1785) - 0.005534467322*(t1748 + t1801) - 1.2096424700126054e-9*var1[20]) + t871*(-0.000033783761634830594*t1715 - 0.021877537552*(t1725 + t1727) - 0.6934341012630001*(t1748 + t1756) + 2.1934241414728571e-7*var1[20])));
  p_output1[4]=t1040 + t1133 + t1241 + t1283 + t1321 + t1366 + t1401 + t1436 + t1446 + t1453 + t2015 + t2019 + t2121 + t2150 + 0.1305*t2173 + t2226 + t2243 + t2312 + t2356 + t2448 + t2455 + t2556 + t2584 + t2935 + t2944 - 0.02159*t2952 - 1.11344*t2959 + t382 + t596 + t660 + t732 + t796 + t883 + t952;
  p_output1[5]=-0.135*t126*t2017 - 1.*t1063*t3028 - 1.*t1221*t3034 - 1.*t1255*t3057 - 1.*t1312*t3066 - 1.*t1356*t3073 - 1.*t1396*t3082 - 1.*t1406*t3092 + 0.02159*(t1385*t3082 + t1372*t3092) + 1.11344*(t1372*t3082 - 1.*t1385*t3092) + t2119*t3134 + t2224*t3158 + t2235*t3165 + t2309*t3178 + t2343*t3185 + t2446*t3202 + t2454*t3212 + t2552*t3219 + t2578*t3225 + t2933*t3237 + t2943*t3247 - 0.02159*(t2930*t3237 + t2916*t3247) - 1.11344*(t2916*t3237 - 1.*t2930*t3247) - 0.135*t130*t2014*t345 - 0.135*t126*t355 + t2143*t345*t48 + 0.1305*(t2090*t3134 - 1.*t2104*t345*t48) + 0.1305*(t2996*t404 - 1.*t345*t48*t538) - 1.*t345*t48*t562 - 0.135*t130*t345*t636 - 1.*t2996*t697 - 1.*t3001*t775 - 1.*t3015*t891 - 1.*t3021*t980;
  p_output1[6]=t2143*t3271 + 0.135*t2014*t3286 - 1.*t1063*t3357 - 1.*t1221*t3371 - 1.*t1255*t3375 - 1.*t1312*t3384 - 1.*t1356*t3395 - 1.*t1396*t3404 - 1.*t1406*t3418 + 0.02159*(t1385*t3404 + t1372*t3418) + 1.11344*(t1372*t3404 - 1.*t1385*t3418) + 0.135*t110*t2017*t345 + t2119*t3452 + 0.1305*(-1.*t2104*t3271 + t2090*t3452) + t2224*t3477 + t2235*t3491 + t2309*t3508 + t2343*t3514 + t2446*t3535 + t2454*t3548 + 0.135*t110*t345*t355 + t2552*t3564 + t2578*t3568 + t2933*t3582 + t2943*t3588 - 0.02159*(t2930*t3582 + t2916*t3588) - 1.11344*(t2916*t3582 - 1.*t2930*t3588) + 0.1305*(t3305*t404 - 1.*t3271*t538) - 1.*t3271*t562 + 0.135*t3286*t636 - 1.*t3305*t697 - 1.*t3320*t775 - 1.*t3336*t891 - 1.*t3346*t980;
  p_output1[7]=var1[7];
  p_output1[8]=7.142857142857142*(0. - 0.08999*t2952 - 0.10724599999999995*t2959);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 9, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#endif // MATLAB_MEX_FILE

namespace SymFunction
{

void yaRightStance_new_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




