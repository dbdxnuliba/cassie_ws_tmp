/*
 * Automatically Generated from Mathematica.
 * Mon 22 Nov 2021 20:32:09 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "yaRightStance_SLIP.hh"
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
  double t119;
  double t51;
  double t120;
  double t91;
  double t126;
  double t95;
  double t130;
  double t169;
  double t329;
  double t337;
  double t364;
  double t410;
  double t292;
  double t294;
  double t570;
  double t478;
  double t500;
  double t527;
  double t630;
  double t635;
  double t658;
  double t687;
  double t692;
  double t693;
  double t706;
  double t720;
  double t730;
  double t734;
  double t869;
  double t882;
  double t888;
  double t896;
  double t900;
  double t905;
  double t963;
  double t1088;
  double t1089;
  double t974;
  double t990;
  double t992;
  double t1076;
  double t1080;
  double t1082;
  double t1090;
  double t1092;
  double t1095;
  double t1100;
  double t1142;
  double t1149;
  double t1154;
  double t1208;
  double t1225;
  double t1226;
  double t1237;
  double t1238;
  double t1242;
  double t1246;
  double t1250;
  double t1253;
  double t1264;
  double t1291;
  double t1292;
  double t1293;
  double t583;
  double t585;
  double t1353;
  double t375;
  double t465;
  double t469;
  double t1362;
  double t597;
  double t605;
  double t628;
  double t768;
  double t774;
  double t775;
  double t1387;
  double t1391;
  double t694;
  double t717;
  double t719;
  double t803;
  double t804;
  double t859;
  double t1416;
  double t1426;
  double t934;
  double t965;
  double t973;
  double t1015;
  double t1052;
  double t1070;
  double t1439;
  double t1446;
  double t1097;
  double t1104;
  double t1110;
  double t1195;
  double t1201;
  double t1202;
  double t1573;
  double t1583;
  double t1584;
  double t1587;
  double t1549;
  double t1552;
  double t1586;
  double t1629;
  double t1597;
  double t1694;
  double t1679;
  double t1590;
  double t1724;
  double t1599;
  double t1809;
  double t1618;
  double t1737;
  double t1638;
  double t1244;
  double t1248;
  double t1249;
  double t1278;
  double t1289;
  double t1290;
  double t1299;
  double t1302;
  double t1307;
  double t1312;
  double t1314;
  double t1317;
  double t1354;
  double t1941;
  double t1967;
  double t1946;
  double t1948;
  double t1954;
  double t1969;
  double t1989;
  double t1992;
  double t1994;
  double t1973;
  double t1984;
  double t1985;
  double t2016;
  double t2020;
  double t2021;
  double t2024;
  double t2022;
  double t2025;
  double t2027;
  double t2031;
  double t2032;
  double t2042;
  double t2060;
  double t2072;
  double t2075;
  double t2078;
  double t2086;
  double t2092;
  double t2107;
  double t2111;
  double t2132;
  double t2146;
  double t2149;
  double t2151;
  double t2150;
  double t2159;
  double t2160;
  double t2165;
  double t2169;
  double t2171;
  double t2176;
  double t2178;
  double t2183;
  double t2185;
  double t2187;
  double t2221;
  double t2224;
  double t2226;
  double t2234;
  double t2191;
  double t2197;
  double t2200;
  double t2227;
  double t2239;
  double t2244;
  double t2245;
  double t2247;
  double t2254;
  double t2255;
  double t2257;
  double t2265;
  double t2276;
  double t2279;
  double t2286;
  double t2293;
  double t2295;
  double t2317;
  double t2318;
  double t2321;
  double t2323;
  double t2324;
  double t2326;
  double t2380;
  double t2382;
  double t2387;
  double t2397;
  double t2325;
  double t2329;
  double t2333;
  double t2334;
  double t2337;
  double t2340;
  double t2341;
  double t2346;
  double t2413;
  double t2348;
  double t2352;
  double t2356;
  double t2443;
  double t2393;
  double t2362;
  double t2364;
  double t2365;
  double t2475;
  double t2457;
  double t2415;
  double t2494;
  double t2400;
  double t2557;
  double t2432;
  double t2510;
  double t2444;
  double t2617;
  double t2623;
  double t2626;
  double t2631;
  double t311;
  double t2722;
  double t2725;
  double t2739;
  double t2740;
  double t2748;
  double t2752;
  double t2755;
  double t2769;
  double t2774;
  double t2775;
  double t2782;
  double t2783;
  double t2785;
  double t2790;
  double t2791;
  double t2801;
  double t2804;
  double t2806;
  double t2810;
  double t2813;
  double t2814;
  double t2816;
  double t2824;
  double t2829;
  double t2837;
  double t2881;
  double t2883;
  double t2906;
  double t2908;
  double t2911;
  double t2915;
  double t2916;
  double t2919;
  double t2920;
  double t2921;
  double t2924;
  double t2925;
  double t2926;
  double t2627;
  double t2639;
  double t2647;
  double t2929;
  double t2930;
  double t2931;
  double t2933;
  double t2934;
  double t2938;
  double t2655;
  double t2656;
  double t2664;
  double t2940;
  double t2941;
  double t2942;
  double t2944;
  double t2945;
  double t2946;
  double t2985;
  double t2986;
  double t2987;
  double t2992;
  double t2994;
  double t2996;
  double t2998;
  double t3000;
  double t3001;
  double t3004;
  double t3005;
  double t3006;
  double t3010;
  double t3011;
  double t3013;
  double t3016;
  double t3022;
  double t3023;
  double t3025;
  double t3026;
  double t3027;
  double t3055;
  double t3056;
  double t3057;
  double t3065;
  double t3067;
  double t3071;
  double t3079;
  double t3083;
  double t3088;
  double t3098;
  double t3101;
  double t3102;
  double t3106;
  double t3112;
  double t3114;
  double t3120;
  double t3121;
  double t3122;
  double t3131;
  double t3132;
  double t3134;
  double t3178;
  double t3179;
  double t3181;
  double t3171;
  double t3172;
  double t3173;
  double t3184;
  double t3185;
  double t3188;
  double t3200;
  double t3208;
  double t3209;
  double t3212;
  double t3213;
  double t3214;
  double t3222;
  double t3223;
  double t3224;
  double t3229;
  double t3233;
  double t3241;
  double t3245;
  double t3252;
  double t3254;
  double t3257;
  double t3258;
  double t3262;
  double t3287;
  double t3292;
  double t3294;
  double t3310;
  double t3312;
  double t3313;
  double t3323;
  double t3325;
  double t3326;
  double t3329;
  double t3331;
  double t3333;
  double t3336;
  double t3337;
  double t3339;
  double t3349;
  double t3350;
  double t3352;
  double t3354;
  double t3356;
  double t3358;
  double t3362;
  double t3365;
  double t3366;
  double t3373;
  double t3375;
  double t3378;
  double t2672;
  double t2674;
  double t2678;
  double t2691;
  double t2693;
  double t2694;
  t119 = Cos(var1[3]);
  t51 = Cos(var1[5]);
  t120 = Sin(var1[4]);
  t91 = Sin(var1[3]);
  t126 = Sin(var1[5]);
  t95 = t51*t91;
  t130 = t119*t120*t126;
  t169 = t95 + t130;
  t329 = Cos(var1[15]);
  t337 = -1.*t329;
  t364 = 1. + t337;
  t410 = Sin(var1[15]);
  t292 = Cos(var1[4]);
  t294 = Sin(var1[14]);
  t570 = Cos(var1[14]);
  t478 = -1.*t119*t51*t120;
  t500 = t91*t126;
  t527 = t478 + t500;
  t630 = t119*t292*t294;
  t635 = t570*t169;
  t658 = t630 + t635;
  t687 = Cos(var1[16]);
  t692 = -1.*t687;
  t693 = 1. + t692;
  t706 = Sin(var1[16]);
  t720 = t570*t119*t292;
  t730 = -1.*t294*t169;
  t734 = t720 + t730;
  t869 = t329*t527;
  t882 = t410*t658;
  t888 = t869 + t882;
  t896 = Cos(var1[17]);
  t900 = -1.*t896;
  t905 = 1. + t900;
  t963 = Sin(var1[17]);
  t1088 = -1.*var1[17];
  t1089 = 0.226893 + t1088;
  t974 = t706*t734;
  t990 = t687*t888;
  t992 = t974 + t990;
  t1076 = t687*t734;
  t1080 = -1.*t706*t888;
  t1082 = t1076 + t1080;
  t1090 = Cos(t1089);
  t1092 = -1.*t1090;
  t1095 = 1. + t1092;
  t1100 = Sin(t1089);
  t1142 = -1.*t963*t992;
  t1149 = t896*t1082;
  t1154 = t1142 + t1149;
  t1208 = t896*t992;
  t1225 = t963*t1082;
  t1226 = t1208 + t1225;
  t1237 = Cos(var1[21]);
  t1238 = -1.*t1237;
  t1242 = 1. + t1238;
  t1246 = Sin(var1[21]);
  t1250 = t1100*t1154;
  t1253 = t1090*t1226;
  t1264 = t1250 + t1253;
  t1291 = t1090*t1154;
  t1292 = -1.*t1100*t1226;
  t1293 = t1291 + t1292;
  t583 = -1.*t570;
  t585 = 1. + t583;
  t1353 = 0.135*t119*t292*t294;
  t375 = -0.049*t364;
  t465 = -0.135*t410;
  t469 = t375 + t465;
  t1362 = -0.135*t585*t169;
  t597 = -0.135*t364;
  t605 = 0.049*t410;
  t628 = t597 + t605;
  t768 = -1.*t410*t527;
  t774 = t329*t658;
  t775 = t768 + t774;
  t1387 = t469*t527;
  t1391 = t628*t658;
  t694 = -0.09*t693;
  t717 = 0.049*t706;
  t719 = t694 + t717;
  t803 = -0.049*t693;
  t804 = -0.09*t706;
  t859 = t803 + t804;
  t1416 = t719*t734;
  t1426 = t859*t888;
  t934 = -0.049*t905;
  t965 = -0.21*t963;
  t973 = t934 + t965;
  t1015 = -0.21*t905;
  t1052 = 0.049*t963;
  t1070 = t1015 + t1052;
  t1439 = t973*t992;
  t1446 = t1070*t1082;
  t1097 = -0.70544*t1095;
  t1104 = -0.01841*t1100;
  t1110 = t1097 + t1104;
  t1195 = 0.01841*t1095;
  t1201 = -0.70544*t1100;
  t1202 = t1195 + t1201;
  t1573 = Cos(var1[20]);
  t1583 = -1.*t1573;
  t1584 = 1. + t1583;
  t1587 = Sin(var1[20]);
  t1549 = t1110*t1154;
  t1552 = t1202*t1226;
  t1586 = 0.07769774964800001*t1584;
  t1629 = -0.0004284921280000001*t1584;
  t1597 = 0.005481192614*t1584;
  t1694 = -0.077936*t1587;
  t1679 = -0.996943*t1587;
  t1590 = -0.005498*t1587;
  t1724 = -0.005481192614*t1584;
  t1599 = 0.077936*t1587;
  t1809 = -0.07769774964800001*t1584;
  t1618 = 0.005498*t1587;
  t1737 = 0.0004284921280000001*t1584;
  t1638 = 0.996943*t1587;
  t1244 = -0.02159*t1242;
  t1248 = -1.11344*t1246;
  t1249 = t1244 + t1248;
  t1278 = -1.11344*t1242;
  t1289 = 0.02159*t1246;
  t1290 = t1278 + t1289;
  t1299 = -1.*t1246*t1264;
  t1302 = t1237*t1293;
  t1307 = t1299 + t1302;
  t1312 = t1237*t1264;
  t1314 = t1246*t1293;
  t1317 = t1312 + t1314;
  t1354 = -0.0233*t527;
  t1941 = Cos(var1[6]);
  t1967 = Sin(var1[6]);
  t1946 = -1.*t1941;
  t1948 = 1. + t1946;
  t1954 = 0.135*t1948*t169;
  t1969 = -0.135*t119*t292*t1967;
  t1989 = t119*t292*t1941;
  t1992 = -1.*t169*t1967;
  t1994 = t1989 + t1992;
  t1973 = t1941*t169;
  t1984 = t119*t292*t1967;
  t1985 = t1973 + t1984;
  t2016 = Cos(var1[7]);
  t2020 = -1.*t2016;
  t2021 = 1. + t2020;
  t2024 = Sin(var1[7]);
  t2022 = 0.135*t2021;
  t2025 = 0.049*t2024;
  t2027 = t2022 + t2025;
  t2031 = t1985*t2027;
  t2032 = -0.049*t2021;
  t2042 = 0.135*t2024;
  t2060 = t2032 + t2042;
  t2072 = t527*t2060;
  t2075 = t2016*t1985;
  t2078 = -1.*t527*t2024;
  t2086 = t2075 + t2078;
  t2092 = t2016*t527;
  t2107 = t1985*t2024;
  t2111 = t2092 + t2107;
  t2132 = Cos(var1[8]);
  t2146 = -1.*t2132;
  t2149 = 1. + t2146;
  t2151 = Sin(var1[8]);
  t2150 = -0.049*t2149;
  t2159 = -0.09*t2151;
  t2160 = t2150 + t2159;
  t2165 = t2111*t2160;
  t2169 = -0.09*t2149;
  t2171 = 0.049*t2151;
  t2176 = t2169 + t2171;
  t2178 = t1994*t2176;
  t2183 = t2132*t2111;
  t2185 = t1994*t2151;
  t2187 = t2183 + t2185;
  t2221 = Cos(var1[9]);
  t2224 = -1.*t2221;
  t2226 = 1. + t2224;
  t2234 = Sin(var1[9]);
  t2191 = t2132*t1994;
  t2197 = -1.*t2111*t2151;
  t2200 = t2191 + t2197;
  t2227 = -0.049*t2226;
  t2239 = -0.21*t2234;
  t2244 = t2227 + t2239;
  t2245 = t2244*t2187;
  t2247 = -0.21*t2226;
  t2254 = 0.049*t2234;
  t2255 = t2247 + t2254;
  t2257 = t2255*t2200;
  t2265 = -1.*t2234*t2187;
  t2276 = t2221*t2200;
  t2279 = t2265 + t2276;
  t2286 = t2221*t2187;
  t2293 = t2234*t2200;
  t2295 = t2286 + t2293;
  t2317 = -1.*var1[9];
  t2318 = 0.226893 + t2317;
  t2321 = Cos(t2318);
  t2323 = -1.*t2321;
  t2324 = 1. + t2323;
  t2326 = Sin(t2318);
  t2380 = Cos(var1[12]);
  t2382 = -1.*t2380;
  t2387 = 1. + t2382;
  t2397 = Sin(var1[12]);
  t2325 = -0.70544*t2324;
  t2329 = -0.01841*t2326;
  t2333 = t2325 + t2329;
  t2334 = t2333*t2279;
  t2337 = 0.01841*t2324;
  t2340 = -0.70544*t2326;
  t2341 = t2337 + t2340;
  t2346 = t2341*t2295;
  t2413 = -0.07769774964800001*t2387;
  t2348 = t2326*t2279;
  t2352 = t2321*t2295;
  t2356 = t2348 + t2352;
  t2443 = -0.0004284921280000001*t2387;
  t2393 = -0.005481192614*t2387;
  t2362 = t2321*t2279;
  t2364 = -1.*t2326*t2295;
  t2365 = t2362 + t2364;
  t2475 = 0.077936*t2397;
  t2457 = -0.996943*t2397;
  t2415 = 0.005498*t2397;
  t2494 = 0.005481192614*t2387;
  t2400 = -0.077936*t2397;
  t2557 = 0.07769774964800001*t2387;
  t2432 = -0.005498*t2397;
  t2510 = 0.0004284921280000001*t2387;
  t2444 = 0.996943*t2397;
  t2617 = Cos(var1[13]);
  t2623 = -1.*t2617;
  t2626 = 1. + t2623;
  t2631 = Sin(var1[13]);
  t311 = -0.135*t119*t292*t294;
  t2722 = t570*t91;
  t2725 = t630 + t2722;
  t2739 = -1.*t294*t91;
  t2740 = t720 + t2739;
  t2748 = t410*t2725;
  t2752 = -1.*t329*t119*t120;
  t2755 = t2748 + t2752;
  t2769 = t706*t2740;
  t2774 = t687*t2755;
  t2775 = t2769 + t2774;
  t2782 = t687*t2740;
  t2783 = -1.*t706*t2755;
  t2785 = t2782 + t2783;
  t2790 = -1.*t963*t2775;
  t2791 = t896*t2785;
  t2801 = t2790 + t2791;
  t2804 = t896*t2775;
  t2806 = t963*t2785;
  t2810 = t2804 + t2806;
  t2813 = t1100*t2801;
  t2814 = t1090*t2810;
  t2816 = t2813 + t2814;
  t2824 = t1090*t2801;
  t2829 = -1.*t1100*t2810;
  t2837 = t2824 + t2829;
  t2881 = t1941*t91;
  t2883 = t2881 + t1984;
  t2906 = -1.*t119*t2016*t120;
  t2908 = t2883*t2024;
  t2911 = t2906 + t2908;
  t2915 = -1.*t91*t1967;
  t2916 = t1989 + t2915;
  t2919 = t2132*t2911;
  t2920 = t2916*t2151;
  t2921 = t2919 + t2920;
  t2924 = t2132*t2916;
  t2925 = -1.*t2911*t2151;
  t2926 = t2924 + t2925;
  t2627 = -0.02159*t2626;
  t2639 = -1.11344*t2631;
  t2647 = t2627 + t2639;
  t2929 = -1.*t2234*t2921;
  t2930 = t2221*t2926;
  t2931 = t2929 + t2930;
  t2933 = t2221*t2921;
  t2934 = t2234*t2926;
  t2938 = t2933 + t2934;
  t2655 = -1.11344*t2626;
  t2656 = 0.02159*t2631;
  t2664 = t2655 + t2656;
  t2940 = t2326*t2931;
  t2941 = t2321*t2938;
  t2942 = t2940 + t2941;
  t2944 = t2321*t2931;
  t2945 = -1.*t2326*t2938;
  t2946 = t2944 + t2945;
  t2985 = t329*t292;
  t2986 = t294*t410*t120;
  t2987 = t2985 + t2986;
  t2992 = t570*t706*t120;
  t2994 = t687*t2987;
  t2996 = t2992 + t2994;
  t2998 = t570*t687*t120;
  t3000 = -1.*t706*t2987;
  t3001 = t2998 + t3000;
  t3004 = -1.*t963*t2996;
  t3005 = t896*t3001;
  t3006 = t3004 + t3005;
  t3010 = t896*t2996;
  t3011 = t963*t3001;
  t3013 = t3010 + t3011;
  t3016 = t1100*t3006;
  t3022 = t1090*t3013;
  t3023 = t3016 + t3022;
  t3025 = t1090*t3006;
  t3026 = -1.*t1100*t3013;
  t3027 = t3025 + t3026;
  t3055 = t292*t2016;
  t3056 = t120*t1967*t2024;
  t3057 = t3055 + t3056;
  t3065 = t2132*t3057;
  t3067 = t1941*t120*t2151;
  t3071 = t3065 + t3067;
  t3079 = t1941*t2132*t120;
  t3083 = -1.*t3057*t2151;
  t3088 = t3079 + t3083;
  t3098 = -1.*t2234*t3071;
  t3101 = t2221*t3088;
  t3102 = t3098 + t3101;
  t3106 = t2221*t3071;
  t3112 = t2234*t3088;
  t3114 = t3106 + t3112;
  t3120 = t2326*t3102;
  t3121 = t2321*t3114;
  t3122 = t3120 + t3121;
  t3131 = t2321*t3102;
  t3132 = -1.*t2326*t3114;
  t3134 = t3131 + t3132;
  t3178 = t570*t119;
  t3179 = -1.*t292*t294*t91;
  t3181 = t3178 + t3179;
  t3171 = -1.*t119*t294;
  t3172 = -1.*t570*t292*t91;
  t3173 = t3171 + t3172;
  t3184 = t410*t3181;
  t3185 = t329*t91*t120;
  t3188 = t3184 + t3185;
  t3200 = t706*t3173;
  t3208 = t687*t3188;
  t3209 = t3200 + t3208;
  t3212 = t687*t3173;
  t3213 = -1.*t706*t3188;
  t3214 = t3212 + t3213;
  t3222 = -1.*t963*t3209;
  t3223 = t896*t3214;
  t3224 = t3222 + t3223;
  t3229 = t896*t3209;
  t3233 = t963*t3214;
  t3241 = t3229 + t3233;
  t3245 = t1100*t3224;
  t3252 = t1090*t3241;
  t3254 = t3245 + t3252;
  t3257 = t1090*t3224;
  t3258 = -1.*t1100*t3241;
  t3262 = t3257 + t3258;
  t3287 = t119*t1941;
  t3292 = -1.*t292*t91*t1967;
  t3294 = t3287 + t3292;
  t3310 = t2016*t91*t120;
  t3312 = t3294*t2024;
  t3313 = t3310 + t3312;
  t3323 = -1.*t292*t1941*t91;
  t3325 = -1.*t119*t1967;
  t3326 = t3323 + t3325;
  t3329 = t2132*t3313;
  t3331 = t3326*t2151;
  t3333 = t3329 + t3331;
  t3336 = t2132*t3326;
  t3337 = -1.*t3313*t2151;
  t3339 = t3336 + t3337;
  t3349 = -1.*t2234*t3333;
  t3350 = t2221*t3339;
  t3352 = t3349 + t3350;
  t3354 = t2221*t3333;
  t3356 = t2234*t3339;
  t3358 = t3354 + t3356;
  t3362 = t2326*t3352;
  t3365 = t2321*t3358;
  t3366 = t3362 + t3365;
  t3373 = t2321*t3352;
  t3375 = -1.*t2326*t3358;
  t3378 = t3373 + t3375;
  t2672 = -1.*t2631*t2356;
  t2674 = t2617*t2365;
  t2678 = t2672 + t2674;
  t2691 = t2617*t2356;
  t2693 = t2631*t2365;
  t2694 = t2691 + t2693;
  p_output1[0]=t169;
  p_output1[1]=t119*t120*t51 - 1.*t126*t91;
  p_output1[2]=var1[15];
  p_output1[3]=-1.*t1070*t1082 - 1.*t1110*t1154 - 1.*t1202*t1226 - 1.*t1249*t1264 - 1.*t1290*t1293 + 1.11344*t1307 + 0.02159*t1317 + t311 - 1.*t469*t527 + 0.135*t169*t585 - 1.*t628*t658 - 1.*t719*t734 + 0.1305*t775 - 1.*t859*t888 - 1.*t973*t992 - 1.*var1[2] + 0.0288377642750394*(1.965608*(t1354 + t1954 + t1969 + 0.1351*t1985 + 0.01793*t1994 + var1[2]) + 1.316608*(t1954 + t1969 - 0.0343*t1994 + t2031 + t2072 + 0.135*t2086 - 0.049*t2111 + var1[2]) + 5.79228*(t1954 + t1969 + t2031 + t2072 + 0.17081*t2086 + t2165 + t2178 - 0.04895*t2187 - 0.14946*t2200 + var1[2]) + 1.03008*(t1954 + t1969 + t2031 + t2072 + 0.132168*t2086 + t2165 + t2178 + t2245 + t2257 - 0.255862*t2279 - 0.007761*t2295 + var1[2]) + 0.763*(t1954 + t1969 + t2031 + t2072 + 0.130288*t2086 + t2165 + t2178 + t2245 + t2257 - 0.45406*t2279 - 0.000421*t2295 + var1[2]) + 1.03*(t1954 + t1969 + t2031 + t2072 + 0.127241*t2086 + t2165 + t2178 + t2245 + t2257 + t2334 + t2346 - 0.004179*t2356 - 0.826587*t2365 + var1[2]) + 0.1498*(t1954 + t1969 + t2031 + t2072 + 0.13064*t2086 + t2165 + t2178 + t2245 + t2257 + t2334 + t2346 + t2356*t2647 + t2365*t2664 - 1.11818*t2678 + 0.00589*t2694 + var1[2]) + 10.33*(0.000346*t169 + 0.02841*t119*t292 + 0.05066*t527 + var1[2]) + 1.965608*(t1353 + t1354 + t1362 - 0.1351*t658 + 0.01793*t734 + var1[2]) + 1.03008*(-0.255862*t1154 - 0.007761*t1226 + t1353 + t1362 + t1387 + t1391 + t1416 + t1426 + t1439 + t1446 - 0.132168*t775 + var1[2]) + 0.1498*(t1249*t1264 + t1290*t1293 - 1.11818*t1307 + 0.00589*t1317 + t1353 + t1362 + t1387 + t1391 + t1416 + t1426 + t1439 + t1446 + t1549 + t1552 - 0.13064*t775 + var1[2]) + 0.763*(-0.45406*t1154 - 0.000421*t1226 + t1353 + t1362 + t1387 + t1391 + t1416 + t1426 + t1439 + t1446 - 0.130288*t775 + var1[2]) + 1.03*(-0.004179*t1264 - 0.826587*t1293 + t1353 + t1362 + t1387 + t1391 + t1416 + t1426 + t1439 + t1446 + t1549 + t1552 - 0.127241*t775 + var1[2]) + 1.316608*(t1353 + t1362 + t1387 + t1391 - 0.0343*t734 - 0.135*t775 - 0.049*t888 + var1[2]) + 5.79228*(-0.14946*t1082 + t1353 + t1362 + t1387 + t1391 + t1416 + t1426 - 0.17081*t775 - 0.04895*t992 + var1[2]) + 0.126*(t1954 + t1969 + t2031 + t2072 + t2165 + t2178 + t2245 + t2257 + t2334 + t2346 - 0.617968*(t2365*(1. - 0.999969365345*t2387) + t2086*(t2475 + t2494) + t2356*(t2457 + t2510)) + 0.126739*(t2086*(1. - 0.006104248100000001*t2387) + t2365*(t2400 + t2494) + t2356*(t2415 + t2557)) + 0.01889*(t2356*(1. - 0.993925573253*t2387) + t2365*(t2444 + t2510) + t2086*(t2432 + t2557)) + var1[2] + t2086*(0.000033783761634830594*t2387 - 0.6934341012630001*(t2393 + t2400) - 0.021877537552*(t2413 + t2415) - 2.1934241414728571e-7*var1[12]) + t2356*(-0.021744644052735636*t2387 + 0.005534467322*(t2413 + t2432) - 0.6934341012630001*(t2443 + t2444) - 1.7147089040178687e-8*var1[12]) + t2365*(-0.6934128581485427*t2387 - 0.021877537552*(t2443 + t2457) + 0.005534467322*(t2393 + t2475) - 1.2096424700126054e-9*var1[12])) + 0.126*(t1353 + t1362 + t1387 + t1391 + t1416 + t1426 + t1439 + t1446 + t1549 + t1552 - 0.126739*(t1293*(t1599 + t1724) + t1264*(t1590 + t1809) + (1. - 0.006104248100000001*t1584)*t775) - 0.617968*(t1293*(1. - 0.999969365345*t1584) + t1264*(t1679 + t1737) + (t1694 + t1724)*t775) + 0.01889*(t1264*(1. - 0.993925573253*t1584) + t1293*(t1638 + t1737) + (t1618 + t1809)*t775) + var1[2] + t1264*(-0.021744644052735636*t1584 - 0.005534467322*(t1586 + t1618) - 0.6934341012630001*(t1629 + t1638) - 1.7147089040178687e-8*var1[20]) + t1293*(-0.6934128581485427*t1584 - 0.021877537552*(t1629 + t1679) - 0.005534467322*(t1597 + t1694) - 1.2096424700126054e-9*var1[20]) + t775*(-0.000033783761634830594*t1584 - 0.021877537552*(t1586 + t1590) - 0.6934341012630001*(t1597 + t1599) + 2.1934241414728571e-7*var1[20])));
  p_output1[4]=t1969 - 1.*t119*t120*t2060 - 1.*t1070*t2785 - 1.*t1110*t2801 - 1.*t1202*t2810 - 1.*t1249*t2816 - 1.*t1290*t2837 + 1.11344*(-1.*t1246*t2816 + t1237*t2837) + 0.02159*(t1237*t2816 + t1246*t2837) + t2027*t2883 + 0.1305*(t119*t120*t2024 + t2016*t2883) + t2160*t2911 + t2176*t2916 + t2244*t2921 + t2255*t2926 + t2333*t2931 + t2341*t2938 + t2647*t2942 + t2664*t2946 - 1.11344*(-1.*t2631*t2942 + t2617*t2946) - 0.02159*(t2617*t2942 + t2631*t2946) + t311 + 0.1305*(t2725*t329 + t119*t120*t410) + t119*t120*t469 - 1.*t2725*t628 - 1.*t2740*t719 - 1.*t2755*t859 + 0.135*t1948*t91 + 0.135*t585*t91 - 1.*t2775*t973;
  p_output1[5]=-0.135*t120*t1967 + t120*t1967*t2027 + t120*t1941*t2176 + t2060*t292 + 0.1305*(t120*t1967*t2016 - 1.*t2024*t292) - 0.135*t120*t294 - 1.*t1070*t3001 - 1.*t1110*t3006 - 1.*t1202*t3013 - 1.*t1249*t3023 - 1.*t1290*t3027 + 1.11344*(-1.*t1246*t3023 + t1237*t3027) + 0.02159*(t1237*t3023 + t1246*t3027) + t2160*t3057 + t2244*t3071 + t2255*t3088 + t2333*t3102 + t2341*t3114 + t2647*t3122 + t2664*t3134 - 1.11344*(-1.*t2631*t3122 + t2617*t3134) - 0.02159*(t2617*t3122 + t2631*t3134) + 0.1305*(t120*t294*t329 - 1.*t292*t410) - 1.*t292*t469 - 1.*t120*t294*t628 - 1.*t120*t570*t719 - 1.*t2987*t859 - 1.*t2996*t973;
  p_output1[6]=0.135*t119*t1948 - 1.*t1070*t3214 - 1.*t1110*t3224 - 1.*t1202*t3241 - 1.*t1249*t3254 - 1.*t1290*t3262 + 1.11344*(-1.*t1246*t3254 + t1237*t3262) + 0.02159*(t1237*t3254 + t1246*t3262) + t2027*t3294 + t2160*t3313 + t2176*t3326 + t2244*t3333 + t2255*t3339 + t2333*t3352 + t2341*t3358 + t2647*t3366 + t2664*t3378 - 1.11344*(-1.*t2631*t3366 + t2617*t3378) - 0.02159*(t2617*t3366 + t2631*t3378) + 0.135*t119*t585 - 1.*t3181*t628 - 1.*t3173*t719 - 1.*t3188*t859 + t120*t2060*t91 + 0.135*t1967*t292*t91 + 0.135*t292*t294*t91 - 1.*t120*t469*t91 + 0.1305*(t2016*t3294 - 1.*t120*t2024*t91) + 0.1305*(t3181*t329 - 1.*t120*t410*t91) - 1.*t3209*t973;
  p_output1[7]=var1[7];
  p_output1[8]=7.142857142857142*(0. - 0.10724599999999995*t2678 - 0.08999*t2694);
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

void yaRightStance_SLIP_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




