/*
 * Automatically Generated from Mathematica.
 * Thu 23 Dec 2021 17:03:08 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "J_pelvis_RightStance.hh"
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
  double t18;
  double t10;
  double t42;
  double t110;
  double t43;
  double t49;
  double t58;
  double t69;
  double t80;
  double t92;
  double t113;
  double t119;
  double t134;
  double t142;
  double t149;
  double t171;
  double t181;
  double t184;
  double t45;
  double t50;
  double t59;
  double t75;
  double t84;
  double t98;
  double t115;
  double t124;
  double t139;
  double t143;
  double t159;
  double t172;
  double t22;
  double t27;
  double t33;
  double t37;
  double t198;
  double t218;
  double t220;
  double t247;
  double t249;
  double t259;
  double t269;
  double t274;
  double t276;
  double t279;
  double t285;
  double t288;
  double t353;
  double t354;
  double t355;
  double t368;
  double t381;
  double t509;
  double t505;
  double t507;
  double t510;
  double t513;
  double t515;
  double t502;
  double t177;
  double t519;
  double t529;
  double t532;
  double t380;
  double t488;
  double t497;
  double t498;
  double t499;
  double t500;
  double t504;
  double t506;
  double t508;
  double t511;
  double t514;
  double t516;
  double t517;
  double t530;
  double t533;
  double t547;
  double t535;
  double t551;
  double t539;
  double t580;
  double t585;
  double t604;
  double t607;
  double t611;
  double t583;
  double t586;
  double t598;
  double t643;
  double t644;
  double t653;
  double t656;
  double t659;
  double t668;
  double t685;
  double t688;
  double t694;
  double t703;
  double t706;
  double t735;
  double t738;
  double t749;
  double t764;
  double t773;
  double t776;
  double t24;
  double t29;
  double t31;
  double t34;
  double t39;
  double t40;
  double t64;
  double t102;
  double t140;
  double t175;
  double t221;
  double t265;
  double t278;
  double t339;
  double t342;
  double t865;
  double t868;
  double t872;
  double t875;
  double t406;
  double t415;
  double t428;
  double t437;
  double t438;
  double t442;
  double t444;
  double t445;
  double t446;
  double t449;
  double t454;
  double t455;
  double t456;
  double t464;
  double t468;
  double t471;
  double t476;
  double t482;
  double t485;
  double t520;
  double t521;
  double t522;
  double t523;
  double t524;
  double t878;
  double t866;
  double t869;
  double t885;
  double t873;
  double t876;
  double t361;
  double t881;
  double t883;
  double t369;
  double t370;
  double t888;
  double t890;
  double t786;
  double t789;
  double t795;
  double t648;
  double t654;
  double t657;
  double t662;
  double t815;
  double t818;
  double t821;
  double t671;
  double t686;
  double t689;
  double t696;
  double t807;
  double t809;
  double t811;
  double t813;
  double t824;
  double t826;
  double t828;
  double t830;
  double t914;
  double t915;
  double t916;
  double t917;
  double t918;
  double t919;
  double t920;
  double t921;
  double t922;
  double t923;
  double t924;
  double t925;
  double t926;
  double t927;
  double t853;
  double t36;
  double t855;
  double t78;
  double t86;
  double t857;
  double t147;
  double t161;
  double t182;
  double t194;
  double t196;
  double t859;
  double t248;
  double t252;
  double t861;
  double t282;
  double t286;
  double t383;
  double t390;
  double t391;
  double t896;
  double t413;
  double t414;
  double t898;
  double t429;
  double t430;
  double t901;
  double t463;
  double t903;
  double t472;
  double t475;
  double t905;
  double t483;
  double t484;
  double t867;
  double t870;
  double t879;
  double t880;
  double t882;
  double t884;
  double t886;
  double t548;
  double t552;
  double t560;
  double t566;
  double t601;
  double t615;
  double t626;
  double t627;
  double t631;
  double t632;
  double t633;
  double t634;
  double t635;
  double t1016;
  double t1017;
  double t1018;
  double t1019;
  double t1020;
  double t1021;
  double t937;
  double t939;
  double t940;
  double t942;
  double t944;
  double t947;
  double t949;
  double t950;
  double t952;
  double t954;
  double t704;
  double t709;
  double t736;
  double t739;
  double t751;
  double t765;
  double t774;
  double t779;
  double t956;
  double t958;
  double t960;
  double t962;
  double t698;
  double t832;
  double t834;
  double t732;
  double t836;
  double t838;
  double t741;
  double t840;
  double t842;
  double t770;
  double t844;
  double t846;
  double t973;
  double t974;
  double t975;
  double t976;
  double t978;
  double t979;
  double t980;
  double t981;
  double t985;
  double t986;
  double t987;
  double t988;
  double t994;
  double t995;
  double t996;
  double t997;
  double t999;
  double t1000;
  double t1001;
  double t1002;
  double t1009;
  double t1010;
  double t1012;
  double t1013;
  double t1084;
  double t1085;
  double t1086;
  double t1087;
  double t1088;
  double t1027;
  double t1029;
  double t1031;
  double t1033;
  double t1096;
  double t1039;
  double t1040;
  double t1042;
  double t1043;
  double t1044;
  double t1045;
  double t1046;
  double t1047;
  double t1048;
  double t1049;
  double t1050;
  double t1051;
  double t1052;
  double t1053;
  double t1054;
  double t1055;
  double t1058;
  double t1059;
  double t1062;
  double t1063;
  double t1066;
  double t1067;
  double t1070;
  double t1071;
  t18 = -1.*var1[16];
  t10 = -1.*var1[15];
  t42 = -1.*var1[17];
  t110 = -1.*var1[19];
  t43 = var1[14] + t18 + t42;
  t49 = var1[14] + t10 + t18 + t42;
  t58 = var1[14] + var1[15] + t18 + t42;
  t69 = var1[14] + var1[16] + var1[17];
  t80 = var1[14] + t10 + var1[16] + var1[17];
  t92 = var1[14] + var1[15] + var1[16] + var1[17];
  t113 = var1[14] + t18 + t42 + t110;
  t119 = var1[14] + t10 + t18 + t42 + t110;
  t134 = var1[14] + var1[15] + t18 + t42 + t110;
  t142 = var1[14] + var1[16] + var1[17] + var1[19];
  t149 = var1[14] + t10 + var1[16] + var1[17] + var1[19];
  t171 = var1[14] + var1[15] + var1[16] + var1[17] + var1[19];
  t181 = var1[14] + t18;
  t184 = var1[14] + var1[16];
  t45 = Cos(t43);
  t50 = Cos(t49);
  t59 = Cos(t58);
  t75 = Cos(t69);
  t84 = Cos(t80);
  t98 = Cos(t92);
  t115 = Cos(t113);
  t124 = Cos(t119);
  t139 = Cos(t134);
  t143 = Cos(t142);
  t159 = Cos(t149);
  t172 = Cos(t171);
  t22 = var1[14] + t10 + t18;
  t27 = var1[14] + var1[15] + t18;
  t33 = var1[14] + t10 + var1[16];
  t37 = var1[14] + var1[15] + var1[16];
  t198 = Sin(t43);
  t218 = Sin(t49);
  t220 = Sin(t58);
  t247 = Sin(t69);
  t249 = Sin(t80);
  t259 = Sin(t92);
  t269 = Sin(t113);
  t274 = Sin(t119);
  t276 = Sin(t134);
  t279 = Sin(t142);
  t285 = Sin(t149);
  t288 = Sin(t171);
  t353 = Cos(var1[15]);
  t354 = -1.*var1[4];
  t355 = var1[14] + t354;
  t368 = var1[14] + var1[4];
  t381 = Cos(var1[14]);
  t509 = var1[17] + var1[19];
  t505 = Cos(var1[4]);
  t507 = Cos(var1[17]);
  t510 = Cos(t509);
  t513 = Sin(var1[17]);
  t515 = Sin(t509);
  t502 = Sin(var1[3]);
  t177 = Sin(var1[14]);
  t519 = Cos(var1[16]);
  t529 = var1[16] + var1[17];
  t532 = var1[16] + var1[17] + var1[19];
  t380 = Cos(var1[3]);
  t488 = Cos(t355);
  t497 = 450.*t488;
  t498 = Cos(t368);
  t499 = 450.*t498;
  t500 = t497 + t499;
  t504 = Sin(var1[15]);
  t506 = Sin(var1[16]);
  t508 = 49544.*t507;
  t511 = 40800.*t510;
  t514 = -6741.*t513;
  t516 = 4000.*t515;
  t517 = 12000. + t508 + t511 + t514 + t516;
  t530 = Cos(t529);
  t533 = Cos(t532);
  t547 = var1[16] + t42;
  t535 = Sin(t529);
  t551 = var1[16] + t42 + t110;
  t539 = Sin(t532);
  t580 = Cos(var1[19]);
  t585 = Sin(var1[19]);
  t604 = -4000.*t580;
  t607 = 40800.*t585;
  t611 = 6741. + t604 + t607;
  t583 = 10200.*t580;
  t586 = 1000.*t585;
  t598 = 12386. + t583 + t586;
  t643 = -1.*var1[3];
  t644 = var1[15] + t18 + t42 + t643;
  t653 = var1[15] + var1[16] + var1[17] + t643;
  t656 = var1[15] + t18 + t42 + t110 + t643;
  t659 = var1[15] + var1[16] + var1[17] + var1[19] + t643;
  t668 = var1[15] + t18 + t42 + var1[3];
  t685 = var1[15] + var1[16] + var1[17] + var1[3];
  t688 = var1[15] + t18 + t42 + t110 + var1[3];
  t694 = var1[15] + var1[16] + var1[17] + var1[19] + var1[3];
  t703 = var1[16] + var1[17] + t643 + t354;
  t706 = var1[16] + var1[17] + var1[19] + t643 + t354;
  t735 = var1[16] + var1[17] + var1[3] + t354;
  t738 = var1[16] + var1[17] + var1[19] + var1[3] + t354;
  t749 = var1[16] + var1[17] + t643 + var1[4];
  t764 = var1[16] + var1[17] + var1[19] + t643 + var1[4];
  t773 = var1[16] + var1[17] + var1[3] + var1[4];
  t776 = var1[16] + var1[17] + var1[19] + var1[3] + var1[4];
  t24 = Cos(t22);
  t29 = Cos(t27);
  t31 = -12000.*t29;
  t34 = Cos(t33);
  t39 = Cos(t37);
  t40 = 12000.*t39;
  t64 = -49544.*t59;
  t102 = 49544.*t98;
  t140 = -40800.*t139;
  t175 = 40800.*t172;
  t221 = -6741.*t220;
  t265 = -6741.*t259;
  t278 = 4000.*t276;
  t339 = 4000.*t288;
  t342 = Sin(var1[4]);
  t865 = var1[16] + var1[17] + t354;
  t868 = var1[16] + var1[17] + var1[19] + t354;
  t872 = var1[16] + var1[17] + var1[4];
  t875 = var1[16] + var1[17] + var1[19] + var1[4];
  t406 = 6741.*t59;
  t415 = 6741.*t98;
  t428 = -4000.*t139;
  t437 = -4000.*t172;
  t438 = var1[14] + t10;
  t442 = Sin(t438);
  t444 = var1[14] + var1[15];
  t445 = Sin(t444);
  t446 = -900.*t445;
  t449 = Sin(t22);
  t454 = Sin(t27);
  t455 = -12000.*t454;
  t456 = Sin(t33);
  t464 = Sin(t37);
  t468 = 12000.*t464;
  t471 = -49544.*t220;
  t476 = 49544.*t259;
  t482 = -40800.*t276;
  t485 = 40800.*t288;
  t520 = 6741.*t507;
  t521 = -4000.*t510;
  t522 = 49544.*t513;
  t523 = 40800.*t515;
  t524 = t520 + t521 + t522 + t523;
  t878 = var1[16] + t354;
  t866 = Cos(t865);
  t869 = Cos(t868);
  t885 = var1[16] + var1[4];
  t873 = Cos(t872);
  t876 = Cos(t875);
  t361 = Sin(t355);
  t881 = Sin(t865);
  t883 = Sin(t868);
  t369 = Sin(t368);
  t370 = 450.*t369;
  t888 = Sin(t872);
  t890 = Sin(t875);
  t786 = var1[15] + t643;
  t789 = var1[15] + t18 + t643;
  t795 = var1[15] + var1[16] + t643;
  t648 = Cos(t644);
  t654 = Cos(t653);
  t657 = Cos(t656);
  t662 = Cos(t659);
  t815 = var1[15] + var1[3];
  t818 = var1[15] + t18 + var1[3];
  t821 = var1[15] + var1[16] + var1[3];
  t671 = Cos(t668);
  t686 = Cos(t685);
  t689 = Cos(t688);
  t696 = Cos(t694);
  t807 = Sin(t644);
  t809 = Sin(t653);
  t811 = Sin(t656);
  t813 = Sin(t659);
  t824 = Sin(t668);
  t826 = Sin(t685);
  t828 = Sin(t688);
  t830 = Sin(t694);
  t914 = Cos(t878);
  t915 = -12000.*t914;
  t916 = -49544.*t866;
  t917 = -40800.*t869;
  t918 = Cos(t885);
  t919 = 12000.*t918;
  t920 = 49544.*t873;
  t921 = 40800.*t876;
  t922 = 450.*t361;
  t923 = 6741.*t881;
  t924 = -4000.*t883;
  t925 = -6741.*t888;
  t926 = 4000.*t890;
  t927 = t915 + t916 + t917 + t919 + t920 + t921 + t922 + t923 + t924 + t370 + t925 + t926;
  t853 = -12000.*t24;
  t36 = -12000.*t34;
  t855 = -49544.*t50;
  t78 = -13482.*t75;
  t86 = -49544.*t84;
  t857 = -40800.*t124;
  t147 = 8000.*t143;
  t161 = -40800.*t159;
  t182 = Sin(t181);
  t194 = Sin(t184);
  t196 = -24000.*t194;
  t859 = -6741.*t218;
  t248 = -99088.*t247;
  t252 = 6741.*t249;
  t861 = 4000.*t274;
  t282 = -81600.*t279;
  t286 = -4000.*t285;
  t383 = Cos(t181);
  t390 = Cos(t184);
  t391 = 24000.*t390;
  t896 = 6741.*t50;
  t413 = 99088.*t75;
  t414 = -6741.*t84;
  t898 = -4000.*t124;
  t429 = 81600.*t143;
  t430 = 4000.*t159;
  t901 = -12000.*t449;
  t463 = -12000.*t456;
  t903 = -49544.*t218;
  t472 = -13482.*t247;
  t475 = -49544.*t249;
  t905 = -40800.*t274;
  t483 = 8000.*t279;
  t484 = -40800.*t285;
  t867 = 6741.*t866;
  t870 = -4000.*t869;
  t879 = Sin(t878);
  t880 = 12000.*t879;
  t882 = 49544.*t881;
  t884 = 40800.*t883;
  t886 = Sin(t885);
  t548 = Cos(t547);
  t552 = Cos(t551);
  t560 = Sin(t547);
  t566 = Sin(t551);
  t601 = 4.*t380*t505*t504*t513*t598;
  t615 = t513*t611;
  t626 = -12000. + t615;
  t627 = -1.*t626*t502;
  t631 = t380*t505*t504*t611;
  t632 = 4.*t598*t502;
  t633 = t631 + t632;
  t634 = t507*t633;
  t635 = t601 + t627 + t634;
  t1016 = -6741.*t873;
  t1017 = 4000.*t876;
  t1018 = -12000.*t886;
  t1019 = -49544.*t888;
  t1020 = -40800.*t890;
  t1021 = t867 + t870 + t1016 + t1017 + t880 + t882 + t884 + t1018 + t1019 + t1020;
  t937 = Cos(t789);
  t939 = Cos(t795);
  t940 = -12000.*t939;
  t942 = -49544.*t654;
  t944 = -40800.*t662;
  t947 = Cos(t818);
  t949 = Cos(t821);
  t950 = 12000.*t949;
  t952 = 49544.*t686;
  t954 = 40800.*t696;
  t704 = Cos(t703);
  t709 = Cos(t706);
  t736 = Cos(t735);
  t739 = Cos(t738);
  t751 = Cos(t749);
  t765 = Cos(t764);
  t774 = Cos(t773);
  t779 = Cos(t776);
  t956 = 6741.*t809;
  t958 = -4000.*t813;
  t960 = -6741.*t826;
  t962 = 4000.*t830;
  t698 = var1[16] + t643 + t354;
  t832 = Sin(t703);
  t834 = Sin(t706);
  t732 = var1[16] + var1[3] + t354;
  t836 = Sin(t735);
  t838 = Sin(t738);
  t741 = var1[16] + t643 + var1[4];
  t840 = Sin(t749);
  t842 = Sin(t764);
  t770 = var1[16] + var1[3] + var1[4];
  t844 = Sin(t773);
  t846 = Sin(t776);
  t973 = -13482.*t45;
  t974 = 49544.*t59;
  t975 = 8000.*t115;
  t976 = 40800.*t139;
  t978 = 99088.*t198;
  t979 = 6741.*t220;
  t980 = 81600.*t269;
  t981 = -4000.*t276;
  t985 = 49544.*t866;
  t986 = 40800.*t869;
  t987 = -6741.*t881;
  t988 = 4000.*t883;
  t994 = -99088.*t45;
  t995 = -6741.*t59;
  t996 = -81600.*t115;
  t997 = 4000.*t139;
  t999 = -13482.*t198;
  t1000 = 49544.*t220;
  t1001 = 8000.*t269;
  t1002 = 40800.*t276;
  t1009 = -6741.*t530;
  t1010 = 4000.*t533;
  t1012 = -49544.*t535;
  t1013 = -40800.*t539;
  t1084 = -6741.*t507;
  t1085 = 4000.*t510;
  t1086 = -49544.*t513;
  t1087 = -40800.*t515;
  t1088 = t1084 + t1085 + t1086 + t1087;
  t1027 = 6741.*t530;
  t1029 = -4000.*t533;
  t1031 = 49544.*t535;
  t1033 = 40800.*t539;
  t1096 = t867 + t870 + t1016 + t1017 + t882 + t884 + t1019 + t1020;
  t1039 = -49544.*t648;
  t1040 = -40800.*t657;
  t1042 = 49544.*t671;
  t1043 = 40800.*t689;
  t1044 = -6741.*t704;
  t1045 = 4000.*t709;
  t1046 = -6741.*t736;
  t1047 = 4000.*t739;
  t1048 = -6741.*t751;
  t1049 = 4000.*t765;
  t1050 = -6741.*t774;
  t1051 = 4000.*t779;
  t1052 = -6741.*t807;
  t1053 = 4000.*t811;
  t1054 = 6741.*t824;
  t1055 = -4000.*t828;
  t1058 = -49544.*t832;
  t1059 = -40800.*t834;
  t1062 = -49544.*t836;
  t1063 = -40800.*t838;
  t1066 = -49544.*t840;
  t1067 = -40800.*t842;
  t1070 = -49544.*t844;
  t1071 = -40800.*t846;
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
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=2.5e-6*(-2.*t353*(-450.*t361 + t370) + t342*(t102 - 8000.*t115 + 40800.*t124 + t140 + t147 + t161 + t175 - 36000.*t177 - 24000.*t182 + t196 - 99088.*t198 + 6741.*t218 + t221 + 12000.*t24 + t248 + t252 + t265 - 81600.*t269 - 4000.*t274 + t278 + t282 + t286 + t31 + t339 + t36 + t40 + 13482.*t45 + 49544.*t50 + t64 + t78 + t86));
  p_output1[34]=2.5e-6*(-1.*t380*(81600.*t115 + 4000.*t124 + 13482.*t198 + 49544.*t218 - 8000.*t269 + 40800.*t274 + 36000.*t381 + 24000.*t383 + t391 + t406 + t413 + t414 + t415 + t428 + t429 + t430 + t437 - 900.*t442 + t446 + 12000.*t449 + 99088.*t45 + t455 + t463 + t468 + t471 + t472 + t475 + t476 + t482 + t483 + t484 + t485 - 6741.*t50) + 2.*t353*t500*t502 + 4.*t502*t504*(t381*t505*t506*t517 + t381*t505*t519*t524) + 4.*t177*t502*t505*(9000. + 12000.*t519 + 49544.*t530 + 40800.*t533 - 6741.*t535 + 4000.*t539));
  p_output1[35]=2.5e-6*(-2.*t353*t380*t500 - 4.*t380*t381*t504*t505*t506*t517 + 2.*t381*t502*(-18000. - 49544.*t530 - 40800.*t533 + 6741.*t535 - 4000.*t539 + 49544.*t548 + 40800.*t552 + 6741.*t560 - 4000.*t566) - 4.*t381*t519*t635 - 1.*t177*(-6741.*t648 - 6741.*t654 + 4000.*t657 + 4000.*t662 + 6741.*t671 + 6741.*t686 - 4000.*t689 - 4000.*t696 + 49544.*t704 + 40800.*t709 + 49544.*t736 + 40800.*t739 + 49544.*t751 + 40800.*t765 + 49544.*t774 + 40800.*t779 + 49544.*t807 - 49544.*t809 + 40800.*t811 - 40800.*t813 - 49544.*t824 + 49544.*t826 - 40800.*t828 + 40800.*t830 - 6741.*t832 + 4000.*t834 - 6741.*t836 + 4000.*t838 - 6741.*t840 + 4000.*t842 - 6741.*t844 + 4000.*t846 + 12000.*Cos(t698) + 12000.*Cos(t732) + 12000.*Cos(t741) + 12000.*Cos(t770) + 18000.*Cos(t354 + var1[3]) + 18000.*Cos(var1[3] + var1[4]) + 900.*Sin(t786) + 12000.*Sin(t789) - 12000.*Sin(t795) - 900.*Sin(t815) - 12000.*Sin(t818) + 12000.*Sin(t821)));
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=1.;
  p_output1[39]=2.5e-6*(1800.*t353*t505 + t342*(t102 + t140 + 40800.*t159 + t175 + t221 - 6741.*t249 + t265 + t278 + 4000.*t285 + t31 + t339 + 12000.*t34 + t40 + t64 + 49544.*t84 + t853 + t855 + t857 + t859 + t861) + 2.*t504*(t497 - 450.*t498 + t867 + t870 + 6741.*t873 - 4000.*t876 + t880 + t882 + t884 + 12000.*t886 + 49544.*t888 + 40800.*t890));
  p_output1[40]=2.5e-6*(4.*t353*t502*(450.*t342 + t177*t505*t506*t517 + t177*t505*t519*t524) - 1.*t380*(-4000.*t159 + 49544.*t249 + 40800.*t285 + t406 + t415 + t428 + t437 + 900.*t442 + t446 + t455 + 12000.*t456 + t468 + t471 + t476 + t482 + t485 + 6741.*t84 + t896 + t898 + t901 + t903 + t905) - 2.*t502*t504*t927);
  p_output1[41]=2.5e-6*(4.*t353*t380*(-450.*t342 - 1.*t177*t505*t506*t517) - 4.*t177*t519*(4.*t353*t380*t505*t513*t598 + t353*t380*t505*t507*t611) + 2.*t380*t504*t927 + t381*(49544.*t648 + 40800.*t657 - 49544.*t671 - 40800.*t689 + 6741.*t807 - 4000.*t811 - 6741.*t824 + 4000.*t828 + 12000.*t937 + t940 + t942 + t944 - 12000.*t947 + t950 + t952 + t954 + t956 + t958 + t960 + t962 + 900.*Cos(t786) - 900.*Cos(t815)));
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=2.5e-6*(t342*(t102 + t147 + t161 + t175 + 24000.*t182 + t196 + t248 + t252 + t265 + t282 + t286 + 12000.*t29 + t339 + t36 + t40 + t78 + t853 + t855 + t857 + t859 + t86 + t861 + t973 + t974 + t975 + t976 + t978 + t979 + t980 + t981) - 2.*t353*(12000.*t914 + t919 + t920 + t921 + t925 + t926 + t985 + t986 + t987 + t988));
  p_output1[46]=2.5e-6*(2.*t1021*t353*t502 - 4.*t381*t502*t505*(t1009 + t1010 + t1012 + t1013 - 12000.*t506) + 4.*t502*t504*(t177*t505*t517*t519 - 1.*t177*t505*t506*t524) - 1.*t380*(t1000 + t1001 + t1002 - 24000.*t383 + t391 + t413 + t414 + t415 + t429 + t430 + t437 + 12000.*t454 + t463 + t468 + t472 + t475 + t476 + t483 + t484 + t485 + t896 + t898 + t901 + t903 + t905 + t994 + t995 + t996 + t997 + t999));
  p_output1[47]=2.5e-6*(-2.*t1021*t353*t380 - 4.*t177*t380*t504*t505*t517*t519 + 2.*t177*t502*(t1027 + t1029 + t1031 + t1033 + 6741.*t548 - 4000.*t552 - 49544.*t560 - 40800.*t566) + 4.*t177*t506*t635 + t381*(t1039 + t1040 + t1042 + t1043 + t1044 + t1045 + t1046 + t1047 + t1048 + t1049 + t1050 + t1051 + t1052 + t1053 + t1054 + t1055 + t1058 + t1059 + t1062 + t1063 + t1066 + t1067 + t1070 + t1071 - 12000.*t937 + t940 + t942 + t944 + 12000.*t947 + t950 + t952 + t954 + t956 + t958 + t960 + t962 - 12000.*Sin(t698) - 12000.*Sin(t732) - 12000.*Sin(t741) - 12000.*Sin(t770)));
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=2.5e-6*(t342*(t102 + t147 + t161 + t175 + t248 + t252 + t265 + t282 + t286 + t339 + t78 + t855 + t857 + t859 + t86 + t861 + t973 + t974 + t975 + t976 + t978 + t979 + t980 + t981) - 2.*t353*(t920 + t921 + t925 + t926 + t985 + t986 + t987 + t988));
  p_output1[52]=2.5e-6*(2.*t1096*t353*t502 - 4.*(t1009 + t1010 + t1012 + t1013)*t381*t502*t505 + 4.*t502*t504*(t1088*t177*t505*t506 + t177*t505*(t508 + t511 + t514 + t516)*t519) - 1.*t380*(t1000 + t1001 + t1002 + t413 + t414 + t415 + t429 + t430 + t437 + t472 + t475 + t476 + t483 + t484 + t485 + t896 + t898 + t903 + t905 + t994 + t995 + t996 + t997 + t999));
  p_output1[53]=2.5e-6*(-2.*t1096*t353*t380 - 4.*t1088*t177*t380*t504*t505*t506 + 2.*t177*t502*(t1027 + t1029 + t1031 + t1033 - 6741.*t548 + 4000.*t552 + 49544.*t560 + 40800.*t566) - 4.*t177*t519*(4.*t380*t504*t505*t507*t598 - 1.*t502*t507*t611 - 1.*t513*t633) + t381*(t1039 + t1040 + t1042 + t1043 + t1044 + t1045 + t1046 + t1047 + t1048 + t1049 + t1050 + t1051 + t1052 + t1053 + t1054 + t1055 + t1058 + t1059 + t1062 + t1063 + t1066 + t1067 + t1070 + t1071 + t942 + t944 + t952 + t954 + t956 + t958 + t960 + t962));
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 6, (mwSize) 10, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#endif // MATLAB_MEX_FILE

namespace SymFunction
{

void J_pelvis_RightStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




