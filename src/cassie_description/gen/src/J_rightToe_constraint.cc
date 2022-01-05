/*
 * Automatically Generated from Mathematica.
 * Sun 7 Nov 2021 14:27:41 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "J_rightToe_constraint.hh"
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
  double t42;
  double t158;
  double t175;
  double t167;
  double t176;
  double t97;
  double t105;
  double t108;
  double t115;
  double t60;
  double t75;
  double t205;
  double t219;
  double t223;
  double t225;
  double t168;
  double t181;
  double t183;
  double t262;
  double t265;
  double t269;
  double t272;
  double t274;
  double t276;
  double t289;
  double t304;
  double t307;
  double t309;
  double t366;
  double t367;
  double t374;
  double t381;
  double t382;
  double t384;
  double t389;
  double t414;
  double t419;
  double t420;
  double t447;
  double t450;
  double t451;
  double t459;
  double t464;
  double t466;
  double t481;
  double t485;
  double t488;
  double t493;
  double t530;
  double t533;
  double t538;
  double t556;
  double t561;
  double t568;
  double t581;
  double t588;
  double t596;
  double t618;
  double t652;
  double t655;
  double t662;
  double t666;
  double t671;
  double t675;
  double t679;
  double t695;
  double t702;
  double t710;
  double t722;
  double t725;
  double t726;
  double t77;
  double t83;
  double t113;
  double t116;
  double t146;
  double t206;
  double t207;
  double t212;
  double t218;
  double t243;
  double t258;
  double t261;
  double t793;
  double t795;
  double t799;
  double t287;
  double t298;
  double t303;
  double t777;
  double t778;
  double t781;
  double t803;
  double t804;
  double t805;
  double t327;
  double t332;
  double t347;
  double t388;
  double t404;
  double t407;
  double t814;
  double t815;
  double t818;
  double t850;
  double t851;
  double t853;
  double t433;
  double t435;
  double t436;
  double t480;
  double t482;
  double t483;
  double t860;
  double t867;
  double t869;
  double t877;
  double t880;
  double t881;
  double t501;
  double t516;
  double t523;
  double t576;
  double t584;
  double t585;
  double t894;
  double t908;
  double t909;
  double t912;
  double t913;
  double t916;
  double t627;
  double t632;
  double t640;
  double t676;
  double t682;
  double t694;
  double t920;
  double t921;
  double t922;
  double t926;
  double t928;
  double t929;
  double t714;
  double t718;
  double t719;
  double t937;
  double t938;
  double t939;
  double t943;
  double t945;
  double t946;
  double t996;
  double t998;
  double t1000;
  double t1014;
  double t1016;
  double t1017;
  double t1026;
  double t1027;
  double t1028;
  double t1038;
  double t1040;
  double t1042;
  double t1046;
  double t1047;
  double t1049;
  double t1054;
  double t1055;
  double t1057;
  double t1059;
  double t1061;
  double t1062;
  double t1064;
  double t1066;
  double t1067;
  double t1069;
  double t1070;
  double t1072;
  double t1074;
  double t1075;
  double t1078;
  double t1080;
  double t1086;
  double t1087;
  double t1132;
  double t1135;
  double t1136;
  double t1140;
  double t1142;
  double t1143;
  double t1163;
  double t1168;
  double t1170;
  double t1180;
  double t1181;
  double t1183;
  double t1201;
  double t1211;
  double t1215;
  double t1217;
  double t1219;
  double t1220;
  double t1225;
  double t1226;
  double t1227;
  double t1232;
  double t1238;
  double t1245;
  double t1249;
  double t1256;
  double t1262;
  double t1283;
  double t1298;
  double t1303;
  double t1310;
  double t1313;
  double t1315;
  double t1355;
  double t1368;
  double t1370;
  double t1372;
  double t1373;
  double t1375;
  double t1393;
  double t1394;
  double t1397;
  double t1403;
  double t1404;
  double t1411;
  double t1419;
  double t1420;
  double t1421;
  double t1428;
  double t1430;
  double t1431;
  double t1436;
  double t1437;
  double t1458;
  double t1462;
  double t1464;
  double t1465;
  double t1467;
  double t1476;
  double t1477;
  double t1482;
  double t1484;
  double t1486;
  double t1494;
  double t1496;
  double t1499;
  double t1532;
  double t1534;
  double t1535;
  double t1544;
  double t1545;
  double t1549;
  double t1551;
  double t1553;
  double t1556;
  double t1563;
  double t1565;
  double t1567;
  double t1576;
  double t1580;
  double t1581;
  double t1585;
  double t1595;
  double t1596;
  double t1604;
  double t1605;
  double t1609;
  double t1611;
  double t1612;
  double t1613;
  double t1621;
  double t1635;
  double t1636;
  double t1665;
  double t1667;
  double t1668;
  double t1688;
  double t1690;
  double t1701;
  double t1718;
  double t1721;
  double t1722;
  double t1726;
  double t1727;
  double t1729;
  double t1737;
  double t1744;
  double t1746;
  double t1755;
  double t1757;
  double t1758;
  double t1780;
  double t1783;
  double t1784;
  double t1788;
  double t1790;
  double t1792;
  double t1795;
  double t1804;
  double t1807;
  double t1812;
  double t1814;
  double t1816;
  double t1870;
  double t1874;
  double t1876;
  double t1880;
  double t1884;
  double t1885;
  double t1908;
  double t1909;
  double t1910;
  double t1913;
  double t1916;
  double t1917;
  double t1924;
  double t1925;
  double t1926;
  double t1933;
  double t1936;
  double t1941;
  double t1943;
  double t1944;
  double t1946;
  double t1948;
  double t1949;
  double t1950;
  double t1954;
  double t1955;
  double t1960;
  double t1965;
  double t1966;
  double t1967;
  double t2006;
  double t2007;
  double t2008;
  double t1999;
  double t2000;
  double t2001;
  double t2013;
  double t2014;
  double t2017;
  double t2022;
  double t2023;
  double t2024;
  double t2037;
  double t2040;
  double t2041;
  double t2044;
  double t2045;
  double t2048;
  double t2055;
  double t2056;
  double t2061;
  double t2065;
  double t2066;
  double t2067;
  double t2074;
  double t2075;
  double t2076;
  double t2080;
  double t2081;
  double t2091;
  double t2130;
  double t2138;
  double t2142;
  double t2162;
  double t2163;
  double t2164;
  double t2166;
  double t2167;
  double t2168;
  double t2172;
  double t2173;
  double t2174;
  double t2176;
  double t2177;
  double t2180;
  double t2186;
  double t2189;
  double t2195;
  double t2198;
  double t2200;
  double t2201;
  double t2205;
  double t2206;
  double t2208;
  double t2210;
  double t2211;
  double t2215;
  double t2254;
  double t2256;
  double t2257;
  double t2241;
  double t2246;
  double t2268;
  double t2275;
  double t2278;
  double t2285;
  double t2286;
  double t2289;
  double t2293;
  double t2295;
  double t2300;
  double t2308;
  double t2311;
  double t2317;
  double t2322;
  double t2327;
  double t2328;
  double t2344;
  double t2357;
  double t2368;
  double t2373;
  double t2375;
  double t2378;
  double t2382;
  double t2383;
  double t2390;
  double t2425;
  double t2427;
  double t2429;
  double t2435;
  double t2438;
  double t2443;
  double t2461;
  double t2463;
  double t2464;
  double t2474;
  double t2475;
  double t2477;
  double t2479;
  double t2480;
  double t2482;
  double t2487;
  double t2488;
  double t2489;
  double t2496;
  double t2500;
  double t2507;
  double t2511;
  double t2512;
  double t2513;
  double t2410;
  double t2411;
  double t2413;
  double t2416;
  double t2418;
  double t830;
  double t833;
  double t836;
  double t2556;
  double t2557;
  double t2560;
  double t2565;
  double t2567;
  double t2568;
  double t2573;
  double t2574;
  double t2577;
  double t2579;
  double t2580;
  double t2581;
  double t2587;
  double t2588;
  double t2595;
  double t2602;
  double t2604;
  double t2606;
  double t2638;
  double t2639;
  double t2640;
  double t2642;
  double t2646;
  double t2650;
  double t2655;
  double t2657;
  double t2661;
  double t2679;
  double t2680;
  double t2681;
  double t2684;
  double t2685;
  double t2688;
  double t2690;
  double t2692;
  double t2698;
  double t2700;
  double t2701;
  double t2704;
  double t2707;
  double t2709;
  double t2710;
  double t2715;
  double t2717;
  double t2718;
  double t2740;
  double t2742;
  double t2743;
  double t2746;
  double t2749;
  double t2751;
  double t2755;
  double t2756;
  double t2759;
  double t2764;
  double t2766;
  double t2768;
  double t2778;
  double t2786;
  double t2787;
  double t2789;
  double t2798;
  double t2801;
  double t2806;
  double t2809;
  double t2811;
  double t2815;
  double t2819;
  double t2821;
  double t2828;
  double t2832;
  double t2837;
  double t2733;
  double t2735;
  double t2737;
  double t2738;
  double t2739;
  double t2880;
  double t2882;
  double t2884;
  double t2890;
  double t2892;
  double t2895;
  double t2897;
  double t2898;
  double t2903;
  double t2904;
  double t2905;
  double t2910;
  double t2911;
  double t2913;
  double t2920;
  double t2922;
  double t2933;
  double t2950;
  double t2951;
  double t2954;
  double t2982;
  double t2984;
  double t2985;
  double t2987;
  double t2991;
  double t2997;
  double t2999;
  double t3000;
  double t3001;
  double t3004;
  double t3005;
  double t3006;
  double t3009;
  double t3010;
  double t3013;
  double t3015;
  double t3016;
  double t3017;
  double t3021;
  double t3022;
  double t3025;
  double t3029;
  double t3031;
  double t3034;
  double t3049;
  double t3052;
  double t3058;
  double t3102;
  double t3103;
  double t3104;
  double t3116;
  double t3117;
  double t3121;
  double t3123;
  double t3128;
  double t3129;
  double t3130;
  double t3137;
  double t3138;
  double t3151;
  double t3155;
  double t3162;
  double t3165;
  double t3168;
  double t3174;
  double t3176;
  double t3099;
  double t3100;
  double t3101;
  double t3108;
  double t3109;
  double t3207;
  double t3208;
  double t3211;
  double t3212;
  double t3215;
  double t3224;
  double t3230;
  double t3244;
  double t3245;
  double t3246;
  double t3249;
  double t3250;
  double t3251;
  double t3268;
  double t3270;
  double t3271;
  double t3279;
  double t3280;
  double t3286;
  double t3287;
  double t3290;
  double t3292;
  double t3293;
  double t3296;
  double t3297;
  double t3298;
  double t3300;
  double t3303;
  double t3304;
  double t3312;
  double t3313;
  double t3314;
  double t3345;
  double t3346;
  double t3348;
  double t3350;
  double t3351;
  double t3354;
  double t3355;
  double t3358;
  double t3359;
  double t3362;
  double t3364;
  double t3366;
  double t3367;
  double t3333;
  double t3336;
  double t3340;
  double t3342;
  double t3344;
  double t3386;
  double t3387;
  double t3392;
  double t3393;
  double t3395;
  double t3398;
  double t3399;
  double t3420;
  double t3423;
  double t3424;
  double t3433;
  double t3437;
  double t3444;
  double t3447;
  double t3451;
  double t3452;
  double t3453;
  double t3455;
  double t3460;
  double t3461;
  double t3492;
  double t3496;
  double t3500;
  double t3508;
  double t3509;
  double t3512;
  double t3513;
  double t3487;
  double t3488;
  double t3491;
  double t3504;
  double t3506;
  double t3531;
  double t3533;
  double t980;
  double t3554;
  double t3555;
  double t3557;
  double t3563;
  double t3568;
  double t3571;
  double t3573;
  double t3516;
  double t3613;
  double t3616;
  double t3620;
  double t3520;
  double t3593;
  double t3594;
  double t3603;
  double t3605;
  double t3609;
  double t3540;
  double t983;
  double t985;
  double t3575;
  double t3656;
  double t3658;
  double t3659;
  double t3584;
  t42 = Cos(var1[3]);
  t158 = Cos(var1[5]);
  t175 = Sin(var1[3]);
  t167 = Sin(var1[4]);
  t176 = Sin(var1[5]);
  t97 = Cos(var1[15]);
  t105 = -1.*t97;
  t108 = 1. + t105;
  t115 = Sin(var1[15]);
  t60 = Cos(var1[4]);
  t75 = Sin(var1[14]);
  t205 = Cos(var1[14]);
  t219 = -1.*t158*t175;
  t223 = -1.*t42*t167*t176;
  t225 = t219 + t223;
  t168 = t42*t158*t167;
  t181 = -1.*t175*t176;
  t183 = t168 + t181;
  t262 = -1.*t42*t60*t75;
  t265 = t205*t225;
  t269 = t262 + t265;
  t272 = Cos(var1[16]);
  t274 = -1.*t272;
  t276 = 1. + t274;
  t289 = Sin(var1[16]);
  t304 = -1.*t205*t42*t60;
  t307 = -1.*t75*t225;
  t309 = t304 + t307;
  t366 = t97*t183;
  t367 = t115*t269;
  t374 = t366 + t367;
  t381 = Cos(var1[17]);
  t382 = -1.*t381;
  t384 = 1. + t382;
  t389 = Sin(var1[17]);
  t414 = t289*t309;
  t419 = t272*t374;
  t420 = t414 + t419;
  t447 = t272*t309;
  t450 = -1.*t289*t374;
  t451 = t447 + t450;
  t459 = Cos(var1[18]);
  t464 = -1.*t459;
  t466 = 1. + t464;
  t481 = Sin(var1[18]);
  t485 = -1.*t389*t420;
  t488 = t381*t451;
  t493 = t485 + t488;
  t530 = t381*t420;
  t533 = t389*t451;
  t538 = t530 + t533;
  t556 = Cos(var1[19]);
  t561 = -1.*t556;
  t568 = 1. + t561;
  t581 = Sin(var1[19]);
  t588 = t481*t493;
  t596 = t459*t538;
  t618 = t588 + t596;
  t652 = t459*t493;
  t655 = -1.*t481*t538;
  t662 = t652 + t655;
  t666 = Cos(var1[21]);
  t671 = -1.*t666;
  t675 = 1. + t671;
  t679 = Sin(var1[21]);
  t695 = -1.*t581*t618;
  t702 = t556*t662;
  t710 = t695 + t702;
  t722 = t556*t618;
  t725 = t581*t662;
  t726 = t722 + t725;
  t77 = 0.135*t75;
  t83 = 0. + t77;
  t113 = -0.049*t108;
  t116 = -0.135*t115;
  t146 = 0. + t113 + t116;
  t206 = -1.*t205;
  t207 = 1. + t206;
  t212 = -0.135*t207;
  t218 = 0. + t212;
  t243 = -0.135*t108;
  t258 = 0.049*t115;
  t261 = 0. + t243 + t258;
  t793 = t42*t158;
  t795 = -1.*t175*t167*t176;
  t799 = t793 + t795;
  t287 = -0.09*t276;
  t298 = 0.049*t289;
  t303 = 0. + t287 + t298;
  t777 = t158*t175*t167;
  t778 = t42*t176;
  t781 = t777 + t778;
  t803 = -1.*t60*t75*t175;
  t804 = t205*t799;
  t805 = t803 + t804;
  t327 = -0.049*t276;
  t332 = -0.09*t289;
  t347 = 0. + t327 + t332;
  t388 = -0.049*t384;
  t404 = -0.21*t389;
  t407 = 0. + t388 + t404;
  t814 = -1.*t205*t60*t175;
  t815 = -1.*t75*t799;
  t818 = t814 + t815;
  t850 = t97*t781;
  t851 = t115*t805;
  t853 = t850 + t851;
  t433 = -0.21*t384;
  t435 = 0.049*t389;
  t436 = 0. + t433 + t435;
  t480 = -0.27068*t466;
  t482 = 0.00159*t481;
  t483 = 0. + t480 + t482;
  t860 = t289*t818;
  t867 = t272*t853;
  t869 = t860 + t867;
  t877 = t272*t818;
  t880 = -1.*t289*t853;
  t881 = t877 + t880;
  t501 = -0.00159*t466;
  t516 = -0.27068*t481;
  t523 = 0. + t501 + t516;
  t576 = 0.01841*t568;
  t584 = -0.70544*t581;
  t585 = 0. + t576 + t584;
  t894 = -1.*t389*t869;
  t908 = t381*t881;
  t909 = t894 + t908;
  t912 = t381*t869;
  t913 = t389*t881;
  t916 = t912 + t913;
  t627 = -0.70544*t568;
  t632 = -0.01841*t581;
  t640 = 0. + t627 + t632;
  t676 = -1.11344*t675;
  t682 = 0.02159*t679;
  t694 = 0. + t676 + t682;
  t920 = t481*t909;
  t921 = t459*t916;
  t922 = t920 + t921;
  t926 = t459*t909;
  t928 = -1.*t481*t916;
  t929 = t926 + t928;
  t714 = -0.02159*t675;
  t718 = -1.11344*t679;
  t719 = 0. + t714 + t718;
  t937 = -1.*t581*t922;
  t938 = t556*t929;
  t939 = t937 + t938;
  t943 = t556*t922;
  t945 = t581*t929;
  t946 = t943 + t945;
  t996 = t60*t75;
  t998 = t205*t167*t176;
  t1000 = t996 + t998;
  t1014 = t205*t60;
  t1016 = -1.*t75*t167*t176;
  t1017 = t1014 + t1016;
  t1026 = -1.*t97*t158*t167;
  t1027 = t115*t1000;
  t1028 = t1026 + t1027;
  t1038 = t289*t1017;
  t1040 = t272*t1028;
  t1042 = t1038 + t1040;
  t1046 = t272*t1017;
  t1047 = -1.*t289*t1028;
  t1049 = t1046 + t1047;
  t1054 = -1.*t389*t1042;
  t1055 = t381*t1049;
  t1057 = t1054 + t1055;
  t1059 = t381*t1042;
  t1061 = t389*t1049;
  t1062 = t1059 + t1061;
  t1064 = t481*t1057;
  t1066 = t459*t1062;
  t1067 = t1064 + t1066;
  t1069 = t459*t1057;
  t1070 = -1.*t481*t1062;
  t1072 = t1069 + t1070;
  t1074 = -1.*t581*t1067;
  t1075 = t556*t1072;
  t1078 = t1074 + t1075;
  t1080 = t556*t1067;
  t1086 = t581*t1072;
  t1087 = t1080 + t1086;
  t1132 = t75*t175*t167;
  t1135 = -1.*t205*t60*t175*t176;
  t1136 = t1132 + t1135;
  t1140 = t205*t175*t167;
  t1142 = t60*t75*t175*t176;
  t1143 = t1140 + t1142;
  t1163 = t97*t60*t158*t175;
  t1168 = t115*t1136;
  t1170 = t1163 + t1168;
  t1180 = t289*t1143;
  t1181 = t272*t1170;
  t1183 = t1180 + t1181;
  t1201 = t272*t1143;
  t1211 = -1.*t289*t1170;
  t1215 = t1201 + t1211;
  t1217 = -1.*t389*t1183;
  t1219 = t381*t1215;
  t1220 = t1217 + t1219;
  t1225 = t381*t1183;
  t1226 = t389*t1215;
  t1227 = t1225 + t1226;
  t1232 = t481*t1220;
  t1238 = t459*t1227;
  t1245 = t1232 + t1238;
  t1249 = t459*t1220;
  t1256 = -1.*t481*t1227;
  t1262 = t1249 + t1256;
  t1283 = -1.*t581*t1245;
  t1298 = t556*t1262;
  t1303 = t1283 + t1298;
  t1310 = t556*t1245;
  t1313 = t581*t1262;
  t1315 = t1310 + t1313;
  t1355 = -1.*t42*t75*t167;
  t1368 = t205*t42*t60*t176;
  t1370 = t1355 + t1368;
  t1372 = -1.*t205*t42*t167;
  t1373 = -1.*t42*t60*t75*t176;
  t1375 = t1372 + t1373;
  t1393 = -1.*t97*t42*t60*t158;
  t1394 = t115*t1370;
  t1397 = t1393 + t1394;
  t1403 = t289*t1375;
  t1404 = t272*t1397;
  t1411 = t1403 + t1404;
  t1419 = t272*t1375;
  t1420 = -1.*t289*t1397;
  t1421 = t1419 + t1420;
  t1428 = -1.*t389*t1411;
  t1430 = t381*t1421;
  t1431 = t1428 + t1430;
  t1436 = t381*t1411;
  t1437 = t389*t1421;
  t1458 = t1436 + t1437;
  t1462 = t481*t1431;
  t1464 = t459*t1458;
  t1465 = t1462 + t1464;
  t1467 = t459*t1431;
  t1476 = -1.*t481*t1458;
  t1477 = t1467 + t1476;
  t1482 = -1.*t581*t1465;
  t1484 = t556*t1477;
  t1486 = t1482 + t1484;
  t1494 = t556*t1465;
  t1496 = t581*t1477;
  t1499 = t1494 + t1496;
  t1532 = -1.*t205*t60*t158*t115;
  t1534 = -1.*t97*t60*t176;
  t1535 = t1532 + t1534;
  t1544 = t60*t158*t75*t289;
  t1545 = t272*t1535;
  t1549 = t1544 + t1545;
  t1551 = t272*t60*t158*t75;
  t1553 = -1.*t289*t1535;
  t1556 = t1551 + t1553;
  t1563 = -1.*t389*t1549;
  t1565 = t381*t1556;
  t1567 = t1563 + t1565;
  t1576 = t381*t1549;
  t1580 = t389*t1556;
  t1581 = t1576 + t1580;
  t1585 = t481*t1567;
  t1595 = t459*t1581;
  t1596 = t1585 + t1595;
  t1604 = t459*t1567;
  t1605 = -1.*t481*t1581;
  t1609 = t1604 + t1605;
  t1611 = -1.*t581*t1596;
  t1612 = t556*t1609;
  t1613 = t1611 + t1612;
  t1621 = t556*t1596;
  t1635 = t581*t1609;
  t1636 = t1621 + t1635;
  t1665 = -1.*t158*t175*t167;
  t1667 = -1.*t42*t176;
  t1668 = t1665 + t1667;
  t1688 = t205*t115*t1668;
  t1690 = t97*t799;
  t1701 = t1688 + t1690;
  t1718 = -1.*t75*t289*t1668;
  t1721 = t272*t1701;
  t1722 = t1718 + t1721;
  t1726 = -1.*t272*t75*t1668;
  t1727 = -1.*t289*t1701;
  t1729 = t1726 + t1727;
  t1737 = -1.*t389*t1722;
  t1744 = t381*t1729;
  t1746 = t1737 + t1744;
  t1755 = t381*t1722;
  t1757 = t389*t1729;
  t1758 = t1755 + t1757;
  t1780 = t481*t1746;
  t1783 = t459*t1758;
  t1784 = t1780 + t1783;
  t1788 = t459*t1746;
  t1790 = -1.*t481*t1758;
  t1792 = t1788 + t1790;
  t1795 = -1.*t581*t1784;
  t1804 = t556*t1792;
  t1807 = t1795 + t1804;
  t1812 = t556*t1784;
  t1814 = t581*t1792;
  t1816 = t1812 + t1814;
  t1870 = t158*t175;
  t1874 = t42*t167*t176;
  t1876 = t1870 + t1874;
  t1880 = t205*t115*t183;
  t1884 = t97*t1876;
  t1885 = t1880 + t1884;
  t1908 = -1.*t75*t289*t183;
  t1909 = t272*t1885;
  t1910 = t1908 + t1909;
  t1913 = -1.*t272*t75*t183;
  t1916 = -1.*t289*t1885;
  t1917 = t1913 + t1916;
  t1924 = -1.*t389*t1910;
  t1925 = t381*t1917;
  t1926 = t1924 + t1925;
  t1933 = t381*t1910;
  t1936 = t389*t1917;
  t1941 = t1933 + t1936;
  t1943 = t481*t1926;
  t1944 = t459*t1941;
  t1946 = t1943 + t1944;
  t1948 = t459*t1926;
  t1949 = -1.*t481*t1941;
  t1950 = t1948 + t1949;
  t1954 = -1.*t581*t1946;
  t1955 = t556*t1950;
  t1960 = t1954 + t1955;
  t1965 = t556*t1946;
  t1966 = t581*t1950;
  t1967 = t1965 + t1966;
  t2006 = t205*t167;
  t2007 = t60*t75*t176;
  t2008 = t2006 + t2007;
  t1999 = -1.*t75*t167;
  t2000 = t205*t60*t176;
  t2001 = t1999 + t2000;
  t2013 = t289*t2001;
  t2014 = t272*t115*t2008;
  t2017 = t2013 + t2014;
  t2022 = t272*t2001;
  t2023 = -1.*t115*t289*t2008;
  t2024 = t2022 + t2023;
  t2037 = -1.*t389*t2017;
  t2040 = t381*t2024;
  t2041 = t2037 + t2040;
  t2044 = t381*t2017;
  t2045 = t389*t2024;
  t2048 = t2044 + t2045;
  t2055 = t481*t2041;
  t2056 = t459*t2048;
  t2061 = t2055 + t2056;
  t2065 = t459*t2041;
  t2066 = -1.*t481*t2048;
  t2067 = t2065 + t2066;
  t2074 = -1.*t581*t2061;
  t2075 = t556*t2067;
  t2076 = t2074 + t2075;
  t2080 = t556*t2061;
  t2081 = t581*t2067;
  t2091 = t2080 + t2081;
  t2130 = t60*t75*t175;
  t2138 = -1.*t205*t799;
  t2142 = t2130 + t2138;
  t2162 = t289*t2142;
  t2163 = t272*t115*t818;
  t2164 = t2162 + t2163;
  t2166 = t272*t2142;
  t2167 = -1.*t115*t289*t818;
  t2168 = t2166 + t2167;
  t2172 = -1.*t389*t2164;
  t2173 = t381*t2168;
  t2174 = t2172 + t2173;
  t2176 = t381*t2164;
  t2177 = t389*t2168;
  t2180 = t2176 + t2177;
  t2186 = t481*t2174;
  t2189 = t459*t2180;
  t2195 = t2186 + t2189;
  t2198 = t459*t2174;
  t2200 = -1.*t481*t2180;
  t2201 = t2198 + t2200;
  t2205 = -1.*t581*t2195;
  t2206 = t556*t2201;
  t2208 = t2205 + t2206;
  t2210 = t556*t2195;
  t2211 = t581*t2201;
  t2215 = t2210 + t2211;
  t2254 = t205*t42*t60;
  t2256 = -1.*t75*t1876;
  t2257 = t2254 + t2256;
  t2241 = -1.*t205*t1876;
  t2246 = t262 + t2241;
  t2268 = t289*t2246;
  t2275 = t272*t115*t2257;
  t2278 = t2268 + t2275;
  t2285 = t272*t2246;
  t2286 = -1.*t115*t289*t2257;
  t2289 = t2285 + t2286;
  t2293 = -1.*t389*t2278;
  t2295 = t381*t2289;
  t2300 = t2293 + t2295;
  t2308 = t381*t2278;
  t2311 = t389*t2289;
  t2317 = t2308 + t2311;
  t2322 = t481*t2300;
  t2327 = t459*t2317;
  t2328 = t2322 + t2327;
  t2344 = t459*t2300;
  t2357 = -1.*t481*t2317;
  t2368 = t2344 + t2357;
  t2373 = -1.*t581*t2328;
  t2375 = t556*t2368;
  t2378 = t2373 + t2375;
  t2382 = t556*t2328;
  t2383 = t581*t2368;
  t2390 = t2382 + t2383;
  t2425 = t75*t167;
  t2427 = -1.*t205*t60*t176;
  t2429 = t2425 + t2427;
  t2435 = -1.*t60*t158*t115;
  t2438 = t97*t2429;
  t2443 = t2435 + t2438;
  t2461 = -1.*t381*t289*t2443;
  t2463 = -1.*t272*t389*t2443;
  t2464 = t2461 + t2463;
  t2474 = t272*t381*t2443;
  t2475 = -1.*t289*t389*t2443;
  t2477 = t2474 + t2475;
  t2479 = t481*t2464;
  t2480 = t459*t2477;
  t2482 = t2479 + t2480;
  t2487 = t459*t2464;
  t2488 = -1.*t481*t2477;
  t2489 = t2487 + t2488;
  t2496 = -1.*t581*t2482;
  t2500 = t556*t2489;
  t2507 = t2496 + t2500;
  t2511 = t556*t2482;
  t2512 = t581*t2489;
  t2513 = t2511 + t2512;
  t2410 = -0.135*t97;
  t2411 = -0.049*t115;
  t2413 = t2410 + t2411;
  t2416 = 0.049*t97;
  t2418 = t2416 + t116;
  t830 = -1.*t115*t781;
  t833 = t97*t805;
  t836 = t830 + t833;
  t2556 = -1.*t381*t289*t836;
  t2557 = -1.*t272*t389*t836;
  t2560 = t2556 + t2557;
  t2565 = t272*t381*t836;
  t2567 = -1.*t289*t389*t836;
  t2568 = t2565 + t2567;
  t2573 = t481*t2560;
  t2574 = t459*t2568;
  t2577 = t2573 + t2574;
  t2579 = t459*t2560;
  t2580 = -1.*t481*t2568;
  t2581 = t2579 + t2580;
  t2587 = -1.*t581*t2577;
  t2588 = t556*t2581;
  t2595 = t2587 + t2588;
  t2602 = t556*t2577;
  t2604 = t581*t2581;
  t2606 = t2602 + t2604;
  t2638 = -1.*t42*t158*t167;
  t2639 = t175*t176;
  t2640 = t2638 + t2639;
  t2642 = t42*t60*t75;
  t2646 = t205*t1876;
  t2650 = t2642 + t2646;
  t2655 = -1.*t115*t2640;
  t2657 = t97*t2650;
  t2661 = t2655 + t2657;
  t2679 = -1.*t381*t289*t2661;
  t2680 = -1.*t272*t389*t2661;
  t2681 = t2679 + t2680;
  t2684 = t272*t381*t2661;
  t2685 = -1.*t289*t389*t2661;
  t2688 = t2684 + t2685;
  t2690 = t481*t2681;
  t2692 = t459*t2688;
  t2698 = t2690 + t2692;
  t2700 = t459*t2681;
  t2701 = -1.*t481*t2688;
  t2704 = t2700 + t2701;
  t2707 = -1.*t581*t2698;
  t2709 = t556*t2704;
  t2710 = t2707 + t2709;
  t2715 = t556*t2698;
  t2717 = t581*t2704;
  t2718 = t2715 + t2717;
  t2740 = t97*t60*t158;
  t2742 = t115*t2429;
  t2743 = t2740 + t2742;
  t2746 = -1.*t289*t2008;
  t2749 = -1.*t272*t2743;
  t2751 = t2746 + t2749;
  t2755 = t272*t2008;
  t2756 = -1.*t289*t2743;
  t2759 = t2755 + t2756;
  t2764 = t389*t2751;
  t2766 = t381*t2759;
  t2768 = t2764 + t2766;
  t2778 = t381*t2751;
  t2786 = -1.*t389*t2759;
  t2787 = t2778 + t2786;
  t2789 = -1.*t481*t2768;
  t2798 = t459*t2787;
  t2801 = t2789 + t2798;
  t2806 = t459*t2768;
  t2809 = t481*t2787;
  t2811 = t2806 + t2809;
  t2815 = t581*t2801;
  t2819 = t556*t2811;
  t2821 = t2815 + t2819;
  t2828 = t556*t2801;
  t2832 = -1.*t581*t2811;
  t2837 = t2828 + t2832;
  t2733 = 0.049*t272;
  t2735 = t2733 + t332;
  t2737 = -0.09*t272;
  t2738 = -0.049*t289;
  t2739 = t2737 + t2738;
  t2880 = -1.*t289*t818;
  t2882 = -1.*t272*t853;
  t2884 = t2880 + t2882;
  t2890 = t389*t2884;
  t2892 = t2890 + t908;
  t2895 = t381*t2884;
  t2897 = -1.*t389*t881;
  t2898 = t2895 + t2897;
  t2903 = -1.*t481*t2892;
  t2904 = t459*t2898;
  t2905 = t2903 + t2904;
  t2910 = t459*t2892;
  t2911 = t481*t2898;
  t2913 = t2910 + t2911;
  t2920 = t581*t2905;
  t2922 = t556*t2913;
  t2933 = t2920 + t2922;
  t2950 = t556*t2905;
  t2951 = -1.*t581*t2913;
  t2954 = t2950 + t2951;
  t2982 = t97*t2640;
  t2984 = t115*t2650;
  t2985 = t2982 + t2984;
  t2987 = -1.*t289*t2257;
  t2991 = -1.*t272*t2985;
  t2997 = t2987 + t2991;
  t2999 = t272*t2257;
  t3000 = -1.*t289*t2985;
  t3001 = t2999 + t3000;
  t3004 = t389*t2997;
  t3005 = t381*t3001;
  t3006 = t3004 + t3005;
  t3009 = t381*t2997;
  t3010 = -1.*t389*t3001;
  t3013 = t3009 + t3010;
  t3015 = -1.*t481*t3006;
  t3016 = t459*t3013;
  t3017 = t3015 + t3016;
  t3021 = t459*t3006;
  t3022 = t481*t3013;
  t3025 = t3021 + t3022;
  t3029 = t581*t3017;
  t3031 = t556*t3025;
  t3034 = t3029 + t3031;
  t3049 = t556*t3017;
  t3052 = -1.*t581*t3025;
  t3058 = t3049 + t3052;
  t3102 = t289*t2008;
  t3103 = t272*t2743;
  t3104 = t3102 + t3103;
  t3116 = -1.*t389*t3104;
  t3117 = t3116 + t2766;
  t3121 = -1.*t381*t3104;
  t3123 = t3121 + t2786;
  t3128 = -1.*t481*t3117;
  t3129 = t459*t3123;
  t3130 = t3128 + t3129;
  t3137 = t459*t3117;
  t3138 = t481*t3123;
  t3151 = t3137 + t3138;
  t3155 = t581*t3130;
  t3162 = t556*t3151;
  t3165 = t3155 + t3162;
  t3168 = t556*t3130;
  t3174 = -1.*t581*t3151;
  t3176 = t3168 + t3174;
  t3099 = -0.21*t381;
  t3100 = -0.049*t389;
  t3101 = t3099 + t3100;
  t3108 = 0.049*t381;
  t3109 = t3108 + t404;
  t3207 = -1.*t381*t869;
  t3208 = t3207 + t2897;
  t3211 = -1.*t481*t909;
  t3212 = t459*t3208;
  t3215 = t3211 + t3212;
  t3224 = t481*t3208;
  t3230 = t926 + t3224;
  t3244 = t581*t3215;
  t3245 = t556*t3230;
  t3246 = t3244 + t3245;
  t3249 = t556*t3215;
  t3250 = -1.*t581*t3230;
  t3251 = t3249 + t3250;
  t3268 = t289*t2257;
  t3270 = t272*t2985;
  t3271 = t3268 + t3270;
  t3279 = -1.*t389*t3271;
  t3280 = t3279 + t3005;
  t3286 = -1.*t381*t3271;
  t3287 = t3286 + t3010;
  t3290 = -1.*t481*t3280;
  t3292 = t459*t3287;
  t3293 = t3290 + t3292;
  t3296 = t459*t3280;
  t3297 = t481*t3287;
  t3298 = t3296 + t3297;
  t3300 = t581*t3293;
  t3303 = t556*t3298;
  t3304 = t3300 + t3303;
  t3312 = t556*t3293;
  t3313 = -1.*t581*t3298;
  t3314 = t3312 + t3313;
  t3345 = t381*t3104;
  t3346 = t389*t2759;
  t3348 = t3345 + t3346;
  t3350 = -1.*t459*t3348;
  t3351 = t3128 + t3350;
  t3354 = -1.*t481*t3348;
  t3355 = t3137 + t3354;
  t3358 = t581*t3351;
  t3359 = t556*t3355;
  t3362 = t3358 + t3359;
  t3364 = t556*t3351;
  t3366 = -1.*t581*t3355;
  t3367 = t3364 + t3366;
  t3333 = 0.00159*t459;
  t3336 = t3333 + t516;
  t3340 = -0.27068*t459;
  t3342 = -0.00159*t481;
  t3344 = t3340 + t3342;
  t3386 = -1.*t459*t916;
  t3387 = t3211 + t3386;
  t3392 = t581*t3387;
  t3393 = t3392 + t938;
  t3395 = t556*t3387;
  t3398 = -1.*t581*t929;
  t3399 = t3395 + t3398;
  t3420 = t381*t3271;
  t3423 = t389*t3001;
  t3424 = t3420 + t3423;
  t3433 = -1.*t459*t3424;
  t3437 = t3290 + t3433;
  t3444 = -1.*t481*t3424;
  t3447 = t3296 + t3444;
  t3451 = t581*t3437;
  t3452 = t556*t3447;
  t3453 = t3451 + t3452;
  t3455 = t556*t3437;
  t3460 = -1.*t581*t3447;
  t3461 = t3455 + t3460;
  t3492 = t481*t3117;
  t3496 = t459*t3348;
  t3500 = t3492 + t3496;
  t3508 = -1.*t581*t3500;
  t3509 = t3508 + t3359;
  t3512 = -1.*t556*t3500;
  t3513 = t3512 + t3366;
  t3487 = -0.70544*t556;
  t3488 = 0.01841*t581;
  t3491 = t3487 + t3488;
  t3504 = -0.01841*t556;
  t3506 = t3504 + t584;
  t3531 = -1.*t556*t922;
  t3533 = t3531 + t3398;
  t980 = t666*t939;
  t3554 = t481*t3280;
  t3555 = t459*t3424;
  t3557 = t3554 + t3555;
  t3563 = -1.*t581*t3557;
  t3568 = t3563 + t3452;
  t3571 = -1.*t556*t3557;
  t3573 = t3571 + t3460;
  t3516 = -1.*t679*t3509;
  t3613 = t556*t3500;
  t3616 = t581*t3355;
  t3620 = t3613 + t3616;
  t3520 = t666*t3509;
  t3593 = 0.02159*t666;
  t3594 = t3593 + t718;
  t3603 = -1.11344*t666;
  t3605 = -0.02159*t679;
  t3609 = t3603 + t3605;
  t3540 = -1.*t679*t939;
  t983 = -1.*t679*t946;
  t985 = t980 + t983;
  t3575 = -1.*t679*t3568;
  t3656 = t556*t3557;
  t3658 = t581*t3447;
  t3659 = t3656 + t3658;
  t3584 = t666*t3568;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=0;
  p_output1[10]=t146*t183 + t218*t225 + t261*t269 + t303*t309 + t347*t374 + t407*t420 + t436*t451 + t483*t493 + t523*t538 + t585*t618 + t640*t662 + t694*t710 + t719*t726 + 0.075595*(t679*t710 + t666*t726) - 1.077437*(t666*t710 - 1.*t679*t726) - 1.*t42*t60*t83 - 0.1305*(-1.*t115*t183 + t269*t97);
  p_output1[11]=t146*t781 + t218*t799 + t261*t805 + t303*t818 - 1.*t175*t60*t83 - 0.1305*t836 + t347*t853 + t407*t869 + t436*t881 + t483*t909 + t523*t916 + t585*t922 + t640*t929 + t694*t939 + t719*t946 + 0.075595*(t679*t939 + t666*t946) - 1.077437*t985;
  p_output1[12]=-1.*t146*t158*t167 + t167*t176*t218 + t1000*t261 + t1017*t303 + t1028*t347 + t1042*t407 + t1049*t436 + t1057*t483 + t1062*t523 + t1067*t585 + t1072*t640 + 0.075595*(t1087*t666 + t1078*t679) - 1.077437*(t1078*t666 - 1.*t1087*t679) + t1078*t694 + t1087*t719 + t60*t83 - 0.1305*(t115*t158*t167 + t1000*t97);
  p_output1[13]=t1136*t261 + t1143*t303 + t1170*t347 + t1183*t407 + t1215*t436 + t1220*t483 + t1227*t523 + t1245*t585 + t146*t158*t175*t60 - 1.*t175*t176*t218*t60 + t1262*t640 + 0.075595*(t1315*t666 + t1303*t679) - 1.077437*(t1303*t666 - 1.*t1315*t679) + t1303*t694 + t1315*t719 + t167*t175*t83 - 0.1305*(-1.*t115*t158*t175*t60 + t1136*t97);
  p_output1[14]=t1370*t261 + t1375*t303 + t1397*t347 + t1411*t407 + t1421*t436 + t1431*t483 + t1458*t523 + t1465*t585 - 1.*t146*t158*t42*t60 + t176*t218*t42*t60 + t1477*t640 + 0.075595*(t1499*t666 + t1486*t679) - 1.077437*(t1486*t666 - 1.*t1499*t679) + t1486*t694 + t1499*t719 - 1.*t167*t42*t83 - 0.1305*(t115*t158*t42*t60 + t1370*t97);
  p_output1[15]=t1535*t347 + t1549*t407 + t1556*t436 + t1567*t483 + t1581*t523 + t1596*t585 - 1.*t146*t176*t60 - 1.*t158*t218*t60 - 1.*t158*t205*t261*t60 + t1609*t640 + 0.075595*(t1636*t666 + t1613*t679) - 1.077437*(t1613*t666 - 1.*t1636*t679) + t1613*t694 + t1636*t719 + t158*t303*t60*t75 - 0.1305*(t115*t176*t60 - 1.*t158*t205*t60*t97);
  p_output1[16]=t1668*t218 + t1668*t205*t261 + t1701*t347 + t1722*t407 + t1729*t436 + t1746*t483 + t1758*t523 + t1784*t585 + t1792*t640 + 0.075595*(t1816*t666 + t1807*t679) - 1.077437*(t1807*t666 - 1.*t1816*t679) + t1807*t694 + t1816*t719 - 1.*t1668*t303*t75 + t146*t799 - 0.1305*(-1.*t115*t799 + t1668*t205*t97);
  p_output1[17]=t146*t1876 + t183*t218 + t183*t205*t261 + t1885*t347 + t1910*t407 + t1917*t436 + t1926*t483 + t1941*t523 + t1946*t585 + t1950*t640 + 0.075595*(t1967*t666 + t1960*t679) - 1.077437*(t1960*t666 - 1.*t1967*t679) + t1960*t694 + t1967*t719 - 1.*t183*t303*t75 - 0.1305*(-1.*t115*t1876 + t183*t205*t97);
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0.135*t167*t205 + t2008*t261 + t2001*t303 + t115*t2008*t347 + t2017*t407 + t2024*t436 + t2041*t483 + t2048*t523 + t2061*t585 + t2067*t640 + 0.075595*(t2091*t666 + t2076*t679) - 1.077437*(t2076*t666 - 1.*t2091*t679) + t2076*t694 + t2091*t719 + 0.135*t176*t60*t75 - 0.1305*t2008*t97;
  p_output1[43]=t2142*t303 + t2164*t407 + t2168*t436 + t2174*t483 + t2180*t523 + t2195*t585 - 0.135*t175*t205*t60 + t2201*t640 + 0.075595*(t2215*t666 + t2208*t679) - 1.077437*(t2208*t666 - 1.*t2215*t679) + t2208*t694 + t2215*t719 - 0.135*t75*t799 + t261*t818 + t115*t347*t818 - 0.1305*t818*t97;
  p_output1[44]=t2257*t261 + t2246*t303 + t115*t2257*t347 + t2278*t407 + t2289*t436 + t2300*t483 + t2317*t523 + t2328*t585 + 0.135*t205*t42*t60 + t2368*t640 + 0.075595*(t2390*t666 + t2378*t679) - 1.077437*(t2378*t666 - 1.*t2390*t679) + t2378*t694 + t2390*t719 - 0.135*t1876*t75 - 0.1305*t2257*t97;
  p_output1[45]=t2418*t2429 + t2443*t347 + t2443*t272*t407 - 1.*t2443*t289*t436 + t2464*t483 + t2477*t523 + t2482*t585 + t158*t2413*t60 + t2489*t640 + 0.075595*(t2513*t666 + t2507*t679) - 1.077437*(t2507*t666 - 1.*t2513*t679) + t2507*t694 + t2513*t719 - 0.1305*(-1.*t115*t2429 - 1.*t158*t60*t97);
  p_output1[46]=t2560*t483 + t2568*t523 + t2577*t585 + t2581*t640 + 0.075595*(t2606*t666 + t2595*t679) - 1.077437*(t2595*t666 - 1.*t2606*t679) + t2595*t694 + t2606*t719 + t2413*t781 + t2418*t805 + t347*t836 + t272*t407*t836 - 1.*t289*t436*t836 - 0.1305*(-1.*t115*t805 - 1.*t781*t97);
  p_output1[47]=t2413*t2640 + t2418*t2650 + t2661*t347 + t2661*t272*t407 - 1.*t2661*t289*t436 + t2681*t483 + t2688*t523 + t2698*t585 + t2704*t640 + 0.075595*(t2718*t666 + t2710*t679) - 1.077437*(t2710*t666 - 1.*t2718*t679) + t2710*t694 + t2718*t719 - 0.1305*(-1.*t115*t2650 - 1.*t2640*t97);
  p_output1[48]=t2008*t2735 + t2739*t2743 + t2759*t407 + t2751*t436 + t2787*t483 + t2768*t523 + t2811*t585 + t2801*t640 - 1.077437*(t2837*t666 - 1.*t2821*t679) + 0.075595*(t2821*t666 + t2837*t679) + t2837*t694 + t2821*t719;
  p_output1[49]=t2884*t436 + t2898*t483 + t2892*t523 + t2913*t585 + t2905*t640 - 1.077437*(t2954*t666 - 1.*t2933*t679) + 0.075595*(t2933*t666 + t2954*t679) + t2954*t694 + t2933*t719 + t2735*t818 + t2739*t853 + t407*t881;
  p_output1[50]=t2257*t2735 + t2739*t2985 + t3001*t407 + t2997*t436 + t3013*t483 + t3006*t523 + t3025*t585 + t3017*t640 - 1.077437*(t3058*t666 - 1.*t3034*t679) + 0.075595*(t3034*t666 + t3058*t679) + t3058*t694 + t3034*t719;
  p_output1[51]=t3101*t3104 + t2759*t3109 + t3123*t483 + t3117*t523 + t3151*t585 + t3130*t640 - 1.077437*(t3176*t666 - 1.*t3165*t679) + 0.075595*(t3165*t666 + t3176*t679) + t3176*t694 + t3165*t719;
  p_output1[52]=t3208*t483 + t3230*t585 + t3215*t640 - 1.077437*(t3251*t666 - 1.*t3246*t679) + 0.075595*(t3246*t666 + t3251*t679) + t3251*t694 + t3246*t719 + t3101*t869 + t3109*t881 + t523*t909;
  p_output1[53]=t3001*t3109 + t3101*t3271 + t3287*t483 + t3280*t523 + t3298*t585 + t3293*t640 - 1.077437*(t3314*t666 - 1.*t3304*t679) + 0.075595*(t3304*t666 + t3314*t679) + t3314*t694 + t3304*t719;
  p_output1[54]=t3117*t3336 + t3344*t3348 + t3355*t585 + t3351*t640 - 1.077437*(t3367*t666 - 1.*t3362*t679) + 0.075595*(t3362*t666 + t3367*t679) + t3367*t694 + t3362*t719;
  p_output1[55]=t3387*t640 - 1.077437*(t3399*t666 - 1.*t3393*t679) + 0.075595*(t3393*t666 + t3399*t679) + t3399*t694 + t3393*t719 + t3336*t909 + t3344*t916 + t585*t929;
  p_output1[56]=t3280*t3336 + t3344*t3424 + t3447*t585 + t3437*t640 - 1.077437*(t3461*t666 - 1.*t3453*t679) + 0.075595*(t3453*t666 + t3461*t679) + t3461*t694 + t3453*t719;
  p_output1[57]=t3491*t3500 + t3355*t3506 - 1.077437*(t3516 + t3513*t666) + 0.075595*(t3520 + t3513*t679) + t3513*t694 + t3509*t719;
  p_output1[58]=-1.077437*(t3540 + t3533*t666) + t3533*t694 + t3491*t922 + t3506*t929 + t719*t939 + 0.075595*(t3533*t679 + t980);
  p_output1[59]=t3447*t3506 + t3491*t3557 - 1.077437*(t3575 + t3573*t666) + 0.075595*(t3584 + t3573*t679) + t3573*t694 + t3568*t719;
  p_output1[60]=0;
  p_output1[61]=0;
  p_output1[62]=0;
  p_output1[63]=t3509*t3594 + t3609*t3620 - 1.077437*(t3516 - 1.*t3620*t666) + 0.075595*(t3520 - 1.*t3620*t679);
  p_output1[64]=t3594*t939 + t3609*t946 - 1.077437*(t3540 - 1.*t666*t946) + 0.075595*t985;
  p_output1[65]=t3568*t3594 + t3609*t3659 - 1.077437*(t3575 - 1.*t3659*t666) + 0.075595*(t3584 - 1.*t3659*t679);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 22, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#endif // MATLAB_MEX_FILE

namespace SymFunction
{

void J_rightToe_constraint_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}



