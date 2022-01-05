/*
 * Automatically Generated from Mathematica.
 * Mon 22 Nov 2021 20:32:06 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "yaLeftStance_SLIP.hh"
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
  double t67;
  double t17;
  double t76;
  double t34;
  double t91;
  double t51;
  double t95;
  double t118;
  double t136;
  double t171;
  double t177;
  double t224;
  double t225;
  double t226;
  double t231;
  double t196;
  double t205;
  double t207;
  double t244;
  double t251;
  double t252;
  double t342;
  double t351;
  double t354;
  double t358;
  double t329;
  double t337;
  double t339;
  double t375;
  double t379;
  double t388;
  double t414;
  double t419;
  double t429;
  double t452;
  double t528;
  double t535;
  double t465;
  double t469;
  double t472;
  double t500;
  double t501;
  double t520;
  double t537;
  double t545;
  double t546;
  double t548;
  double t568;
  double t570;
  double t577;
  double t595;
  double t597;
  double t600;
  double t606;
  double t609;
  double t613;
  double t615;
  double t628;
  double t630;
  double t633;
  double t658;
  double t668;
  double t674;
  double t735;
  double t753;
  double t736;
  double t758;
  double t760;
  double t765;
  double t806;
  double t812;
  double t816;
  double t829;
  double t766;
  double t768;
  double t772;
  double t775;
  double t784;
  double t793;
  double t817;
  double t831;
  double t833;
  double t843;
  double t849;
  double t853;
  double t857;
  double t858;
  double t867;
  double t869;
  double t879;
  double t906;
  double t908;
  double t912;
  double t916;
  double t888;
  double t889;
  double t895;
  double t914;
  double t919;
  double t925;
  double t932;
  double t937;
  double t939;
  double t946;
  double t950;
  double t963;
  double t965;
  double t966;
  double t1019;
  double t1023;
  double t1025;
  double t1037;
  double t974;
  double t980;
  double t981;
  double t1029;
  double t1038;
  double t1042;
  double t1047;
  double t1052;
  double t1056;
  double t1059;
  double t1067;
  double t1069;
  double t1070;
  double t1073;
  double t1080;
  double t1082;
  double t1084;
  double t1105;
  double t1110;
  double t1111;
  double t1112;
  double t1115;
  double t1120;
  double t1213;
  double t1220;
  double t1224;
  double t1228;
  double t1116;
  double t1124;
  double t1129;
  double t1132;
  double t1134;
  double t1135;
  double t1138;
  double t1141;
  double t1226;
  double t1142;
  double t1149;
  double t1150;
  double t1278;
  double t1238;
  double t1161;
  double t1168;
  double t1177;
  double t1309;
  double t1302;
  double t1229;
  double t1324;
  double t1239;
  double t1393;
  double t1263;
  double t1343;
  double t1289;
  double t1455;
  double t1458;
  double t1460;
  double t1467;
  double t751;
  double t143;
  double t146;
  double t1558;
  double t1559;
  double t229;
  double t232;
  double t235;
  double t264;
  double t268;
  double t285;
  double t294;
  double t305;
  double t309;
  double t1578;
  double t1581;
  double t356;
  double t362;
  double t363;
  double t402;
  double t407;
  double t409;
  double t1588;
  double t1589;
  double t431;
  double t456;
  double t459;
  double t480;
  double t483;
  double t485;
  double t1600;
  double t1604;
  double t547;
  double t558;
  double t560;
  double t586;
  double t591;
  double t594;
  double t1665;
  double t1666;
  double t1674;
  double t1681;
  double t1631;
  double t1635;
  double t1694;
  double t1743;
  double t1679;
  double t1812;
  double t1803;
  double t1698;
  double t1849;
  double t1688;
  double t1903;
  double t1731;
  double t1866;
  double t1755;
  double t614;
  double t616;
  double t617;
  double t641;
  double t643;
  double t645;
  double t682;
  double t687;
  double t688;
  double t693;
  double t694;
  double t703;
  double t2032;
  double t2039;
  double t2044;
  double t2067;
  double t2078;
  double t2080;
  double t2085;
  double t2112;
  double t2113;
  double t2115;
  double t2118;
  double t2125;
  double t2130;
  double t1463;
  double t1470;
  double t1477;
  double t2141;
  double t2146;
  double t2148;
  double t2150;
  double t2151;
  double t2152;
  double t1485;
  double t1490;
  double t1509;
  double t2160;
  double t2165;
  double t2166;
  double t2171;
  double t2172;
  double t2175;
  double t190;
  double t2209;
  double t2210;
  double t2233;
  double t2234;
  double t2235;
  double t2241;
  double t2243;
  double t2245;
  double t2247;
  double t2249;
  double t2255;
  double t2263;
  double t2264;
  double t2271;
  double t2276;
  double t2278;
  double t2281;
  double t2286;
  double t2287;
  double t2295;
  double t2298;
  double t2299;
  double t2304;
  double t2307;
  double t2309;
  double t2348;
  double t2352;
  double t2355;
  double t2359;
  double t2362;
  double t2363;
  double t2365;
  double t2366;
  double t2368;
  double t2372;
  double t2373;
  double t2376;
  double t2380;
  double t2382;
  double t2384;
  double t2390;
  double t2393;
  double t2396;
  double t2400;
  double t2403;
  double t2405;
  double t2448;
  double t2449;
  double t2451;
  double t2456;
  double t2457;
  double t2460;
  double t2464;
  double t2471;
  double t2473;
  double t2477;
  double t2481;
  double t2483;
  double t2486;
  double t2491;
  double t2493;
  double t2496;
  double t2498;
  double t2505;
  double t2512;
  double t2513;
  double t2520;
  double t2574;
  double t2575;
  double t2576;
  double t2564;
  double t2568;
  double t2571;
  double t2585;
  double t2587;
  double t2589;
  double t2597;
  double t2598;
  double t2600;
  double t2604;
  double t2605;
  double t2614;
  double t2620;
  double t2623;
  double t2624;
  double t2627;
  double t2631;
  double t2638;
  double t2647;
  double t2648;
  double t2653;
  double t2656;
  double t2657;
  double t2660;
  double t2700;
  double t2701;
  double t2702;
  double t2722;
  double t2725;
  double t2727;
  double t2731;
  double t2733;
  double t2737;
  double t2740;
  double t2741;
  double t2744;
  double t2748;
  double t2749;
  double t2750;
  double t2753;
  double t2755;
  double t2756;
  double t2759;
  double t2760;
  double t2764;
  double t2768;
  double t2769;
  double t2773;
  double t2775;
  double t2776;
  double t2779;
  double t1512;
  double t1521;
  double t1529;
  double t1536;
  double t1537;
  double t1542;
  t67 = Cos(var1[3]);
  t17 = Cos(var1[5]);
  t76 = Sin(var1[4]);
  t34 = Sin(var1[3]);
  t91 = Sin(var1[5]);
  t51 = t17*t34;
  t95 = t67*t76*t91;
  t118 = t51 + t95;
  t136 = Cos(var1[6]);
  t171 = Cos(var1[4]);
  t177 = Sin(var1[6]);
  t224 = Cos(var1[7]);
  t225 = -1.*t224;
  t226 = 1. + t225;
  t231 = Sin(var1[7]);
  t196 = t136*t118;
  t205 = t67*t171*t177;
  t207 = t196 + t205;
  t244 = -1.*t67*t17*t76;
  t251 = t34*t91;
  t252 = t244 + t251;
  t342 = Cos(var1[8]);
  t351 = -1.*t342;
  t354 = 1. + t351;
  t358 = Sin(var1[8]);
  t329 = t224*t252;
  t337 = t207*t231;
  t339 = t329 + t337;
  t375 = t67*t171*t136;
  t379 = -1.*t118*t177;
  t388 = t375 + t379;
  t414 = Cos(var1[9]);
  t419 = -1.*t414;
  t429 = 1. + t419;
  t452 = Sin(var1[9]);
  t528 = -1.*var1[9];
  t535 = 0.226893 + t528;
  t465 = t342*t339;
  t469 = t388*t358;
  t472 = t465 + t469;
  t500 = t342*t388;
  t501 = -1.*t339*t358;
  t520 = t500 + t501;
  t537 = Cos(t535);
  t545 = -1.*t537;
  t546 = 1. + t545;
  t548 = Sin(t535);
  t568 = -1.*t452*t472;
  t570 = t414*t520;
  t577 = t568 + t570;
  t595 = t414*t472;
  t597 = t452*t520;
  t600 = t595 + t597;
  t606 = Cos(var1[13]);
  t609 = -1.*t606;
  t613 = 1. + t609;
  t615 = Sin(var1[13]);
  t628 = t548*t577;
  t630 = t537*t600;
  t633 = t628 + t630;
  t658 = t537*t577;
  t668 = -1.*t548*t600;
  t674 = t658 + t668;
  t735 = Sin(var1[14]);
  t753 = Cos(var1[14]);
  t736 = 0.135*t67*t171*t735;
  t758 = -1.*t753;
  t760 = 1. + t758;
  t765 = -0.135*t760*t118;
  t806 = Cos(var1[15]);
  t812 = -1.*t806;
  t816 = 1. + t812;
  t829 = Sin(var1[15]);
  t766 = t67*t171*t735;
  t768 = t753*t118;
  t772 = t766 + t768;
  t775 = t753*t67*t171;
  t784 = -1.*t735*t118;
  t793 = t775 + t784;
  t817 = -0.049*t816;
  t831 = -0.135*t829;
  t833 = t817 + t831;
  t843 = t833*t252;
  t849 = -0.135*t816;
  t853 = 0.049*t829;
  t857 = t849 + t853;
  t858 = t857*t772;
  t867 = -1.*t829*t252;
  t869 = t806*t772;
  t879 = t867 + t869;
  t906 = Cos(var1[16]);
  t908 = -1.*t906;
  t912 = 1. + t908;
  t916 = Sin(var1[16]);
  t888 = t806*t252;
  t889 = t829*t772;
  t895 = t888 + t889;
  t914 = -0.09*t912;
  t919 = 0.049*t916;
  t925 = t914 + t919;
  t932 = t925*t793;
  t937 = -0.049*t912;
  t939 = -0.09*t916;
  t946 = t937 + t939;
  t950 = t946*t895;
  t963 = t916*t793;
  t965 = t906*t895;
  t966 = t963 + t965;
  t1019 = Cos(var1[17]);
  t1023 = -1.*t1019;
  t1025 = 1. + t1023;
  t1037 = Sin(var1[17]);
  t974 = t906*t793;
  t980 = -1.*t916*t895;
  t981 = t974 + t980;
  t1029 = -0.049*t1025;
  t1038 = -0.21*t1037;
  t1042 = t1029 + t1038;
  t1047 = t1042*t966;
  t1052 = -0.21*t1025;
  t1056 = 0.049*t1037;
  t1059 = t1052 + t1056;
  t1067 = t1059*t981;
  t1069 = -1.*t1037*t966;
  t1070 = t1019*t981;
  t1073 = t1069 + t1070;
  t1080 = t1019*t966;
  t1082 = t1037*t981;
  t1084 = t1080 + t1082;
  t1105 = -1.*var1[17];
  t1110 = 0.226893 + t1105;
  t1111 = Cos(t1110);
  t1112 = -1.*t1111;
  t1115 = 1. + t1112;
  t1120 = Sin(t1110);
  t1213 = Cos(var1[20]);
  t1220 = -1.*t1213;
  t1224 = 1. + t1220;
  t1228 = Sin(var1[20]);
  t1116 = -0.70544*t1115;
  t1124 = -0.01841*t1120;
  t1129 = t1116 + t1124;
  t1132 = t1129*t1073;
  t1134 = 0.01841*t1115;
  t1135 = -0.70544*t1120;
  t1138 = t1134 + t1135;
  t1141 = t1138*t1084;
  t1226 = 0.07769774964800001*t1224;
  t1142 = t1120*t1073;
  t1149 = t1111*t1084;
  t1150 = t1142 + t1149;
  t1278 = -0.0004284921280000001*t1224;
  t1238 = 0.005481192614*t1224;
  t1161 = t1111*t1073;
  t1168 = -1.*t1120*t1084;
  t1177 = t1161 + t1168;
  t1309 = -0.077936*t1228;
  t1302 = -0.996943*t1228;
  t1229 = -0.005498*t1228;
  t1324 = -0.005481192614*t1224;
  t1239 = 0.077936*t1228;
  t1393 = -0.07769774964800001*t1224;
  t1263 = 0.005498*t1228;
  t1343 = 0.0004284921280000001*t1224;
  t1289 = 0.996943*t1228;
  t1455 = Cos(var1[21]);
  t1458 = -1.*t1455;
  t1460 = 1. + t1458;
  t1467 = Sin(var1[21]);
  t751 = -0.0233*t252;
  t143 = -1.*t136;
  t146 = 1. + t143;
  t1558 = 0.135*t146*t118;
  t1559 = -0.135*t67*t171*t177;
  t229 = 0.135*t226;
  t232 = 0.049*t231;
  t235 = t229 + t232;
  t264 = -0.049*t226;
  t268 = 0.135*t231;
  t285 = t264 + t268;
  t294 = t224*t207;
  t305 = -1.*t252*t231;
  t309 = t294 + t305;
  t1578 = t207*t235;
  t1581 = t252*t285;
  t356 = -0.049*t354;
  t362 = -0.09*t358;
  t363 = t356 + t362;
  t402 = -0.09*t354;
  t407 = 0.049*t358;
  t409 = t402 + t407;
  t1588 = t339*t363;
  t1589 = t388*t409;
  t431 = -0.049*t429;
  t456 = -0.21*t452;
  t459 = t431 + t456;
  t480 = -0.21*t429;
  t483 = 0.049*t452;
  t485 = t480 + t483;
  t1600 = t459*t472;
  t1604 = t485*t520;
  t547 = -0.70544*t546;
  t558 = -0.01841*t548;
  t560 = t547 + t558;
  t586 = 0.01841*t546;
  t591 = -0.70544*t548;
  t594 = t586 + t591;
  t1665 = Cos(var1[12]);
  t1666 = -1.*t1665;
  t1674 = 1. + t1666;
  t1681 = Sin(var1[12]);
  t1631 = t560*t577;
  t1635 = t594*t600;
  t1694 = -0.07769774964800001*t1674;
  t1743 = -0.0004284921280000001*t1674;
  t1679 = -0.005481192614*t1674;
  t1812 = 0.077936*t1681;
  t1803 = -0.996943*t1681;
  t1698 = 0.005498*t1681;
  t1849 = 0.005481192614*t1674;
  t1688 = -0.077936*t1681;
  t1903 = 0.07769774964800001*t1674;
  t1731 = -0.005498*t1681;
  t1866 = 0.0004284921280000001*t1674;
  t1755 = 0.996943*t1681;
  t614 = -0.02159*t613;
  t616 = -1.11344*t615;
  t617 = t614 + t616;
  t641 = -1.11344*t613;
  t643 = 0.02159*t615;
  t645 = t641 + t643;
  t682 = -1.*t615*t633;
  t687 = t606*t674;
  t688 = t682 + t687;
  t693 = t606*t633;
  t694 = t615*t674;
  t703 = t693 + t694;
  t2032 = t753*t34;
  t2039 = t766 + t2032;
  t2044 = -1.*t735*t34;
  t2067 = t775 + t2044;
  t2078 = t829*t2039;
  t2080 = -1.*t806*t67*t76;
  t2085 = t2078 + t2080;
  t2112 = t916*t2067;
  t2113 = t906*t2085;
  t2115 = t2112 + t2113;
  t2118 = t906*t2067;
  t2125 = -1.*t916*t2085;
  t2130 = t2118 + t2125;
  t1463 = -0.02159*t1460;
  t1470 = -1.11344*t1467;
  t1477 = t1463 + t1470;
  t2141 = -1.*t1037*t2115;
  t2146 = t1019*t2130;
  t2148 = t2141 + t2146;
  t2150 = t1019*t2115;
  t2151 = t1037*t2130;
  t2152 = t2150 + t2151;
  t1485 = -1.11344*t1460;
  t1490 = 0.02159*t1467;
  t1509 = t1485 + t1490;
  t2160 = t1120*t2148;
  t2165 = t1111*t2152;
  t2166 = t2160 + t2165;
  t2171 = t1111*t2148;
  t2172 = -1.*t1120*t2152;
  t2175 = t2171 + t2172;
  t190 = 0.135*t67*t171*t177;
  t2209 = t136*t34;
  t2210 = t2209 + t205;
  t2233 = -1.*t67*t224*t76;
  t2234 = t2210*t231;
  t2235 = t2233 + t2234;
  t2241 = -1.*t34*t177;
  t2243 = t375 + t2241;
  t2245 = t342*t2235;
  t2247 = t2243*t358;
  t2249 = t2245 + t2247;
  t2255 = t342*t2243;
  t2263 = -1.*t2235*t358;
  t2264 = t2255 + t2263;
  t2271 = -1.*t452*t2249;
  t2276 = t414*t2264;
  t2278 = t2271 + t2276;
  t2281 = t414*t2249;
  t2286 = t452*t2264;
  t2287 = t2281 + t2286;
  t2295 = t548*t2278;
  t2298 = t537*t2287;
  t2299 = t2295 + t2298;
  t2304 = t537*t2278;
  t2307 = -1.*t548*t2287;
  t2309 = t2304 + t2307;
  t2348 = t806*t171;
  t2352 = t735*t829*t76;
  t2355 = t2348 + t2352;
  t2359 = t753*t916*t76;
  t2362 = t906*t2355;
  t2363 = t2359 + t2362;
  t2365 = t753*t906*t76;
  t2366 = -1.*t916*t2355;
  t2368 = t2365 + t2366;
  t2372 = -1.*t1037*t2363;
  t2373 = t1019*t2368;
  t2376 = t2372 + t2373;
  t2380 = t1019*t2363;
  t2382 = t1037*t2368;
  t2384 = t2380 + t2382;
  t2390 = t1120*t2376;
  t2393 = t1111*t2384;
  t2396 = t2390 + t2393;
  t2400 = t1111*t2376;
  t2403 = -1.*t1120*t2384;
  t2405 = t2400 + t2403;
  t2448 = t171*t224;
  t2449 = t76*t177*t231;
  t2451 = t2448 + t2449;
  t2456 = t342*t2451;
  t2457 = t136*t76*t358;
  t2460 = t2456 + t2457;
  t2464 = t136*t342*t76;
  t2471 = -1.*t2451*t358;
  t2473 = t2464 + t2471;
  t2477 = -1.*t452*t2460;
  t2481 = t414*t2473;
  t2483 = t2477 + t2481;
  t2486 = t414*t2460;
  t2491 = t452*t2473;
  t2493 = t2486 + t2491;
  t2496 = t548*t2483;
  t2498 = t537*t2493;
  t2505 = t2496 + t2498;
  t2512 = t537*t2483;
  t2513 = -1.*t548*t2493;
  t2520 = t2512 + t2513;
  t2574 = t753*t67;
  t2575 = -1.*t171*t735*t34;
  t2576 = t2574 + t2575;
  t2564 = -1.*t67*t735;
  t2568 = -1.*t753*t171*t34;
  t2571 = t2564 + t2568;
  t2585 = t829*t2576;
  t2587 = t806*t34*t76;
  t2589 = t2585 + t2587;
  t2597 = t916*t2571;
  t2598 = t906*t2589;
  t2600 = t2597 + t2598;
  t2604 = t906*t2571;
  t2605 = -1.*t916*t2589;
  t2614 = t2604 + t2605;
  t2620 = -1.*t1037*t2600;
  t2623 = t1019*t2614;
  t2624 = t2620 + t2623;
  t2627 = t1019*t2600;
  t2631 = t1037*t2614;
  t2638 = t2627 + t2631;
  t2647 = t1120*t2624;
  t2648 = t1111*t2638;
  t2653 = t2647 + t2648;
  t2656 = t1111*t2624;
  t2657 = -1.*t1120*t2638;
  t2660 = t2656 + t2657;
  t2700 = t67*t136;
  t2701 = -1.*t171*t34*t177;
  t2702 = t2700 + t2701;
  t2722 = t224*t34*t76;
  t2725 = t2702*t231;
  t2727 = t2722 + t2725;
  t2731 = -1.*t171*t136*t34;
  t2733 = -1.*t67*t177;
  t2737 = t2731 + t2733;
  t2740 = t342*t2727;
  t2741 = t2737*t358;
  t2744 = t2740 + t2741;
  t2748 = t342*t2737;
  t2749 = -1.*t2727*t358;
  t2750 = t2748 + t2749;
  t2753 = -1.*t452*t2744;
  t2755 = t414*t2750;
  t2756 = t2753 + t2755;
  t2759 = t414*t2744;
  t2760 = t452*t2750;
  t2764 = t2759 + t2760;
  t2768 = t548*t2756;
  t2769 = t537*t2764;
  t2773 = t2768 + t2769;
  t2775 = t537*t2756;
  t2776 = -1.*t548*t2764;
  t2779 = t2775 + t2776;
  t1512 = -1.*t1467*t1150;
  t1521 = t1455*t1177;
  t1529 = t1512 + t1521;
  t1536 = t1455*t1150;
  t1537 = t1467*t1177;
  t1542 = t1536 + t1537;
  p_output1[0]=t118;
  p_output1[1]=t17*t67*t76 - 1.*t34*t91;
  p_output1[2]=var1[7];
  p_output1[3]=-0.135*t118*t146 + t190 - 1.*t207*t235 - 1.*t252*t285 - 0.1305*t309 - 1.*t339*t363 - 1.*t388*t409 - 1.*t459*t472 - 1.*t485*t520 - 1.*t560*t577 - 1.*t594*t600 - 1.*t617*t633 - 1.*t645*t674 + 1.11344*t688 + 0.02159*t703 - 1.*var1[2] + 0.0288377642750394*(1.316608*(t1558 + t1559 + t1578 + t1581 + 0.135*t309 - 0.049*t339 - 0.0343*t388 + var1[2]) + 5.79228*(t1558 + t1559 + t1578 + t1581 + t1588 + t1589 + 0.17081*t309 - 0.04895*t472 - 0.14946*t520 + var1[2]) + 1.03008*(t1558 + t1559 + t1578 + t1581 + t1588 + t1589 + t1600 + t1604 + 0.132168*t309 - 0.255862*t577 - 0.007761*t600 + var1[2]) + 0.763*(t1558 + t1559 + t1578 + t1581 + t1588 + t1589 + t1600 + t1604 + 0.130288*t309 - 0.45406*t577 - 0.000421*t600 + var1[2]) + 10.33*(0.000346*t118 + 0.05066*t252 + 0.02841*t171*t67 + var1[2]) + 1.03*(t1558 + t1559 + t1578 + t1581 + t1588 + t1589 + t1600 + t1604 + t1631 + t1635 + 0.127241*t309 - 0.004179*t633 - 0.826587*t674 + var1[2]) + 0.1498*(t1558 + t1559 + t1578 + t1581 + t1588 + t1589 + t1600 + t1604 + t1631 + t1635 + 0.13064*t309 + t617*t633 + t645*t674 - 1.11818*t688 + 0.00589*t703 + var1[2]) + 1.965608*(t1558 + t1559 + 0.1351*t207 + 0.01793*t388 + t751 + var1[2]) + 1.965608*(t736 + t751 + t765 - 0.1351*t772 + 0.01793*t793 + var1[2]) + 1.316608*(t736 + t765 - 0.0343*t793 + t843 + t858 - 0.135*t879 - 0.049*t895 + var1[2]) + 1.03008*(t1047 + t1067 - 0.255862*t1073 - 0.007761*t1084 + t736 + t765 + t843 + t858 - 0.132168*t879 + t932 + t950 + var1[2]) + 0.1498*(t1047 + t1067 + t1132 + t1141 + t1150*t1477 + t1177*t1509 - 1.11818*t1529 + 0.00589*t1542 + t736 + t765 + t843 + t858 - 0.13064*t879 + t932 + t950 + var1[2]) + 0.763*(t1047 + t1067 - 0.45406*t1073 - 0.000421*t1084 + t736 + t765 + t843 + t858 - 0.130288*t879 + t932 + t950 + var1[2]) + 1.03*(t1047 + t1067 + t1132 + t1141 - 0.004179*t1150 - 0.826587*t1177 + t736 + t765 + t843 + t858 - 0.127241*t879 + t932 + t950 + var1[2]) + 5.79228*(t736 + t765 + t843 + t858 - 0.17081*t879 + t932 + t950 - 0.04895*t966 - 0.14946*t981 + var1[2]) + 0.126*(t1558 + t1559 + t1578 + t1581 + t1588 + t1589 + t1600 + t1604 + t1631 + t1635 - 0.617968*((t1812 + t1849)*t309 + (t1803 + t1866)*t633 + (1. - 0.999969365345*t1674)*t674) + 0.126739*((1. - 0.006104248100000001*t1674)*t309 + (t1698 + t1903)*t633 + (t1688 + t1849)*t674) + 0.01889*((t1731 + t1903)*t309 + (1. - 0.993925573253*t1674)*t633 + (t1755 + t1866)*t674) + var1[2] + t309*(0.000033783761634830594*t1674 - 0.6934341012630001*(t1679 + t1688) - 0.021877537552*(t1694 + t1698) - 2.1934241414728571e-7*var1[12]) + t633*(-0.021744644052735636*t1674 + 0.005534467322*(t1694 + t1731) - 0.6934341012630001*(t1743 + t1755) - 1.7147089040178687e-8*var1[12]) + t674*(-0.6934128581485427*t1674 - 0.021877537552*(t1743 + t1803) + 0.005534467322*(t1679 + t1812) - 1.2096424700126054e-9*var1[12])) + 0.126*(t1047 + t1067 + t1132 + t1141 + t736 + t765 + t843 + t858 - 0.126739*(t1177*(t1239 + t1324) + t1150*(t1229 + t1393) + (1. - 0.006104248100000001*t1224)*t879) - 0.617968*(t1177*(1. - 0.999969365345*t1224) + t1150*(t1302 + t1343) + (t1309 + t1324)*t879) + 0.01889*(t1150*(1. - 0.993925573253*t1224) + t1177*(t1289 + t1343) + (t1263 + t1393)*t879) + t932 + t950 + var1[2] + t1150*(-0.021744644052735636*t1224 - 0.005534467322*(t1226 + t1263) - 0.6934341012630001*(t1278 + t1289) - 1.7147089040178687e-8*var1[20]) + t1177*(-0.6934128581485427*t1224 - 0.021877537552*(t1278 + t1302) - 0.005534467322*(t1238 + t1309) - 1.2096424700126054e-9*var1[20]) + t879*(-0.000033783761634830594*t1224 - 0.021877537552*(t1226 + t1229) - 0.6934341012630001*(t1238 + t1239) + 2.1934241414728571e-7*var1[20])));
  p_output1[4]=t190 + t1042*t2115 + t1059*t2130 + t1129*t2148 + t1138*t2152 + t1477*t2166 + t1509*t2175 - 1.11344*(-1.*t1467*t2166 + t1455*t2175) - 0.02159*(t1455*t2166 + t1467*t2175) - 1.*t2210*t235 - 0.135*t146*t34 - 1.*t2235*t363 - 1.*t2243*t409 - 1.*t2249*t459 - 1.*t2264*t485 - 1.*t2278*t560 - 1.*t2287*t594 + 1.11344*(t2309*t606 - 1.*t2299*t615) + 0.02159*(t2299*t606 + t2309*t615) - 1.*t2299*t617 - 1.*t2309*t645 + t736 + t285*t67*t76 - 0.1305*(t2210*t224 + t231*t67*t76) - 0.135*t34*t760 - 0.1305*(t2039*t806 + t67*t76*t829) - 1.*t67*t76*t833 + t2039*t857 + t2067*t925 + t2085*t946;
  p_output1[5]=t1042*t2363 + t1059*t2368 + t1129*t2376 + t1138*t2384 + t1477*t2396 + t1509*t2405 - 1.11344*(-1.*t1467*t2396 + t1455*t2405) - 0.02159*(t1455*t2396 + t1467*t2405) - 1.*t171*t285 - 1.*t2451*t363 - 1.*t2460*t459 - 1.*t2473*t485 - 1.*t2483*t560 - 1.*t2493*t594 + 1.11344*(t2520*t606 - 1.*t2505*t615) + 0.02159*(t2505*t606 + t2520*t615) - 1.*t2505*t617 - 1.*t2520*t645 + 0.135*t177*t76 - 1.*t177*t235*t76 - 1.*t136*t409*t76 + 0.135*t735*t76 - 0.1305*(-1.*t171*t231 + t177*t224*t76) - 0.1305*(t735*t76*t806 - 1.*t171*t829) + t171*t833 + t735*t76*t857 + t753*t76*t925 + t2355*t946;
  p_output1[6]=t1042*t2600 + t1059*t2614 + t1129*t2624 + t1138*t2638 + t1477*t2653 + t1509*t2660 - 1.11344*(-1.*t1467*t2653 + t1455*t2660) - 0.02159*(t1455*t2653 + t1467*t2660) - 1.*t235*t2702 - 0.135*t171*t177*t34 - 1.*t2727*t363 - 1.*t2737*t409 - 1.*t2744*t459 - 1.*t2750*t485 - 1.*t2756*t560 - 1.*t2764*t594 + 1.11344*(t2779*t606 - 1.*t2773*t615) + 0.02159*(t2773*t606 + t2779*t615) - 1.*t2773*t617 - 1.*t2779*t645 - 0.135*t146*t67 - 0.135*t171*t34*t735 - 1.*t285*t34*t76 - 0.1305*(t224*t2702 - 1.*t231*t34*t76) - 0.135*t67*t760 - 0.1305*(t2576*t806 - 1.*t34*t76*t829) + t34*t76*t833 + t2576*t857 + t2571*t925 + t2589*t946;
  p_output1[7]=var1[15];
  p_output1[8]=7.142857142857142*(0. - 0.10724599999999995*t1529 - 0.08999*t1542);
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

void yaLeftStance_SLIP_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




