/*
 * Automatically Generated from Mathematica.
 * Thu 23 Dec 2021 16:09:27 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "dypelvis_rightFoot.hh"
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t9;
  double t6;
  double t13;
  double t15;
  double t25;
  double t8;
  double t85;
  double t94;
  double t104;
  double t109;
  double t121;
  double t125;
  double t126;
  double t113;
  double t130;
  double t131;
  double t132;
  double t134;
  double t152;
  double t153;
  double t154;
  double t157;
  double t161;
  double t164;
  double t165;
  double t170;
  double t171;
  double t172;
  double t175;
  double t176;
  double t177;
  double t179;
  double t182;
  double t183;
  double t184;
  double t192;
  double t193;
  double t194;
  double t212;
  double t110;
  double t111;
  double t112;
  double t116;
  double t120;
  double t133;
  double t136;
  double t137;
  double t139;
  double t140;
  double t141;
  double t156;
  double t158;
  double t160;
  double t231;
  double t232;
  double t233;
  double t235;
  double t236;
  double t237;
  double t167;
  double t168;
  double t169;
  double t178;
  double t180;
  double t181;
  double t239;
  double t240;
  double t241;
  double t243;
  double t244;
  double t245;
  double t187;
  double t188;
  double t189;
  double t247;
  double t248;
  double t249;
  double t251;
  double t252;
  double t253;
  double t216;
  double t218;
  double t219;
  double t220;
  double t222;
  double t227;
  double t228;
  double t229;
  double t106;
  double t272;
  double t273;
  double t274;
  double t280;
  double t281;
  double t282;
  double t284;
  double t285;
  double t286;
  double t288;
  double t289;
  double t290;
  double t292;
  double t293;
  double t294;
  double t296;
  double t297;
  double t298;
  double t300;
  double t301;
  double t302;
  double t320;
  double t321;
  double t322;
  double t324;
  double t325;
  double t326;
  double t328;
  double t329;
  double t330;
  double t332;
  double t333;
  double t334;
  double t336;
  double t337;
  double t338;
  double t340;
  double t341;
  double t342;
  double t344;
  double t345;
  double t346;
  double t361;
  double t362;
  double t363;
  double t368;
  double t369;
  double t371;
  double t372;
  double t374;
  double t375;
  double t376;
  double t378;
  double t379;
  double t380;
  double t398;
  double t399;
  double t400;
  double t402;
  double t403;
  double t405;
  double t406;
  double t421;
  double t422;
  double t423;
  double t409;
  double t413;
  double t439;
  double t440;
  double t441;
  double t446;
  double t447;
  double t448;
  double t450;
  double t451;
  double t452;
  double t454;
  double t455;
  double t456;
  double t458;
  double t459;
  double t460;
  double t462;
  double t463;
  double t464;
  double t466;
  double t467;
  double t468;
  double t470;
  double t471;
  double t472;
  double t105;
  double t107;
  double t93;
  double t96;
  double t100;
  double t484;
  double t485;
  double t486;
  double t493;
  double t494;
  double t495;
  double t499;
  double t500;
  double t501;
  double t503;
  double t504;
  double t505;
  double t507;
  double t508;
  double t509;
  double t511;
  double t512;
  double t513;
  double t314;
  double t315;
  double t317;
  double t318;
  double t319;
  double t526;
  double t527;
  double t528;
  double t530;
  double t531;
  double t532;
  double t534;
  double t535;
  double t536;
  double t538;
  double t539;
  double t540;
  double t542;
  double t543;
  double t544;
  double t546;
  double t547;
  double t548;
  double t550;
  double t551;
  double t552;
  double t358;
  double t359;
  double t360;
  double t365;
  double t366;
  double t564;
  double t565;
  double t566;
  double t569;
  double t570;
  double t572;
  double t573;
  double t575;
  double t576;
  double t577;
  double t579;
  double t580;
  double t581;
  double t392;
  double t393;
  double t395;
  double t396;
  double t397;
  double t594;
  double t595;
  double t596;
  double t598;
  double t599;
  double t601;
  double t602;
  double t418;
  double t419;
  double t420;
  double t425;
  double t426;
  double t614;
  double t615;
  double t616;
  double t605;
  double t609;
  double t269;
  double t270;
  double t636;
  double t637;
  double t638;
  double t640;
  double t641;
  double t642;
  double t644;
  double t645;
  double t646;
  double t648;
  double t649;
  double t650;
  double t652;
  double t653;
  double t654;
  double t656;
  double t657;
  double t658;
  double t660;
  double t661;
  double t662;
  double t674;
  double t676;
  double t691;
  double t692;
  double t693;
  double t696;
  double t697;
  double t698;
  double t702;
  double t703;
  double t704;
  double t710;
  double t711;
  double t712;
  double t714;
  double t715;
  double t716;
  double t718;
  double t719;
  double t720;
  double t722;
  double t723;
  double t724;
  double t726;
  double t727;
  double t728;
  double t730;
  double t731;
  double t732;
  double t753;
  double t754;
  double t755;
  double t760;
  double t761;
  double t762;
  double t764;
  double t765;
  double t766;
  double t768;
  double t769;
  double t770;
  double t772;
  double t773;
  double t774;
  double t776;
  double t777;
  double t778;
  double t780;
  double t781;
  double t782;
  double t794;
  double t795;
  double t796;
  double t802;
  double t803;
  double t804;
  double t808;
  double t809;
  double t810;
  double t812;
  double t813;
  double t814;
  double t816;
  double t817;
  double t818;
  double t820;
  double t821;
  double t822;
  double t835;
  double t836;
  double t837;
  double t839;
  double t840;
  double t841;
  double t843;
  double t844;
  double t845;
  double t847;
  double t848;
  double t849;
  double t851;
  double t852;
  double t853;
  double t855;
  double t856;
  double t857;
  double t859;
  double t860;
  double t861;
  double t873;
  double t874;
  double t875;
  double t878;
  double t879;
  double t881;
  double t882;
  double t884;
  double t885;
  double t886;
  double t888;
  double t889;
  double t890;
  double t903;
  double t904;
  double t905;
  double t907;
  double t908;
  double t910;
  double t911;
  double t923;
  double t924;
  double t925;
  double t914;
  double t918;
  double t945;
  double t946;
  double t947;
  double t949;
  double t950;
  double t951;
  double t953;
  double t954;
  double t955;
  double t957;
  double t958;
  double t959;
  double t961;
  double t962;
  double t963;
  double t965;
  double t966;
  double t967;
  double t969;
  double t970;
  double t971;
  double t685;
  double t686;
  double t688;
  double t689;
  double t619;
  double t620;
  t9 = Cos(var1[5]);
  t6 = Cos(var1[3]);
  t13 = Sin(var1[3]);
  t15 = Sin(var1[4]);
  t25 = Sin(var1[5]);
  t8 = Cos(var1[4]);
  t85 = Cos(var1[15]);
  t94 = Sin(var1[15]);
  t104 = Sin(var1[14]);
  t109 = Cos(var1[16]);
  t121 = -1.*t8*t94;
  t125 = t85*t104*t15;
  t126 = t121 + t125;
  t113 = Sin(var1[16]);
  t130 = Cos(var1[17]);
  t131 = -1.*t130;
  t132 = 1. + t131;
  t134 = Sin(var1[17]);
  t152 = Cos(var1[19]);
  t153 = -1.*t152;
  t154 = 1. + t153;
  t157 = Sin(var1[19]);
  t161 = -1.*t130*t113*t126;
  t164 = -1.*t109*t134*t126;
  t165 = t161 + t164;
  t170 = t109*t130*t126;
  t171 = -1.*t113*t134*t126;
  t172 = t170 + t171;
  t175 = Cos(var1[21]);
  t176 = -1.*t175;
  t177 = 1. + t176;
  t179 = Sin(var1[21]);
  t182 = t157*t165;
  t183 = t152*t172;
  t184 = t182 + t183;
  t192 = t152*t165;
  t193 = -1.*t157*t172;
  t194 = t192 + t193;
  t212 = Cos(var1[14]);
  t110 = -1.*t109;
  t111 = 1. + t110;
  t112 = -0.049*t111;
  t116 = -0.09*t113;
  t120 = t112 + t116;
  t133 = -0.049*t132;
  t136 = -0.21*t134;
  t137 = t133 + t136;
  t139 = -0.21*t132;
  t140 = 0.049*t134;
  t141 = t139 + t140;
  t156 = -0.70544*t154;
  t158 = -0.01841*t157;
  t160 = t156 + t158;
  t231 = t212*t109*t94*t15;
  t232 = -1.*t104*t113*t15;
  t233 = t231 + t232;
  t235 = -1.*t109*t104*t15;
  t236 = -1.*t212*t94*t113*t15;
  t237 = t235 + t236;
  t167 = 0.01841*t154;
  t168 = -0.70544*t157;
  t169 = t167 + t168;
  t178 = -0.02159*t177;
  t180 = -1.11344*t179;
  t181 = t178 + t180;
  t239 = -1.*t134*t233;
  t240 = t130*t237;
  t241 = t239 + t240;
  t243 = t130*t233;
  t244 = t134*t237;
  t245 = t243 + t244;
  t187 = -1.11344*t177;
  t188 = 0.02159*t179;
  t189 = t187 + t188;
  t247 = t157*t241;
  t248 = t152*t245;
  t249 = t247 + t248;
  t251 = t152*t241;
  t252 = -1.*t157*t245;
  t253 = t251 + t252;
  t216 = -1.*t85;
  t218 = 1. + t216;
  t219 = -0.135*t218;
  t220 = 0.049*t94;
  t222 = t219 + t220;
  t227 = -0.09*t111;
  t228 = 0.049*t113;
  t229 = t227 + t228;
  t106 = -0.135*t94;
  t272 = t8*t104*t94;
  t273 = -1.*t85*t15;
  t274 = t272 + t273;
  t280 = t212*t8*t113;
  t281 = t109*t274;
  t282 = t280 + t281;
  t284 = t212*t109*t8;
  t285 = -1.*t113*t274;
  t286 = t284 + t285;
  t288 = -1.*t134*t282;
  t289 = t130*t286;
  t290 = t288 + t289;
  t292 = t130*t282;
  t293 = t134*t286;
  t294 = t292 + t293;
  t296 = t157*t290;
  t297 = t152*t294;
  t298 = t296 + t297;
  t300 = t152*t290;
  t301 = -1.*t157*t294;
  t302 = t300 + t301;
  t320 = t85*t8;
  t321 = t104*t94*t15;
  t322 = t320 + t321;
  t324 = -1.*t212*t113*t15;
  t325 = -1.*t109*t322;
  t326 = t324 + t325;
  t328 = t212*t109*t15;
  t329 = -1.*t113*t322;
  t330 = t328 + t329;
  t332 = t134*t326;
  t333 = t130*t330;
  t334 = t332 + t333;
  t336 = t130*t326;
  t337 = -1.*t134*t330;
  t338 = t336 + t337;
  t340 = -1.*t157*t334;
  t341 = t152*t338;
  t342 = t340 + t341;
  t344 = t152*t334;
  t345 = t157*t338;
  t346 = t344 + t345;
  t361 = t212*t113*t15;
  t362 = t109*t322;
  t363 = t361 + t362;
  t368 = -1.*t134*t363;
  t369 = t368 + t333;
  t371 = -1.*t130*t363;
  t372 = t371 + t337;
  t374 = -1.*t157*t369;
  t375 = t152*t372;
  t376 = t374 + t375;
  t378 = t152*t369;
  t379 = t157*t372;
  t380 = t378 + t379;
  t398 = t130*t363;
  t399 = t134*t330;
  t400 = t398 + t399;
  t402 = -1.*t152*t400;
  t403 = t374 + t402;
  t405 = -1.*t157*t400;
  t406 = t378 + t405;
  t421 = t157*t369;
  t422 = t152*t400;
  t423 = t421 + t422;
  t409 = t175*t406;
  t413 = -1.*t179*t406;
  t439 = -1.*t6*t104;
  t440 = -1.*t212*t8*t13;
  t441 = t439 + t440;
  t446 = -1.*t212*t6;
  t447 = t8*t104*t13;
  t448 = t446 + t447;
  t450 = -1.*t94*t113*t441;
  t451 = t109*t448;
  t452 = t450 + t451;
  t454 = t109*t94*t441;
  t455 = t113*t448;
  t456 = t454 + t455;
  t458 = t134*t452;
  t459 = t130*t456;
  t460 = t458 + t459;
  t462 = t130*t452;
  t463 = -1.*t134*t456;
  t464 = t462 + t463;
  t466 = -1.*t157*t460;
  t467 = t152*t464;
  t468 = t466 + t467;
  t470 = t152*t460;
  t471 = t157*t464;
  t472 = t470 + t471;
  t105 = 0.049*t85;
  t107 = t105 + t106;
  t93 = -0.135*t85;
  t96 = -0.049*t94;
  t100 = t93 + t96;
  t484 = t212*t6;
  t485 = -1.*t8*t104*t13;
  t486 = t484 + t485;
  t493 = t85*t486;
  t494 = -1.*t94*t13*t15;
  t495 = t493 + t494;
  t499 = -1.*t130*t113*t495;
  t500 = -1.*t109*t134*t495;
  t501 = t499 + t500;
  t503 = t109*t130*t495;
  t504 = -1.*t113*t134*t495;
  t505 = t503 + t504;
  t507 = t157*t501;
  t508 = t152*t505;
  t509 = t507 + t508;
  t511 = t152*t501;
  t512 = -1.*t157*t505;
  t513 = t511 + t512;
  t314 = 0.049*t109;
  t315 = t314 + t116;
  t317 = -0.09*t109;
  t318 = -0.049*t113;
  t319 = t317 + t318;
  t526 = t94*t486;
  t527 = t85*t13*t15;
  t528 = t526 + t527;
  t530 = -1.*t113*t441;
  t531 = -1.*t109*t528;
  t532 = t530 + t531;
  t534 = t109*t441;
  t535 = -1.*t113*t528;
  t536 = t534 + t535;
  t538 = t134*t532;
  t539 = t130*t536;
  t540 = t538 + t539;
  t542 = t130*t532;
  t543 = -1.*t134*t536;
  t544 = t542 + t543;
  t546 = -1.*t157*t540;
  t547 = t152*t544;
  t548 = t546 + t547;
  t550 = t152*t540;
  t551 = t157*t544;
  t552 = t550 + t551;
  t358 = -0.21*t130;
  t359 = -0.049*t134;
  t360 = t358 + t359;
  t365 = 0.049*t130;
  t366 = t365 + t136;
  t564 = t113*t441;
  t565 = t109*t528;
  t566 = t564 + t565;
  t569 = -1.*t134*t566;
  t570 = t569 + t539;
  t572 = -1.*t130*t566;
  t573 = t572 + t543;
  t575 = -1.*t157*t570;
  t576 = t152*t573;
  t577 = t575 + t576;
  t579 = t152*t570;
  t580 = t157*t573;
  t581 = t579 + t580;
  t392 = -0.01841*t152;
  t393 = t392 + t168;
  t395 = -0.70544*t152;
  t396 = 0.01841*t157;
  t397 = t395 + t396;
  t594 = t130*t566;
  t595 = t134*t536;
  t596 = t594 + t595;
  t598 = -1.*t152*t596;
  t599 = t575 + t598;
  t601 = -1.*t157*t596;
  t602 = t579 + t601;
  t418 = -1.11344*t175;
  t419 = -0.02159*t179;
  t420 = t418 + t419;
  t425 = 0.02159*t175;
  t426 = t425 + t180;
  t614 = t157*t570;
  t615 = t152*t596;
  t616 = t614 + t615;
  t605 = t175*t602;
  t609 = -1.*t179*t602;
  t269 = -0.049*t218;
  t270 = t269 + t106;
  t636 = t85*t8*t13;
  t637 = t104*t94*t13*t15;
  t638 = t636 + t637;
  t640 = t212*t113*t13*t15;
  t641 = t109*t638;
  t642 = t640 + t641;
  t644 = t212*t109*t13*t15;
  t645 = -1.*t113*t638;
  t646 = t644 + t645;
  t648 = -1.*t134*t642;
  t649 = t130*t646;
  t650 = t648 + t649;
  t652 = t130*t642;
  t653 = t134*t646;
  t654 = t652 + t653;
  t656 = t157*t650;
  t657 = t152*t654;
  t658 = t656 + t657;
  t660 = t152*t650;
  t661 = -1.*t157*t654;
  t662 = t660 + t661;
  t674 = Cos(var1[6]);
  t676 = Sin(var1[6]);
  t691 = -1.*t6*t8*t104;
  t692 = -1.*t212*t13;
  t693 = t691 + t692;
  t696 = -1.*t212*t6*t8;
  t697 = t104*t13;
  t698 = t696 + t697;
  t702 = t94*t693;
  t703 = t85*t6*t15;
  t704 = t702 + t703;
  t710 = t113*t698;
  t711 = t109*t704;
  t712 = t710 + t711;
  t714 = t109*t698;
  t715 = -1.*t113*t704;
  t716 = t714 + t715;
  t718 = -1.*t134*t712;
  t719 = t130*t716;
  t720 = t718 + t719;
  t722 = t130*t712;
  t723 = t134*t716;
  t724 = t722 + t723;
  t726 = t157*t720;
  t727 = t152*t724;
  t728 = t726 + t727;
  t730 = t152*t720;
  t731 = -1.*t157*t724;
  t732 = t730 + t731;
  t753 = t212*t6*t8;
  t754 = -1.*t104*t13;
  t755 = t753 + t754;
  t760 = t113*t693;
  t761 = t109*t94*t755;
  t762 = t760 + t761;
  t764 = t109*t693;
  t765 = -1.*t94*t113*t755;
  t766 = t764 + t765;
  t768 = -1.*t134*t762;
  t769 = t130*t766;
  t770 = t768 + t769;
  t772 = t130*t762;
  t773 = t134*t766;
  t774 = t772 + t773;
  t776 = t157*t770;
  t777 = t152*t774;
  t778 = t776 + t777;
  t780 = t152*t770;
  t781 = -1.*t157*t774;
  t782 = t780 + t781;
  t794 = t6*t8*t104;
  t795 = t212*t13;
  t796 = t794 + t795;
  t802 = t85*t796;
  t803 = t6*t94*t15;
  t804 = t802 + t803;
  t808 = -1.*t130*t113*t804;
  t809 = -1.*t109*t134*t804;
  t810 = t808 + t809;
  t812 = t109*t130*t804;
  t813 = -1.*t113*t134*t804;
  t814 = t812 + t813;
  t816 = t157*t810;
  t817 = t152*t814;
  t818 = t816 + t817;
  t820 = t152*t810;
  t821 = -1.*t157*t814;
  t822 = t820 + t821;
  t835 = t94*t796;
  t836 = -1.*t85*t6*t15;
  t837 = t835 + t836;
  t839 = -1.*t113*t755;
  t840 = -1.*t109*t837;
  t841 = t839 + t840;
  t843 = t109*t755;
  t844 = -1.*t113*t837;
  t845 = t843 + t844;
  t847 = t134*t841;
  t848 = t130*t845;
  t849 = t847 + t848;
  t851 = t130*t841;
  t852 = -1.*t134*t845;
  t853 = t851 + t852;
  t855 = -1.*t157*t849;
  t856 = t152*t853;
  t857 = t855 + t856;
  t859 = t152*t849;
  t860 = t157*t853;
  t861 = t859 + t860;
  t873 = t113*t755;
  t874 = t109*t837;
  t875 = t873 + t874;
  t878 = -1.*t134*t875;
  t879 = t878 + t848;
  t881 = -1.*t130*t875;
  t882 = t881 + t852;
  t884 = -1.*t157*t879;
  t885 = t152*t882;
  t886 = t884 + t885;
  t888 = t152*t879;
  t889 = t157*t882;
  t890 = t888 + t889;
  t903 = t130*t875;
  t904 = t134*t845;
  t905 = t903 + t904;
  t907 = -1.*t152*t905;
  t908 = t884 + t907;
  t910 = -1.*t157*t905;
  t911 = t888 + t910;
  t923 = t157*t879;
  t924 = t152*t905;
  t925 = t923 + t924;
  t914 = t175*t911;
  t918 = -1.*t179*t911;
  t945 = -1.*t85*t6*t8;
  t946 = -1.*t6*t104*t94*t15;
  t947 = t945 + t946;
  t949 = -1.*t212*t6*t113*t15;
  t950 = t109*t947;
  t951 = t949 + t950;
  t953 = -1.*t212*t109*t6*t15;
  t954 = -1.*t113*t947;
  t955 = t953 + t954;
  t957 = -1.*t134*t951;
  t958 = t130*t955;
  t959 = t957 + t958;
  t961 = t130*t951;
  t962 = t134*t955;
  t963 = t961 + t962;
  t965 = t157*t959;
  t966 = t152*t963;
  t967 = t965 + t966;
  t969 = t152*t959;
  t970 = -1.*t157*t963;
  t971 = t969 + t970;
  t685 = -1.*t212;
  t686 = 1. + t685;
  t688 = -1.*t674;
  t689 = 1. + t688;
  t619 = -1.*t179*t616;
  t620 = t619 + t605;
  p_output1[0]=(-1.*t25*t6 - 1.*t13*t15*t9)*var2[3] + t6*t8*t9*var2[4] + (-1.*t15*t25*t6 - 1.*t13*t9)*var2[5];
  p_output1[1]=(-1.*t13*t15*t25 + t6*t9)*var2[3] + t25*t6*t8*var2[4] + (-1.*t13*t25 + t15*t6*t9)*var2[5];
  p_output1[2]=var2[15];
  p_output1[3]=0.5*(0.098*t15 + 2.*t15*t270 - 2.*t120*t274 - 2.*t137*t282 - 2.*t141*t286 - 2.*t160*t290 - 2.*t169*t294 - 2.*t181*t298 - 2.*t189*t302 + 2.22688*(-1.*t179*t298 + t175*t302) + 0.04318*(t175*t298 + t179*t302) - 0.27*t104*t8 - 2.*t104*t222*t8 - 2.*t212*t229*t8 + 0.261*(t104*t8*t85 + t15*t94))*var2[4] + 0.5*(-0.27*t15*t212 - 2.*t15*t212*t222 + 2.*t104*t15*t229 - 2.*t137*t233 - 2.*t141*t237 - 2.*t160*t241 - 2.*t169*t245 - 2.*t181*t249 - 2.*t189*t253 + 2.22688*(-1.*t179*t249 + t175*t253) + 0.04318*(t175*t249 + t179*t253) + 0.261*t15*t212*t85 - 2.*t120*t15*t212*t94)*var2[14] + 0.5*(-2.*t120*t126 - 2.*t109*t126*t137 + 2.*t113*t126*t141 - 2.*t104*t107*t15 - 2.*t160*t165 - 2.*t169*t172 - 2.*t181*t184 - 2.*t189*t194 + 2.22688*(-1.*t179*t184 + t175*t194) + 0.04318*(t175*t184 + t179*t194) - 2.*t100*t8 + 0.261*(-1.*t8*t85 - 1.*t104*t15*t94))*var2[15] + 0.5*(-2.*t15*t212*t315 - 2.*t319*t322 - 2.*t141*t326 - 2.*t137*t330 - 2.*t169*t334 - 2.*t160*t338 - 2.*t189*t342 - 2.*t181*t346 + 0.04318*(t179*t342 + t175*t346) + 2.22688*(t175*t342 - 1.*t179*t346))*var2[16] + 0.5*(-2.*t360*t363 - 2.*t330*t366 - 2.*t169*t369 - 2.*t160*t372 - 2.*t189*t376 - 2.*t181*t380 + 0.04318*(t179*t376 + t175*t380) + 2.22688*(t175*t376 - 1.*t179*t380))*var2[17] + 0.5*(-2.*t369*t393 - 2.*t397*t400 - 2.*t189*t403 - 2.*t181*t406 + 0.04318*(t179*t403 + t409) + 2.22688*(t175*t403 + t413))*var2[19] + 0.5*(-2.*t420*t423 + 2.22688*(t413 - 1.*t175*t423) + 0.04318*(t409 - 1.*t179*t423) - 2.*t406*t426)*var2[21];
  p_output1[4]=0.5*(-0.098*t15*t6 - 2.*t15*t270*t6 - 0.135*t13*t686 - 0.135*t13*t689 - 0.135*t693 - 2.*t222*t693 - 2.*t229*t698 - 2.*t120*t704 - 2.*t137*t712 - 2.*t141*t716 - 2.*t160*t720 - 2.*t169*t724 - 2.*t181*t728 - 2.*t189*t732 + 2.22688*(-1.*t179*t728 + t175*t732) + 0.04318*(t175*t728 + t179*t732) + 0.135*t104*t6*t8 + 0.135*t6*t676*t8 + 0.135*(-1.*t13*t674 - 1.*t6*t676*t8) + 0.261*(t693*t85 - 1.*t15*t6*t94))*var2[3] + 0.5*(-0.27*t104*t13*t15 - 2.*t104*t13*t15*t222 - 2.*t13*t15*t212*t229 - 2.*t120*t638 - 2.*t137*t642 - 2.*t141*t646 - 2.*t160*t650 - 2.*t169*t654 - 2.*t181*t658 - 2.*t189*t662 + 2.22688*(-1.*t179*t658 + t175*t662) + 0.04318*(t175*t658 + t179*t662) - 0.098*t13*t8 - 2.*t13*t270*t8 + 0.261*(t104*t13*t15*t85 - 1.*t13*t8*t94))*var2[4] + 0.5*(0.135*t6*t676 + 0.135*t13*t674*t8 + 0.135*(-1.*t6*t676 - 1.*t13*t674*t8))*var2[6] + 0.5*(-0.135*t441 - 2.*t222*t441 - 2.*t229*t448 - 2.*t141*t452 - 2.*t137*t456 - 2.*t169*t460 - 2.*t160*t464 - 2.*t189*t468 - 2.*t181*t472 + 0.04318*(t179*t468 + t175*t472) + 2.22688*(t175*t468 - 1.*t179*t472) + 0.135*t104*t6 + 0.135*t13*t212*t8 + 0.261*t441*t85 - 2.*t120*t441*t94)*var2[14] + 0.5*(-2.*t100*t13*t15 - 2.*t107*t486 - 2.*t120*t495 - 2.*t109*t137*t495 + 2.*t113*t141*t495 - 2.*t160*t501 - 2.*t169*t505 - 2.*t181*t509 - 2.*t189*t513 + 2.22688*(-1.*t179*t509 + t175*t513) + 0.04318*(t175*t509 + t179*t513) + 0.261*(-1.*t13*t15*t85 - 1.*t486*t94))*var2[15] + 0.5*(-2.*t315*t441 - 2.*t319*t528 - 2.*t141*t532 - 2.*t137*t536 - 2.*t169*t540 - 2.*t160*t544 - 2.*t189*t548 - 2.*t181*t552 + 0.04318*(t179*t548 + t175*t552) + 2.22688*(t175*t548 - 1.*t179*t552))*var2[16] + 0.5*(-2.*t366*t536 - 2.*t360*t566 - 2.*t169*t570 - 2.*t160*t573 - 2.*t189*t577 - 2.*t181*t581 + 0.04318*(t179*t577 + t175*t581) + 2.22688*(t175*t577 - 1.*t179*t581))*var2[17] + 0.5*(-2.*t393*t570 - 2.*t397*t596 - 2.*t189*t599 - 2.*t181*t602 + 0.04318*(t179*t599 + t605) + 2.22688*(t175*t599 + t609))*var2[19] + 0.5*(-2.*t426*t602 - 2.*t420*t616 + 2.22688*(t609 - 1.*t175*t616) + 0.04318*t620)*var2[21];
  p_output1[5]=0.5*(-0.098*t13*t15 - 2.*t13*t15*t270 - 2.*t229*t441 - 0.135*t486 - 2.*t222*t486 + 0.261*t495 - 2.*t120*t528 - 2.*t141*t536 - 2.*t137*t566 - 2.*t160*t570 - 2.*t169*t596 - 2.*t189*t602 - 2.*t181*t616 + 0.04318*(t179*t602 + t175*t616) + 2.22688*t620 + 0.135*t6*t686 + 0.135*t6*t689 + 0.135*t104*t13*t8 + 0.135*t13*t676*t8 + 0.135*(t6*t674 - 1.*t13*t676*t8))*var2[3] + 0.5*(0.27*t104*t15*t6 + 2.*t104*t15*t222*t6 + 2.*t15*t212*t229*t6 + 0.098*t6*t8 + 2.*t270*t6*t8 + 0.261*(-1.*t104*t15*t6*t85 + t6*t8*t94) - 2.*t120*t947 - 2.*t137*t951 - 2.*t141*t955 - 2.*t160*t959 - 2.*t169*t963 - 2.*t181*t967 - 2.*t189*t971 + 2.22688*(-1.*t179*t967 + t175*t971) + 0.04318*(t175*t967 + t179*t971))*var2[4] + 0.5*(0.135*t13*t676 - 0.135*t6*t674*t8 + 0.135*(-1.*t13*t676 + t6*t674*t8))*var2[6] + 0.5*(0.135*t104*t13 - 2.*t229*t693 - 0.135*t755 - 2.*t222*t755 - 2.*t137*t762 - 2.*t141*t766 - 2.*t160*t770 - 2.*t169*t774 - 2.*t181*t778 - 2.*t189*t782 + 2.22688*(-1.*t179*t778 + t175*t782) + 0.04318*(t175*t778 + t179*t782) - 0.135*t212*t6*t8 + 0.261*t755*t85 - 2.*t120*t755*t94)*var2[14] + 0.5*(2.*t100*t15*t6 - 2.*t107*t796 - 2.*t120*t804 - 2.*t109*t137*t804 + 2.*t113*t141*t804 - 2.*t160*t810 - 2.*t169*t814 - 2.*t181*t818 - 2.*t189*t822 + 2.22688*(-1.*t179*t818 + t175*t822) + 0.04318*(t175*t818 + t179*t822) + 0.261*(t703 - 1.*t796*t94))*var2[15] + 0.5*(-2.*t315*t755 - 2.*t319*t837 - 2.*t141*t841 - 2.*t137*t845 - 2.*t169*t849 - 2.*t160*t853 - 2.*t189*t857 - 2.*t181*t861 + 0.04318*(t179*t857 + t175*t861) + 2.22688*(t175*t857 - 1.*t179*t861))*var2[16] + 0.5*(-2.*t366*t845 - 2.*t360*t875 - 2.*t169*t879 - 2.*t160*t882 - 2.*t189*t886 - 2.*t181*t890 + 0.04318*(t179*t886 + t175*t890) + 2.22688*(t175*t886 - 1.*t179*t890))*var2[17] + 0.5*(-2.*t393*t879 - 2.*t397*t905 - 2.*t189*t908 - 2.*t181*t911 + 0.04318*(t179*t908 + t914) + 2.22688*(t175*t908 + t918))*var2[19] + 0.5*(-2.*t426*t911 - 2.*t420*t925 + 2.22688*(t918 - 1.*t175*t925) + 0.04318*(t914 - 1.*t179*t925))*var2[21];
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
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
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 22 && ncols == 1) && 
      !(mrows == 1 && ncols == 22))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 6, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#endif // MATLAB_MEX_FILE

namespace SymFunction
{

void dypelvis_rightFoot_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}




