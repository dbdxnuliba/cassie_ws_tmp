/*
 * Automatically Generated from Mathematica.
 * Mon 20 Dec 2021 14:45:58 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "yaLeftStance_SLIP_with_xcom.hh"
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
  double t6;
  double t3;
  double t7;
  double t4;
  double t8;
  double t15;
  double t19;
  double t20;
  double t25;
  double t26;
  double t27;
  double t29;
  double t22;
  double t23;
  double t24;
  double t44;
  double t45;
  double t46;
  double t48;
  double t41;
  double t42;
  double t43;
  double t52;
  double t53;
  double t54;
  double t59;
  double t60;
  double t61;
  double t63;
  double t66;
  double t67;
  double t68;
  double t73;
  double t74;
  double t75;
  double t77;
  double t78;
  double t79;
  double t81;
  double t84;
  double t85;
  double t86;
  double t91;
  double t92;
  double t93;
  double t95;
  double t96;
  double t97;
  double t99;
  double t102;
  double t103;
  double t104;
  double t109;
  double t110;
  double t111;
  double t126;
  double t128;
  double t127;
  double t129;
  double t130;
  double t131;
  double t132;
  double t133;
  double t134;
  double t136;
  double t137;
  double t138;
  double t143;
  double t144;
  double t145;
  double t147;
  double t146;
  double t148;
  double t149;
  double t150;
  double t152;
  double t153;
  double t154;
  double t155;
  double t166;
  double t167;
  double t168;
  double t170;
  double t156;
  double t157;
  double t158;
  double t160;
  double t161;
  double t162;
  double t169;
  double t171;
  double t172;
  double t173;
  double t174;
  double t175;
  double t176;
  double t177;
  double t179;
  double t180;
  double t181;
  double t190;
  double t191;
  double t192;
  double t194;
  double t183;
  double t184;
  double t185;
  double t193;
  double t195;
  double t196;
  double t197;
  double t198;
  double t199;
  double t200;
  double t201;
  double t202;
  double t203;
  double t204;
  double t206;
  double t207;
  double t208;
  double t218;
  double t219;
  double t220;
  double t222;
  double t241;
  double t242;
  double t243;
  double t246;
  double t221;
  double t223;
  double t224;
  double t225;
  double t226;
  double t227;
  double t228;
  double t229;
  double t245;
  double t230;
  double t231;
  double t232;
  double t261;
  double t250;
  double t234;
  double t235;
  double t236;
  double t272;
  double t269;
  double t247;
  double t277;
  double t251;
  double t291;
  double t258;
  double t280;
  double t262;
  double t310;
  double t311;
  double t312;
  double t314;
  double t16;
  double t17;
  double t140;
  double t332;
  double t333;
  double t28;
  double t30;
  double t31;
  double t33;
  double t34;
  double t35;
  double t37;
  double t38;
  double t39;
  double t339;
  double t340;
  double t47;
  double t49;
  double t50;
  double t55;
  double t56;
  double t57;
  double t346;
  double t347;
  double t62;
  double t64;
  double t65;
  double t70;
  double t71;
  double t72;
  double t353;
  double t354;
  double t80;
  double t82;
  double t83;
  double t88;
  double t89;
  double t90;
  double t372;
  double t373;
  double t374;
  double t377;
  double t365;
  double t366;
  double t381;
  double t392;
  double t376;
  double t403;
  double t400;
  double t382;
  double t408;
  double t378;
  double t422;
  double t389;
  double t411;
  double t393;
  double t98;
  double t100;
  double t101;
  double t106;
  double t107;
  double t108;
  double t113;
  double t114;
  double t115;
  double t117;
  double t118;
  double t119;
  double t18;
  double t313;
  double t315;
  double t316;
  double t317;
  double t318;
  double t319;
  double t320;
  double t321;
  double t322;
  double t323;
  double t324;
  double t326;
  double t327;
  double t328;
  double t21;
  double t32;
  double t36;
  double t40;
  double t51;
  double t58;
  double t69;
  double t76;
  double t87;
  double t94;
  double t105;
  double t112;
  double t116;
  double t120;
  double t462;
  double t463;
  double t464;
  double t466;
  double t467;
  double t468;
  double t470;
  double t471;
  double t472;
  double t474;
  double t475;
  double t476;
  double t478;
  double t479;
  double t480;
  double t482;
  double t483;
  double t484;
  double t486;
  double t487;
  double t488;
  double t505;
  double t506;
  double t507;
  double t510;
  double t511;
  double t512;
  double t514;
  double t515;
  double t516;
  double t518;
  double t519;
  double t520;
  double t522;
  double t523;
  double t524;
  double t526;
  double t527;
  double t528;
  double t530;
  double t531;
  double t532;
  double t550;
  double t551;
  double t552;
  double t546;
  double t547;
  double t548;
  double t555;
  double t556;
  double t557;
  double t563;
  double t564;
  double t565;
  double t567;
  double t568;
  double t569;
  double t571;
  double t572;
  double t573;
  double t575;
  double t576;
  double t577;
  double t579;
  double t580;
  double t581;
  double t583;
  double t584;
  double t585;
  double t596;
  double t597;
  double t598;
  double t605;
  double t606;
  double t607;
  double t609;
  double t610;
  double t611;
  double t613;
  double t614;
  double t615;
  double t617;
  double t618;
  double t619;
  double t621;
  double t622;
  double t623;
  double t625;
  double t626;
  double t627;
  double t629;
  double t630;
  double t631;
  double t633;
  double t634;
  double t635;
  double t5;
  double t9;
  double t10;
  double t646;
  double t647;
  double t649;
  double t650;
  double t651;
  double t652;
  double t653;
  double t654;
  double t655;
  double t656;
  double t648;
  double t657;
  double t658;
  double t660;
  double t661;
  double t662;
  double t659;
  double t663;
  double t664;
  double t666;
  double t667;
  double t668;
  double t665;
  double t669;
  double t670;
  double t672;
  double t673;
  double t674;
  double t498;
  double t499;
  double t500;
  double t501;
  double t502;
  double t503;
  double t504;
  double t508;
  double t509;
  double t513;
  double t517;
  double t521;
  double t525;
  double t529;
  double t533;
  double t534;
  double t535;
  double t536;
  double t537;
  double t538;
  double t539;
  double t540;
  double t541;
  double t454;
  double t455;
  double t456;
  double t458;
  double t459;
  double t460;
  double t457;
  double t465;
  double t469;
  double t473;
  double t477;
  double t481;
  double t240;
  double t244;
  double t248;
  double t249;
  double t252;
  double t253;
  double t254;
  double t256;
  double t257;
  double t259;
  double t260;
  double t263;
  double t264;
  double t265;
  double t267;
  double t268;
  double t270;
  double t271;
  double t273;
  double t274;
  double t275;
  double t278;
  double t281;
  double t283;
  double t284;
  double t288;
  double t289;
  double t292;
  double t294;
  double t298;
  double t300;
  double t301;
  double t303;
  double t485;
  double t489;
  double t490;
  double t491;
  double t492;
  double t494;
  double t495;
  double t496;
  double t689;
  double t749;
  double t750;
  double t751;
  double t757;
  double t758;
  double t764;
  double t765;
  double t371;
  double t375;
  double t379;
  double t380;
  double t383;
  double t384;
  double t385;
  double t776;
  double t777;
  double t387;
  double t388;
  double t390;
  double t391;
  double t394;
  double t395;
  double t396;
  double t398;
  double t399;
  double t401;
  double t402;
  double t404;
  double t405;
  double t406;
  double t409;
  double t412;
  double t414;
  double t415;
  double t419;
  double t420;
  double t423;
  double t425;
  double t429;
  double t431;
  double t432;
  double t434;
  t6 = Cos(var1[3]);
  t3 = Cos(var1[5]);
  t7 = Sin(var1[4]);
  t4 = Sin(var1[3]);
  t8 = Sin(var1[5]);
  t15 = Cos(var1[6]);
  t19 = Cos(var1[4]);
  t20 = Sin(var1[6]);
  t25 = Cos(var1[7]);
  t26 = -1.*t25;
  t27 = 1. + t26;
  t29 = Sin(var1[7]);
  t22 = t15*t4;
  t23 = t6*t19*t20;
  t24 = t22 + t23;
  t44 = Cos(var1[8]);
  t45 = -1.*t44;
  t46 = 1. + t45;
  t48 = Sin(var1[8]);
  t41 = -1.*t6*t25*t7;
  t42 = t24*t29;
  t43 = t41 + t42;
  t52 = t6*t19*t15;
  t53 = -1.*t4*t20;
  t54 = t52 + t53;
  t59 = Cos(var1[9]);
  t60 = -1.*t59;
  t61 = 1. + t60;
  t63 = Sin(var1[9]);
  t66 = t44*t43;
  t67 = t54*t48;
  t68 = t66 + t67;
  t73 = t44*t54;
  t74 = -1.*t43*t48;
  t75 = t73 + t74;
  t77 = Cos(var1[11]);
  t78 = -1.*t77;
  t79 = 1. + t78;
  t81 = Sin(var1[11]);
  t84 = -1.*t63*t68;
  t85 = t59*t75;
  t86 = t84 + t85;
  t91 = t59*t68;
  t92 = t63*t75;
  t93 = t91 + t92;
  t95 = Cos(var1[13]);
  t96 = -1.*t95;
  t97 = 1. + t96;
  t99 = Sin(var1[13]);
  t102 = t81*t86;
  t103 = t77*t93;
  t104 = t102 + t103;
  t109 = t77*t86;
  t110 = -1.*t81*t93;
  t111 = t109 + t110;
  t126 = Sin(var1[14]);
  t128 = Cos(var1[14]);
  t127 = 0.135*t6*t19*t126;
  t129 = -1.*t128;
  t130 = 1. + t129;
  t131 = -0.135*t130*t4;
  t132 = t6*t19*t126;
  t133 = t128*t4;
  t134 = t132 + t133;
  t136 = t128*t6*t19;
  t137 = -1.*t126*t4;
  t138 = t136 + t137;
  t143 = Cos(var1[15]);
  t144 = -1.*t143;
  t145 = 1. + t144;
  t147 = Sin(var1[15]);
  t146 = -0.135*t145;
  t148 = 0.049*t147;
  t149 = t146 + t148;
  t150 = t149*t134;
  t152 = -0.049*t145;
  t153 = -0.135*t147;
  t154 = t152 + t153;
  t155 = -1.*t6*t154*t7;
  t166 = Cos(var1[16]);
  t167 = -1.*t166;
  t168 = 1. + t167;
  t170 = Sin(var1[16]);
  t156 = t147*t134;
  t157 = -1.*t143*t6*t7;
  t158 = t156 + t157;
  t160 = t143*t134;
  t161 = t6*t147*t7;
  t162 = t160 + t161;
  t169 = -0.09*t168;
  t171 = 0.049*t170;
  t172 = t169 + t171;
  t173 = t172*t138;
  t174 = -0.049*t168;
  t175 = -0.09*t170;
  t176 = t174 + t175;
  t177 = t176*t158;
  t179 = t170*t138;
  t180 = t166*t158;
  t181 = t179 + t180;
  t190 = Cos(var1[17]);
  t191 = -1.*t190;
  t192 = 1. + t191;
  t194 = Sin(var1[17]);
  t183 = t166*t138;
  t184 = -1.*t170*t158;
  t185 = t183 + t184;
  t193 = -0.049*t192;
  t195 = -0.21*t194;
  t196 = t193 + t195;
  t197 = t196*t181;
  t198 = -0.21*t192;
  t199 = 0.049*t194;
  t200 = t198 + t199;
  t201 = t200*t185;
  t202 = -1.*t194*t181;
  t203 = t190*t185;
  t204 = t202 + t203;
  t206 = t190*t181;
  t207 = t194*t185;
  t208 = t206 + t207;
  t218 = Cos(var1[19]);
  t219 = -1.*t218;
  t220 = 1. + t219;
  t222 = Sin(var1[19]);
  t241 = Cos(var1[20]);
  t242 = -1.*t241;
  t243 = 1. + t242;
  t246 = Sin(var1[20]);
  t221 = -0.70544*t220;
  t223 = -0.01841*t222;
  t224 = t221 + t223;
  t225 = t224*t204;
  t226 = 0.01841*t220;
  t227 = -0.70544*t222;
  t228 = t226 + t227;
  t229 = t228*t208;
  t245 = 0.07769774964800001*t243;
  t230 = t222*t204;
  t231 = t218*t208;
  t232 = t230 + t231;
  t261 = -0.0004284921280000001*t243;
  t250 = 0.005481192614*t243;
  t234 = t218*t204;
  t235 = -1.*t222*t208;
  t236 = t234 + t235;
  t272 = -0.077936*t246;
  t269 = -0.996943*t246;
  t247 = -0.005498*t246;
  t277 = -0.005481192614*t243;
  t251 = 0.077936*t246;
  t291 = -0.07769774964800001*t243;
  t258 = 0.005498*t246;
  t280 = 0.0004284921280000001*t243;
  t262 = 0.996943*t246;
  t310 = Cos(var1[21]);
  t311 = -1.*t310;
  t312 = 1. + t311;
  t314 = Sin(var1[21]);
  t16 = -1.*t15;
  t17 = 1. + t16;
  t140 = 0.0233*t6*t7;
  t332 = 0.135*t17*t4;
  t333 = -0.135*t6*t19*t20;
  t28 = 0.135*t27;
  t30 = 0.049*t29;
  t31 = t28 + t30;
  t33 = -0.049*t27;
  t34 = 0.135*t29;
  t35 = t33 + t34;
  t37 = t25*t24;
  t38 = t6*t7*t29;
  t39 = t37 + t38;
  t339 = t24*t31;
  t340 = -1.*t6*t7*t35;
  t47 = -0.049*t46;
  t49 = -0.09*t48;
  t50 = t47 + t49;
  t55 = -0.09*t46;
  t56 = 0.049*t48;
  t57 = t55 + t56;
  t346 = t43*t50;
  t347 = t54*t57;
  t62 = -0.049*t61;
  t64 = -0.21*t63;
  t65 = t62 + t64;
  t70 = -0.21*t61;
  t71 = 0.049*t63;
  t72 = t70 + t71;
  t353 = t65*t68;
  t354 = t72*t75;
  t80 = -0.70544*t79;
  t82 = -0.01841*t81;
  t83 = t80 + t82;
  t88 = 0.01841*t79;
  t89 = -0.70544*t81;
  t90 = t88 + t89;
  t372 = Cos(var1[12]);
  t373 = -1.*t372;
  t374 = 1. + t373;
  t377 = Sin(var1[12]);
  t365 = t83*t86;
  t366 = t90*t93;
  t381 = -0.07769774964800001*t374;
  t392 = -0.0004284921280000001*t374;
  t376 = -0.005481192614*t374;
  t403 = 0.077936*t377;
  t400 = -0.996943*t377;
  t382 = 0.005498*t377;
  t408 = 0.005481192614*t374;
  t378 = -0.077936*t377;
  t422 = 0.07769774964800001*t374;
  t389 = -0.005498*t377;
  t411 = 0.0004284921280000001*t374;
  t393 = 0.996943*t377;
  t98 = -0.02159*t97;
  t100 = -1.11344*t99;
  t101 = t98 + t100;
  t106 = -1.11344*t97;
  t107 = 0.02159*t99;
  t108 = t106 + t107;
  t113 = -1.*t99*t104;
  t114 = t95*t111;
  t115 = t113 + t114;
  t117 = t95*t104;
  t118 = t99*t111;
  t119 = t117 + t118;
  t18 = -0.135*t17*t4;
  t313 = -0.02159*t312;
  t315 = -1.11344*t314;
  t316 = t313 + t315;
  t317 = t316*t232;
  t318 = -1.11344*t312;
  t319 = 0.02159*t314;
  t320 = t318 + t319;
  t321 = t320*t236;
  t322 = -1.*t314*t232;
  t323 = t310*t236;
  t324 = t322 + t323;
  t326 = t310*t232;
  t327 = t314*t236;
  t328 = t326 + t327;
  t21 = 0.135*t6*t19*t20;
  t32 = -1.*t24*t31;
  t36 = t6*t7*t35;
  t40 = -0.1305*t39;
  t51 = -1.*t43*t50;
  t58 = -1.*t54*t57;
  t69 = -1.*t65*t68;
  t76 = -1.*t72*t75;
  t87 = -1.*t83*t86;
  t94 = -1.*t90*t93;
  t105 = -1.*t101*t104;
  t112 = -1.*t108*t111;
  t116 = 1.11344*t115;
  t120 = 0.02159*t119;
  t462 = t143*t19;
  t463 = t126*t147*t7;
  t464 = t462 + t463;
  t466 = t128*t170*t7;
  t467 = t166*t464;
  t468 = t466 + t467;
  t470 = t128*t166*t7;
  t471 = -1.*t170*t464;
  t472 = t470 + t471;
  t474 = -1.*t194*t468;
  t475 = t190*t472;
  t476 = t474 + t475;
  t478 = t190*t468;
  t479 = t194*t472;
  t480 = t478 + t479;
  t482 = t222*t476;
  t483 = t218*t480;
  t484 = t482 + t483;
  t486 = t218*t476;
  t487 = -1.*t222*t480;
  t488 = t486 + t487;
  t505 = t19*t25;
  t506 = t7*t20*t29;
  t507 = t505 + t506;
  t510 = t44*t507;
  t511 = t15*t7*t48;
  t512 = t510 + t511;
  t514 = t15*t44*t7;
  t515 = -1.*t507*t48;
  t516 = t514 + t515;
  t518 = -1.*t63*t512;
  t519 = t59*t516;
  t520 = t518 + t519;
  t522 = t59*t512;
  t523 = t63*t516;
  t524 = t522 + t523;
  t526 = t81*t520;
  t527 = t77*t524;
  t528 = t526 + t527;
  t530 = t77*t520;
  t531 = -1.*t81*t524;
  t532 = t530 + t531;
  t550 = t128*t6;
  t551 = -1.*t19*t126*t4;
  t552 = t550 + t551;
  t546 = -1.*t6*t126;
  t547 = -1.*t128*t19*t4;
  t548 = t546 + t547;
  t555 = t147*t552;
  t556 = t143*t4*t7;
  t557 = t555 + t556;
  t563 = t170*t548;
  t564 = t166*t557;
  t565 = t563 + t564;
  t567 = t166*t548;
  t568 = -1.*t170*t557;
  t569 = t567 + t568;
  t571 = -1.*t194*t565;
  t572 = t190*t569;
  t573 = t571 + t572;
  t575 = t190*t565;
  t576 = t194*t569;
  t577 = t575 + t576;
  t579 = t222*t573;
  t580 = t218*t577;
  t581 = t579 + t580;
  t583 = t218*t573;
  t584 = -1.*t222*t577;
  t585 = t583 + t584;
  t596 = t6*t15;
  t597 = -1.*t19*t4*t20;
  t598 = t596 + t597;
  t605 = t25*t4*t7;
  t606 = t598*t29;
  t607 = t605 + t606;
  t609 = -1.*t19*t15*t4;
  t610 = -1.*t6*t20;
  t611 = t609 + t610;
  t613 = t44*t607;
  t614 = t611*t48;
  t615 = t613 + t614;
  t617 = t44*t611;
  t618 = -1.*t607*t48;
  t619 = t617 + t618;
  t621 = -1.*t63*t615;
  t622 = t59*t619;
  t623 = t621 + t622;
  t625 = t59*t615;
  t626 = t63*t619;
  t627 = t625 + t626;
  t629 = t81*t623;
  t630 = t77*t627;
  t631 = t629 + t630;
  t633 = t77*t623;
  t634 = -1.*t81*t627;
  t635 = t633 + t634;
  t5 = t3*t4;
  t9 = t6*t7*t8;
  t10 = t5 + t9;
  t646 = -1.*t126*t10;
  t647 = t136 + t646;
  t649 = -1.*t6*t3*t7;
  t650 = t4*t8;
  t651 = t649 + t650;
  t652 = t143*t651;
  t653 = t128*t10;
  t654 = t132 + t653;
  t655 = t147*t654;
  t656 = t652 + t655;
  t648 = t170*t647;
  t657 = t166*t656;
  t658 = t648 + t657;
  t660 = t166*t647;
  t661 = -1.*t170*t656;
  t662 = t660 + t661;
  t659 = -1.*t194*t658;
  t663 = t190*t662;
  t664 = t659 + t663;
  t666 = t190*t658;
  t667 = t194*t662;
  t668 = t666 + t667;
  t665 = t222*t664;
  t669 = t218*t668;
  t670 = t665 + t669;
  t672 = t218*t664;
  t673 = -1.*t222*t668;
  t674 = t672 + t673;
  t498 = 0.135*t7*t20;
  t499 = -1.*t7*t20*t31;
  t500 = -1.*t19*t35;
  t501 = t25*t7*t20;
  t502 = -1.*t19*t29;
  t503 = t501 + t502;
  t504 = -0.1305*t503;
  t508 = -1.*t507*t50;
  t509 = -1.*t15*t7*t57;
  t513 = -1.*t65*t512;
  t517 = -1.*t72*t516;
  t521 = -1.*t83*t520;
  t525 = -1.*t90*t524;
  t529 = -1.*t101*t528;
  t533 = -1.*t108*t532;
  t534 = -1.*t99*t528;
  t535 = t95*t532;
  t536 = t534 + t535;
  t537 = 1.11344*t536;
  t538 = t95*t528;
  t539 = t99*t532;
  t540 = t538 + t539;
  t541 = 0.02159*t540;
  t454 = t19*t154;
  t455 = 0.135*t126*t7;
  t456 = t126*t149*t7;
  t458 = -1.*t19*t147;
  t459 = t143*t126*t7;
  t460 = t458 + t459;
  t457 = t128*t172*t7;
  t465 = t176*t464;
  t469 = t196*t468;
  t473 = t200*t472;
  t477 = t224*t476;
  t481 = t228*t480;
  t240 = 2.1934241414728571e-7*var1[20];
  t244 = -0.000033783761634830594*t243;
  t248 = t245 + t247;
  t249 = -0.021877537552*t248;
  t252 = t250 + t251;
  t253 = -0.6934341012630001*t252;
  t254 = t240 + t244 + t249 + t253;
  t256 = -1.7147089040178687e-8*var1[20];
  t257 = -0.021744644052735636*t243;
  t259 = t245 + t258;
  t260 = -0.005534467322*t259;
  t263 = t261 + t262;
  t264 = -0.6934341012630001*t263;
  t265 = t256 + t257 + t260 + t264;
  t267 = -1.2096424700126054e-9*var1[20];
  t268 = -0.6934128581485427*t243;
  t270 = t261 + t269;
  t271 = -0.021877537552*t270;
  t273 = t250 + t272;
  t274 = -0.005534467322*t273;
  t275 = t267 + t268 + t271 + t274;
  t278 = t277 + t272;
  t281 = t280 + t269;
  t283 = -0.999969365345*t243;
  t284 = 1. + t283;
  t288 = -0.006104248100000001*t243;
  t289 = 1. + t288;
  t292 = t291 + t247;
  t294 = t277 + t251;
  t298 = t291 + t258;
  t300 = -0.993925573253*t243;
  t301 = 1. + t300;
  t303 = t280 + t262;
  t485 = t316*t484;
  t489 = t320*t488;
  t490 = -1.*t314*t484;
  t491 = t310*t488;
  t492 = t490 + t491;
  t494 = t310*t484;
  t495 = t314*t488;
  t496 = t494 + t495;
  t689 = -0.0233*t19;
  t749 = -0.135*t7*t20;
  t750 = t7*t20*t31;
  t751 = t19*t35;
  t757 = t507*t50;
  t758 = t15*t7*t57;
  t764 = t65*t512;
  t765 = t72*t516;
  t371 = -2.1934241414728571e-7*var1[12];
  t375 = 0.000033783761634830594*t374;
  t379 = t376 + t378;
  t380 = -0.6934341012630001*t379;
  t383 = t381 + t382;
  t384 = -0.021877537552*t383;
  t385 = t371 + t375 + t380 + t384;
  t776 = t83*t520;
  t777 = t90*t524;
  t387 = -1.7147089040178687e-8*var1[12];
  t388 = -0.021744644052735636*t374;
  t390 = t381 + t389;
  t391 = 0.005534467322*t390;
  t394 = t392 + t393;
  t395 = -0.6934341012630001*t394;
  t396 = t387 + t388 + t391 + t395;
  t398 = -1.2096424700126054e-9*var1[12];
  t399 = -0.6934128581485427*t374;
  t401 = t392 + t400;
  t402 = -0.021877537552*t401;
  t404 = t376 + t403;
  t405 = 0.005534467322*t404;
  t406 = t398 + t399 + t402 + t405;
  t409 = t408 + t403;
  t412 = t411 + t400;
  t414 = -0.999969365345*t374;
  t415 = 1. + t414;
  t419 = -0.006104248100000001*t374;
  t420 = 1. + t419;
  t423 = t422 + t382;
  t425 = t408 + t378;
  t429 = t422 + t389;
  t431 = -0.993925573253*t374;
  t432 = 1. + t431;
  t434 = t411 + t393;
  p_output1[0]=t10;
  p_output1[1]=t3*t6*t7 - 1.*t4*t8;
  p_output1[2]=var1[7];
  p_output1[3]=t105 + t112 + t116 + t120 + t18 + t21 + t32 + t36 + t40 + t51 + t58 + t69 + t76 + t87 + t94 - 1.*var1[2] + 0.0288377642750394*(1.965608*(t127 + t131 - 0.1351*t134 + 0.01793*t138 + t140 + var1[2]) + 1.316608*(t127 + t131 - 0.0343*t138 + t150 + t155 - 0.049*t158 - 0.135*t162 + var1[2]) + 5.79228*(t127 + t131 + t150 + t155 - 0.17081*t162 + t173 + t177 - 0.04895*t181 - 0.14946*t185 + var1[2]) + 1.03008*(t127 + t131 + t150 + t155 - 0.132168*t162 + t173 + t177 + t197 + t201 - 0.255862*t204 - 0.007761*t208 + var1[2]) + 0.763*(t127 + t131 + t150 + t155 - 0.130288*t162 + t173 + t177 + t197 + t201 - 0.45406*t204 - 0.000421*t208 + var1[2]) + 1.03*(t127 + t131 + t150 + t155 - 0.127241*t162 + t173 + t177 + t197 + t201 + t225 + t229 - 0.004179*t232 - 0.826587*t236 + var1[2]) + 0.126*(t127 + t131 + t150 + t155 + t173 + t177 + t197 + t201 + t225 + t229 + t162*t254 + t232*t265 + t236*t275 - 0.617968*(t162*t278 + t232*t281 + t236*t284) - 0.126739*(t162*t289 + t232*t292 + t236*t294) + 0.01889*(t162*t298 + t232*t301 + t236*t303) + var1[2]) + 0.1498*(t127 + t131 + t150 + t155 - 0.13064*t162 + t173 + t177 + t197 + t201 + t225 + t229 + t317 + t321 - 1.11818*t324 + 0.00589*t328 + var1[2]) + 1.03*(-0.004179*t104 - 0.826587*t111 + t332 + t333 + t339 + t340 + t346 + t347 + t353 + t354 + t365 + t366 + 0.127241*t39 + var1[2]) + 0.1498*(t101*t104 + t108*t111 - 1.11818*t115 + 0.00589*t119 + t332 + t333 + t339 + t340 + t346 + t347 + t353 + t354 + t365 + t366 + 0.13064*t39 + var1[2]) + 0.126*(t332 + t333 + t339 + t340 + t346 + t347 + t353 + t354 + t365 + t366 + t385*t39 + t104*t396 + t111*t406 - 0.617968*(t39*t409 + t104*t412 + t111*t415) + 0.126739*(t39*t420 + t104*t423 + t111*t425) + 0.01889*(t39*t429 + t104*t432 + t111*t434) + var1[2]) + 1.316608*(t332 + t333 + t339 + t340 + 0.135*t39 - 0.049*t43 - 0.0343*t54 + var1[2]) + 1.965608*(t140 + 0.1351*t24 + t332 + t333 + 0.01793*t54 + var1[2]) + 10.33*(0.000346*t4 + 0.02841*t19*t6 - 0.05066*t6*t7 + var1[2]) + 5.79228*(t332 + t333 + t339 + t340 + t346 + t347 + 0.17081*t39 - 0.04895*t68 - 0.14946*t75 + var1[2]) + 1.03008*(t332 + t333 + t339 + t340 + t346 + t347 + t353 + t354 + 0.132168*t39 - 0.255862*t86 - 0.007761*t93 + var1[2]) + 0.763*(t332 + t333 + t339 + t340 + t346 + t347 + t353 + t354 + 0.130288*t39 - 0.45406*t86 - 0.000421*t93 + var1[2]));
  p_output1[4]=t105 + t112 + t116 + t120 + t127 + t131 + t150 + t155 - 0.1305*t162 + t173 + t177 + t18 + t197 + t201 + t21 + t225 + t229 + t317 + t32 + t321 - 1.11344*t324 - 0.02159*t328 + t36 + t40 + t51 + t58 + t69 + t76 + t87 + t94;
  p_output1[5]=t454 + t455 + t456 + t457 - 0.1305*t460 + t465 + t469 + t473 + t477 + t481 + t485 + t489 - 1.11344*t492 - 0.02159*t496 + t498 + t499 + t500 + t504 + t508 + t509 + t513 + t517 + t521 + t525 + t529 + t533 + t537 + t541;
  p_output1[6]=-0.135*t126*t19*t4 - 0.135*t19*t20*t4 + t172*t548 + t149*t552 + t176*t557 + t196*t565 + t200*t569 + t224*t573 + t228*t577 + t316*t581 + t320*t585 - 1.11344*(-1.*t314*t581 + t310*t585) - 0.02159*(t310*t581 + t314*t585) - 1.*t31*t598 - 0.135*t130*t6 - 0.135*t17*t6 - 1.*t50*t607 - 1.*t57*t611 - 1.*t101*t631 - 1.*t108*t635 - 1.*t615*t65 + t154*t4*t7 - 1.*t35*t4*t7 - 0.1305*(t143*t552 - 1.*t147*t4*t7) - 0.1305*(t25*t598 - 1.*t29*t4*t7) - 1.*t619*t72 - 1.*t623*t83 - 1.*t627*t90 + 1.11344*(t635*t95 - 1.*t631*t99) + 0.02159*(t631*t95 + t635*t99);
  p_output1[7]=var1[15];
  p_output1[8]=7.142857142857142*(0. - 0.10724599999999995*(-1.*t314*t670 + t310*t674) - 0.08999*(t310*t670 + t314*t674));
  p_output1[9]=t498 + t499 + t500 + t504 + t508 + t509 + t513 + t517 + t521 + t525 + t529 + t533 + t537 + t541 - 1.*var1[0] + 0.0288377642750394*(5.79228*(t454 + t455 + t456 + t457 - 0.17081*t460 + t465 - 0.04895*t468 - 0.14946*t472 + var1[0]) + 1.03008*(t454 + t455 + t456 + t457 - 0.132168*t460 + t465 + t469 + t473 - 0.255862*t476 - 0.007761*t480 + var1[0]) + 0.763*(t454 + t455 + t456 + t457 - 0.130288*t460 + t465 + t469 + t473 - 0.45406*t476 - 0.000421*t480 + var1[0]) + 1.03*(t454 + t455 + t456 + t457 - 0.127241*t460 + t465 + t469 + t473 + t477 + t481 - 0.004179*t484 - 0.826587*t488 + var1[0]) + 0.126*(t454 + t455 + t456 + t457 + t254*t460 + t465 + t469 + t473 + t477 + t481 + t265*t484 + t275*t488 - 0.617968*(t278*t460 + t281*t484 + t284*t488) - 0.126739*(t289*t460 + t292*t484 + t294*t488) + 0.01889*(t298*t460 + t301*t484 + t303*t488) + var1[0]) + 0.1498*(t454 + t455 + t456 + t457 - 0.13064*t460 + t465 + t469 + t473 + t477 + t481 + t485 + t489 - 1.11818*t492 + 0.00589*t496 + var1[0]) + 10.33*(0.05066*t19 + 0.02841*t7 + var1[0]) + 1.316608*(t454 + t455 + t456 - 0.135*t460 - 0.049*t464 - 0.0343*t128*t7 + var1[0]) + 1.965608*(t689 - 0.0001*t126*t7 + 0.01793*t128*t7 + var1[0]) + 1.965608*(t689 + 0.01793*t15*t7 + 0.0001*t20*t7 + var1[0]) + 1.316608*(0.135*t503 - 0.049*t507 - 0.0343*t15*t7 + t749 + t750 + t751 + var1[0]) + 5.79228*(0.17081*t503 - 0.04895*t512 - 0.14946*t516 + t749 + t750 + t751 + t757 + t758 + var1[0]) + 1.03008*(0.132168*t503 - 0.255862*t520 - 0.007761*t524 + t749 + t750 + t751 + t757 + t758 + t764 + t765 + var1[0]) + 0.763*(0.130288*t503 - 0.45406*t520 - 0.000421*t524 + t749 + t750 + t751 + t757 + t758 + t764 + t765 + var1[0]) + 1.03*(0.127241*t503 - 0.004179*t528 - 0.826587*t532 + t749 + t750 + t751 + t757 + t758 + t764 + t765 + t776 + t777 + var1[0]) + 0.126*(t385*t503 + t396*t528 + t406*t532 - 0.617968*(t409*t503 + t412*t528 + t415*t532) + 0.126739*(t420*t503 + t423*t528 + t425*t532) + 0.01889*(t429*t503 + t432*t528 + t434*t532) + t749 + t750 + t751 + t757 + t758 + t764 + t765 + t776 + t777 + var1[0]) + 0.1498*(0.13064*t503 + t101*t528 + t108*t532 - 1.11818*t536 + 0.00589*t540 + t749 + t750 + t751 + t757 + t758 + t764 + t765 + t776 + t777 + var1[0]));
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

void yaLeftStance_SLIP_with_xcom_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




