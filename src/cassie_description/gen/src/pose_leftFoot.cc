/*
 * Automatically Generated from Mathematica.
 * Sun 7 Nov 2021 14:25:55 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "pose_leftFoot.hh"
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
  double t19;
  double t25;
  double t27;
  double t30;
  double t35;
  double t41;
  double t98;
  double t99;
  double t101;
  double t104;
  double t81;
  double t82;
  double t92;
  double t115;
  double t127;
  double t131;
  double t132;
  double t136;
  double t143;
  double t144;
  double t145;
  double t153;
  double t157;
  double t165;
  double t172;
  double t175;
  double t177;
  double t183;
  double t188;
  double t189;
  double t191;
  double t210;
  double t212;
  double t213;
  double t217;
  double t218;
  double t221;
  double t224;
  double t229;
  double t230;
  double t233;
  double t246;
  double t250;
  double t251;
  double t254;
  double t255;
  double t256;
  double t264;
  double t270;
  double t271;
  double t274;
  double t291;
  double t293;
  double t301;
  double t319;
  double t326;
  double t32;
  double t37;
  double t39;
  double t47;
  double t55;
  double t56;
  double t330;
  double t332;
  double t335;
  double t103;
  double t105;
  double t111;
  double t119;
  double t121;
  double t124;
  double t134;
  double t137;
  double t141;
  double t344;
  double t346;
  double t348;
  double t352;
  double t353;
  double t355;
  double t148;
  double t149;
  double t152;
  double t182;
  double t184;
  double t185;
  double t361;
  double t365;
  double t366;
  double t373;
  double t374;
  double t375;
  double t195;
  double t205;
  double t206;
  double t222;
  double t227;
  double t228;
  double t377;
  double t378;
  double t379;
  double t381;
  double t382;
  double t386;
  double t239;
  double t240;
  double t242;
  double t261;
  double t268;
  double t269;
  double t392;
  double t394;
  double t396;
  double t404;
  double t405;
  double t407;
  double t280;
  double t288;
  double t290;
  double t409;
  double t410;
  double t413;
  double t415;
  double t417;
  double t419;
  double t322;
  double t323;
  double t452;
  double t454;
  double t455;
  double t466;
  double t469;
  double t474;
  double t482;
  double t485;
  double t489;
  double t492;
  double t494;
  double t508;
  double t513;
  double t515;
  double t517;
  double t523;
  double t524;
  double t526;
  double t530;
  double t531;
  double t532;
  double t536;
  double t539;
  double t540;
  double t553;
  double t554;
  double t556;
  double t562;
  double t565;
  double t567;
  double t570;
  double t577;
  double t579;
  double t583;
  double t585;
  double t593;
  double t596;
  double t598;
  double t607;
  double t461;
  double t462;
  double t464;
  double t303;
  double t305;
  double t306;
  double t309;
  double t312;
  double t313;
  double t423;
  double t426;
  double t431;
  double t441;
  double t442;
  double t443;
  double t339;
  double t341;
  double t342;
  double t611;
  double t613;
  double t615;
  double t657;
  double t658;
  double t659;
  double t672;
  double t71;
  double t72;
  double t73;
  t6 = Sin(var1[4]);
  t19 = Sin(var1[6]);
  t25 = Cos(var1[7]);
  t27 = -1.*t25;
  t30 = 1. + t27;
  t35 = Sin(var1[7]);
  t41 = Cos(var1[4]);
  t98 = Cos(var1[8]);
  t99 = -1.*t98;
  t101 = 1. + t99;
  t104 = Sin(var1[8]);
  t81 = t41*t25;
  t82 = t6*t19*t35;
  t92 = t81 + t82;
  t115 = Cos(var1[6]);
  t127 = Cos(var1[9]);
  t131 = -1.*t127;
  t132 = 1. + t131;
  t136 = Sin(var1[9]);
  t143 = t98*t92;
  t144 = t115*t6*t104;
  t145 = t143 + t144;
  t153 = t115*t98*t6;
  t157 = -1.*t92*t104;
  t165 = t153 + t157;
  t172 = Cos(var1[10]);
  t175 = -1.*t172;
  t177 = 1. + t175;
  t183 = Sin(var1[10]);
  t188 = -1.*t136*t145;
  t189 = t127*t165;
  t191 = t188 + t189;
  t210 = t127*t145;
  t212 = t136*t165;
  t213 = t210 + t212;
  t217 = Cos(var1[11]);
  t218 = -1.*t217;
  t221 = 1. + t218;
  t224 = Sin(var1[11]);
  t229 = t183*t191;
  t230 = t172*t213;
  t233 = t229 + t230;
  t246 = t172*t191;
  t250 = -1.*t183*t213;
  t251 = t246 + t250;
  t254 = Cos(var1[13]);
  t255 = -1.*t254;
  t256 = 1. + t255;
  t264 = Sin(var1[13]);
  t270 = -1.*t224*t233;
  t271 = t217*t251;
  t274 = t270 + t271;
  t291 = t217*t233;
  t293 = t224*t251;
  t301 = t291 + t293;
  t319 = Cos(var1[3]);
  t326 = Sin(var1[3]);
  t32 = 0.135*t30;
  t37 = 0.049*t35;
  t39 = t32 + t37;
  t47 = -0.049*t30;
  t55 = 0.135*t35;
  t56 = t47 + t55;
  t330 = t319*t115;
  t332 = -1.*t41*t326*t19;
  t335 = t330 + t332;
  t103 = -0.049*t101;
  t105 = -0.09*t104;
  t111 = t103 + t105;
  t119 = -0.09*t101;
  t121 = 0.049*t104;
  t124 = t119 + t121;
  t134 = -0.049*t132;
  t137 = -0.21*t136;
  t141 = t134 + t137;
  t344 = t25*t326*t6;
  t346 = t335*t35;
  t348 = t344 + t346;
  t352 = -1.*t41*t115*t326;
  t353 = -1.*t319*t19;
  t355 = t352 + t353;
  t148 = -0.21*t132;
  t149 = 0.049*t136;
  t152 = t148 + t149;
  t182 = -0.27068*t177;
  t184 = 0.00159*t183;
  t185 = t182 + t184;
  t361 = t98*t348;
  t365 = t355*t104;
  t366 = t361 + t365;
  t373 = t98*t355;
  t374 = -1.*t348*t104;
  t375 = t373 + t374;
  t195 = -0.00159*t177;
  t205 = -0.27068*t183;
  t206 = t195 + t205;
  t222 = 0.01841*t221;
  t227 = -0.70544*t224;
  t228 = t222 + t227;
  t377 = -1.*t136*t366;
  t378 = t127*t375;
  t379 = t377 + t378;
  t381 = t127*t366;
  t382 = t136*t375;
  t386 = t381 + t382;
  t239 = -0.70544*t221;
  t240 = -0.01841*t224;
  t242 = t239 + t240;
  t261 = -1.11344*t256;
  t268 = 0.02159*t264;
  t269 = t261 + t268;
  t392 = t183*t379;
  t394 = t172*t386;
  t396 = t392 + t394;
  t404 = t172*t379;
  t405 = -1.*t183*t386;
  t407 = t404 + t405;
  t280 = -0.02159*t256;
  t288 = -1.11344*t264;
  t290 = t280 + t288;
  t409 = -1.*t224*t396;
  t410 = t217*t407;
  t413 = t409 + t410;
  t415 = t217*t396;
  t417 = t224*t407;
  t419 = t415 + t417;
  t322 = -1.*t115;
  t323 = 1. + t322;
  t452 = t115*t326;
  t454 = t319*t41*t19;
  t455 = t452 + t454;
  t466 = -1.*t319*t25*t6;
  t469 = t455*t35;
  t474 = t466 + t469;
  t482 = t319*t41*t115;
  t485 = -1.*t326*t19;
  t489 = t482 + t485;
  t492 = t98*t474;
  t494 = t489*t104;
  t508 = t492 + t494;
  t513 = t98*t489;
  t515 = -1.*t474*t104;
  t517 = t513 + t515;
  t523 = -1.*t136*t508;
  t524 = t127*t517;
  t526 = t523 + t524;
  t530 = t127*t508;
  t531 = t136*t517;
  t532 = t530 + t531;
  t536 = t183*t526;
  t539 = t172*t532;
  t540 = t536 + t539;
  t553 = t172*t526;
  t554 = -1.*t183*t532;
  t556 = t553 + t554;
  t562 = -1.*t224*t540;
  t565 = t217*t556;
  t567 = t562 + t565;
  t570 = t217*t540;
  t577 = t224*t556;
  t579 = t570 + t577;
  t583 = t264*t567;
  t585 = t254*t579;
  t593 = t583 + t585;
  t596 = t254*t567;
  t598 = -1.*t264*t579;
  t607 = t596 + t598;
  t461 = t25*t455;
  t462 = t319*t6*t35;
  t464 = t461 + t462;
  t303 = t264*t274;
  t305 = t254*t301;
  t306 = t303 + t305;
  t309 = t254*t274;
  t312 = -1.*t264*t301;
  t313 = t309 + t312;
  t423 = t264*t413;
  t426 = t254*t419;
  t431 = t423 + t426;
  t441 = t254*t413;
  t442 = -1.*t264*t419;
  t443 = t441 + t442;
  t339 = t25*t335;
  t341 = -1.*t326*t6*t35;
  t342 = t339 + t341;
  t611 = -0.766044*t593;
  t613 = 0.642788*t607;
  t615 = t611 + t613;
  t657 = Power(t464,2);
  t658 = Power(t615,2);
  t659 = t657 + t658;
  t672 = 1/Sqrt(t659);
  t71 = t25*t6*t19;
  t72 = -1.*t41*t35;
  t73 = t71 + t72;
  p_output1[0]=t141*t145 + t152*t165 + t185*t191 + t206*t213 + t228*t233 + t242*t251 + t269*t274 + t290*t301 + 0.0306*t306 - 1.13106*t313 + t41*t56 + t115*t124*t6 - 0.135*t19*t6 + t19*t39*t6 + 0.1305*t73 + t111*t92 + var1[0];
  p_output1[1]=0.135*t319*t323 + 0.1305*t342 + t111*t348 + t124*t355 + t141*t366 + t152*t375 + t185*t379 + t206*t386 + t335*t39 + t228*t396 + t242*t407 + 0.135*t19*t326*t41 + t269*t413 + t290*t419 + 0.0306*t431 - 1.13106*t443 + t326*t56*t6 + var1[1];
  p_output1[2]=0.135*t323*t326 - 0.135*t19*t319*t41 + t39*t455 + 0.1305*t464 + t111*t474 + t124*t489 + t141*t508 + t152*t517 + t185*t526 + t206*t532 + t228*t540 + t242*t556 + t269*t567 + t290*t579 + 0.0306*t593 - 1.*t319*t56*t6 - 1.13106*t607 + var1[2];
  p_output1[3]=ArcTan(t615,t464);
  p_output1[4]=ArcTan(Sqrt(Power(0.642788*t306 + 0.766044*t313,2) + Power(0.642788*t431 + 0.766044*t443,2)),-0.642788*t593 - 0.766044*t607);
  p_output1[5]=ArcTan(-1.*(-0.766044*t431 + 0.642788*t443)*t464*t672 + t342*t615*t672,(-0.766044*t306 + 0.642788*t313)*t464*t672 - 1.*t615*t672*t73);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 6, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#endif // MATLAB_MEX_FILE

namespace SymFunction
{

void pose_leftFoot_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




