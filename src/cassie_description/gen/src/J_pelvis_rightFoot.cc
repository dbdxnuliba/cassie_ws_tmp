/*
 * Automatically Generated from Mathematica.
 * Thu 23 Dec 2021 16:09:28 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "J_pelvis_rightFoot.hh"
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
  double t10;
  double t23;
  double t29;
  double t39;
  double t40;
  double t108;
  double t125;
  double t138;
  double t150;
  double t182;
  double t183;
  double t185;
  double t195;
  double t201;
  double t207;
  double t210;
  double t214;
  double t223;
  double t231;
  double t234;
  double t238;
  double t246;
  double t247;
  double t248;
  double t251;
  double t254;
  double t255;
  double t257;
  double t260;
  double t261;
  double t262;
  double t267;
  double t268;
  double t271;
  double t275;
  double t276;
  double t277;
  double t279;
  double t283;
  double t284;
  double t287;
  double t295;
  double t296;
  double t297;
  double t316;
  double t320;
  double t321;
  double t144;
  double t145;
  double t148;
  double t166;
  double t170;
  double t192;
  double t198;
  double t199;
  double t202;
  double t203;
  double t204;
  double t242;
  double t243;
  double t244;
  double t332;
  double t333;
  double t335;
  double t215;
  double t226;
  double t230;
  double t264;
  double t265;
  double t266;
  double t339;
  double t341;
  double t343;
  double t345;
  double t347;
  double t348;
  double t256;
  double t258;
  double t259;
  double t291;
  double t292;
  double t293;
  double t350;
  double t351;
  double t352;
  double t354;
  double t355;
  double t356;
  double t278;
  double t280;
  double t281;
  double t361;
  double t362;
  double t364;
  double t370;
  double t373;
  double t375;
  double t401;
  double t404;
  double t407;
  double t391;
  double t394;
  double t398;
  double t414;
  double t415;
  double t416;
  double t421;
  double t422;
  double t424;
  double t428;
  double t429;
  double t430;
  double t432;
  double t433;
  double t434;
  double t436;
  double t437;
  double t438;
  double t443;
  double t444;
  double t445;
  double t476;
  double t477;
  double t478;
  double t488;
  double t489;
  double t490;
  double t492;
  double t493;
  double t496;
  double t498;
  double t502;
  double t503;
  double t507;
  double t508;
  double t510;
  double t471;
  double t473;
  double t474;
  double t465;
  double t467;
  double t469;
  double t524;
  double t525;
  double t526;
  double t539;
  double t541;
  double t542;
  double t550;
  double t551;
  double t553;
  double t555;
  double t556;
  double t557;
  double t559;
  double t560;
  double t561;
  double t563;
  double t564;
  double t565;
  double t585;
  double t586;
  double t587;
  double t594;
  double t595;
  double t597;
  double t606;
  double t607;
  double t608;
  double t611;
  double t612;
  double t613;
  double t615;
  double t617;
  double t618;
  double t622;
  double t623;
  double t624;
  double t644;
  double t647;
  double t649;
  double t652;
  double t653;
  double t655;
  double t657;
  double t659;
  double t660;
  double t664;
  double t665;
  double t666;
  double t668;
  double t669;
  double t670;
  double t672;
  double t673;
  double t675;
  double t678;
  double t679;
  double t680;
  double t636;
  double t637;
  double t640;
  double t641;
  double t643;
  double t702;
  double t705;
  double t706;
  double t708;
  double t709;
  double t710;
  double t713;
  double t714;
  double t717;
  double t721;
  double t722;
  double t723;
  double t726;
  double t727;
  double t729;
  double t733;
  double t734;
  double t735;
  double t737;
  double t738;
  double t739;
  double t752;
  double t753;
  double t756;
  double t758;
  double t759;
  double t760;
  double t763;
  double t764;
  double t767;
  double t771;
  double t772;
  double t773;
  double t776;
  double t777;
  double t779;
  double t783;
  double t784;
  double t785;
  double t787;
  double t788;
  double t789;
  double t806;
  double t807;
  double t811;
  double t819;
  double t820;
  double t824;
  double t825;
  double t827;
  double t828;
  double t829;
  double t831;
  double t832;
  double t833;
  double t802;
  double t803;
  double t805;
  double t815;
  double t816;
  double t856;
  double t858;
  double t859;
  double t863;
  double t864;
  double t866;
  double t867;
  double t869;
  double t870;
  double t871;
  double t873;
  double t874;
  double t876;
  double t895;
  double t896;
  double t897;
  double t900;
  double t901;
  double t903;
  double t904;
  double t909;
  double t912;
  double t913;
  double t916;
  double t917;
  double t919;
  double t936;
  double t937;
  double t938;
  double t935;
  double t939;
  double t940;
  double t944;
  double t948;
  double t932;
  double t933;
  double t934;
  double t942;
  double t943;
  double t972;
  double t973;
  double t974;
  double t969;
  double t975;
  double t976;
  double t978;
  double t979;
  double t992;
  double t993;
  double t994;
  double t991;
  double t995;
  double t996;
  double t998;
  double t999;
  t10 = Cos(var1[4]);
  t23 = Cos(var1[6]);
  t29 = Sin(var1[3]);
  t39 = Cos(var1[3]);
  t40 = Sin(var1[6]);
  t108 = Cos(var1[14]);
  t125 = Sin(var1[4]);
  t138 = Cos(var1[15]);
  t150 = Sin(var1[15]);
  t182 = Cos(var1[16]);
  t183 = -1.*t182;
  t185 = 1. + t183;
  t195 = Sin(var1[16]);
  t201 = Sin(var1[14]);
  t207 = Cos(var1[17]);
  t210 = -1.*t207;
  t214 = 1. + t210;
  t223 = Sin(var1[17]);
  t231 = t108*t182*t150*t125;
  t234 = -1.*t201*t195*t125;
  t238 = t231 + t234;
  t246 = -1.*t182*t201*t125;
  t247 = -1.*t108*t150*t195*t125;
  t248 = t246 + t247;
  t251 = Cos(var1[19]);
  t254 = -1.*t251;
  t255 = 1. + t254;
  t257 = Sin(var1[19]);
  t260 = -1.*t223*t238;
  t261 = t207*t248;
  t262 = t260 + t261;
  t267 = t207*t238;
  t268 = t223*t248;
  t271 = t267 + t268;
  t275 = Cos(var1[21]);
  t276 = -1.*t275;
  t277 = 1. + t276;
  t279 = Sin(var1[21]);
  t283 = t257*t262;
  t284 = t251*t271;
  t287 = t283 + t284;
  t295 = t251*t262;
  t296 = -1.*t257*t271;
  t297 = t295 + t296;
  t316 = -1.*t39*t201;
  t320 = -1.*t108*t10*t29;
  t321 = t316 + t320;
  t144 = -1.*t138;
  t145 = 1. + t144;
  t148 = -0.135*t145;
  t166 = 0.049*t150;
  t170 = t148 + t166;
  t192 = -0.049*t185;
  t198 = -0.09*t195;
  t199 = t192 + t198;
  t202 = -0.09*t185;
  t203 = 0.049*t195;
  t204 = t202 + t203;
  t242 = -0.21*t214;
  t243 = 0.049*t223;
  t244 = t242 + t243;
  t332 = -1.*t108*t39;
  t333 = t10*t201*t29;
  t335 = t332 + t333;
  t215 = -0.049*t214;
  t226 = -0.21*t223;
  t230 = t215 + t226;
  t264 = 0.01841*t255;
  t265 = -0.70544*t257;
  t266 = t264 + t265;
  t339 = -1.*t150*t195*t321;
  t341 = t182*t335;
  t343 = t339 + t341;
  t345 = t182*t150*t321;
  t347 = t195*t335;
  t348 = t345 + t347;
  t256 = -0.70544*t255;
  t258 = -0.01841*t257;
  t259 = t256 + t258;
  t291 = -1.11344*t277;
  t292 = 0.02159*t279;
  t293 = t291 + t292;
  t350 = t223*t343;
  t351 = t207*t348;
  t352 = t350 + t351;
  t354 = t207*t343;
  t355 = -1.*t223*t348;
  t356 = t354 + t355;
  t278 = -0.02159*t277;
  t280 = -1.11344*t279;
  t281 = t278 + t280;
  t361 = -1.*t257*t352;
  t362 = t251*t356;
  t364 = t361 + t362;
  t370 = t251*t352;
  t373 = t257*t356;
  t375 = t370 + t373;
  t401 = t108*t39*t10;
  t404 = -1.*t201*t29;
  t407 = t401 + t404;
  t391 = -1.*t39*t10*t201;
  t394 = -1.*t108*t29;
  t398 = t391 + t394;
  t414 = t195*t398;
  t415 = t182*t150*t407;
  t416 = t414 + t415;
  t421 = t182*t398;
  t422 = -1.*t150*t195*t407;
  t424 = t421 + t422;
  t428 = -1.*t223*t416;
  t429 = t207*t424;
  t430 = t428 + t429;
  t432 = t207*t416;
  t433 = t223*t424;
  t434 = t432 + t433;
  t436 = t257*t430;
  t437 = t251*t434;
  t438 = t436 + t437;
  t443 = t251*t430;
  t444 = -1.*t257*t434;
  t445 = t443 + t444;
  t476 = -1.*t10*t150;
  t477 = t138*t201*t125;
  t478 = t476 + t477;
  t488 = -1.*t207*t195*t478;
  t489 = -1.*t182*t223*t478;
  t490 = t488 + t489;
  t492 = t182*t207*t478;
  t493 = -1.*t195*t223*t478;
  t496 = t492 + t493;
  t498 = t257*t490;
  t502 = t251*t496;
  t503 = t498 + t502;
  t507 = t251*t490;
  t508 = -1.*t257*t496;
  t510 = t507 + t508;
  t471 = 0.049*t138;
  t473 = -0.135*t150;
  t474 = t471 + t473;
  t465 = -0.135*t138;
  t467 = -0.049*t150;
  t469 = t465 + t467;
  t524 = t108*t39;
  t525 = -1.*t10*t201*t29;
  t526 = t524 + t525;
  t539 = t138*t526;
  t541 = -1.*t150*t29*t125;
  t542 = t539 + t541;
  t550 = -1.*t207*t195*t542;
  t551 = -1.*t182*t223*t542;
  t553 = t550 + t551;
  t555 = t182*t207*t542;
  t556 = -1.*t195*t223*t542;
  t557 = t555 + t556;
  t559 = t257*t553;
  t560 = t251*t557;
  t561 = t559 + t560;
  t563 = t251*t553;
  t564 = -1.*t257*t557;
  t565 = t563 + t564;
  t585 = t39*t10*t201;
  t586 = t108*t29;
  t587 = t585 + t586;
  t594 = t138*t587;
  t595 = t39*t150*t125;
  t597 = t594 + t595;
  t606 = -1.*t207*t195*t597;
  t607 = -1.*t182*t223*t597;
  t608 = t606 + t607;
  t611 = t182*t207*t597;
  t612 = -1.*t195*t223*t597;
  t613 = t611 + t612;
  t615 = t257*t608;
  t617 = t251*t613;
  t618 = t615 + t617;
  t622 = t251*t608;
  t623 = -1.*t257*t613;
  t624 = t622 + t623;
  t644 = t138*t10;
  t647 = t201*t150*t125;
  t649 = t644 + t647;
  t652 = -1.*t108*t195*t125;
  t653 = -1.*t182*t649;
  t655 = t652 + t653;
  t657 = t108*t182*t125;
  t659 = -1.*t195*t649;
  t660 = t657 + t659;
  t664 = t223*t655;
  t665 = t207*t660;
  t666 = t664 + t665;
  t668 = t207*t655;
  t669 = -1.*t223*t660;
  t670 = t668 + t669;
  t672 = -1.*t257*t666;
  t673 = t251*t670;
  t675 = t672 + t673;
  t678 = t251*t666;
  t679 = t257*t670;
  t680 = t678 + t679;
  t636 = 0.049*t182;
  t637 = t636 + t198;
  t640 = -0.09*t182;
  t641 = -0.049*t195;
  t643 = t640 + t641;
  t702 = t150*t526;
  t705 = t138*t29*t125;
  t706 = t702 + t705;
  t708 = -1.*t195*t321;
  t709 = -1.*t182*t706;
  t710 = t708 + t709;
  t713 = t182*t321;
  t714 = -1.*t195*t706;
  t717 = t713 + t714;
  t721 = t223*t710;
  t722 = t207*t717;
  t723 = t721 + t722;
  t726 = t207*t710;
  t727 = -1.*t223*t717;
  t729 = t726 + t727;
  t733 = -1.*t257*t723;
  t734 = t251*t729;
  t735 = t733 + t734;
  t737 = t251*t723;
  t738 = t257*t729;
  t739 = t737 + t738;
  t752 = t150*t587;
  t753 = -1.*t138*t39*t125;
  t756 = t752 + t753;
  t758 = -1.*t195*t407;
  t759 = -1.*t182*t756;
  t760 = t758 + t759;
  t763 = t182*t407;
  t764 = -1.*t195*t756;
  t767 = t763 + t764;
  t771 = t223*t760;
  t772 = t207*t767;
  t773 = t771 + t772;
  t776 = t207*t760;
  t777 = -1.*t223*t767;
  t779 = t776 + t777;
  t783 = -1.*t257*t773;
  t784 = t251*t779;
  t785 = t783 + t784;
  t787 = t251*t773;
  t788 = t257*t779;
  t789 = t787 + t788;
  t806 = t108*t195*t125;
  t807 = t182*t649;
  t811 = t806 + t807;
  t819 = -1.*t223*t811;
  t820 = t819 + t665;
  t824 = -1.*t207*t811;
  t825 = t824 + t669;
  t827 = -1.*t257*t820;
  t828 = t251*t825;
  t829 = t827 + t828;
  t831 = t251*t820;
  t832 = t257*t825;
  t833 = t831 + t832;
  t802 = -0.21*t207;
  t803 = -0.049*t223;
  t805 = t802 + t803;
  t815 = 0.049*t207;
  t816 = t815 + t226;
  t856 = t195*t321;
  t858 = t182*t706;
  t859 = t856 + t858;
  t863 = -1.*t223*t859;
  t864 = t863 + t722;
  t866 = -1.*t207*t859;
  t867 = t866 + t727;
  t869 = -1.*t257*t864;
  t870 = t251*t867;
  t871 = t869 + t870;
  t873 = t251*t864;
  t874 = t257*t867;
  t876 = t873 + t874;
  t895 = t195*t407;
  t896 = t182*t756;
  t897 = t895 + t896;
  t900 = -1.*t223*t897;
  t901 = t900 + t772;
  t903 = -1.*t207*t897;
  t904 = t903 + t777;
  t909 = -1.*t257*t901;
  t912 = t251*t904;
  t913 = t909 + t912;
  t916 = t251*t901;
  t917 = t257*t904;
  t919 = t916 + t917;
  t936 = t207*t811;
  t937 = t223*t660;
  t938 = t936 + t937;
  t935 = t257*t820;
  t939 = t251*t938;
  t940 = t935 + t939;
  t944 = -1.*t257*t938;
  t948 = t831 + t944;
  t932 = -1.11344*t275;
  t933 = -0.02159*t279;
  t934 = t932 + t933;
  t942 = 0.02159*t275;
  t943 = t942 + t280;
  t972 = t207*t859;
  t973 = t223*t717;
  t974 = t972 + t973;
  t969 = t257*t864;
  t975 = t251*t974;
  t976 = t969 + t975;
  t978 = -1.*t257*t974;
  t979 = t873 + t978;
  t992 = t207*t897;
  t993 = t223*t767;
  t994 = t992 + t993;
  t991 = t257*t901;
  t995 = t251*t994;
  t996 = t991 + t995;
  t998 = -1.*t257*t994;
  t999 = t916 + t998;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0.5*(0.135*t10*t23*t29 + 0.135*t39*t40 + 0.135*(-1.*t10*t23*t29 - 1.*t39*t40));
  p_output1[5]=0.5*(-0.135*t10*t23*t39 + 0.135*t29*t40 + 0.135*(t10*t23*t39 - 1.*t29*t40));
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
  p_output1[33]=0.5*(-0.27*t108*t125 + 0.261*t108*t125*t138 - 2.*t108*t125*t170 - 2.*t108*t125*t150*t199 + 2.*t125*t201*t204 - 2.*t230*t238 - 2.*t244*t248 - 2.*t259*t262 - 2.*t266*t271 - 2.*t281*t287 - 2.*t293*t297 + 2.22688*(-1.*t279*t287 + t275*t297) + 0.04318*(t275*t287 + t279*t297));
  p_output1[34]=0.5*(0.135*t10*t108*t29 - 0.135*t321 + 0.261*t138*t321 - 2.*t170*t321 - 2.*t150*t199*t321 - 2.*t204*t335 - 2.*t244*t343 - 2.*t230*t348 - 2.*t266*t352 - 2.*t259*t356 - 2.*t293*t364 - 2.*t281*t375 + 0.04318*(t279*t364 + t275*t375) + 2.22688*(t275*t364 - 1.*t279*t375) + 0.135*t201*t39);
  p_output1[35]=0.5*(0.135*t201*t29 - 0.135*t10*t108*t39 - 2.*t204*t398 - 0.135*t407 + 0.261*t138*t407 - 2.*t170*t407 - 2.*t150*t199*t407 - 2.*t230*t416 - 2.*t244*t424 - 2.*t259*t430 - 2.*t266*t434 - 2.*t281*t438 - 2.*t293*t445 + 2.22688*(-1.*t279*t438 + t275*t445) + 0.04318*(t275*t438 + t279*t445));
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=1.;
  p_output1[39]=0.5*(0.261*(-1.*t10*t138 - 1.*t125*t150*t201) - 2.*t10*t469 - 2.*t125*t201*t474 - 2.*t199*t478 - 2.*t182*t230*t478 + 2.*t195*t244*t478 - 2.*t259*t490 - 2.*t266*t496 - 2.*t281*t503 - 2.*t293*t510 + 2.22688*(-1.*t279*t503 + t275*t510) + 0.04318*(t275*t503 + t279*t510));
  p_output1[40]=0.5*(-2.*t125*t29*t469 - 2.*t474*t526 + 0.261*(-1.*t125*t138*t29 - 1.*t150*t526) - 2.*t199*t542 - 2.*t182*t230*t542 + 2.*t195*t244*t542 - 2.*t259*t553 - 2.*t266*t557 - 2.*t281*t561 - 2.*t293*t565 + 2.22688*(-1.*t279*t561 + t275*t565) + 0.04318*(t275*t561 + t279*t565));
  p_output1[41]=0.5*(2.*t125*t39*t469 - 2.*t474*t587 + 0.261*(t125*t138*t39 - 1.*t150*t587) - 2.*t199*t597 - 2.*t182*t230*t597 + 2.*t195*t244*t597 - 2.*t259*t608 - 2.*t266*t613 - 2.*t281*t618 - 2.*t293*t624 + 2.22688*(-1.*t279*t618 + t275*t624) + 0.04318*(t275*t618 + t279*t624));
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0.5*(-2.*t108*t125*t637 - 2.*t643*t649 - 2.*t244*t655 - 2.*t230*t660 - 2.*t266*t666 - 2.*t259*t670 - 2.*t293*t675 - 2.*t281*t680 + 0.04318*(t279*t675 + t275*t680) + 2.22688*(t275*t675 - 1.*t279*t680));
  p_output1[46]=0.5*(-2.*t321*t637 - 2.*t643*t706 - 2.*t244*t710 - 2.*t230*t717 - 2.*t266*t723 - 2.*t259*t729 - 2.*t293*t735 - 2.*t281*t739 + 0.04318*(t279*t735 + t275*t739) + 2.22688*(t275*t735 - 1.*t279*t739));
  p_output1[47]=0.5*(-2.*t407*t637 - 2.*t643*t756 - 2.*t244*t760 - 2.*t230*t767 - 2.*t266*t773 - 2.*t259*t779 - 2.*t293*t785 - 2.*t281*t789 + 0.04318*(t279*t785 + t275*t789) + 2.22688*(t275*t785 - 1.*t279*t789));
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0.5*(-2.*t805*t811 - 2.*t660*t816 - 2.*t266*t820 - 2.*t259*t825 - 2.*t293*t829 - 2.*t281*t833 + 0.04318*(t279*t829 + t275*t833) + 2.22688*(t275*t829 - 1.*t279*t833));
  p_output1[52]=0.5*(-2.*t717*t816 - 2.*t805*t859 - 2.*t266*t864 - 2.*t259*t867 - 2.*t293*t871 - 2.*t281*t876 + 0.04318*(t279*t871 + t275*t876) + 2.22688*(t275*t871 - 1.*t279*t876));
  p_output1[53]=0.5*(-2.*t767*t816 - 2.*t805*t897 - 2.*t266*t901 - 2.*t259*t904 - 2.*t293*t913 - 2.*t281*t919 + 0.04318*(t279*t913 + t275*t919) + 2.22688*(t275*t913 - 1.*t279*t919));
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0.5*(-2.*t934*t940 - 2.*t943*t948 + 0.04318*(-1.*t279*t940 + t275*t948) + 2.22688*(-1.*t275*t940 - 1.*t279*t948));
  p_output1[58]=0.5*(-2.*t934*t976 - 2.*t943*t979 + 0.04318*(-1.*t279*t976 + t275*t979) + 2.22688*(-1.*t275*t976 - 1.*t279*t979));
  p_output1[59]=0.5*(-2.*t934*t996 - 2.*t943*t999 + 0.04318*(-1.*t279*t996 + t275*t999) + 2.22688*(-1.*t275*t996 - 1.*t279*t999));
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

void J_pelvis_rightFoot_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




