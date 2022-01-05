/*
 * Automatically Generated from Mathematica.
 * Sun 7 Nov 2021 14:26:29 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "p_achilles_constraint.hh"
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
  double t34;
  double t21;
  double t36;
  double t38;
  double t39;
  double t52;
  double t121;
  double t130;
  double t131;
  double t142;
  double t157;
  double t168;
  double t169;
  double t106;
  double t112;
  double t113;
  double t184;
  double t192;
  double t193;
  double t206;
  double t217;
  double t218;
  double t241;
  double t223;
  double t225;
  double t229;
  double t250;
  double t326;
  double t237;
  double t367;
  double t24;
  double t27;
  double t44;
  double t53;
  double t54;
  double t69;
  double t73;
  double t78;
  double t135;
  double t146;
  double t147;
  double t170;
  double t178;
  double t180;
  double t199;
  double t200;
  double t429;
  double t430;
  double t432;
  double t253;
  double t437;
  double t442;
  double t445;
  double t272;
  double t274;
  double t283;
  double t452;
  double t455;
  double t290;
  double t295;
  double t297;
  double t313;
  double t320;
  double t327;
  double t331;
  double t332;
  double t338;
  double t339;
  double t340;
  double t343;
  double t346;
  double t349;
  double t354;
  double t355;
  double t364;
  double t366;
  double t376;
  double t378;
  double t380;
  double t383;
  double t385;
  double t392;
  double t581;
  double t565;
  double t587;
  double t594;
  double t595;
  double t597;
  double t634;
  double t635;
  double t637;
  double t641;
  double t669;
  double t670;
  double t672;
  double t624;
  double t627;
  double t630;
  double t687;
  double t688;
  double t696;
  double t699;
  double t700;
  double t708;
  double t727;
  double t730;
  double t716;
  double t720;
  double t721;
  double t750;
  double t725;
  double t836;
  double t567;
  double t571;
  double t596;
  double t600;
  double t606;
  double t610;
  double t616;
  double t618;
  double t640;
  double t643;
  double t647;
  double t676;
  double t678;
  double t679;
  double t697;
  double t698;
  double t877;
  double t878;
  double t880;
  double t731;
  double t895;
  double t896;
  double t898;
  double t745;
  double t747;
  double t752;
  double t756;
  double t757;
  double t758;
  double t760;
  double t762;
  double t768;
  double t901;
  double t902;
  double t771;
  double t772;
  double t778;
  double t788;
  double t789;
  double t798;
  double t820;
  double t822;
  double t823;
  double t824;
  double t827;
  double t833;
  double t840;
  double t842;
  double t843;
  double t847;
  double t852;
  double t860;
  t34 = Sin(var1[9]);
  t21 = Cos(var1[9]);
  t36 = Cos(var1[10]);
  t38 = -1.*t36;
  t39 = 1. + t38;
  t52 = Sin(var1[10]);
  t121 = Cos(var1[11]);
  t130 = -1.*t121;
  t131 = 1. + t130;
  t142 = Sin(var1[11]);
  t157 = t21*t36;
  t168 = -1.*t34*t52;
  t169 = t157 + t168;
  t106 = t36*t34;
  t112 = t21*t52;
  t113 = t106 + t112;
  t184 = Cos(var1[12]);
  t192 = -1.*t184;
  t193 = 1. + t192;
  t206 = t121*t169;
  t217 = -1.*t113*t142;
  t218 = t206 + t217;
  t241 = Sin(var1[12]);
  t223 = t121*t113;
  t225 = t169*t142;
  t229 = t223 + t225;
  t250 = -0.996943*t241;
  t326 = -0.0004284921280000001*t193;
  t237 = 0.0004284921280000001*t193;
  t367 = 0.996943*t241;
  t24 = -1.*t21;
  t27 = 1. + t24;
  t44 = -0.00159*t39;
  t53 = -0.27068*t52;
  t54 = t44 + t53;
  t69 = -0.27068*t39;
  t73 = 0.00159*t52;
  t78 = t69 + t73;
  t135 = 0.01841*t131;
  t146 = -0.70544*t142;
  t147 = t135 + t146;
  t170 = -0.70544*t131;
  t178 = -0.01841*t142;
  t180 = t170 + t178;
  t199 = -0.999969365345*t193;
  t200 = 1. + t199;
  t429 = -1.*t36*t34;
  t430 = -1.*t21*t52;
  t432 = t429 + t430;
  t253 = t237 + t250;
  t437 = t121*t432;
  t442 = -1.*t169*t142;
  t445 = t437 + t442;
  t272 = 0.005481192614*t193;
  t274 = -0.077936*t241;
  t283 = t272 + t274;
  t452 = t432*t142;
  t455 = t206 + t452;
  t290 = 0.07769774964800001*t193;
  t295 = 0.005498*t241;
  t297 = t290 + t295;
  t313 = -1.2096424700126054e-9*var1[12];
  t320 = -0.6934128581485427*t193;
  t327 = t326 + t250;
  t331 = -0.021877537552*t327;
  t332 = -0.005481192614*t193;
  t338 = 0.077936*t241;
  t339 = t332 + t338;
  t340 = 0.005534467322*t339;
  t343 = t313 + t320 + t331 + t340;
  t346 = -1.7147089040178687e-8*var1[12];
  t349 = -0.021744644052735636*t193;
  t354 = -0.07769774964800001*t193;
  t355 = -0.005498*t241;
  t364 = t354 + t355;
  t366 = 0.005534467322*t364;
  t376 = t326 + t367;
  t378 = -0.6934341012630001*t376;
  t380 = t346 + t349 + t366 + t378;
  t383 = -0.993925573253*t193;
  t385 = 1. + t383;
  t392 = t237 + t367;
  t581 = Sin(var1[17]);
  t565 = Cos(var1[17]);
  t587 = Cos(var1[18]);
  t594 = -1.*t587;
  t595 = 1. + t594;
  t597 = Sin(var1[18]);
  t634 = Cos(var1[19]);
  t635 = -1.*t634;
  t637 = 1. + t635;
  t641 = Sin(var1[19]);
  t669 = t565*t587;
  t670 = -1.*t581*t597;
  t672 = t669 + t670;
  t624 = t587*t581;
  t627 = t565*t597;
  t630 = t624 + t627;
  t687 = Cos(var1[20]);
  t688 = -1.*t687;
  t696 = 1. + t688;
  t699 = t634*t672;
  t700 = -1.*t630*t641;
  t708 = t699 + t700;
  t727 = Sin(var1[20]);
  t730 = -0.996943*t727;
  t716 = t634*t630;
  t720 = t672*t641;
  t721 = t716 + t720;
  t750 = -0.0004284921280000001*t696;
  t725 = 0.0004284921280000001*t696;
  t836 = 0.996943*t727;
  t567 = -1.*t565;
  t571 = 1. + t567;
  t596 = -0.00159*t595;
  t600 = -0.27068*t597;
  t606 = t596 + t600;
  t610 = -0.27068*t595;
  t616 = 0.00159*t597;
  t618 = t610 + t616;
  t640 = 0.01841*t637;
  t643 = -0.70544*t641;
  t647 = t640 + t643;
  t676 = -0.70544*t637;
  t678 = -0.01841*t641;
  t679 = t676 + t678;
  t697 = -0.999969365345*t696;
  t698 = 1. + t697;
  t877 = -1.*t587*t581;
  t878 = -1.*t565*t597;
  t880 = t877 + t878;
  t731 = t725 + t730;
  t895 = t634*t880;
  t896 = -1.*t672*t641;
  t898 = t895 + t896;
  t745 = -1.2096424700126054e-9*var1[20];
  t747 = -0.6934128581485427*t696;
  t752 = t750 + t730;
  t756 = -0.021877537552*t752;
  t757 = 0.005481192614*t696;
  t758 = -0.077936*t727;
  t760 = t757 + t758;
  t762 = -0.005534467322*t760;
  t768 = t745 + t747 + t756 + t762;
  t901 = t880*t641;
  t902 = t699 + t901;
  t771 = -0.07769774964800001*t696;
  t772 = -0.005498*t727;
  t778 = t771 + t772;
  t788 = -0.005481192614*t696;
  t789 = 0.077936*t727;
  t798 = t788 + t789;
  t820 = -1.7147089040178687e-8*var1[20];
  t822 = -0.021744644052735636*t696;
  t823 = 0.07769774964800001*t696;
  t824 = 0.005498*t727;
  t827 = t823 + t824;
  t833 = -0.005534467322*t827;
  t840 = t750 + t836;
  t842 = -0.6934341012630001*t840;
  t843 = t820 + t822 + t833 + t842;
  t847 = -0.993925573253*t696;
  t852 = 1. + t847;
  t860 = t725 + t836;
  p_output1[0]=-0.251201 + Power(-0.09 - 1.*t113*t147 - 1.*t169*t180 + 0.588518*(t200*t218 + t229*t253) + 0.21*t27 - 0.124503*(t218*t283 + t229*t297) - 0.049*t34 - 1.*t218*t343 - 1.*t229*t380 - 0.045407*(t229*t385 + t218*t392) - 1.*t34*t54 - 1.*t21*t78,2) + Power(-0.049 - 1.*t147*t169 + 0.049*t27 + 0.21*t34 - 1.*t180*t432 - 1.*t343*t445 - 1.*t380*t455 + 0.588518*(t200*t445 + t253*t455) - 0.124503*(t283*t445 + t297*t455) - 0.045407*(t392*t445 + t385*t455) - 1.*t21*t54 + t34*t78,2) + Power(0.09 - 0.124503*(1. - 0.006104248100000001*t193) - 0.000033783761634830594*t193 + 0.6934341012630001*(t274 + t332) + 0.588518*(t272 + t338) + 0.021877537552*(t295 + t354) - 0.045407*(t290 + t355) + 2.1934241414728571e-7*var1[12],2);
  p_output1[1]=-0.251201 + Power(-0.09 + 0.21*t571 - 0.049*t581 - 1.*t581*t606 - 1.*t565*t618 - 1.*t630*t647 - 1.*t672*t679 + 0.588518*(t698*t708 + t721*t731) - 1.*t708*t768 + 0.124503*(t721*t778 + t708*t798) - 1.*t721*t843 - 0.045407*(t721*t852 + t708*t860),2) + Power(-0.049 + 0.049*t571 + 0.21*t581 - 1.*t565*t606 + t581*t618 - 1.*t647*t672 - 1.*t679*t880 - 1.*t768*t898 - 1.*t843*t902 + 0.588518*(t698*t898 + t731*t902) + 0.124503*(t798*t898 + t778*t902) - 0.045407*(t860*t898 + t852*t902),2) + Power(-0.09 + 0.124503*(1. - 0.006104248100000001*t696) + 0.000033783761634830594*t696 + 0.588518*(t758 + t788) + 0.6934341012630001*(t757 + t789) + 0.021877537552*(t772 + t823) - 0.045407*(t771 + t824) - 2.1934241414728571e-7*var1[20],2);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 2, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#endif // MATLAB_MEX_FILE

namespace SymFunction
{

void p_achilles_constraint_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




