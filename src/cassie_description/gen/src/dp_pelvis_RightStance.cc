/*
 * Automatically Generated from Mathematica.
 * Thu 23 Dec 2021 17:03:07 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "dp_pelvis_RightStance.hh"
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
  double t16;
  double t21;
  double t8;
  double t53;
  double t52;
  double t73;
  double t108;
  double t75;
  double t80;
  double t86;
  double t92;
  double t98;
  double t102;
  double t110;
  double t115;
  double t119;
  double t124;
  double t129;
  double t134;
  double t111;
  double t116;
  double t120;
  double t125;
  double t127;
  double t131;
  double t132;
  double t136;
  double t137;
  double t158;
  double t160;
  double t162;
  double t164;
  double t165;
  double t166;
  double t168;
  double t169;
  double t170;
  double t173;
  double t174;
  double t198;
  double t204;
  double t76;
  double t82;
  double t88;
  double t94;
  double t96;
  double t100;
  double t101;
  double t106;
  double t107;
  double t185;
  double t186;
  double t188;
  double t146;
  double t148;
  double t150;
  double t152;
  double t153;
  double t154;
  double t155;
  double t156;
  double t157;
  double t189;
  double t191;
  double t192;
  double t199;
  double t200;
  double t212;
  double t213;
  double t249;
  double t214;
  double t215;
  double t252;
  double t216;
  double t217;
  double t55;
  double t56;
  double t59;
  double t61;
  double t64;
  double t66;
  double t67;
  double t69;
  double t70;
  double t72;
  double t239;
  double t240;
  double t241;
  double t140;
  double t141;
  double t143;
  double t144;
  double t145;
  double t243;
  double t244;
  double t245;
  double t250;
  double t251;
  double t253;
  double t254;
  double t255;
  double t256;
  double t257;
  double t258;
  double t276;
  double t277;
  double t279;
  double t280;
  double t281;
  double t175;
  double t176;
  double t178;
  double t179;
  double t180;
  double t271;
  double t62;
  double t90;
  double t122;
  double t151;
  double t163;
  double t341;
  double t289;
  double t291;
  double t292;
  double t294;
  double t295;
  double t297;
  double t298;
  double t300;
  double t301;
  double t303;
  double t304;
  double t306;
  double t307;
  double t308;
  double t309;
  double t310;
  double t312;
  double t313;
  double t315;
  double t316;
  double t317;
  double t318;
  double t319;
  double t320;
  double t321;
  double t322;
  double t324;
  double t325;
  double t327;
  double t328;
  double t329;
  double t330;
  double t331;
  double t333;
  double t334;
  double t336;
  double t337;
  double t338;
  double t363;
  double t364;
  double t367;
  double t398;
  double t396;
  double t399;
  double t401;
  double t403;
  double t138;
  double t407;
  double t417;
  double t420;
  double t395;
  double t400;
  double t404;
  double t421;
  double t425;
  double t366;
  double t374;
  double t431;
  double t432;
  double t433;
  double t434;
  double t435;
  double t436;
  double t439;
  double t440;
  double t397;
  double t402;
  double t418;
  double t447;
  double t423;
  double t448;
  double t365;
  double t451;
  double t373;
  double t452;
  double t416;
  double t419;
  double t422;
  double t424;
  double t426;
  double t427;
  double t405;
  double t408;
  double t409;
  double t410;
  double t411;
  double t412;
  double t392;
  double t477;
  double t371;
  double t375;
  double t478;
  double t457;
  double t458;
  double t459;
  double t460;
  double t461;
  double t462;
  double t473;
  double t474;
  double t372;
  double t495;
  double t384;
  double t387;
  double t272;
  double t356;
  double t357;
  double t358;
  double t273;
  double t359;
  double t360;
  double t343;
  double t345;
  double t346;
  double t348;
  double t349;
  double t350;
  double t351;
  double t385;
  double t388;
  double t389;
  double t501;
  double t534;
  double t535;
  double t536;
  double t537;
  double t555;
  double t557;
  double t567;
  double t577;
  double t580;
  double t583;
  double t586;
  double t598;
  double t601;
  double t604;
  double t607;
  double t441;
  double t636;
  double t649;
  double t650;
  double t651;
  double t645;
  double t646;
  double t647;
  double t453;
  double t584;
  double t587;
  double t588;
  double t605;
  double t608;
  double t609;
  double t614;
  double t616;
  double t617;
  double t622;
  double t624;
  double t625;
  double t662;
  double t665;
  double t668;
  double t671;
  double t465;
  double t466;
  double t467;
  double t637;
  double t638;
  double t639;
  double t689;
  double t640;
  double t641;
  double t642;
  double t556;
  double t558;
  double t559;
  double t561;
  double t562;
  double t563;
  double t479;
  double t578;
  double t581;
  double t582;
  double t660;
  double t599;
  double t602;
  double t603;
  double t661;
  double t663;
  double t664;
  double t666;
  double t667;
  double t669;
  double t670;
  double t672;
  double t673;
  double t610;
  double t612;
  double t613;
  double t674;
  double t618;
  double t620;
  double t621;
  double t675;
  double t709;
  double t676;
  double t677;
  double t712;
  double t678;
  double t679;
  double t715;
  double t680;
  double t681;
  double t718;
  double t682;
  double t683;
  double t690;
  double t692;
  double t693;
  double t695;
  double t700;
  double t701;
  double t702;
  double t512;
  double t571;
  double t572;
  double t574;
  double t575;
  double t576;
  double t707;
  double t592;
  double t593;
  double t595;
  double t596;
  double t597;
  double t708;
  double t710;
  double t711;
  double t713;
  double t714;
  double t716;
  double t717;
  double t719;
  double t720;
  double t721;
  double t722;
  double t723;
  double t724;
  double t725;
  double t726;
  double t727;
  double t728;
  double t729;
  double t730;
  double t489;
  double t490;
  double t491;
  double t492;
  double t493;
  double t494;
  double t496;
  double t752;
  double t753;
  double t755;
  double t756;
  double t758;
  double t759;
  double t760;
  double t761;
  double t762;
  double t763;
  double t743;
  double t744;
  double t628;
  double t629;
  double t630;
  double t568;
  double t569;
  double t750;
  double t589;
  double t590;
  double t591;
  double t594;
  double t600;
  double t606;
  double t777;
  double t778;
  double t619;
  double t623;
  double t781;
  double t782;
  double t783;
  double t784;
  double t785;
  double t757;
  double t790;
  double t791;
  double t792;
  double t393;
  double t797;
  double t798;
  double t799;
  double t800;
  double t801;
  double t802;
  double t803;
  double t804;
  double t805;
  double t742;
  double t745;
  double t746;
  double t747;
  t9 = Cos(var1[5]);
  t6 = Cos(var1[3]);
  t13 = Sin(var1[3]);
  t16 = Sin(var1[4]);
  t21 = Sin(var1[5]);
  t8 = Cos(var1[4]);
  t53 = -1.*var1[16];
  t52 = -1.*var1[15];
  t73 = -1.*var1[17];
  t108 = -1.*var1[19];
  t75 = var1[14] + t53 + t73;
  t80 = var1[14] + t52 + t53 + t73;
  t86 = var1[14] + var1[15] + t53 + t73;
  t92 = var1[14] + var1[16] + var1[17];
  t98 = var1[14] + t52 + var1[16] + var1[17];
  t102 = var1[14] + var1[15] + var1[16] + var1[17];
  t110 = var1[14] + t53 + t73 + t108;
  t115 = var1[14] + t52 + t53 + t73 + t108;
  t119 = var1[14] + var1[15] + t53 + t73 + t108;
  t124 = var1[14] + var1[16] + var1[17] + var1[19];
  t129 = var1[14] + t52 + var1[16] + var1[17] + var1[19];
  t134 = var1[14] + var1[15] + var1[16] + var1[17] + var1[19];
  t111 = Cos(t110);
  t116 = Cos(t115);
  t120 = Cos(t119);
  t125 = Cos(t124);
  t127 = 8000.*t125;
  t131 = Cos(t129);
  t132 = -40800.*t131;
  t136 = Cos(t134);
  t137 = 40800.*t136;
  t158 = Sin(t110);
  t160 = Sin(t115);
  t162 = Sin(t119);
  t164 = Sin(t124);
  t165 = -81600.*t164;
  t166 = Sin(t129);
  t168 = -4000.*t166;
  t169 = Sin(t134);
  t170 = 4000.*t169;
  t173 = Cos(var1[15]);
  t174 = -1.*var1[4];
  t198 = var1[16] + var1[17] + var1[19] + t174;
  t204 = var1[16] + var1[17] + var1[19] + var1[4];
  t76 = Cos(t75);
  t82 = Cos(t80);
  t88 = Cos(t86);
  t94 = Cos(t92);
  t96 = -13482.*t94;
  t100 = Cos(t98);
  t101 = -49544.*t100;
  t106 = Cos(t102);
  t107 = 49544.*t106;
  t185 = 8000.*t111;
  t186 = -40800.*t116;
  t188 = 40800.*t120;
  t146 = Sin(t75);
  t148 = Sin(t80);
  t150 = Sin(t86);
  t152 = Sin(t92);
  t153 = -99088.*t152;
  t154 = Sin(t98);
  t155 = 6741.*t154;
  t156 = Sin(t102);
  t157 = -6741.*t156;
  t189 = 81600.*t158;
  t191 = 4000.*t160;
  t192 = -4000.*t162;
  t199 = Cos(t198);
  t200 = 40800.*t199;
  t212 = Cos(t204);
  t213 = 40800.*t212;
  t249 = var1[16] + var1[17] + t174;
  t214 = Sin(t198);
  t215 = 4000.*t214;
  t252 = var1[16] + var1[17] + var1[4];
  t216 = Sin(t204);
  t217 = 4000.*t216;
  t55 = var1[14] + t52 + t53;
  t56 = Cos(t55);
  t59 = var1[14] + var1[15] + t53;
  t61 = Cos(t59);
  t64 = var1[14] + t52 + var1[16];
  t66 = Cos(t64);
  t67 = -12000.*t66;
  t69 = var1[14] + var1[15] + var1[16];
  t70 = Cos(t69);
  t72 = 12000.*t70;
  t239 = -13482.*t76;
  t240 = -49544.*t82;
  t241 = 49544.*t88;
  t140 = var1[14] + t53;
  t141 = Sin(t140);
  t143 = var1[14] + var1[16];
  t144 = Sin(t143);
  t145 = -24000.*t144;
  t243 = 99088.*t146;
  t244 = -6741.*t148;
  t245 = 6741.*t150;
  t250 = Cos(t249);
  t251 = 49544.*t250;
  t253 = Cos(t252);
  t254 = 49544.*t253;
  t255 = Sin(t249);
  t256 = -6741.*t255;
  t257 = Sin(t252);
  t258 = -6741.*t257;
  t276 = var1[16] + t174;
  t277 = Cos(t276);
  t279 = var1[16] + var1[4];
  t280 = Cos(t279);
  t281 = 12000.*t280;
  t175 = var1[14] + t174;
  t176 = Sin(t175);
  t178 = var1[14] + var1[4];
  t179 = Sin(t178);
  t180 = 450.*t179;
  t271 = -12000.*t56;
  t62 = -12000.*t61;
  t90 = -49544.*t88;
  t122 = -40800.*t120;
  t151 = -6741.*t150;
  t163 = 4000.*t162;
  t341 = Sin(var1[15]);
  t289 = Cos(var1[14]);
  t291 = 36000.*t289;
  t292 = Cos(t140);
  t294 = 24000.*t292;
  t295 = Cos(t143);
  t297 = 24000.*t295;
  t298 = 99088.*t76;
  t300 = -6741.*t82;
  t301 = 6741.*t88;
  t303 = 99088.*t94;
  t304 = -6741.*t100;
  t306 = 6741.*t106;
  t307 = 81600.*t111;
  t308 = 4000.*t116;
  t309 = -4000.*t120;
  t310 = 81600.*t125;
  t312 = 4000.*t131;
  t313 = -4000.*t136;
  t315 = Sin(t55);
  t316 = 12000.*t315;
  t317 = Sin(t59);
  t318 = -12000.*t317;
  t319 = Sin(t64);
  t320 = -12000.*t319;
  t321 = Sin(t69);
  t322 = 12000.*t321;
  t324 = 13482.*t146;
  t325 = 49544.*t148;
  t327 = -49544.*t150;
  t328 = -13482.*t152;
  t329 = -49544.*t154;
  t330 = 49544.*t156;
  t331 = -8000.*t158;
  t333 = 40800.*t160;
  t334 = -40800.*t162;
  t336 = 8000.*t164;
  t337 = -40800.*t166;
  t338 = 40800.*t169;
  t363 = Cos(t175);
  t364 = 450.*t363;
  t367 = Cos(t178);
  t398 = var1[17] + var1[19];
  t396 = Cos(var1[17]);
  t399 = Cos(t398);
  t401 = Sin(var1[17]);
  t403 = Sin(t398);
  t138 = Sin(var1[14]);
  t407 = Cos(var1[16]);
  t417 = var1[16] + var1[17];
  t420 = var1[16] + var1[17] + var1[19];
  t395 = Sin(var1[16]);
  t400 = 40800.*t399;
  t404 = 4000.*t403;
  t421 = Cos(t420);
  t425 = Sin(t420);
  t366 = -4000.*t199;
  t374 = 40800.*t214;
  t431 = -81600.*t111;
  t432 = -4000.*t116;
  t433 = 4000.*t120;
  t434 = 8000.*t158;
  t435 = -40800.*t160;
  t436 = 40800.*t162;
  t439 = 4000.*t399;
  t440 = -40800.*t403;
  t397 = 49544.*t396;
  t402 = -6741.*t401;
  t418 = Cos(t417);
  t447 = 4000.*t421;
  t423 = Sin(t417);
  t448 = -40800.*t425;
  t365 = 6741.*t250;
  t451 = 4000.*t212;
  t373 = 49544.*t255;
  t452 = -40800.*t216;
  t416 = 12000.*t407;
  t419 = 49544.*t418;
  t422 = 40800.*t421;
  t424 = -6741.*t423;
  t426 = 4000.*t425;
  t427 = 9000. + t416 + t419 + t422 + t424 + t426;
  t405 = 12000. + t397 + t400 + t402 + t404;
  t408 = 6741.*t396;
  t409 = -4000.*t399;
  t410 = 49544.*t401;
  t411 = 40800.*t403;
  t412 = t408 + t409 + t410 + t411;
  t392 = 450.*t367;
  t477 = -6741.*t253;
  t371 = Sin(t276);
  t375 = Sin(t279);
  t478 = -49544.*t257;
  t457 = -99088.*t76;
  t458 = 6741.*t82;
  t459 = -6741.*t88;
  t460 = -13482.*t146;
  t461 = -49544.*t148;
  t462 = 49544.*t150;
  t473 = -6741.*t418;
  t474 = -49544.*t423;
  t372 = 12000.*t371;
  t495 = -12000.*t375;
  t384 = var1[14] + t52;
  t387 = var1[14] + var1[15];
  t272 = 12000.*t61;
  t356 = 12000.*t66;
  t357 = 49544.*t100;
  t358 = 40800.*t131;
  t273 = 24000.*t141;
  t359 = -6741.*t154;
  t360 = 4000.*t166;
  t343 = -12000.*t277;
  t345 = -49544.*t250;
  t346 = -40800.*t199;
  t348 = 450.*t176;
  t349 = 6741.*t255;
  t350 = -4000.*t214;
  t351 = t343 + t345 + t346 + t281 + t254 + t213 + t348 + t349 + t350 + t180 + t258 + t217;
  t385 = Sin(t384);
  t388 = Sin(t387);
  t389 = -900.*t388;
  t501 = -12000.*t315;
  t534 = t8*t138*t395*t405;
  t535 = t407*t8*t138*t412;
  t536 = 450.*t16;
  t537 = t534 + t535 + t536;
  t555 = Cos(var1[19]);
  t557 = Sin(var1[19]);
  t567 = -1.*var1[3];
  t577 = var1[15] + t53 + t73 + t567;
  t580 = var1[15] + var1[16] + var1[17] + t567;
  t583 = var1[15] + t53 + t73 + t108 + t567;
  t586 = var1[15] + var1[16] + var1[17] + var1[19] + t567;
  t598 = var1[15] + t53 + t73 + var1[3];
  t601 = var1[15] + var1[16] + var1[17] + var1[3];
  t604 = var1[15] + t53 + t73 + t108 + var1[3];
  t607 = var1[15] + var1[16] + var1[17] + var1[19] + var1[3];
  t441 = t439 + t440;
  t636 = var1[16] + t73 + t108;
  t649 = 40800.*t555;
  t650 = 4000.*t557;
  t651 = t649 + t650;
  t645 = 1000.*t555;
  t646 = -10200.*t557;
  t647 = t645 + t646;
  t453 = t366 + t451 + t374 + t452;
  t584 = Cos(t583);
  t587 = Cos(t586);
  t588 = -40800.*t587;
  t605 = Cos(t604);
  t608 = Cos(t607);
  t609 = 40800.*t608;
  t614 = Sin(t583);
  t616 = Sin(t586);
  t617 = -4000.*t616;
  t622 = Sin(t604);
  t624 = Sin(t607);
  t625 = 4000.*t624;
  t662 = var1[16] + var1[17] + var1[19] + t567 + t174;
  t665 = var1[16] + var1[17] + var1[19] + var1[3] + t174;
  t668 = var1[16] + var1[17] + var1[19] + t567 + var1[4];
  t671 = var1[16] + var1[17] + var1[19] + var1[3] + var1[4];
  t465 = -6741.*t396;
  t466 = -49544.*t401;
  t467 = t465 + t439 + t466 + t440;
  t637 = Cos(t636);
  t638 = 4000.*t637;
  t639 = -4000.*t421;
  t689 = var1[16] + t73;
  t640 = Sin(t636);
  t641 = 40800.*t640;
  t642 = 40800.*t425;
  t556 = 10200.*t555;
  t558 = 1000.*t557;
  t559 = 12386. + t556 + t558;
  t561 = -4000.*t555;
  t562 = 40800.*t557;
  t563 = 6741. + t561 + t562;
  t479 = t365 + t366 + t477 + t451 + t373 + t374 + t478 + t452;
  t578 = Cos(t577);
  t581 = Cos(t580);
  t582 = -49544.*t581;
  t660 = -40800.*t584;
  t599 = Cos(t598);
  t602 = Cos(t601);
  t603 = 49544.*t602;
  t661 = 40800.*t605;
  t663 = Cos(t662);
  t664 = 4000.*t663;
  t666 = Cos(t665);
  t667 = 4000.*t666;
  t669 = Cos(t668);
  t670 = 4000.*t669;
  t672 = Cos(t671);
  t673 = 4000.*t672;
  t610 = Sin(t577);
  t612 = Sin(t580);
  t613 = 6741.*t612;
  t674 = 4000.*t614;
  t618 = Sin(t598);
  t620 = Sin(t601);
  t621 = -6741.*t620;
  t675 = -4000.*t622;
  t709 = var1[16] + var1[17] + t567 + t174;
  t676 = Sin(t662);
  t677 = -40800.*t676;
  t712 = var1[16] + var1[17] + var1[3] + t174;
  t678 = Sin(t665);
  t679 = -40800.*t678;
  t715 = var1[16] + var1[17] + t567 + var1[4];
  t680 = Sin(t668);
  t681 = -40800.*t680;
  t718 = var1[16] + var1[17] + var1[3] + var1[4];
  t682 = Sin(t671);
  t683 = -40800.*t682;
  t690 = Cos(t689);
  t692 = 6741.*t418;
  t693 = Sin(t689);
  t695 = 49544.*t423;
  t700 = t6*t8*t341*t563;
  t701 = 4.*t559*t13;
  t702 = t700 + t701;
  t512 = t365 + t366 + t477 + t451 + t372 + t373 + t374 + t495 + t478 + t452;
  t571 = var1[15] + t53 + t567;
  t572 = Cos(t571);
  t574 = var1[15] + var1[16] + t567;
  t575 = Cos(t574);
  t576 = -12000.*t575;
  t707 = -49544.*t578;
  t592 = var1[15] + t53 + var1[3];
  t593 = Cos(t592);
  t595 = var1[15] + var1[16] + var1[3];
  t596 = Cos(t595);
  t597 = 12000.*t596;
  t708 = 49544.*t599;
  t710 = Cos(t709);
  t711 = -6741.*t710;
  t713 = Cos(t712);
  t714 = -6741.*t713;
  t716 = Cos(t715);
  t717 = -6741.*t716;
  t719 = Cos(t718);
  t720 = -6741.*t719;
  t721 = -6741.*t610;
  t722 = 6741.*t618;
  t723 = Sin(t709);
  t724 = -49544.*t723;
  t725 = Sin(t712);
  t726 = -49544.*t725;
  t727 = Sin(t715);
  t728 = -49544.*t727;
  t729 = Sin(t718);
  t730 = -49544.*t729;
  t489 = -450.*t363;
  t490 = -6741.*t250;
  t491 = 4000.*t199;
  t492 = -12000.*t371;
  t493 = -49544.*t255;
  t494 = -40800.*t214;
  t496 = t489 + t490 + t491 + t392 + t477 + t451 + t492 + t493 + t494 + t495 + t478 + t452;
  t752 = var1[16] + t567 + t174;
  t753 = Sin(t752);
  t755 = var1[16] + var1[3] + t174;
  t756 = Sin(t755);
  t758 = var1[16] + t567 + var1[4];
  t759 = Sin(t758);
  t760 = -12000.*t759;
  t761 = var1[16] + var1[3] + var1[4];
  t762 = Sin(t761);
  t763 = -12000.*t762;
  t743 = t401*t563;
  t744 = -12000. + t743;
  t628 = -1.*t8*t138*t395*t405;
  t629 = -450.*t16;
  t630 = t628 + t629;
  t568 = var1[15] + t567;
  t569 = Cos(t568);
  t750 = -12000.*t572;
  t589 = var1[15] + var1[3];
  t590 = Cos(t589);
  t591 = -900.*t590;
  t594 = -12000.*t593;
  t600 = -49544.*t599;
  t606 = -40800.*t605;
  t777 = 6741.*t710;
  t778 = -4000.*t663;
  t619 = -6741.*t618;
  t623 = 4000.*t622;
  t781 = 12000.*t753;
  t782 = 49544.*t723;
  t783 = 40800.*t676;
  t784 = var1[3] + t174;
  t785 = Sin(t784);
  t757 = -12000.*t756;
  t790 = var1[3] + var1[4];
  t791 = Sin(t790);
  t792 = -18000.*t791;
  t393 = t364 + t392;
  t797 = 49544.*t690;
  t798 = -49544.*t418;
  t799 = 40800.*t637;
  t800 = -40800.*t421;
  t801 = 6741.*t693;
  t802 = 6741.*t423;
  t803 = -4000.*t640;
  t804 = -4000.*t425;
  t805 = -18000. + t797 + t798 + t799 + t800 + t801 + t802 + t803 + t804;
  t742 = 4.*t6*t8*t341*t401*t559;
  t745 = -1.*t744*t13;
  t746 = t396*t702;
  t747 = t742 + t745 + t746;
  p_output1[0]=(-1.*t21*t6 - 1.*t13*t16*t9)*var2[3] + t6*t8*t9*var2[4] + (-1.*t16*t21*t6 - 1.*t13*t9)*var2[5];
  p_output1[1]=(-1.*t13*t16*t21 + t6*t9)*var2[3] + t21*t6*t8*var2[4] + (-1.*t13*t21 + t16*t6*t9)*var2[5];
  p_output1[2]=var2[15];
  p_output1[3]=2.5e-6*(-1800.*t16*t341 - 2.*t173*t351 + (t291 + t294 + t297 + t298 + t300 + t301 + t303 + t304 + t306 + t307 + t308 + t309 + t310 + t312 + t313 + t316 + t318 + t320 + t322 + t324 + t325 + t327 + t328 + t329 + t330 + t331 + t333 + t334 + t336 + t337 + t338)*t8)*var2[4] + 2.5e-6*(-2.*t173*(-450.*t176 + t180) + t16*(t101 + t107 - 8000.*t111 + 40800.*t116 + t122 + t127 + t132 + t137 - 36000.*t138 - 24000.*t141 + t145 - 99088.*t146 + 6741.*t148 + t151 + t153 + t155 + t157 - 81600.*t158 - 4000.*t160 + t163 + t165 + t168 + t170 + 12000.*t56 + t62 + t67 + t72 + 13482.*t76 + 49544.*t82 + t90 + t96))*var2[14] + 2.5e-6*(2.*t341*(-4000.*t212 + 40800.*t216 + 6741.*t253 + 49544.*t257 + t364 + t365 + t366 - 450.*t367 + t372 + t373 + t374 + 12000.*t375) + 1800.*t173*t8 + t16*(t107 + t122 + t137 + t151 + t157 + t163 + t170 + t186 + t191 + t240 + t244 + t271 + t356 + t357 + t358 + t359 + t360 + t62 + t72 + t90))*var2[15] + 2.5e-6*(-2.*t173*(t200 + t213 + t215 + t217 + t251 + t254 + t256 + t258 + 12000.*t277 + t281) + t16*(t101 + t107 + t127 + t132 + t137 + t145 + t153 + t155 + t157 + t165 + t168 + t170 + t185 + t186 + t188 + t189 + t191 + t192 + t239 + t240 + t241 + t243 + t244 + t245 + t271 + t272 + t273 + t67 + t72 + t96))*var2[16] + 2.5e-6*(-2.*t173*(t200 + t213 + t215 + t217 + t251 + t254 + t256 + t258) + t16*(t101 + t107 + t127 + t132 + t137 + t153 + t155 + t157 + t165 + t168 + t170 + t185 + t186 + t188 + t189 + t191 + t192 + t239 + t240 + t241 + t243 + t244 + t245 + t96))*var2[17] + 2.5e-6*(t16*(t127 + t132 + t137 + t165 + t168 + t170 + t185 + t186 + t188 + t189 + t191 + t192) - 2.*t173*(t200 + t213 + t215 + t217))*var2[19];
  p_output1[4]=2.5e-6*(2.*t173*t351*t6 + 4.*t341*t537*t6 - 4.*t289*t427*t6*t8 + t13*(-54000. - 49544.*t106 - 8000.*t125 - 40800.*t136 + 36000.*t138 + 24000.*t144 + 99088.*t152 + 6741.*t156 + 81600.*t164 - 4000.*t169 + t185 + t186 + t188 + t189 + t191 + t192 + t239 + t240 + t241 + t243 + t244 + t245 + t271 + t272 + t273 + t356 + t357 + t358 + t359 + t360 - 12000.*t70 + 13482.*t94 + 900.*Cos(t384) + 900.*Cos(t387)))*var2[3] + 2.5e-6*(4.*t13*t16*t289*t427 + 2.*t13*t173*t496 + 4.*t13*t341*(-1.*t138*t16*t395*t405 - 1.*t138*t16*t407*t412 + 450.*t8))*var2[4] + 2.5e-6*(2.*t13*t173*t393 - 1.*(t291 + t294 + t297 + t298 + t300 + t301 + t303 + t304 + t306 + t307 + t308 + t309 + t310 + t312 + t313 + t316 + t318 + t320 + t322 + t324 + t325 + t327 + t328 + t329 + t330 + t331 + t333 + t334 + t336 + t337 + t338 - 900.*t385 + t389)*t6 + 4.*t13*t138*t427*t8 + 4.*t13*t341*(t289*t395*t405*t8 + t289*t407*t412*t8))*var2[14] + 2.5e-6*(-2.*t13*t341*t351 + 4.*t13*t173*t537 - 1.*(6741.*t100 - 4000.*t131 + 49544.*t154 + 40800.*t166 + t301 + t306 + t309 + t313 + t318 + 12000.*t319 + t322 + t327 + t330 + t334 + t338 + 900.*t385 + t389 + t432 + t435 + t458 + t461 + t501)*t6)*var2[15] + 2.5e-6*(2.*t13*t173*t512 - 1.*(-24000.*t292 + t297 + t303 + t304 + t306 + t310 + t312 + t313 + 12000.*t317 + t320 + t322 + t328 + t329 + t330 + t336 + t337 + t338 + t431 + t432 + t433 + t434 + t435 + t436 + t457 + t458 + t459 + t460 + t461 + t462 + t501)*t6 - 4.*t13*t289*(-12000.*t395 + t447 + t448 + t473 + t474)*t8 + 4.*t13*t341*(t138*t405*t407*t8 - 1.*t138*t395*t412*t8))*var2[16] + 2.5e-6*(2.*t13*t173*t479 - 1.*(t303 + t304 + t306 + t310 + t312 + t313 + t328 + t329 + t330 + t336 + t337 + t338 + t431 + t432 + t433 + t434 + t435 + t436 + t457 + t458 + t459 + t460 + t461 + t462)*t6 - 4.*t13*t289*(t447 + t448 + t473 + t474)*t8 + 4.*t13*t341*(t138*(t397 + t400 + t402 + t404)*t407*t8 + t138*t395*t467*t8))*var2[17] + 2.5e-6*(2.*t13*t173*t453 - 1.*(t310 + t312 + t313 + t336 + t337 + t338 + t431 + t432 + t433 + t434 + t435 + t436)*t6 - 4.*t13*t289*(t447 + t448)*t8 + 4.*t13*t341*(t138*(t400 + t404)*t407*t8 + t138*t395*t441*t8))*var2[19];
  p_output1[5]=2.5e-6*(2.*t13*t173*t351 - 4.*t13*t341*t630 + t289*(-900.*t569 + 12000.*t575 + 49544.*t581 + 40800.*t587 + t591 + t594 + t597 + t600 + t603 + t606 + t609 - 6741.*t612 + 4000.*t616 + t619 + t621 + t623 + t625 + t660 + t667 - 4000.*t669 + t673 + t674 + t679 + 40800.*t680 + t683 + t707 + t714 + 6741.*t716 + t720 + t721 + t726 + 49544.*t727 + t730 + t750 + t757 + 12000.*t759 + t763 + t777 + t778 + t781 + t782 + t783 - 18000.*t785 + t792) - 4.*t138*t407*(-1.*t6*t744 - 4.*t13*t341*t401*t559*t8 + t396*(4.*t559*t6 - 1.*t13*t341*t563*t8)) + 2.*t6*(27000. + t138*t805))*var2[3] + 2.5e-6*(-2.*t173*t496*t6 - 4.*t138*t407*(-4.*t16*t341*t401*t559*t6 - 1.*t16*t341*t396*t563*t6) + t289*(-4000.*t666 + t670 + t673 + 40800.*t678 + t681 + t683 + 6741.*t713 + t717 + t720 + 49544.*t725 + t728 + t730 + 12000.*t756 + t760 + t763 + t777 + t778 + t781 + t782 + t783 + 18000.*t785 + t792) + 4.*t341*t6*(t138*t16*t395*t405 - 450.*t8))*var2[4] + 2.5e-6*(2.*t341*t351*t6 + t289*(900.*t569 + 12000.*t572 + t576 + 49544.*t578 + t582 + 40800.*t584 + t588 + t591 + t594 + t597 + t600 + t603 + t606 + t609 + 6741.*t610 + t613 - 4000.*t614 + t617 + t619 + t621 + t623 + t625) + 4.*t173*t6*t630 - 4.*t138*t407*(4.*t173*t401*t559*t6*t8 + t173*t396*t563*t6*t8))*var2[15] + 2.5e-6*(-2.*t173*t512*t6 + 2.*t13*t138*(-4000.*t637 + t639 - 40800.*t640 + t642 + 6741.*t690 + t692 - 49544.*t693 + t695) + 4.*t138*t395*t747 + t289*(t576 + t582 + t588 + 12000.*t593 + t597 + t603 + t609 + t613 + t617 + t621 + t625 + t660 + t661 + t664 + t667 + t670 + t673 + t674 + t675 + t677 + t679 + t681 + t683 + t707 + t708 + t711 + t714 + t717 + t720 + t721 + t722 + t724 + t726 + t728 + t730 + t750 - 12000.*t753 + t757 + t760 + t763) - 4.*t138*t341*t405*t407*t6*t8)*var2[16] + 2.5e-6*(-2.*t173*t479*t6 + 2.*t13*t138*(t638 + t639 + t641 + t642 - 6741.*t690 + t692 + 49544.*t693 + t695) + t289*(t582 + t588 + t603 + t609 + t613 + t617 + t621 + t625 + t660 + t661 + t664 + t667 + t670 + t673 + t674 + t675 + t677 + t679 + t681 + t683 + t707 + t708 + t711 + t714 + t717 + t720 + t721 + t722 + t724 + t726 + t728 + t730) - 4.*t138*t341*t395*t467*t6*t8 - 4.*t138*t407*(-1.*t13*t396*t563 - 1.*t401*t702 + 4.*t341*t396*t559*t6*t8))*var2[17] + 2.5e-6*(-2.*t173*t453*t6 + 2.*t13*t138*(t638 + t639 + t641 + t642) + t289*(t588 + t609 + t617 + t625 + t660 + t661 + t664 + t667 + t670 + t673 + t674 + t675 + t677 + t679 + t681 + t683) - 4.*t138*t341*t395*t441*t6*t8 - 4.*t138*t407*(-1.*t13*t401*t651 + 4.*t341*t401*t6*t647*t8 + t396*(4.*t13*t647 + t341*t6*t651*t8)))*var2[19] + 2.5e-6*var2[14]*(-2.*t173*t393*t6 - 4.*t289*t407*t747 - 4.*t289*t341*t395*t405*t6*t8 + 2.*t13*t289*t805 - 1.*t138*(-6741.*t578 - 6741.*t581 + 4000.*t584 + 4000.*t587 + 6741.*t599 + 6741.*t602 - 4000.*t605 - 4000.*t608 + 49544.*t610 - 49544.*t612 + 40800.*t614 - 40800.*t616 - 49544.*t618 + 49544.*t620 - 40800.*t622 + 40800.*t624 + 40800.*t663 + 40800.*t666 + 40800.*t669 + 40800.*t672 + 4000.*t676 + 4000.*t678 + 4000.*t680 + 4000.*t682 + 49544.*t710 + 49544.*t713 + 49544.*t716 + 49544.*t719 - 6741.*t723 - 6741.*t725 - 6741.*t727 - 6741.*t729 + 12000.*Cos(t752) + 12000.*Cos(t755) + 12000.*Cos(t758) + 12000.*Cos(t761) + 18000.*Cos(t784) + 18000.*Cos(t790) + 900.*Sin(t568) + 12000.*Sin(t571) - 12000.*Sin(t574) - 900.*Sin(t589) - 12000.*Sin(t592) + 12000.*Sin(t595)));
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

void dp_pelvis_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}




