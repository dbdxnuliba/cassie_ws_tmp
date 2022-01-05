/*
 * Automatically Generated from Mathematica.
 * Sun 7 Nov 2021 14:27:52 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "J_yaLeftStance.hh"
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
  double t9;
  double t59;
  double t61;
  double t62;
  double t69;
  double t196;
  double t312;
  double t315;
  double t319;
  double t335;
  double t344;
  double t401;
  double t500;
  double t536;
  double t574;
  double t672;
  double t744;
  double t748;
  double t794;
  double t801;
  double t818;
  double t841;
  double t882;
  double t916;
  double t918;
  double t1054;
  double t1056;
  double t1061;
  double t262;
  double t263;
  double t278;
  double t63;
  double t86;
  double t117;
  double t636;
  double t649;
  double t651;
  double t352;
  double t424;
  double t425;
  double t970;
  double t1042;
  double t1053;
  double t1243;
  double t1253;
  double t1273;
  double t839;
  double t859;
  double t863;
  double t1337;
  double t1402;
  double t1490;
  double t1494;
  double t1509;
  double t48;
  double t192;
  double t223;
  double t298;
  double t633;
  double t792;
  double t928;
  double t1084;
  double t1094;
  double t1095;
  double t1129;
  double t1133;
  double t1147;
  double t1152;
  double t1161;
  double t1171;
  double t1174;
  double t1207;
  double t1210;
  double t1218;
  double t1235;
  double t1275;
  double t1287;
  double t1434;
  double t1515;
  double t1560;
  double t1582;
  double t1589;
  double t1624;
  double t1628;
  double t1665;
  double t1674;
  double t1675;
  double t1694;
  double t1750;
  double t1754;
  double t1762;
  double t1767;
  double t1768;
  double t1775;
  double t1799;
  double t1800;
  double t1176;
  double t1696;
  double t1704;
  double t1713;
  double t2069;
  double t2084;
  double t2087;
  double t1976;
  double t1987;
  double t1999;
  double t1919;
  double t1934;
  double t1746;
  double t2047;
  double t2058;
  double t2065;
  double t2021;
  double t2026;
  double t1765;
  double t2154;
  double t2167;
  double t2284;
  double t2298;
  double t2270;
  double t2272;
  double t2275;
  double t2387;
  double t2395;
  double t2404;
  double t2406;
  double t2407;
  double t2415;
  double t2435;
  double t2446;
  double t2447;
  double t2451;
  double t2452;
  double t2459;
  double t2480;
  double t2485;
  double t2491;
  double t2518;
  double t2522;
  double t2523;
  double t2538;
  double t2540;
  double t2541;
  double t2546;
  double t2560;
  double t2562;
  double t2564;
  double t2530;
  double t2532;
  double t2533;
  double t2412;
  double t2416;
  double t2417;
  double t2421;
  double t2422;
  double t2425;
  double t2504;
  double t2505;
  double t2508;
  double t2454;
  double t2461;
  double t2468;
  double t2623;
  double t2624;
  double t2626;
  double t2543;
  double t2551;
  double t2554;
  double t2570;
  double t2573;
  double t2576;
  double t2643;
  double t2651;
  double t2658;
  double t2660;
  double t2666;
  double t2389;
  double t2399;
  double t2420;
  double t2430;
  double t2498;
  double t2526;
  double t2559;
  double t2582;
  double t2586;
  double t2589;
  double t2592;
  double t2593;
  double t2594;
  double t2596;
  double t2597;
  double t2598;
  double t2603;
  double t2612;
  double t2617;
  double t2619;
  double t2620;
  double t2627;
  double t2629;
  double t2659;
  double t2667;
  double t2670;
  double t2675;
  double t2677;
  double t2691;
  double t2694;
  double t2695;
  double t2696;
  double t2697;
  double t2702;
  double t2748;
  double t2750;
  double t2758;
  double t2765;
  double t2767;
  double t2770;
  double t2774;
  double t2775;
  double t2835;
  double t2840;
  double t2847;
  double t2848;
  double t2857;
  double t2859;
  double t2860;
  double t2861;
  double t2862;
  double t2863;
  double t2865;
  double t2714;
  double t2730;
  double t2731;
  double t2734;
  double t2867;
  double t2870;
  double t2872;
  double t2877;
  double t2880;
  double t2881;
  double t2886;
  double t2777;
  double t2779;
  double t2783;
  double t2793;
  double t2794;
  double t2796;
  double t2866;
  double t2896;
  double t2901;
  double t2906;
  double t2605;
  double t2703;
  double t2705;
  double t2711;
  double t2978;
  double t2992;
  double t2994;
  double t2933;
  double t2943;
  double t2953;
  double t2954;
  double t2955;
  double t2744;
  double t2966;
  double t2967;
  double t2970;
  double t2962;
  double t2964;
  double t2760;
  double t3066;
  double t3068;
  double t3000;
  double t3030;
  double t3033;
  double t3042;
  double t3045;
  double t3050;
  double t2912;
  double t2918;
  double t3070;
  double t3071;
  double t3080;
  double t3082;
  double t3083;
  double t3084;
  double t3166;
  double t3171;
  double t3179;
  double t3180;
  double t3184;
  double t3219;
  double t3221;
  double t3222;
  double t3189;
  double t3194;
  double t3195;
  t9 = Cos(var1[8]);
  t59 = Cos(var1[9]);
  t61 = -1.*t59;
  t62 = 1. + t61;
  t69 = Sin(var1[9]);
  t196 = Sin(var1[8]);
  t312 = -1.*var1[9];
  t315 = 0.226893 + t312;
  t319 = Cos(t315);
  t335 = -1.*t319;
  t344 = 1. + t335;
  t401 = Sin(t315);
  t500 = -1.*t9*t69;
  t536 = -1.*t59*t196;
  t574 = t500 + t536;
  t672 = t59*t9;
  t744 = -1.*t69*t196;
  t748 = t672 + t744;
  t794 = Cos(var1[13]);
  t801 = -1.*t794;
  t818 = 1. + t801;
  t841 = Sin(var1[13]);
  t882 = t401*t574;
  t916 = t319*t748;
  t918 = t882 + t916;
  t1054 = t319*t574;
  t1056 = -1.*t401*t748;
  t1061 = t1054 + t1056;
  t262 = -0.21*t62;
  t263 = 0.049*t69;
  t278 = t262 + t263;
  t63 = -0.049*t62;
  t86 = -0.21*t69;
  t117 = t63 + t86;
  t636 = 0.01841*t344;
  t649 = -0.70544*t401;
  t651 = t636 + t649;
  t352 = -0.70544*t344;
  t424 = -0.01841*t401;
  t425 = t352 + t424;
  t970 = -1.11344*t818;
  t1042 = 0.02159*t841;
  t1053 = t970 + t1042;
  t1243 = t9*t69;
  t1253 = t59*t196;
  t1273 = t1243 + t1253;
  t839 = -0.02159*t818;
  t859 = -1.11344*t841;
  t863 = t839 + t859;
  t1337 = -1.*t401*t1273;
  t1402 = t1337 + t916;
  t1490 = t319*t1273;
  t1494 = t401*t748;
  t1509 = t1490 + t1494;
  t48 = 0.049*t9;
  t192 = t9*t117;
  t223 = -0.09*t196;
  t298 = -1.*t278*t196;
  t633 = t425*t574;
  t792 = t651*t748;
  t928 = t863*t918;
  t1084 = t1053*t1061;
  t1094 = -1.*t841*t918;
  t1095 = t794*t1061;
  t1129 = t1094 + t1095;
  t1133 = -1.11344*t1129;
  t1147 = t794*t918;
  t1152 = t841*t1061;
  t1161 = t1147 + t1152;
  t1171 = -0.02159*t1161;
  t1174 = t48 + t192 + t223 + t298 + t633 + t792 + t928 + t1084 + t1133 + t1171;
  t1207 = 0.09*t9;
  t1210 = t9*t278;
  t1218 = 0.049*t196;
  t1235 = t117*t196;
  t1275 = t651*t1273;
  t1287 = t425*t748;
  t1434 = t1053*t1402;
  t1515 = t863*t1509;
  t1560 = t841*t1402;
  t1582 = t794*t1509;
  t1589 = t1560 + t1582;
  t1624 = -0.02159*t1589;
  t1628 = t794*t1402;
  t1665 = -1.*t841*t1509;
  t1674 = t1628 + t1665;
  t1675 = -1.11344*t1674;
  t1694 = t1207 + t1210 + t1218 + t1235 + t1275 + t1287 + t1434 + t1515 + t1624 + t1675;
  t1750 = -1.*t59*t9;
  t1754 = t69*t196;
  t1762 = t1750 + t1754;
  t1767 = -1.*t401*t574;
  t1768 = t319*t1762;
  t1775 = t1767 + t1768;
  t1799 = t401*t1762;
  t1800 = t1054 + t1799;
  t1176 = Power(t1174,2);
  t1696 = Power(t1694,2);
  t1704 = 0.00002025 + t1176 + t1696;
  t1713 = 1/Sqrt(t1704);
  t2069 = t1054 + t1490;
  t2084 = t401*t1273;
  t2087 = t882 + t2084;
  t1976 = -0.21*t59;
  t1987 = -0.049*t69;
  t1999 = t1976 + t1987;
  t1919 = 0.049*t59;
  t1934 = t1919 + t86;
  t1746 = t651*t574;
  t2047 = 0.01841*t319;
  t2058 = 0.70544*t401;
  t2065 = t2047 + t2058;
  t2021 = 0.70544*t319;
  t2026 = t2021 + t424;
  t1765 = t425*t1762;
  t2154 = t916 + t1768;
  t2167 = t1494 + t1799;
  t2284 = 0.02159*t794;
  t2298 = t2284 + t859;
  t2270 = -1.11344*t794;
  t2272 = -0.02159*t841;
  t2275 = t2270 + t2272;
  t2387 = Cos(var1[16]);
  t2395 = Sin(var1[16]);
  t2404 = Cos(var1[17]);
  t2406 = -1.*t2404;
  t2407 = 1. + t2406;
  t2415 = Sin(var1[17]);
  t2435 = -1.*var1[17];
  t2446 = 0.226893 + t2435;
  t2447 = Cos(t2446);
  t2451 = -1.*t2447;
  t2452 = 1. + t2451;
  t2459 = Sin(t2446);
  t2480 = -1.*t2404*t2395;
  t2485 = -1.*t2387*t2415;
  t2491 = t2480 + t2485;
  t2518 = t2387*t2404;
  t2522 = -1.*t2395*t2415;
  t2523 = t2518 + t2522;
  t2538 = Cos(var1[21]);
  t2540 = -1.*t2538;
  t2541 = 1. + t2540;
  t2546 = Sin(var1[21]);
  t2560 = t2447*t2491;
  t2562 = -1.*t2459*t2523;
  t2564 = t2560 + t2562;
  t2530 = t2459*t2491;
  t2532 = t2447*t2523;
  t2533 = t2530 + t2532;
  t2412 = -0.049*t2407;
  t2416 = -0.21*t2415;
  t2417 = t2412 + t2416;
  t2421 = -0.21*t2407;
  t2422 = 0.049*t2415;
  t2425 = t2421 + t2422;
  t2504 = 0.01841*t2452;
  t2505 = -0.70544*t2459;
  t2508 = t2504 + t2505;
  t2454 = -0.70544*t2452;
  t2461 = -0.01841*t2459;
  t2468 = t2454 + t2461;
  t2623 = t2404*t2395;
  t2624 = t2387*t2415;
  t2626 = t2623 + t2624;
  t2543 = -0.02159*t2541;
  t2551 = -1.11344*t2546;
  t2554 = t2543 + t2551;
  t2570 = -1.11344*t2541;
  t2573 = 0.02159*t2546;
  t2576 = t2570 + t2573;
  t2643 = t2447*t2626;
  t2651 = t2459*t2523;
  t2658 = t2643 + t2651;
  t2660 = -1.*t2459*t2626;
  t2666 = t2660 + t2532;
  t2389 = 0.049*t2387;
  t2399 = -0.09*t2395;
  t2420 = t2387*t2417;
  t2430 = -1.*t2395*t2425;
  t2498 = t2468*t2491;
  t2526 = t2508*t2523;
  t2559 = t2533*t2554;
  t2582 = t2564*t2576;
  t2586 = t2538*t2564;
  t2589 = -1.*t2533*t2546;
  t2592 = t2586 + t2589;
  t2593 = -1.11344*t2592;
  t2594 = t2538*t2533;
  t2596 = t2564*t2546;
  t2597 = t2594 + t2596;
  t2598 = -0.02159*t2597;
  t2603 = t2389 + t2399 + t2420 + t2430 + t2498 + t2526 + t2559 + t2582 + t2593 + t2598;
  t2612 = 0.09*t2387;
  t2617 = 0.049*t2395;
  t2619 = t2395*t2417;
  t2620 = t2387*t2425;
  t2627 = t2508*t2626;
  t2629 = t2468*t2523;
  t2659 = t2658*t2554;
  t2667 = t2666*t2576;
  t2670 = t2538*t2658;
  t2675 = t2666*t2546;
  t2677 = t2670 + t2675;
  t2691 = -0.02159*t2677;
  t2694 = t2538*t2666;
  t2695 = -1.*t2658*t2546;
  t2696 = t2694 + t2695;
  t2697 = -1.11344*t2696;
  t2702 = t2612 + t2617 + t2619 + t2620 + t2627 + t2629 + t2659 + t2667 + t2691 + t2697;
  t2748 = -1.*t2387*t2404;
  t2750 = t2395*t2415;
  t2758 = t2748 + t2750;
  t2765 = t2459*t2758;
  t2767 = t2560 + t2765;
  t2770 = -1.*t2459*t2491;
  t2774 = t2447*t2758;
  t2775 = t2770 + t2774;
  t2835 = -0.049*t2387;
  t2840 = 0.09*t2395;
  t2847 = -1.*t2387*t2417;
  t2848 = t2395*t2425;
  t2857 = -1.*t2468*t2491;
  t2859 = -1.*t2508*t2523;
  t2860 = -1.*t2533*t2554;
  t2861 = -1.*t2564*t2576;
  t2862 = 1.11344*t2592;
  t2863 = 0.02159*t2597;
  t2865 = t2835 + t2840 + t2847 + t2848 + t2857 + t2859 + t2860 + t2861 + t2862 + t2863;
  t2714 = -0.09*t2387;
  t2730 = -0.049*t2395;
  t2731 = -1.*t2395*t2417;
  t2734 = -1.*t2387*t2425;
  t2867 = -1.*t2508*t2626;
  t2870 = -1.*t2468*t2523;
  t2872 = -1.*t2658*t2554;
  t2877 = -1.*t2666*t2576;
  t2880 = 0.02159*t2677;
  t2881 = 1.11344*t2696;
  t2886 = t2714 + t2730 + t2731 + t2734 + t2867 + t2870 + t2872 + t2877 + t2880 + t2881;
  t2777 = t2538*t2767;
  t2779 = t2775*t2546;
  t2783 = t2777 + t2779;
  t2793 = t2538*t2775;
  t2794 = -1.*t2767*t2546;
  t2796 = t2793 + t2794;
  t2866 = Power(t2865,2);
  t2896 = Power(t2886,2);
  t2901 = t2866 + t2896;
  t2906 = 1/t2901;
  t2605 = Power(t2603,2);
  t2703 = Power(t2702,2);
  t2705 = 0.00002025 + t2605 + t2703;
  t2711 = 1/Sqrt(t2705);
  t2978 = t2459*t2626;
  t2992 = t2530 + t2978;
  t2994 = t2560 + t2643;
  t2933 = 0.049*t2404;
  t2943 = t2933 + t2416;
  t2953 = -0.21*t2404;
  t2954 = -0.049*t2415;
  t2955 = t2953 + t2954;
  t2744 = t2508*t2491;
  t2966 = 0.01841*t2447;
  t2967 = 0.70544*t2459;
  t2970 = t2966 + t2967;
  t2962 = 0.70544*t2447;
  t2964 = t2962 + t2461;
  t2760 = t2468*t2758;
  t3066 = t2651 + t2765;
  t3068 = t2532 + t2774;
  t3000 = t2538*t2992;
  t3030 = t2994*t2546;
  t3033 = t3000 + t3030;
  t3042 = t2538*t2994;
  t3045 = -1.*t2992*t2546;
  t3050 = t3042 + t3045;
  t2912 = -1.*t2508*t2491;
  t2918 = -1.*t2468*t2758;
  t3070 = t2538*t3066;
  t3071 = t3068*t2546;
  t3080 = t3070 + t3071;
  t3082 = t2538*t3068;
  t3083 = -1.*t3066*t2546;
  t3084 = t3082 + t3083;
  t3166 = 0.02159*t2538;
  t3171 = t3166 + t2551;
  t3179 = -1.11344*t2538;
  t3180 = -0.02159*t2546;
  t3184 = t3179 + t3180;
  t3219 = -1.*t2538*t2658;
  t3221 = -1.*t2666*t2546;
  t3222 = t3219 + t3221;
  t3189 = -1.*t2538*t2533;
  t3194 = -1.*t2564*t2546;
  t3195 = t3189 + t3194;
  p_output1[0]=-1.;
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
  p_output1[11]=1.;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=1.;
  p_output1[20]=0;
  p_output1[21]=0.5*t1713*(2.*t1174*t1694 + 2.*t1174*(t1746 + t1765 + t1053*t1775 - 0.049*t196 - 1.*t117*t196 - 0.02159*(t1800*t794 + t1775*t841) - 1.11344*(t1775*t794 - 1.*t1800*t841) + t1800*t863 - 0.09*t9 - 1.*t278*t9));
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0.5*t1713*(2.*t1694*(t196*t1999 + t1273*t2026 + t1053*t2069 + t633 + t2065*t748 + t792 - 0.02159*(t2087*t794 + t2069*t841) - 1.11344*(t2069*t794 - 1.*t2087*t841) + t2087*t863 + t1934*t9) + 2.*t1174*(t1746 + t1765 - 1.*t1934*t196 + t1053*t2154 + t2065*t574 + t2026*t748 - 0.02159*(t2167*t794 + t2154*t841) - 1.11344*(t2154*t794 - 1.*t2167*t841) + t2167*t863 + t1999*t9));
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0.5*t1713*(2.*t1694*(-0.02159*t1674 + t1509*t2275 + t1402*t2298 - 1.11344*(-1.*t1509*t794 - 1.*t1402*t841)) + 2.*t1174*(-0.02159*t1129 + t1061*t2298 + t2275*t918 - 1.11344*(-1.*t1061*t841 - 1.*t794*t918)));
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
  p_output1[51]=1.;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
  p_output1[60]=0;
  p_output1[61]=1.;
  p_output1[62]=0;
  p_output1[63]=0;
  p_output1[64]=0;
  p_output1[65]=0;
  p_output1[66]=0;
  p_output1[67]=0.5*t2711*(2.*t2603*t2702 + 2.*t2603*(t2714 + t2730 + t2731 + t2734 + t2744 + t2760 + t2554*t2767 + t2576*t2775 - 0.02159*t2783 - 1.11344*t2796));
  p_output1[68]=t2603*t2865*t2906 + t2886*t2906*(t2612 + t2617 + t2619 + t2620 - 1.*t2554*t2767 - 1.*t2576*t2775 + 0.02159*t2783 + 1.11344*t2796 + t2912 + t2918);
  p_output1[69]=0;
  p_output1[70]=0;
  p_output1[71]=0;
  p_output1[72]=0;
  p_output1[73]=0;
  p_output1[74]=0;
  p_output1[75]=0;
  p_output1[76]=0.5*t2711*(2.*t2702*(t2498 + t2526 + t2387*t2943 + t2395*t2955 + t2626*t2964 + t2523*t2970 + t2554*t2992 + t2576*t2994 - 0.02159*t3033 - 1.11344*t3050) + 2.*t2603*(t2744 + t2760 - 1.*t2395*t2943 + t2387*t2955 + t2523*t2964 + t2491*t2970 + t2554*t3066 + t2576*t3068 - 0.02159*t3080 - 1.11344*t3084));
  p_output1[77]=t2603*t2906*(t2857 + t2859 - 1.*t2387*t2943 - 1.*t2395*t2955 - 1.*t2626*t2964 - 1.*t2523*t2970 - 1.*t2554*t2992 - 1.*t2576*t2994 + 0.02159*t3033 + 1.11344*t3050) + t2886*t2906*(t2912 + t2918 + t2395*t2943 - 1.*t2387*t2955 - 1.*t2523*t2964 - 1.*t2491*t2970 - 1.*t2554*t3066 - 1.*t2576*t3068 + 0.02159*t3080 + 1.11344*t3084);
  p_output1[78]=0;
  p_output1[79]=0;
  p_output1[80]=0;
  p_output1[81]=0;
  p_output1[82]=0;
  p_output1[83]=0;
  p_output1[84]=0;
  p_output1[85]=0.5*t2711*(2.*t2603*(-0.02159*t2592 + t2564*t3171 + t2533*t3184 - 1.11344*t3195) + 2.*t2702*(-0.02159*t2696 + t2666*t3171 + t2658*t3184 - 1.11344*t3222));
  p_output1[86]=t2886*t2906*(0.02159*t2592 - 1.*t2564*t3171 - 1.*t2533*t3184 + 1.11344*t3195) + t2603*t2906*(0.02159*t2696 - 1.*t2666*t3171 - 1.*t2658*t3184 + 1.11344*t3222);
  p_output1[87]=0;
  p_output1[88]=0;
  p_output1[89]=-1.;
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

void J_yaLeftStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




