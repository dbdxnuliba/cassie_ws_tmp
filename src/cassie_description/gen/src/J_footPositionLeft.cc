/*
 * Automatically Generated from Mathematica.
 * Sat 1 Jan 2022 14:49:00 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "J_footPositionLeft.hh"
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
  double t24;
  double t69;
  double t154;
  double t164;
  double t165;
  double t166;
  double t168;
  double t173;
  double t185;
  double t189;
  double t193;
  double t201;
  double t210;
  double t211;
  double t212;
  double t217;
  double t218;
  double t219;
  double t221;
  double t222;
  double t223;
  double t231;
  double t243;
  double t247;
  double t248;
  double t253;
  double t254;
  double t255;
  double t257;
  double t258;
  double t259;
  double t261;
  double t264;
  double t265;
  double t266;
  double t271;
  double t272;
  double t273;
  double t92;
  double t118;
  double t125;
  double t161;
  double t162;
  double t167;
  double t169;
  double t170;
  double t174;
  double t175;
  double t179;
  double t197;
  double t205;
  double t209;
  double t214;
  double t215;
  double t216;
  double t227;
  double t235;
  double t239;
  double t289;
  double t290;
  double t291;
  double t293;
  double t294;
  double t295;
  double t250;
  double t251;
  double t252;
  double t260;
  double t262;
  double t263;
  double t297;
  double t298;
  double t299;
  double t301;
  double t302;
  double t303;
  double t268;
  double t269;
  double t270;
  double t305;
  double t306;
  double t307;
  double t309;
  double t310;
  double t311;
  double t327;
  double t328;
  double t329;
  double t331;
  double t332;
  double t333;
  double t335;
  double t336;
  double t337;
  double t339;
  double t340;
  double t341;
  double t360;
  double t361;
  double t362;
  double t364;
  double t365;
  double t366;
  double t368;
  double t369;
  double t370;
  double t372;
  double t373;
  double t374;
  double t353;
  double t354;
  double t355;
  double t390;
  double t391;
  double t392;
  double t394;
  double t395;
  double t396;
  double t398;
  double t399;
  double t400;
  double t402;
  double t403;
  double t404;
  double t421;
  double t422;
  double t423;
  double t425;
  double t426;
  double t427;
  double t429;
  double t430;
  double t431;
  double t433;
  double t434;
  double t435;
  double t416;
  double t417;
  double t418;
  double t450;
  double t451;
  double t452;
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
  double t446;
  double t447;
  double t482;
  double t483;
  double t484;
  double t486;
  double t487;
  double t488;
  double t490;
  double t491;
  double t493;
  double t494;
  double t495;
  double t497;
  double t498;
  double t499;
  double t424;
  double t428;
  double t432;
  double t436;
  double t437;
  double t438;
  double t439;
  double t440;
  double t441;
  double t442;
  double t443;
  double t444;
  double t510;
  double t511;
  double t512;
  double t514;
  double t515;
  double t521;
  double t522;
  double t524;
  double t525;
  double t526;
  double t528;
  double t529;
  double t540;
  double t541;
  double t542;
  double t545;
  double t546;
  double t548;
  double t549;
  double t551;
  double t552;
  double t553;
  double t555;
  double t556;
  double t557;
  double t574;
  double t575;
  double t576;
  double t578;
  double t579;
  double t581;
  double t582;
  double t568;
  double t569;
  double t571;
  double t572;
  double t573;
  double t595;
  double t596;
  double t314;
  double t608;
  double t609;
  double t610;
  double t612;
  double t613;
  double t615;
  double t616;
  double t630;
  double t631;
  double t632;
  double t585;
  double t589;
  double t627;
  double t628;
  double t629;
  double t634;
  double t635;
  double t313;
  double t315;
  double t603;
  double t651;
  double t652;
  double t653;
  double t619;
  double t623;
  t24 = Sin(var1[0]);
  t69 = Cos(var1[1]);
  t154 = Sin(var1[1]);
  t164 = Cos(var1[2]);
  t165 = -1.*t164;
  t166 = 1. + t165;
  t168 = Sin(var1[2]);
  t173 = Cos(var1[0]);
  t185 = Cos(var1[3]);
  t189 = -1.*t185;
  t193 = 1. + t189;
  t201 = Sin(var1[3]);
  t210 = -1.*t164*t24*t154;
  t211 = -1.*t173*t168;
  t212 = t210 + t211;
  t217 = -1.*t173*t164;
  t218 = t24*t154*t168;
  t219 = t217 + t218;
  t221 = Cos(var1[5]);
  t222 = -1.*t221;
  t223 = 1. + t222;
  t231 = Sin(var1[5]);
  t243 = -1.*t201*t212;
  t247 = t185*t219;
  t248 = t243 + t247;
  t253 = t185*t212;
  t254 = t201*t219;
  t255 = t253 + t254;
  t257 = Cos(var1[6]);
  t258 = -1.*t257;
  t259 = 1. + t258;
  t261 = Sin(var1[6]);
  t264 = t231*t248;
  t265 = t221*t255;
  t266 = t264 + t265;
  t271 = t221*t248;
  t272 = -1.*t231*t255;
  t273 = t271 + t272;
  t92 = -1.*t69;
  t118 = 1. + t92;
  t125 = 0.135*t118;
  t161 = 0.049*t154;
  t162 = t125 + t161;
  t167 = -0.049*t166;
  t169 = -0.09*t168;
  t170 = t167 + t169;
  t174 = -0.09*t166;
  t175 = 0.049*t168;
  t179 = t174 + t175;
  t197 = -0.049*t193;
  t205 = -0.21*t201;
  t209 = t197 + t205;
  t214 = -0.21*t193;
  t215 = 0.049*t201;
  t216 = t214 + t215;
  t227 = -0.70544*t223;
  t235 = -0.01841*t231;
  t239 = t227 + t235;
  t289 = t173*t164*t154;
  t290 = -1.*t24*t168;
  t291 = t289 + t290;
  t293 = -1.*t164*t24;
  t294 = -1.*t173*t154*t168;
  t295 = t293 + t294;
  t250 = 0.01841*t223;
  t251 = -0.70544*t231;
  t252 = t250 + t251;
  t260 = -0.02159*t259;
  t262 = -1.11344*t261;
  t263 = t260 + t262;
  t297 = -1.*t201*t291;
  t298 = t185*t295;
  t299 = t297 + t298;
  t301 = t185*t291;
  t302 = t201*t295;
  t303 = t301 + t302;
  t268 = -1.11344*t259;
  t269 = 0.02159*t261;
  t270 = t268 + t269;
  t305 = t231*t299;
  t306 = t221*t303;
  t307 = t305 + t306;
  t309 = t221*t299;
  t310 = -1.*t231*t303;
  t311 = t309 + t310;
  t327 = t164*t201*t154;
  t328 = t185*t154*t168;
  t329 = t327 + t328;
  t331 = -1.*t185*t164*t154;
  t332 = t201*t154*t168;
  t333 = t331 + t332;
  t335 = t231*t329;
  t336 = t221*t333;
  t337 = t335 + t336;
  t339 = t221*t329;
  t340 = -1.*t231*t333;
  t341 = t339 + t340;
  t360 = -1.*t173*t69*t164*t201;
  t361 = -1.*t185*t173*t69*t168;
  t362 = t360 + t361;
  t364 = t185*t173*t69*t164;
  t365 = -1.*t173*t69*t201*t168;
  t366 = t364 + t365;
  t368 = t231*t362;
  t369 = t221*t366;
  t370 = t368 + t369;
  t372 = t221*t362;
  t373 = -1.*t231*t366;
  t374 = t372 + t373;
  t353 = 0.049*t69;
  t354 = 0.135*t154;
  t355 = t353 + t354;
  t390 = -1.*t69*t164*t201*t24;
  t391 = -1.*t185*t69*t24*t168;
  t392 = t390 + t391;
  t394 = t185*t69*t164*t24;
  t395 = -1.*t69*t201*t24*t168;
  t396 = t394 + t395;
  t398 = t231*t392;
  t399 = t221*t396;
  t400 = t398 + t399;
  t402 = t221*t392;
  t403 = -1.*t231*t396;
  t404 = t402 + t403;
  t421 = -1.*t69*t164*t201;
  t422 = -1.*t185*t69*t168;
  t423 = t421 + t422;
  t425 = -1.*t185*t69*t164;
  t426 = t69*t201*t168;
  t427 = t425 + t426;
  t429 = -1.*t231*t423;
  t430 = t221*t427;
  t431 = t429 + t430;
  t433 = t221*t423;
  t434 = t231*t427;
  t435 = t433 + t434;
  t416 = -0.09*t164;
  t417 = -0.049*t168;
  t418 = t416 + t417;
  t450 = -1.*t173*t164*t154;
  t451 = t24*t168;
  t452 = t450 + t451;
  t455 = t201*t452;
  t456 = t455 + t298;
  t458 = t185*t452;
  t459 = -1.*t201*t295;
  t460 = t458 + t459;
  t462 = -1.*t231*t456;
  t463 = t221*t460;
  t464 = t462 + t463;
  t466 = t221*t456;
  t467 = t231*t460;
  t468 = t466 + t467;
  t446 = 0.049*t164;
  t447 = t446 + t169;
  t482 = t173*t164;
  t483 = -1.*t24*t154*t168;
  t484 = t482 + t483;
  t486 = t201*t212;
  t487 = t185*t484;
  t488 = t486 + t487;
  t490 = -1.*t201*t484;
  t491 = t253 + t490;
  t493 = -1.*t231*t488;
  t494 = t221*t491;
  t495 = t493 + t494;
  t497 = t221*t488;
  t498 = t231*t491;
  t499 = t497 + t498;
  t424 = t252*t423;
  t428 = t239*t427;
  t432 = t270*t431;
  t436 = t263*t435;
  t437 = t261*t431;
  t438 = t257*t435;
  t439 = t437 + t438;
  t440 = 0.0306*t439;
  t441 = t257*t431;
  t442 = -1.*t261*t435;
  t443 = t441 + t442;
  t444 = -1.13106*t443;
  t510 = -0.21*t185;
  t511 = -0.049*t201;
  t512 = t510 + t511;
  t514 = 0.049*t185;
  t515 = t514 + t205;
  t521 = -1.*t185*t291;
  t522 = t521 + t459;
  t524 = -1.*t231*t299;
  t525 = t221*t522;
  t526 = t524 + t525;
  t528 = t231*t522;
  t529 = t309 + t528;
  t540 = t164*t24*t154;
  t541 = t173*t168;
  t542 = t540 + t541;
  t545 = -1.*t201*t542;
  t546 = t545 + t487;
  t548 = -1.*t185*t542;
  t549 = t548 + t490;
  t551 = -1.*t231*t546;
  t552 = t221*t549;
  t553 = t551 + t552;
  t555 = t221*t546;
  t556 = t231*t549;
  t557 = t555 + t556;
  t574 = t185*t69*t164;
  t575 = -1.*t69*t201*t168;
  t576 = t574 + t575;
  t578 = -1.*t221*t576;
  t579 = t429 + t578;
  t581 = -1.*t231*t576;
  t582 = t433 + t581;
  t568 = -0.01841*t221;
  t569 = t568 + t251;
  t571 = -0.70544*t221;
  t572 = 0.01841*t231;
  t573 = t571 + t572;
  t595 = -1.*t221*t303;
  t596 = t524 + t595;
  t314 = t257*t311;
  t608 = t185*t542;
  t609 = t201*t484;
  t610 = t608 + t609;
  t612 = -1.*t221*t610;
  t613 = t551 + t612;
  t615 = -1.*t231*t610;
  t616 = t555 + t615;
  t630 = t231*t423;
  t631 = t221*t576;
  t632 = t630 + t631;
  t585 = t257*t582;
  t589 = -1.*t261*t582;
  t627 = -1.11344*t257;
  t628 = -0.02159*t261;
  t629 = t627 + t628;
  t634 = 0.02159*t257;
  t635 = t634 + t262;
  t313 = -1.*t261*t307;
  t315 = t313 + t314;
  t603 = -1.*t261*t311;
  t651 = t231*t546;
  t652 = t221*t610;
  t653 = t651 + t652;
  t619 = t257*t616;
  t623 = -1.*t261*t616;
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
  p_output1[19]=-1.*t173*t179 + t209*t212 + t216*t219 + 0.135*t24 - 1.*t162*t24 - 1.*t154*t170*t24 + t239*t248 + t252*t255 + t263*t266 + t270*t273 - 1.13106*(-1.*t261*t266 + t257*t273) + 0.0306*(t257*t266 + t261*t273) - 0.1305*t24*t69;
  p_output1[20]=-0.135*t173 + t162*t173 + t154*t170*t173 - 1.*t179*t24 + t209*t291 + t216*t295 + t239*t299 + t252*t303 + t263*t307 + t270*t311 + 0.0306*(t257*t307 + t261*t311) - 1.13106*t315 + 0.1305*t173*t69;
  p_output1[21]=-0.049*t154 - 1.*t154*t170 - 1.*t154*t164*t209 + t154*t168*t216 + t239*t329 + t252*t333 + t263*t337 + t270*t341 - 1.13106*(-1.*t261*t337 + t257*t341) + 0.0306*(t257*t337 + t261*t341) + 0.0045*t69;
  p_output1[22]=-0.1305*t154*t173 + t173*t355 + t239*t362 + t252*t366 + t263*t370 + t270*t374 - 1.13106*(-1.*t261*t370 + t257*t374) + 0.0306*(t257*t370 + t261*t374) + t170*t173*t69 + t164*t173*t209*t69 - 1.*t168*t173*t216*t69;
  p_output1[23]=-0.1305*t154*t24 + t24*t355 + t239*t392 + t252*t396 + t263*t400 + t270*t404 - 1.13106*(-1.*t261*t400 + t257*t404) + 0.0306*(t257*t400 + t261*t404) + t170*t24*t69 + t164*t209*t24*t69 - 1.*t168*t216*t24*t69;
  p_output1[24]=t424 + t428 + t432 + t436 + t440 + t444 - 1.*t168*t209*t69 - 1.*t164*t216*t69 + t418*t69;
  p_output1[25]=t209*t295 + t154*t173*t418 - 1.*t24*t447 + t216*t452 + t252*t456 + t239*t460 + t270*t464 + t263*t468 + 0.0306*(t261*t464 + t257*t468) - 1.13106*(t257*t464 - 1.*t261*t468);
  p_output1[26]=t212*t216 + t154*t24*t418 + t173*t447 + t209*t484 + t252*t488 + t239*t491 + t270*t495 + t263*t499 + 0.0306*(t261*t495 + t257*t499) - 1.13106*(t257*t495 - 1.*t261*t499);
  p_output1[27]=t424 + t428 + t432 + t436 + t440 + t444 + t164*t512*t69 - 1.*t168*t515*t69;
  p_output1[28]=t252*t299 + t291*t512 + t295*t515 + t239*t522 + t270*t526 + t263*t529 + 0.0306*(t261*t526 + t257*t529) - 1.13106*(t257*t526 - 1.*t261*t529);
  p_output1[29]=t484*t515 + t512*t542 + t252*t546 + t239*t549 + t270*t553 + t263*t557 + 0.0306*(t261*t553 + t257*t557) - 1.13106*(t257*t553 - 1.*t261*t557);
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=t423*t569 + t573*t576 + t270*t579 + t263*t582 + 0.0306*(t261*t579 + t585) - 1.13106*(t257*t579 + t589);
  p_output1[34]=t263*t311 + t299*t569 + t303*t573 + t270*t596 + 0.0306*(t314 + t261*t596) - 1.13106*(t257*t596 + t603);
  p_output1[35]=t546*t569 + t573*t610 + t270*t613 + t263*t616 + 0.0306*(t261*t613 + t619) - 1.13106*(t257*t613 + t623);
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=t629*t632 - 1.13106*(t589 - 1.*t257*t632) + 0.0306*(t585 - 1.*t261*t632) + t582*t635;
  p_output1[40]=0.0306*t315 - 1.13106*(-1.*t257*t307 + t603) + t307*t629 + t311*t635;
  p_output1[41]=t616*t635 + t629*t653 - 1.13106*(t623 - 1.*t257*t653) + 0.0306*(t619 - 1.*t261*t653);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
  p_output1[60]=0;
  p_output1[61]=0;
  p_output1[62]=0;
  p_output1[63]=0;
  p_output1[64]=0;
  p_output1[65]=0;
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
    ( !(mrows == 14 && ncols == 1) && 
      !(mrows == 1 && ncols == 14))) 
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

void J_footPositionLeft_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




