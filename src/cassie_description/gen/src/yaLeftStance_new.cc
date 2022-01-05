/*
 * Automatically Generated from Mathematica.
 * Thu 9 Sep 2021 00:06:37 GMT-07:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "yaLeftStance_new.hh"
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
  double t58;
  double t18;
  double t79;
  double t25;
  double t84;
  double t48;
  double t110;
  double t111;
  double t136;
  double t164;
  double t165;
  double t206;
  double t210;
  double t214;
  double t216;
  double t185;
  double t188;
  double t201;
  double t238;
  double t246;
  double t247;
  double t295;
  double t299;
  double t301;
  double t314;
  double t284;
  double t286;
  double t288;
  double t345;
  double t353;
  double t362;
  double t386;
  double t389;
  double t390;
  double t410;
  double t430;
  double t431;
  double t437;
  double t462;
  double t466;
  double t478;
  double t490;
  double t492;
  double t508;
  double t518;
  double t535;
  double t538;
  double t539;
  double t560;
  double t562;
  double t564;
  double t569;
  double t573;
  double t576;
  double t578;
  double t592;
  double t596;
  double t597;
  double t617;
  double t619;
  double t620;
  double t623;
  double t628;
  double t637;
  double t649;
  double t656;
  double t660;
  double t665;
  double t686;
  double t692;
  double t695;
  double t744;
  double t756;
  double t745;
  double t760;
  double t762;
  double t763;
  double t797;
  double t807;
  double t809;
  double t831;
  double t765;
  double t767;
  double t774;
  double t780;
  double t786;
  double t792;
  double t823;
  double t833;
  double t834;
  double t835;
  double t837;
  double t841;
  double t852;
  double t858;
  double t869;
  double t871;
  double t880;
  double t898;
  double t899;
  double t904;
  double t911;
  double t884;
  double t888;
  double t889;
  double t909;
  double t912;
  double t919;
  double t920;
  double t929;
  double t933;
  double t934;
  double t936;
  double t952;
  double t957;
  double t960;
  double t981;
  double t985;
  double t987;
  double t998;
  double t966;
  double t968;
  double t971;
  double t995;
  double t999;
  double t1000;
  double t1005;
  double t1006;
  double t1009;
  double t1010;
  double t1011;
  double t1012;
  double t1018;
  double t1024;
  double t1066;
  double t1068;
  double t1070;
  double t1077;
  double t1031;
  double t1040;
  double t1046;
  double t1075;
  double t1089;
  double t1091;
  double t1097;
  double t1099;
  double t1102;
  double t1105;
  double t1108;
  double t1113;
  double t1123;
  double t1127;
  double t1168;
  double t1177;
  double t1178;
  double t1182;
  double t1140;
  double t1143;
  double t1145;
  double t1256;
  double t1266;
  double t1267;
  double t1274;
  double t1180;
  double t1190;
  double t1196;
  double t1200;
  double t1201;
  double t1203;
  double t1204;
  double t1208;
  double t1284;
  double t1217;
  double t1218;
  double t1221;
  double t1269;
  double t1316;
  double t1228;
  double t1236;
  double t1238;
  double t1365;
  double t1373;
  double t1325;
  double t1403;
  double t1317;
  double t1441;
  double t1286;
  double t1399;
  double t1276;
  double t1497;
  double t1499;
  double t1503;
  double t1513;
  double t755;
  double t146;
  double t147;
  double t1560;
  double t1562;
  double t215;
  double t217;
  double t219;
  double t251;
  double t270;
  double t273;
  double t279;
  double t281;
  double t282;
  double t1577;
  double t1579;
  double t302;
  double t328;
  double t331;
  double t367;
  double t370;
  double t375;
  double t1589;
  double t1590;
  double t404;
  double t415;
  double t423;
  double t446;
  double t452;
  double t459;
  double t1620;
  double t1622;
  double t509;
  double t520;
  double t526;
  double t545;
  double t550;
  double t554;
  double t1663;
  double t1669;
  double t577;
  double t580;
  double t582;
  double t605;
  double t609;
  double t616;
  double t1717;
  double t1721;
  double t1722;
  double t1728;
  double t1698;
  double t1701;
  double t1726;
  double t1756;
  double t1782;
  double t1832;
  double t1858;
  double t1794;
  double t1872;
  double t1785;
  double t1907;
  double t1743;
  double t1864;
  double t1758;
  double t647;
  double t651;
  double t655;
  double t681;
  double t683;
  double t685;
  double t697;
  double t703;
  double t704;
  double t715;
  double t719;
  double t726;
  double t152;
  double t1509;
  double t1514;
  double t1517;
  double t1520;
  double t1523;
  double t1525;
  double t1527;
  double t1535;
  double t1538;
  double t1541;
  double t1543;
  double t1546;
  double t1550;
  double t1551;
  double t182;
  double t221;
  double t278;
  double t283;
  double t336;
  double t383;
  double t440;
  double t483;
  double t543;
  double t567;
  double t600;
  double t621;
  double t667;
  double t696;
  double t706;
  double t727;
  double t2056;
  double t2057;
  double t2068;
  double t2074;
  double t2081;
  double t2086;
  double t2104;
  double t2109;
  double t2113;
  double t2121;
  double t2123;
  double t2134;
  double t2143;
  double t2144;
  double t2147;
  double t2156;
  double t2158;
  double t2163;
  double t2174;
  double t2175;
  double t2178;
  double t2188;
  double t2190;
  double t2191;
  double t2195;
  double t2198;
  double t2201;
  double t2206;
  double t2208;
  double t2209;
  double t2219;
  double t2220;
  double t2221;
  double t2261;
  double t2269;
  double t2274;
  double t2291;
  double t2293;
  double t2295;
  double t2297;
  double t2298;
  double t2302;
  double t2307;
  double t2309;
  double t2311;
  double t2323;
  double t2333;
  double t2336;
  double t2342;
  double t2343;
  double t2345;
  double t2358;
  double t2360;
  double t2361;
  double t2365;
  double t2367;
  double t2368;
  double t2375;
  double t2378;
  double t2382;
  double t2414;
  double t2418;
  double t2421;
  double t2426;
  double t2429;
  double t2432;
  double t2464;
  double t2466;
  double t2467;
  double t2457;
  double t2459;
  double t2461;
  double t2479;
  double t2483;
  double t2499;
  double t2502;
  double t2504;
  double t2514;
  double t2541;
  double t2547;
  double t2548;
  double t2550;
  double t2552;
  double t2555;
  double t2557;
  double t2560;
  double t2567;
  double t2571;
  double t2578;
  double t2579;
  double t2587;
  double t2589;
  double t2592;
  double t2605;
  double t2615;
  double t2617;
  double t2624;
  double t2625;
  double t2628;
  double t2636;
  double t2640;
  double t2641;
  double t2660;
  double t2661;
  double t2664;
  double t2710;
  double t2712;
  double t2720;
  double t2740;
  double t2743;
  double t2747;
  double t2756;
  double t2760;
  double t2765;
  double t2768;
  double t2769;
  double t2775;
  double t2779;
  double t2782;
  double t2783;
  double t2787;
  double t2788;
  double t2791;
  double t2795;
  double t2799;
  double t2802;
  double t2814;
  double t2817;
  double t2819;
  double t2825;
  double t2826;
  double t2828;
  double t2831;
  double t2832;
  double t2833;
  double t2836;
  double t2838;
  double t2846;
  t58 = Cos(var1[3]);
  t18 = Cos(var1[5]);
  t79 = Sin(var1[4]);
  t25 = Sin(var1[3]);
  t84 = Sin(var1[5]);
  t48 = t18*t25;
  t110 = t58*t79*t84;
  t111 = t48 + t110;
  t136 = Cos(var1[6]);
  t164 = Cos(var1[4]);
  t165 = Sin(var1[6]);
  t206 = Cos(var1[7]);
  t210 = -1.*t206;
  t214 = 1. + t210;
  t216 = Sin(var1[7]);
  t185 = t136*t111;
  t188 = t58*t164*t165;
  t201 = t185 + t188;
  t238 = -1.*t58*t18*t79;
  t246 = t25*t84;
  t247 = t238 + t246;
  t295 = Cos(var1[8]);
  t299 = -1.*t295;
  t301 = 1. + t299;
  t314 = Sin(var1[8]);
  t284 = t206*t247;
  t286 = t201*t216;
  t288 = t284 + t286;
  t345 = t58*t164*t136;
  t353 = -1.*t111*t165;
  t362 = t345 + t353;
  t386 = Cos(var1[9]);
  t389 = -1.*t386;
  t390 = 1. + t389;
  t410 = Sin(var1[9]);
  t430 = t295*t288;
  t431 = t362*t314;
  t437 = t430 + t431;
  t462 = t295*t362;
  t466 = -1.*t288*t314;
  t478 = t462 + t466;
  t490 = Cos(var1[10]);
  t492 = -1.*t490;
  t508 = 1. + t492;
  t518 = Sin(var1[10]);
  t535 = -1.*t410*t437;
  t538 = t386*t478;
  t539 = t535 + t538;
  t560 = t386*t437;
  t562 = t410*t478;
  t564 = t560 + t562;
  t569 = Cos(var1[11]);
  t573 = -1.*t569;
  t576 = 1. + t573;
  t578 = Sin(var1[11]);
  t592 = t518*t539;
  t596 = t490*t564;
  t597 = t592 + t596;
  t617 = t490*t539;
  t619 = -1.*t518*t564;
  t620 = t617 + t619;
  t623 = Cos(var1[13]);
  t628 = -1.*t623;
  t637 = 1. + t628;
  t649 = Sin(var1[13]);
  t656 = -1.*t578*t597;
  t660 = t569*t620;
  t665 = t656 + t660;
  t686 = t569*t597;
  t692 = t578*t620;
  t695 = t686 + t692;
  t744 = Sin(var1[14]);
  t756 = Cos(var1[14]);
  t745 = 0.135*t58*t164*t744;
  t760 = -1.*t756;
  t762 = 1. + t760;
  t763 = -0.135*t762*t111;
  t797 = Cos(var1[15]);
  t807 = -1.*t797;
  t809 = 1. + t807;
  t831 = Sin(var1[15]);
  t765 = t58*t164*t744;
  t767 = t756*t111;
  t774 = t765 + t767;
  t780 = t756*t58*t164;
  t786 = -1.*t744*t111;
  t792 = t780 + t786;
  t823 = -0.049*t809;
  t833 = -0.135*t831;
  t834 = t823 + t833;
  t835 = t834*t247;
  t837 = -0.135*t809;
  t841 = 0.049*t831;
  t852 = t837 + t841;
  t858 = t852*t774;
  t869 = -1.*t831*t247;
  t871 = t797*t774;
  t880 = t869 + t871;
  t898 = Cos(var1[16]);
  t899 = -1.*t898;
  t904 = 1. + t899;
  t911 = Sin(var1[16]);
  t884 = t797*t247;
  t888 = t831*t774;
  t889 = t884 + t888;
  t909 = -0.09*t904;
  t912 = 0.049*t911;
  t919 = t909 + t912;
  t920 = t919*t792;
  t929 = -0.049*t904;
  t933 = -0.09*t911;
  t934 = t929 + t933;
  t936 = t934*t889;
  t952 = t911*t792;
  t957 = t898*t889;
  t960 = t952 + t957;
  t981 = Cos(var1[17]);
  t985 = -1.*t981;
  t987 = 1. + t985;
  t998 = Sin(var1[17]);
  t966 = t898*t792;
  t968 = -1.*t911*t889;
  t971 = t966 + t968;
  t995 = -0.049*t987;
  t999 = -0.21*t998;
  t1000 = t995 + t999;
  t1005 = t1000*t960;
  t1006 = -0.21*t987;
  t1009 = 0.049*t998;
  t1010 = t1006 + t1009;
  t1011 = t1010*t971;
  t1012 = -1.*t998*t960;
  t1018 = t981*t971;
  t1024 = t1012 + t1018;
  t1066 = Cos(var1[18]);
  t1068 = -1.*t1066;
  t1070 = 1. + t1068;
  t1077 = Sin(var1[18]);
  t1031 = t981*t960;
  t1040 = t998*t971;
  t1046 = t1031 + t1040;
  t1075 = -0.27068*t1070;
  t1089 = 0.00159*t1077;
  t1091 = t1075 + t1089;
  t1097 = t1091*t1024;
  t1099 = -0.00159*t1070;
  t1102 = -0.27068*t1077;
  t1105 = t1099 + t1102;
  t1108 = t1105*t1046;
  t1113 = t1077*t1024;
  t1123 = t1066*t1046;
  t1127 = t1113 + t1123;
  t1168 = Cos(var1[19]);
  t1177 = -1.*t1168;
  t1178 = 1. + t1177;
  t1182 = Sin(var1[19]);
  t1140 = t1066*t1024;
  t1143 = -1.*t1077*t1046;
  t1145 = t1140 + t1143;
  t1256 = Cos(var1[20]);
  t1266 = -1.*t1256;
  t1267 = 1. + t1266;
  t1274 = Sin(var1[20]);
  t1180 = 0.01841*t1178;
  t1190 = -0.70544*t1182;
  t1196 = t1180 + t1190;
  t1200 = t1196*t1127;
  t1201 = -0.70544*t1178;
  t1203 = -0.01841*t1182;
  t1204 = t1201 + t1203;
  t1208 = t1204*t1145;
  t1284 = 0.005481192614*t1267;
  t1217 = -1.*t1182*t1127;
  t1218 = t1168*t1145;
  t1221 = t1217 + t1218;
  t1269 = 0.07769774964800001*t1267;
  t1316 = -0.0004284921280000001*t1267;
  t1228 = t1168*t1127;
  t1236 = t1182*t1145;
  t1238 = t1228 + t1236;
  t1365 = 0.005498*t1274;
  t1373 = 0.996943*t1274;
  t1325 = -0.077936*t1274;
  t1403 = 0.0004284921280000001*t1267;
  t1317 = -0.996943*t1274;
  t1441 = -0.005481192614*t1267;
  t1286 = 0.077936*t1274;
  t1399 = -0.07769774964800001*t1267;
  t1276 = -0.005498*t1274;
  t1497 = Cos(var1[21]);
  t1499 = -1.*t1497;
  t1503 = 1. + t1499;
  t1513 = Sin(var1[21]);
  t755 = -0.0233*t247;
  t146 = -1.*t136;
  t147 = 1. + t146;
  t1560 = 0.135*t147*t111;
  t1562 = -0.135*t58*t164*t165;
  t215 = 0.135*t214;
  t217 = 0.049*t216;
  t219 = t215 + t217;
  t251 = -0.049*t214;
  t270 = 0.135*t216;
  t273 = t251 + t270;
  t279 = t206*t201;
  t281 = -1.*t247*t216;
  t282 = t279 + t281;
  t1577 = t201*t219;
  t1579 = t247*t273;
  t302 = -0.049*t301;
  t328 = -0.09*t314;
  t331 = t302 + t328;
  t367 = -0.09*t301;
  t370 = 0.049*t314;
  t375 = t367 + t370;
  t1589 = t288*t331;
  t1590 = t362*t375;
  t404 = -0.049*t390;
  t415 = -0.21*t410;
  t423 = t404 + t415;
  t446 = -0.21*t390;
  t452 = 0.049*t410;
  t459 = t446 + t452;
  t1620 = t423*t437;
  t1622 = t459*t478;
  t509 = -0.27068*t508;
  t520 = 0.00159*t518;
  t526 = t509 + t520;
  t545 = -0.00159*t508;
  t550 = -0.27068*t518;
  t554 = t545 + t550;
  t1663 = t526*t539;
  t1669 = t554*t564;
  t577 = 0.01841*t576;
  t580 = -0.70544*t578;
  t582 = t577 + t580;
  t605 = -0.70544*t576;
  t609 = -0.01841*t578;
  t616 = t605 + t609;
  t1717 = Cos(var1[12]);
  t1721 = -1.*t1717;
  t1722 = 1. + t1721;
  t1728 = Sin(var1[12]);
  t1698 = t582*t597;
  t1701 = t616*t620;
  t1726 = -0.005481192614*t1722;
  t1756 = -0.07769774964800001*t1722;
  t1782 = -0.0004284921280000001*t1722;
  t1832 = -0.005498*t1728;
  t1858 = 0.996943*t1728;
  t1794 = 0.077936*t1728;
  t1872 = 0.0004284921280000001*t1722;
  t1785 = -0.996943*t1728;
  t1907 = 0.005481192614*t1722;
  t1743 = -0.077936*t1728;
  t1864 = 0.07769774964800001*t1722;
  t1758 = 0.005498*t1728;
  t647 = -1.11344*t637;
  t651 = 0.02159*t649;
  t655 = t647 + t651;
  t681 = -0.02159*t637;
  t683 = -1.11344*t649;
  t685 = t681 + t683;
  t697 = t649*t665;
  t703 = t623*t695;
  t704 = t697 + t703;
  t715 = t623*t665;
  t719 = -1.*t649*t695;
  t726 = t715 + t719;
  t152 = -0.135*t147*t111;
  t1509 = -1.11344*t1503;
  t1514 = 0.02159*t1513;
  t1517 = t1509 + t1514;
  t1520 = t1517*t1221;
  t1523 = -0.02159*t1503;
  t1525 = -1.11344*t1513;
  t1527 = t1523 + t1525;
  t1535 = t1527*t1238;
  t1538 = t1513*t1221;
  t1541 = t1497*t1238;
  t1543 = t1538 + t1541;
  t1546 = t1497*t1221;
  t1550 = -1.*t1513*t1238;
  t1551 = t1546 + t1550;
  t182 = 0.135*t58*t164*t165;
  t221 = -1.*t201*t219;
  t278 = -1.*t247*t273;
  t283 = -0.1305*t282;
  t336 = -1.*t288*t331;
  t383 = -1.*t362*t375;
  t440 = -1.*t423*t437;
  t483 = -1.*t459*t478;
  t543 = -1.*t526*t539;
  t567 = -1.*t554*t564;
  t600 = -1.*t582*t597;
  t621 = -1.*t616*t620;
  t667 = -1.*t655*t665;
  t696 = -1.*t685*t695;
  t706 = 0.02159*t704;
  t727 = 1.11344*t726;
  t2056 = t744*t79;
  t2057 = -1.*t756*t164*t84;
  t2068 = t2056 + t2057;
  t2074 = t756*t79;
  t2081 = t164*t744*t84;
  t2086 = t2074 + t2081;
  t2104 = t797*t164*t18;
  t2109 = t831*t2068;
  t2113 = t2104 + t2109;
  t2121 = t911*t2086;
  t2123 = t898*t2113;
  t2134 = t2121 + t2123;
  t2143 = t898*t2086;
  t2144 = -1.*t911*t2113;
  t2147 = t2143 + t2144;
  t2156 = -1.*t998*t2134;
  t2158 = t981*t2147;
  t2163 = t2156 + t2158;
  t2174 = t981*t2134;
  t2175 = t998*t2147;
  t2178 = t2174 + t2175;
  t2188 = t1077*t2163;
  t2190 = t1066*t2178;
  t2191 = t2188 + t2190;
  t2195 = t1066*t2163;
  t2198 = -1.*t1077*t2178;
  t2201 = t2195 + t2198;
  t2206 = -1.*t1182*t2191;
  t2208 = t1168*t2201;
  t2209 = t2206 + t2208;
  t2219 = t1168*t2191;
  t2220 = t1182*t2201;
  t2221 = t2219 + t2220;
  t2261 = -1.*t164*t136*t84;
  t2269 = t79*t165;
  t2274 = t2261 + t2269;
  t2291 = t164*t18*t206;
  t2293 = t2274*t216;
  t2295 = t2291 + t2293;
  t2297 = t136*t79;
  t2298 = t164*t84*t165;
  t2302 = t2297 + t2298;
  t2307 = t295*t2295;
  t2309 = t2302*t314;
  t2311 = t2307 + t2309;
  t2323 = t295*t2302;
  t2333 = -1.*t2295*t314;
  t2336 = t2323 + t2333;
  t2342 = -1.*t410*t2311;
  t2343 = t386*t2336;
  t2345 = t2342 + t2343;
  t2358 = t386*t2311;
  t2360 = t410*t2336;
  t2361 = t2358 + t2360;
  t2365 = t518*t2345;
  t2367 = t490*t2361;
  t2368 = t2365 + t2367;
  t2375 = t490*t2345;
  t2378 = -1.*t518*t2361;
  t2382 = t2375 + t2378;
  t2414 = -1.*t578*t2368;
  t2418 = t569*t2382;
  t2421 = t2414 + t2418;
  t2426 = t569*t2368;
  t2429 = t578*t2382;
  t2432 = t2426 + t2429;
  t2464 = t58*t18;
  t2466 = -1.*t25*t79*t84;
  t2467 = t2464 + t2466;
  t2457 = t18*t25*t79;
  t2459 = t58*t84;
  t2461 = t2457 + t2459;
  t2479 = -1.*t164*t744*t25;
  t2483 = t756*t2467;
  t2499 = t2479 + t2483;
  t2502 = -1.*t756*t164*t25;
  t2504 = -1.*t744*t2467;
  t2514 = t2502 + t2504;
  t2541 = t797*t2461;
  t2547 = t831*t2499;
  t2548 = t2541 + t2547;
  t2550 = t911*t2514;
  t2552 = t898*t2548;
  t2555 = t2550 + t2552;
  t2557 = t898*t2514;
  t2560 = -1.*t911*t2548;
  t2567 = t2557 + t2560;
  t2571 = -1.*t998*t2555;
  t2578 = t981*t2567;
  t2579 = t2571 + t2578;
  t2587 = t981*t2555;
  t2589 = t998*t2567;
  t2592 = t2587 + t2589;
  t2605 = t1077*t2579;
  t2615 = t1066*t2592;
  t2617 = t2605 + t2615;
  t2624 = t1066*t2579;
  t2625 = -1.*t1077*t2592;
  t2628 = t2624 + t2625;
  t2636 = -1.*t1182*t2617;
  t2640 = t1168*t2628;
  t2641 = t2636 + t2640;
  t2660 = t1168*t2617;
  t2661 = t1182*t2628;
  t2664 = t2660 + t2661;
  t2710 = t136*t2467;
  t2712 = -1.*t164*t25*t165;
  t2720 = t2710 + t2712;
  t2740 = t206*t2461;
  t2743 = t2720*t216;
  t2747 = t2740 + t2743;
  t2756 = -1.*t164*t136*t25;
  t2760 = -1.*t2467*t165;
  t2765 = t2756 + t2760;
  t2768 = t295*t2747;
  t2769 = t2765*t314;
  t2775 = t2768 + t2769;
  t2779 = t295*t2765;
  t2782 = -1.*t2747*t314;
  t2783 = t2779 + t2782;
  t2787 = -1.*t410*t2775;
  t2788 = t386*t2783;
  t2791 = t2787 + t2788;
  t2795 = t386*t2775;
  t2799 = t410*t2783;
  t2802 = t2795 + t2799;
  t2814 = t518*t2791;
  t2817 = t490*t2802;
  t2819 = t2814 + t2817;
  t2825 = t490*t2791;
  t2826 = -1.*t518*t2802;
  t2828 = t2825 + t2826;
  t2831 = -1.*t578*t2819;
  t2832 = t569*t2828;
  t2833 = t2831 + t2832;
  t2836 = t569*t2819;
  t2838 = t578*t2828;
  t2846 = t2836 + t2838;
  p_output1[0]=t111;
  p_output1[1]=t18*t58*t79 - 1.*t25*t84;
  p_output1[2]=var1[7];
  p_output1[3]=t152 + t182 + t221 + t278 + t283 + t336 + t383 + t440 + t483 + t543 + t567 + t600 + t621 + t667 + t696 + t706 + t727 - 1.*var1[2] + 0.0288377642750394*(1.316608*(t1560 + t1562 + t1577 + t1579 + 0.135*t282 - 0.049*t288 - 0.0343*t362 + var1[2]) + 5.79228*(t1560 + t1562 + t1577 + t1579 + t1589 + t1590 + 0.17081*t282 - 0.04895*t437 - 0.14946*t478 + var1[2]) + 1.03008*(t1560 + t1562 + t1577 + t1579 + t1589 + t1590 + t1620 + t1622 + 0.132168*t282 - 0.255862*t539 - 0.007761*t564 + var1[2]) + 10.33*(0.000346*t111 + 0.05066*t247 + 0.02841*t164*t58 + var1[2]) + 0.763*(t1560 + t1562 + t1577 + t1579 + t1589 + t1590 + t1620 + t1622 + t1663 + t1669 + 0.130288*t282 - 0.000421*t597 - 0.45406*t620 + var1[2]) + 1.03*(t1560 + t1562 + t1577 + t1579 + t1589 + t1590 + t1620 + t1622 + t1663 + t1669 + t1698 + t1701 + 0.127241*t282 - 0.826587*t665 - 0.004179*t695 + var1[2]) + 0.1498*(t1560 + t1562 + t1577 + t1579 + t1589 + t1590 + t1620 + t1622 + t1663 + t1669 + t1698 + t1701 + 0.13064*t282 + t655*t665 + t685*t695 + 0.00589*t704 - 1.11818*t726 + var1[2]) + 1.965608*(t1560 + t1562 + 0.1351*t201 + 0.01793*t362 + t755 + var1[2]) + 1.965608*(t745 + t755 + t763 - 0.1351*t774 + 0.01793*t792 + var1[2]) + 1.316608*(t745 + t763 - 0.0343*t792 + t835 + t858 - 0.135*t880 - 0.049*t889 + var1[2]) + 1.03008*(t1005 + t1011 - 0.255862*t1024 - 0.007761*t1046 + t745 + t763 + t835 + t858 - 0.132168*t880 + t920 + t936 + var1[2]) + 0.1498*(t1005 + t1011 + t1097 + t1108 + t1200 + t1208 + t1520 + t1535 + 0.00589*t1543 - 1.11818*t1551 + t745 + t763 + t835 + t858 - 0.13064*t880 + t920 + t936 + var1[2]) + 0.763*(t1005 + t1011 + t1097 + t1108 - 0.000421*t1127 - 0.45406*t1145 + t745 + t763 + t835 + t858 - 0.130288*t880 + t920 + t936 + var1[2]) + 1.03*(t1005 + t1011 + t1097 + t1108 + t1200 + t1208 - 0.826587*t1221 - 0.004179*t1238 + t745 + t763 + t835 + t858 - 0.127241*t880 + t920 + t936 + var1[2]) + 5.79228*(t745 + t763 + t835 + t858 - 0.17081*t880 + t920 + t936 - 0.04895*t960 - 0.14946*t971 + var1[2]) + 0.126*(t1560 + t1562 + t1577 + t1579 + t1589 + t1590 + t1620 + t1622 + t1663 + t1669 + t1698 + t1701 + 0.01889*((t1832 + t1864)*t282 + (t1858 + t1872)*t665 + (1. - 0.993925573253*t1722)*t695) + 0.126739*((1. - 0.006104248100000001*t1722)*t282 + (t1743 + t1907)*t665 + (t1758 + t1864)*t695) - 0.617968*((t1794 + t1907)*t282 + (1. - 0.999969365345*t1722)*t665 + (t1785 + t1872)*t695) + var1[2] + t282*(0.000033783761634830594*t1722 - 0.6934341012630001*(t1726 + t1743) - 0.021877537552*(t1756 + t1758) - 2.1934241414728571e-7*var1[12]) + t695*(-0.021744644052735636*t1722 + 0.005534467322*(t1756 + t1832) - 0.6934341012630001*(t1782 + t1858) - 1.7147089040178687e-8*var1[12]) + t665*(-0.6934128581485427*t1722 - 0.021877537552*(t1782 + t1785) + 0.005534467322*(t1726 + t1794) - 1.2096424700126054e-9*var1[12])) + 0.126*(t1005 + t1011 + t1097 + t1108 + t1200 + t1208 + t745 + t763 + t835 + t858 - 0.126739*(t1238*(t1276 + t1399) + t1221*(t1286 + t1441) + (1. - 0.006104248100000001*t1267)*t880) + 0.01889*(t1238*(1. - 0.993925573253*t1267) + t1221*(t1373 + t1403) + (t1365 + t1399)*t880) - 0.617968*(t1221*(1. - 0.999969365345*t1267) + t1238*(t1317 + t1403) + (t1325 + t1441)*t880) + t920 + t936 + var1[2] + t1238*(-0.021744644052735636*t1267 - 0.005534467322*(t1269 + t1365) - 0.6934341012630001*(t1316 + t1373) - 1.7147089040178687e-8*var1[20]) + t1221*(-0.6934128581485427*t1267 - 0.021877537552*(t1316 + t1317) - 0.005534467322*(t1284 + t1325) - 1.2096424700126054e-9*var1[20]) + t880*(-0.000033783761634830594*t1267 - 0.021877537552*(t1269 + t1276) - 0.6934341012630001*(t1284 + t1286) + 2.1934241414728571e-7*var1[20])));
  p_output1[4]=t1005 + t1011 + t1097 + t1108 + t1200 + t1208 + t152 + t1520 + t1535 - 0.02159*t1543 - 1.11344*t1551 + t182 + t221 + t278 + t283 + t336 + t383 + t440 + t483 + t543 + t567 + t600 + t621 + t667 + t696 + t706 + t727 + t745 + t763 + t835 + t858 - 0.1305*t880 + t920 + t936;
  p_output1[5]=t1000*t2134 + t1010*t2147 + t1091*t2163 + t1105*t2178 + t1196*t2191 + t1204*t2201 + t1517*t2209 + t1527*t2221 - 0.02159*(t1513*t2209 + t1497*t2221) - 1.11344*(t1497*t2209 - 1.*t1513*t2221) - 1.*t219*t2274 - 0.1305*(-1.*t164*t18*t216 + t206*t2274) - 1.*t164*t18*t273 - 1.*t2295*t331 - 1.*t2302*t375 - 1.*t2311*t423 - 1.*t2336*t459 - 1.*t2345*t526 - 1.*t2361*t554 - 1.*t2368*t582 - 1.*t2382*t616 + 0.02159*(t2432*t623 + t2421*t649) + 1.11344*(t2421*t623 - 1.*t2432*t649) - 1.*t2421*t655 - 1.*t2432*t685 + 0.135*t165*t79 + 0.135*t744*t79 - 0.1305*(t2068*t797 - 1.*t164*t18*t831) + t164*t18*t834 + 0.135*t147*t164*t84 + 0.135*t164*t762*t84 + t2068*t852 + t2086*t919 + t2113*t934;
  p_output1[6]=-0.135*t147*t2467 - 0.135*t164*t165*t25 + t1000*t2555 + t1010*t2567 + t1091*t2579 + t1105*t2592 + t1196*t2617 + t1204*t2628 + t1517*t2641 + t1527*t2664 - 0.02159*(t1513*t2641 + t1497*t2664) - 1.11344*(t1497*t2641 - 1.*t1513*t2664) - 1.*t219*t2720 - 0.1305*(-1.*t216*t2461 + t206*t2720) - 1.*t2461*t273 - 1.*t2747*t331 - 1.*t2765*t375 - 1.*t2775*t423 - 1.*t2783*t459 - 1.*t2791*t526 - 1.*t2802*t554 - 1.*t2819*t582 - 1.*t2828*t616 + 0.02159*(t2846*t623 + t2833*t649) + 1.11344*(t2833*t623 - 1.*t2846*t649) - 1.*t2833*t655 - 1.*t2846*t685 - 0.135*t164*t25*t744 - 0.135*t2467*t762 - 0.1305*(t2499*t797 - 1.*t2461*t831) + t2461*t834 + t2499*t852 + t2514*t919 + t2548*t934;
  p_output1[7]=var1[15];
  p_output1[8]=7.142857142857142*(0. - 0.08999*t1543 - 0.10724599999999995*t1551);
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

void yaLeftStance_new_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




