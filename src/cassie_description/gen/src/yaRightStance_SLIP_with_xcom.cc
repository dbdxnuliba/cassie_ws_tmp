/*
 * Automatically Generated from Mathematica.
 * Mon 20 Dec 2021 14:46:00 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "yaRightStance_SLIP_with_xcom.hh"
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
  double t13;
  double t5;
  double t14;
  double t8;
  double t22;
  double t67;
  double t73;
  double t91;
  double t109;
  double t114;
  double t117;
  double t121;
  double t135;
  double t136;
  double t139;
  double t142;
  double t124;
  double t125;
  double t132;
  double t159;
  double t160;
  double t161;
  double t186;
  double t187;
  double t188;
  double t209;
  double t210;
  double t211;
  double t213;
  double t216;
  double t217;
  double t230;
  double t238;
  double t239;
  double t240;
  double t245;
  double t248;
  double t249;
  double t252;
  double t256;
  double t257;
  double t259;
  double t264;
  double t266;
  double t267;
  double t269;
  double t270;
  double t271;
  double t274;
  double t279;
  double t280;
  double t282;
  double t291;
  double t293;
  double t295;
  double t92;
  double t102;
  double t329;
  double t330;
  double t118;
  double t122;
  double t123;
  double t164;
  double t165;
  double t178;
  double t203;
  double t205;
  double t206;
  double t338;
  double t141;
  double t151;
  double t156;
  double t342;
  double t180;
  double t182;
  double t183;
  double t349;
  double t350;
  double t212;
  double t214;
  double t215;
  double t233;
  double t234;
  double t237;
  double t359;
  double t360;
  double t250;
  double t253;
  double t255;
  double t261;
  double t262;
  double t263;
  double t387;
  double t388;
  double t390;
  double t393;
  double t376;
  double t379;
  double t392;
  double t413;
  double t398;
  double t433;
  double t427;
  double t394;
  double t439;
  double t399;
  double t453;
  double t408;
  double t442;
  double t416;
  double t273;
  double t276;
  double t277;
  double t286;
  double t287;
  double t290;
  double t297;
  double t299;
  double t302;
  double t305;
  double t306;
  double t307;
  double t335;
  double t519;
  double t527;
  double t522;
  double t523;
  double t526;
  double t530;
  double t543;
  double t544;
  double t545;
  double t535;
  double t538;
  double t539;
  double t555;
  double t556;
  double t558;
  double t560;
  double t559;
  double t561;
  double t562;
  double t563;
  double t564;
  double t566;
  double t567;
  double t570;
  double t572;
  double t574;
  double t575;
  double t578;
  double t579;
  double t580;
  double t588;
  double t589;
  double t590;
  double t592;
  double t591;
  double t593;
  double t594;
  double t595;
  double t596;
  double t599;
  double t600;
  double t601;
  double t602;
  double t603;
  double t604;
  double t620;
  double t622;
  double t624;
  double t626;
  double t606;
  double t608;
  double t612;
  double t625;
  double t628;
  double t629;
  double t630;
  double t632;
  double t633;
  double t636;
  double t637;
  double t638;
  double t639;
  double t640;
  double t642;
  double t643;
  double t644;
  double t657;
  double t660;
  double t662;
  double t664;
  double t687;
  double t688;
  double t690;
  double t693;
  double t663;
  double t665;
  double t666;
  double t667;
  double t669;
  double t671;
  double t672;
  double t675;
  double t697;
  double t676;
  double t677;
  double t678;
  double t708;
  double t692;
  double t680;
  double t681;
  double t682;
  double t719;
  double t716;
  double t698;
  double t724;
  double t694;
  double t738;
  double t705;
  double t727;
  double t709;
  double t762;
  double t763;
  double t766;
  double t768;
  double t85;
  double t103;
  double t133;
  double t163;
  double t179;
  double t189;
  double t207;
  double t231;
  double t244;
  double t260;
  double t268;
  double t285;
  double t296;
  double t304;
  double t308;
  double t767;
  double t769;
  double t770;
  double t771;
  double t772;
  double t773;
  double t774;
  double t775;
  double t778;
  double t779;
  double t780;
  double t782;
  double t783;
  double t784;
  double t803;
  double t804;
  double t805;
  double t807;
  double t808;
  double t809;
  double t811;
  double t812;
  double t813;
  double t815;
  double t816;
  double t817;
  double t819;
  double t820;
  double t821;
  double t823;
  double t824;
  double t825;
  double t827;
  double t828;
  double t829;
  double t846;
  double t847;
  double t848;
  double t851;
  double t852;
  double t853;
  double t855;
  double t856;
  double t857;
  double t859;
  double t860;
  double t861;
  double t863;
  double t864;
  double t865;
  double t867;
  double t868;
  double t869;
  double t871;
  double t872;
  double t873;
  double t891;
  double t892;
  double t893;
  double t887;
  double t888;
  double t889;
  double t896;
  double t897;
  double t898;
  double t904;
  double t905;
  double t906;
  double t908;
  double t909;
  double t910;
  double t912;
  double t913;
  double t914;
  double t916;
  double t917;
  double t918;
  double t920;
  double t921;
  double t922;
  double t924;
  double t925;
  double t926;
  double t937;
  double t938;
  double t939;
  double t946;
  double t947;
  double t948;
  double t950;
  double t951;
  double t952;
  double t954;
  double t955;
  double t956;
  double t958;
  double t959;
  double t960;
  double t962;
  double t963;
  double t964;
  double t966;
  double t967;
  double t968;
  double t970;
  double t971;
  double t972;
  double t974;
  double t975;
  double t976;
  double t9;
  double t23;
  double t37;
  double t996;
  double t997;
  double t987;
  double t988;
  double t989;
  double t990;
  double t991;
  double t992;
  double t993;
  double t994;
  double t995;
  double t998;
  double t999;
  double t1001;
  double t1002;
  double t1003;
  double t1000;
  double t1004;
  double t1005;
  double t1007;
  double t1008;
  double t1009;
  double t1006;
  double t1010;
  double t1011;
  double t1013;
  double t1014;
  double t1015;
  double t795;
  double t796;
  double t797;
  double t798;
  double t799;
  double t800;
  double t801;
  double t802;
  double t806;
  double t810;
  double t814;
  double t818;
  double t822;
  double t826;
  double t830;
  double t831;
  double t832;
  double t833;
  double t834;
  double t835;
  double t836;
  double t837;
  double t838;
  double t1035;
  double t1037;
  double t1038;
  double t1043;
  double t1045;
  double t1051;
  double t1052;
  double t386;
  double t391;
  double t395;
  double t397;
  double t400;
  double t401;
  double t402;
  double t1063;
  double t1064;
  double t405;
  double t407;
  double t410;
  double t411;
  double t417;
  double t418;
  double t421;
  double t424;
  double t426;
  double t428;
  double t430;
  double t435;
  double t436;
  double t437;
  double t440;
  double t443;
  double t445;
  double t446;
  double t450;
  double t451;
  double t459;
  double t462;
  double t470;
  double t478;
  double t479;
  double t483;
  double t1030;
  double t839;
  double t840;
  double t841;
  double t842;
  double t843;
  double t844;
  double t849;
  double t850;
  double t854;
  double t858;
  double t862;
  double t866;
  double t686;
  double t691;
  double t695;
  double t696;
  double t699;
  double t700;
  double t701;
  double t703;
  double t704;
  double t706;
  double t707;
  double t710;
  double t711;
  double t712;
  double t714;
  double t715;
  double t717;
  double t718;
  double t720;
  double t721;
  double t722;
  double t725;
  double t728;
  double t730;
  double t731;
  double t735;
  double t736;
  double t739;
  double t741;
  double t745;
  double t747;
  double t748;
  double t753;
  double t870;
  double t874;
  double t875;
  double t876;
  double t877;
  double t879;
  double t880;
  double t881;
  t13 = Cos(var1[3]);
  t5 = Cos(var1[5]);
  t14 = Sin(var1[4]);
  t8 = Sin(var1[3]);
  t22 = Sin(var1[5]);
  t67 = Cos(var1[4]);
  t73 = Sin(var1[14]);
  t91 = Cos(var1[14]);
  t109 = Cos(var1[15]);
  t114 = -1.*t109;
  t117 = 1. + t114;
  t121 = Sin(var1[15]);
  t135 = Cos(var1[16]);
  t136 = -1.*t135;
  t139 = 1. + t136;
  t142 = Sin(var1[16]);
  t124 = t13*t67*t73;
  t125 = t91*t8;
  t132 = t124 + t125;
  t159 = t91*t13*t67;
  t160 = -1.*t73*t8;
  t161 = t159 + t160;
  t186 = t121*t132;
  t187 = -1.*t109*t13*t14;
  t188 = t186 + t187;
  t209 = Cos(var1[17]);
  t210 = -1.*t209;
  t211 = 1. + t210;
  t213 = Sin(var1[17]);
  t216 = t142*t161;
  t217 = t135*t188;
  t230 = t216 + t217;
  t238 = t135*t161;
  t239 = -1.*t142*t188;
  t240 = t238 + t239;
  t245 = Cos(var1[19]);
  t248 = -1.*t245;
  t249 = 1. + t248;
  t252 = Sin(var1[19]);
  t256 = -1.*t213*t230;
  t257 = t209*t240;
  t259 = t256 + t257;
  t264 = t209*t230;
  t266 = t213*t240;
  t267 = t264 + t266;
  t269 = Cos(var1[21]);
  t270 = -1.*t269;
  t271 = 1. + t270;
  t274 = Sin(var1[21]);
  t279 = t252*t259;
  t280 = t245*t267;
  t282 = t279 + t280;
  t291 = t245*t259;
  t293 = -1.*t252*t267;
  t295 = t291 + t293;
  t92 = -1.*t91;
  t102 = 1. + t92;
  t329 = 0.135*t13*t67*t73;
  t330 = -0.135*t102*t8;
  t118 = -0.135*t117;
  t122 = 0.049*t121;
  t123 = t118 + t122;
  t164 = -0.049*t117;
  t165 = -0.135*t121;
  t178 = t164 + t165;
  t203 = t109*t132;
  t205 = t13*t121*t14;
  t206 = t203 + t205;
  t338 = t123*t132;
  t141 = -0.09*t139;
  t151 = 0.049*t142;
  t156 = t141 + t151;
  t342 = -1.*t13*t178*t14;
  t180 = -0.049*t139;
  t182 = -0.09*t142;
  t183 = t180 + t182;
  t349 = t156*t161;
  t350 = t183*t188;
  t212 = -0.049*t211;
  t214 = -0.21*t213;
  t215 = t212 + t214;
  t233 = -0.21*t211;
  t234 = 0.049*t213;
  t237 = t233 + t234;
  t359 = t215*t230;
  t360 = t237*t240;
  t250 = -0.70544*t249;
  t253 = -0.01841*t252;
  t255 = t250 + t253;
  t261 = 0.01841*t249;
  t262 = -0.70544*t252;
  t263 = t261 + t262;
  t387 = Cos(var1[20]);
  t388 = -1.*t387;
  t390 = 1. + t388;
  t393 = Sin(var1[20]);
  t376 = t255*t259;
  t379 = t263*t267;
  t392 = 0.07769774964800001*t390;
  t413 = -0.0004284921280000001*t390;
  t398 = 0.005481192614*t390;
  t433 = -0.077936*t393;
  t427 = -0.996943*t393;
  t394 = -0.005498*t393;
  t439 = -0.005481192614*t390;
  t399 = 0.077936*t393;
  t453 = -0.07769774964800001*t390;
  t408 = 0.005498*t393;
  t442 = 0.0004284921280000001*t390;
  t416 = 0.996943*t393;
  t273 = -0.02159*t271;
  t276 = -1.11344*t274;
  t277 = t273 + t276;
  t286 = -1.11344*t271;
  t287 = 0.02159*t274;
  t290 = t286 + t287;
  t297 = -1.*t274*t282;
  t299 = t269*t295;
  t302 = t297 + t299;
  t305 = t269*t282;
  t306 = t274*t295;
  t307 = t305 + t306;
  t335 = 0.0233*t13*t14;
  t519 = Cos(var1[6]);
  t527 = Sin(var1[6]);
  t522 = -1.*t519;
  t523 = 1. + t522;
  t526 = 0.135*t523*t8;
  t530 = -0.135*t13*t67*t527;
  t543 = t13*t67*t519;
  t544 = -1.*t8*t527;
  t545 = t543 + t544;
  t535 = t519*t8;
  t538 = t13*t67*t527;
  t539 = t535 + t538;
  t555 = Cos(var1[7]);
  t556 = -1.*t555;
  t558 = 1. + t556;
  t560 = Sin(var1[7]);
  t559 = 0.135*t558;
  t561 = 0.049*t560;
  t562 = t559 + t561;
  t563 = t539*t562;
  t564 = -0.049*t558;
  t566 = 0.135*t560;
  t567 = t564 + t566;
  t570 = -1.*t13*t14*t567;
  t572 = t555*t539;
  t574 = t13*t14*t560;
  t575 = t572 + t574;
  t578 = -1.*t13*t555*t14;
  t579 = t539*t560;
  t580 = t578 + t579;
  t588 = Cos(var1[8]);
  t589 = -1.*t588;
  t590 = 1. + t589;
  t592 = Sin(var1[8]);
  t591 = -0.049*t590;
  t593 = -0.09*t592;
  t594 = t591 + t593;
  t595 = t580*t594;
  t596 = -0.09*t590;
  t599 = 0.049*t592;
  t600 = t596 + t599;
  t601 = t545*t600;
  t602 = t588*t580;
  t603 = t545*t592;
  t604 = t602 + t603;
  t620 = Cos(var1[9]);
  t622 = -1.*t620;
  t624 = 1. + t622;
  t626 = Sin(var1[9]);
  t606 = t588*t545;
  t608 = -1.*t580*t592;
  t612 = t606 + t608;
  t625 = -0.049*t624;
  t628 = -0.21*t626;
  t629 = t625 + t628;
  t630 = t629*t604;
  t632 = -0.21*t624;
  t633 = 0.049*t626;
  t636 = t632 + t633;
  t637 = t636*t612;
  t638 = -1.*t626*t604;
  t639 = t620*t612;
  t640 = t638 + t639;
  t642 = t620*t604;
  t643 = t626*t612;
  t644 = t642 + t643;
  t657 = Cos(var1[11]);
  t660 = -1.*t657;
  t662 = 1. + t660;
  t664 = Sin(var1[11]);
  t687 = Cos(var1[12]);
  t688 = -1.*t687;
  t690 = 1. + t688;
  t693 = Sin(var1[12]);
  t663 = -0.70544*t662;
  t665 = -0.01841*t664;
  t666 = t663 + t665;
  t667 = t666*t640;
  t669 = 0.01841*t662;
  t671 = -0.70544*t664;
  t672 = t669 + t671;
  t675 = t672*t644;
  t697 = -0.07769774964800001*t690;
  t676 = t664*t640;
  t677 = t657*t644;
  t678 = t676 + t677;
  t708 = -0.0004284921280000001*t690;
  t692 = -0.005481192614*t690;
  t680 = t657*t640;
  t681 = -1.*t664*t644;
  t682 = t680 + t681;
  t719 = 0.077936*t693;
  t716 = -0.996943*t693;
  t698 = 0.005498*t693;
  t724 = 0.005481192614*t690;
  t694 = -0.077936*t693;
  t738 = 0.07769774964800001*t690;
  t705 = -0.005498*t693;
  t727 = 0.0004284921280000001*t690;
  t709 = 0.996943*t693;
  t762 = Cos(var1[13]);
  t763 = -1.*t762;
  t766 = 1. + t763;
  t768 = Sin(var1[13]);
  t85 = -0.135*t13*t67*t73;
  t103 = 0.135*t102*t8;
  t133 = -1.*t123*t132;
  t163 = -1.*t156*t161;
  t179 = t13*t178*t14;
  t189 = -1.*t183*t188;
  t207 = 0.1305*t206;
  t231 = -1.*t215*t230;
  t244 = -1.*t237*t240;
  t260 = -1.*t255*t259;
  t268 = -1.*t263*t267;
  t285 = -1.*t277*t282;
  t296 = -1.*t290*t295;
  t304 = 1.11344*t302;
  t308 = 0.02159*t307;
  t767 = -0.02159*t766;
  t769 = -1.11344*t768;
  t770 = t767 + t769;
  t771 = t770*t678;
  t772 = -1.11344*t766;
  t773 = 0.02159*t768;
  t774 = t772 + t773;
  t775 = t774*t682;
  t778 = -1.*t768*t678;
  t779 = t762*t682;
  t780 = t778 + t779;
  t782 = t762*t678;
  t783 = t768*t682;
  t784 = t782 + t783;
  t803 = t109*t67;
  t804 = t73*t121*t14;
  t805 = t803 + t804;
  t807 = t91*t142*t14;
  t808 = t135*t805;
  t809 = t807 + t808;
  t811 = t91*t135*t14;
  t812 = -1.*t142*t805;
  t813 = t811 + t812;
  t815 = -1.*t213*t809;
  t816 = t209*t813;
  t817 = t815 + t816;
  t819 = t209*t809;
  t820 = t213*t813;
  t821 = t819 + t820;
  t823 = t252*t817;
  t824 = t245*t821;
  t825 = t823 + t824;
  t827 = t245*t817;
  t828 = -1.*t252*t821;
  t829 = t827 + t828;
  t846 = t67*t555;
  t847 = t14*t527*t560;
  t848 = t846 + t847;
  t851 = t588*t848;
  t852 = t519*t14*t592;
  t853 = t851 + t852;
  t855 = t519*t588*t14;
  t856 = -1.*t848*t592;
  t857 = t855 + t856;
  t859 = -1.*t626*t853;
  t860 = t620*t857;
  t861 = t859 + t860;
  t863 = t620*t853;
  t864 = t626*t857;
  t865 = t863 + t864;
  t867 = t664*t861;
  t868 = t657*t865;
  t869 = t867 + t868;
  t871 = t657*t861;
  t872 = -1.*t664*t865;
  t873 = t871 + t872;
  t891 = t91*t13;
  t892 = -1.*t67*t73*t8;
  t893 = t891 + t892;
  t887 = -1.*t13*t73;
  t888 = -1.*t91*t67*t8;
  t889 = t887 + t888;
  t896 = t121*t893;
  t897 = t109*t8*t14;
  t898 = t896 + t897;
  t904 = t142*t889;
  t905 = t135*t898;
  t906 = t904 + t905;
  t908 = t135*t889;
  t909 = -1.*t142*t898;
  t910 = t908 + t909;
  t912 = -1.*t213*t906;
  t913 = t209*t910;
  t914 = t912 + t913;
  t916 = t209*t906;
  t917 = t213*t910;
  t918 = t916 + t917;
  t920 = t252*t914;
  t921 = t245*t918;
  t922 = t920 + t921;
  t924 = t245*t914;
  t925 = -1.*t252*t918;
  t926 = t924 + t925;
  t937 = t13*t519;
  t938 = -1.*t67*t8*t527;
  t939 = t937 + t938;
  t946 = t555*t8*t14;
  t947 = t939*t560;
  t948 = t946 + t947;
  t950 = -1.*t67*t519*t8;
  t951 = -1.*t13*t527;
  t952 = t950 + t951;
  t954 = t588*t948;
  t955 = t952*t592;
  t956 = t954 + t955;
  t958 = t588*t952;
  t959 = -1.*t948*t592;
  t960 = t958 + t959;
  t962 = -1.*t626*t956;
  t963 = t620*t960;
  t964 = t962 + t963;
  t966 = t620*t956;
  t967 = t626*t960;
  t968 = t966 + t967;
  t970 = t664*t964;
  t971 = t657*t968;
  t972 = t970 + t971;
  t974 = t657*t964;
  t975 = -1.*t664*t968;
  t976 = t974 + t975;
  t9 = t5*t8;
  t23 = t13*t14*t22;
  t37 = t9 + t23;
  t996 = -1.*t37*t527;
  t997 = t543 + t996;
  t987 = -1.*t13*t5*t14;
  t988 = t8*t22;
  t989 = t987 + t988;
  t990 = t555*t989;
  t991 = t519*t37;
  t992 = t991 + t538;
  t993 = t992*t560;
  t994 = t990 + t993;
  t995 = t588*t994;
  t998 = t997*t592;
  t999 = t995 + t998;
  t1001 = t588*t997;
  t1002 = -1.*t994*t592;
  t1003 = t1001 + t1002;
  t1000 = -1.*t626*t999;
  t1004 = t620*t1003;
  t1005 = t1000 + t1004;
  t1007 = t620*t999;
  t1008 = t626*t1003;
  t1009 = t1007 + t1008;
  t1006 = t664*t1005;
  t1010 = t657*t1009;
  t1011 = t1006 + t1010;
  t1013 = t657*t1005;
  t1014 = -1.*t664*t1009;
  t1015 = t1013 + t1014;
  t795 = -1.*t67*t178;
  t796 = -0.135*t73*t14;
  t797 = -1.*t73*t123*t14;
  t798 = -1.*t91*t156*t14;
  t799 = -1.*t67*t121;
  t800 = t109*t73*t14;
  t801 = t799 + t800;
  t802 = 0.1305*t801;
  t806 = -1.*t183*t805;
  t810 = -1.*t215*t809;
  t814 = -1.*t237*t813;
  t818 = -1.*t255*t817;
  t822 = -1.*t263*t821;
  t826 = -1.*t277*t825;
  t830 = -1.*t290*t829;
  t831 = -1.*t274*t825;
  t832 = t269*t829;
  t833 = t831 + t832;
  t834 = 1.11344*t833;
  t835 = t269*t825;
  t836 = t274*t829;
  t837 = t835 + t836;
  t838 = 0.02159*t837;
  t1035 = t67*t178;
  t1037 = 0.135*t73*t14;
  t1038 = t73*t123*t14;
  t1043 = t91*t156*t14;
  t1045 = t183*t805;
  t1051 = t215*t809;
  t1052 = t237*t813;
  t386 = 2.1934241414728571e-7*var1[20];
  t391 = -0.000033783761634830594*t390;
  t395 = t392 + t394;
  t397 = -0.021877537552*t395;
  t400 = t398 + t399;
  t401 = -0.6934341012630001*t400;
  t402 = t386 + t391 + t397 + t401;
  t1063 = t255*t817;
  t1064 = t263*t821;
  t405 = -1.7147089040178687e-8*var1[20];
  t407 = -0.021744644052735636*t390;
  t410 = t392 + t408;
  t411 = -0.005534467322*t410;
  t417 = t413 + t416;
  t418 = -0.6934341012630001*t417;
  t421 = t405 + t407 + t411 + t418;
  t424 = -1.2096424700126054e-9*var1[20];
  t426 = -0.6934128581485427*t390;
  t428 = t413 + t427;
  t430 = -0.021877537552*t428;
  t435 = t398 + t433;
  t436 = -0.005534467322*t435;
  t437 = t424 + t426 + t430 + t436;
  t440 = t439 + t433;
  t443 = t442 + t427;
  t445 = -0.999969365345*t390;
  t446 = 1. + t445;
  t450 = -0.006104248100000001*t390;
  t451 = 1. + t450;
  t459 = t453 + t394;
  t462 = t439 + t399;
  t470 = t453 + t408;
  t478 = -0.993925573253*t390;
  t479 = 1. + t478;
  t483 = t442 + t416;
  t1030 = -0.0233*t67;
  t839 = -0.135*t14*t527;
  t840 = t14*t527*t562;
  t841 = t67*t567;
  t842 = t555*t14*t527;
  t843 = -1.*t67*t560;
  t844 = t842 + t843;
  t849 = t848*t594;
  t850 = t519*t14*t600;
  t854 = t629*t853;
  t858 = t636*t857;
  t862 = t666*t861;
  t866 = t672*t865;
  t686 = -2.1934241414728571e-7*var1[12];
  t691 = 0.000033783761634830594*t690;
  t695 = t692 + t694;
  t696 = -0.6934341012630001*t695;
  t699 = t697 + t698;
  t700 = -0.021877537552*t699;
  t701 = t686 + t691 + t696 + t700;
  t703 = -1.7147089040178687e-8*var1[12];
  t704 = -0.021744644052735636*t690;
  t706 = t697 + t705;
  t707 = 0.005534467322*t706;
  t710 = t708 + t709;
  t711 = -0.6934341012630001*t710;
  t712 = t703 + t704 + t707 + t711;
  t714 = -1.2096424700126054e-9*var1[12];
  t715 = -0.6934128581485427*t690;
  t717 = t708 + t716;
  t718 = -0.021877537552*t717;
  t720 = t692 + t719;
  t721 = 0.005534467322*t720;
  t722 = t714 + t715 + t718 + t721;
  t725 = t724 + t719;
  t728 = t727 + t716;
  t730 = -0.999969365345*t690;
  t731 = 1. + t730;
  t735 = -0.006104248100000001*t690;
  t736 = 1. + t735;
  t739 = t738 + t698;
  t741 = t724 + t694;
  t745 = t738 + t705;
  t747 = -0.993925573253*t690;
  t748 = 1. + t747;
  t753 = t727 + t709;
  t870 = t770*t869;
  t874 = t774*t873;
  t875 = -1.*t768*t869;
  t876 = t762*t873;
  t877 = t875 + t876;
  t879 = t762*t869;
  t880 = t768*t873;
  t881 = t879 + t880;
  p_output1[0]=t37;
  p_output1[1]=t13*t14*t5 - 1.*t22*t8;
  p_output1[2]=var1[15];
  p_output1[3]=t103 + t133 + t163 + t179 + t189 + t207 + t231 + t244 + t260 + t268 + t285 + t296 + t304 + t308 + t85 - 1.*var1[2] + 0.0288377642750394*(1.965608*(-0.1351*t132 + 0.01793*t161 + t329 + t330 + t335 + var1[2]) + 1.316608*(-0.0343*t161 - 0.049*t188 - 0.135*t206 + t329 + t330 + t338 + t342 + var1[2]) + 5.79228*(-0.17081*t206 - 0.04895*t230 - 0.14946*t240 + t329 + t330 + t338 + t342 + t349 + t350 + var1[2]) + 1.03008*(-0.132168*t206 - 0.255862*t259 - 0.007761*t267 + t329 + t330 + t338 + t342 + t349 + t350 + t359 + t360 + var1[2]) + 0.763*(-0.130288*t206 - 0.45406*t259 - 0.000421*t267 + t329 + t330 + t338 + t342 + t349 + t350 + t359 + t360 + var1[2]) + 1.03*(-0.127241*t206 - 0.004179*t282 - 0.826587*t295 + t329 + t330 + t338 + t342 + t349 + t350 + t359 + t360 + t376 + t379 + var1[2]) + 0.1498*(-0.13064*t206 + t277*t282 + t290*t295 - 1.11818*t302 + 0.00589*t307 + t329 + t330 + t338 + t342 + t349 + t350 + t359 + t360 + t376 + t379 + var1[2]) + 0.126*(t329 + t330 + t338 + t342 + t349 + t350 + t359 + t360 + t376 + t379 + t206*t402 + t282*t421 + t295*t437 - 0.617968*(t206*t440 + t282*t443 + t295*t446) - 0.126739*(t206*t451 + t282*t459 + t295*t462) + 0.01889*(t206*t470 + t282*t479 + t295*t483) + var1[2]) + 1.965608*(t335 + t526 + t530 + 0.1351*t539 + 0.01793*t545 + var1[2]) + 1.316608*(t526 + t530 - 0.0343*t545 + t563 + t570 + 0.135*t575 - 0.049*t580 + var1[2]) + 5.79228*(t526 + t530 + t563 + t570 + 0.17081*t575 + t595 + t601 - 0.04895*t604 - 0.14946*t612 + var1[2]) + 1.03008*(t526 + t530 + t563 + t570 + 0.132168*t575 + t595 + t601 + t630 + t637 - 0.255862*t640 - 0.007761*t644 + var1[2]) + 0.763*(t526 + t530 + t563 + t570 + 0.130288*t575 + t595 + t601 + t630 + t637 - 0.45406*t640 - 0.000421*t644 + var1[2]) + 1.03*(t526 + t530 + t563 + t570 + 0.127241*t575 + t595 + t601 + t630 + t637 + t667 + t675 - 0.004179*t678 - 0.826587*t682 + var1[2]) + 0.126*(t526 + t530 + t563 + t570 + t595 + t601 + t630 + t637 + t667 + t675 + t575*t701 + t678*t712 + t682*t722 - 0.617968*(t575*t725 + t678*t728 + t682*t731) + 0.126739*(t575*t736 + t678*t739 + t682*t741) + 0.01889*(t575*t745 + t678*t748 + t682*t753) + var1[2]) + 0.1498*(t526 + t530 + t563 + t570 + 0.13064*t575 + t595 + t601 + t630 + t637 + t667 + t675 + t771 + t775 - 1.11818*t780 + 0.00589*t784 + var1[2]) + 10.33*(-0.05066*t13*t14 + 0.02841*t13*t67 + 0.000346*t8 + var1[2]));
  p_output1[4]=t103 + t133 + t163 + t179 + t189 + t207 + t231 + t244 + t260 + t268 + t285 + t296 + t304 + t308 + t526 + t530 + t563 + t570 + 0.1305*t575 + t595 + t601 + t630 + t637 + t667 + t675 + t771 + t775 - 1.11344*t780 - 0.02159*t784 + t85;
  p_output1[5]=t795 + t796 + t797 + t798 + t802 + t806 + t810 + t814 + t818 + t822 + t826 + t830 + t834 + t838 + t839 + t840 + t841 + 0.1305*t844 + t849 + t850 + t854 + t858 + t862 + t866 + t870 + t874 - 1.11344*t877 - 0.02159*t881;
  p_output1[6]=0.135*t102*t13 + 0.135*t13*t523 - 1.*t14*t178*t8 + t14*t567*t8 + 0.135*t527*t67*t8 + 0.135*t67*t73*t8 - 1.*t156*t889 - 1.*t123*t893 + 0.1305*(-1.*t121*t14*t8 + t109*t893) - 1.*t183*t898 - 1.*t215*t906 - 1.*t237*t910 - 1.*t255*t914 - 1.*t263*t918 - 1.*t277*t922 - 1.*t290*t926 + 1.11344*(-1.*t274*t922 + t269*t926) + 0.02159*(t269*t922 + t274*t926) + t562*t939 + 0.1305*(-1.*t14*t560*t8 + t555*t939) + t594*t948 + t600*t952 + t629*t956 + t636*t960 + t666*t964 + t672*t968 + t770*t972 + t774*t976 - 1.11344*(-1.*t768*t972 + t762*t976) - 0.02159*(t762*t972 + t768*t976);
  p_output1[7]=var1[7];
  p_output1[8]=7.142857142857142*(0. - 0.10724599999999995*(t1015*t762 - 1.*t1011*t768) - 0.08999*(t1011*t762 + t1015*t768));
  p_output1[9]=t795 + t796 + t797 + t798 + t802 + t806 + t810 + t814 + t818 + t822 + t826 + t830 + t834 + t838 - 1.*var1[0] + 0.0288377642750394*(1.965608*(t1030 + 0.01793*t14*t519 + 0.0001*t14*t527 + var1[0]) + 10.33*(0.02841*t14 + 0.05066*t67 + var1[0]) + 5.79228*(t1035 + t1037 + t1038 + t1043 + t1045 - 0.17081*t801 - 0.04895*t809 - 0.14946*t813 + var1[0]) + 1.03008*(t1035 + t1037 + t1038 + t1043 + t1045 + t1051 + t1052 - 0.132168*t801 - 0.255862*t817 - 0.007761*t821 + var1[0]) + 0.763*(t1035 + t1037 + t1038 + t1043 + t1045 + t1051 + t1052 - 0.130288*t801 - 0.45406*t817 - 0.000421*t821 + var1[0]) + 1.03*(t1035 + t1037 + t1038 + t1043 + t1045 + t1051 + t1052 + t1063 + t1064 - 0.127241*t801 - 0.004179*t825 - 0.826587*t829 + var1[0]) + 0.126*(t1035 + t1037 + t1038 + t1043 + t1045 + t1051 + t1052 + t1063 + t1064 + t402*t801 + t421*t825 + t437*t829 - 0.617968*(t440*t801 + t443*t825 + t446*t829) - 0.126739*(t451*t801 + t459*t825 + t462*t829) + 0.01889*(t470*t801 + t479*t825 + t483*t829) + var1[0]) + 0.1498*(t1035 + t1037 + t1038 + t1043 + t1045 + t1051 + t1052 + t1063 + t1064 - 0.13064*t801 + t277*t825 + t290*t829 - 1.11818*t833 + 0.00589*t837 + var1[0]) + 1.316608*(-0.0343*t14*t519 + t839 + t840 + t841 + 0.135*t844 - 0.049*t848 + var1[0]) + 5.79228*(t839 + t840 + t841 + 0.17081*t844 + t849 + t850 - 0.04895*t853 - 0.14946*t857 + var1[0]) + 1.03008*(t839 + t840 + t841 + 0.132168*t844 + t849 + t850 + t854 + t858 - 0.255862*t861 - 0.007761*t865 + var1[0]) + 0.763*(t839 + t840 + t841 + 0.130288*t844 + t849 + t850 + t854 + t858 - 0.45406*t861 - 0.000421*t865 + var1[0]) + 1.03*(t839 + t840 + t841 + 0.127241*t844 + t849 + t850 + t854 + t858 + t862 + t866 - 0.004179*t869 - 0.826587*t873 + var1[0]) + 0.126*(t839 + t840 + t841 + t701*t844 + t849 + t850 + t854 + t858 + t862 + t866 + t712*t869 + t722*t873 - 0.617968*(t725*t844 + t728*t869 + t731*t873) + 0.126739*(t736*t844 + t739*t869 + t741*t873) + 0.01889*(t745*t844 + t748*t869 + t753*t873) + var1[0]) + 0.1498*(t839 + t840 + t841 + 0.13064*t844 + t849 + t850 + t854 + t858 + t862 + t866 + t870 + t874 - 1.11818*t877 + 0.00589*t881 + var1[0]) + 1.316608*(t1035 + t1037 + t1038 - 0.135*t801 - 0.049*t805 - 0.0343*t14*t91 + var1[0]) + 1.965608*(t1030 - 0.0001*t14*t73 + 0.01793*t14*t91 + var1[0]));
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 10, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#endif // MATLAB_MEX_FILE

namespace SymFunction
{

void yaRightStance_SLIP_with_xcom_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




