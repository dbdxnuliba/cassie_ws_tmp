/*
 * Automatically Generated from Mathematica.
 * Sun 7 Nov 2021 14:27:40 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "p_rightToe_constraint.hh"
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
  double t15;
  double t24;
  double t28;
  double t29;
  double t44;
  double t80;
  double t90;
  double t92;
  double t104;
  double t19;
  double t116;
  double t118;
  double t144;
  double t154;
  double t156;
  double t157;
  double t166;
  double t175;
  double t176;
  double t181;
  double t223;
  double t225;
  double t229;
  double t237;
  double t238;
  double t240;
  double t251;
  double t262;
  double t265;
  double t268;
  double t276;
  double t280;
  double t287;
  double t290;
  double t292;
  double t296;
  double t300;
  double t306;
  double t307;
  double t309;
  double t324;
  double t327;
  double t331;
  double t335;
  double t337;
  double t340;
  double t365;
  double t374;
  double t376;
  double t378;
  double t389;
  double t402;
  double t404;
  double t408;
  double t409;
  double t413;
  double t418;
  double t426;
  double t429;
  double t431;
  double t450;
  double t451;
  double t452;
  double t83;
  double t87;
  double t42;
  double t60;
  double t75;
  double t490;
  double t94;
  double t95;
  double t97;
  double t101;
  double t498;
  double t108;
  double t113;
  double t115;
  double t523;
  double t526;
  double t527;
  double t158;
  double t167;
  double t168;
  double t497;
  double t501;
  double t502;
  double t532;
  double t533;
  double t536;
  double t212;
  double t218;
  double t219;
  double t243;
  double t258;
  double t261;
  double t545;
  double t546;
  double t549;
  double t584;
  double t585;
  double t586;
  double t271;
  double t272;
  double t274;
  double t298;
  double t303;
  double t304;
  double t596;
  double t618;
  double t623;
  double t627;
  double t628;
  double t632;
  double t316;
  double t320;
  double t321;
  double t347;
  double t366;
  double t367;
  double t642;
  double t652;
  double t655;
  double t664;
  double t666;
  double t670;
  double t382;
  double t384;
  double t388;
  double t414;
  double t419;
  double t420;
  double t675;
  double t676;
  double t677;
  double t682;
  double t684;
  double t694;
  double t435;
  double t436;
  double t447;
  double t699;
  double t702;
  double t703;
  double t713;
  double t714;
  double t716;
  double t763;
  double t764;
  double t767;
  double t751;
  double t754;
  double t755;
  double t777;
  double t778;
  double t779;
  double t785;
  double t786;
  double t793;
  double t805;
  double t806;
  double t808;
  double t815;
  double t818;
  double t825;
  double t830;
  double t832;
  double t833;
  double t840;
  double t846;
  double t850;
  double t853;
  double t855;
  double t856;
  double t867;
  double t869;
  double t874;
  double t877;
  double t879;
  double t880;
  double t887;
  double t891;
  double t892;
  double t908;
  double t909;
  double t910;
  t15 = Cos(var1[4]);
  t24 = Cos(var1[15]);
  t28 = -1.*t24;
  t29 = 1. + t28;
  t44 = Sin(var1[15]);
  t80 = Sin(var1[14]);
  t90 = Sin(var1[4]);
  t92 = Cos(var1[14]);
  t104 = Sin(var1[5]);
  t19 = Cos(var1[5]);
  t116 = t80*t90;
  t118 = -1.*t92*t15*t104;
  t144 = t116 + t118;
  t154 = Cos(var1[16]);
  t156 = -1.*t154;
  t157 = 1. + t156;
  t166 = Sin(var1[16]);
  t175 = t92*t90;
  t176 = t15*t80*t104;
  t181 = t175 + t176;
  t223 = t24*t15*t19;
  t225 = t44*t144;
  t229 = t223 + t225;
  t237 = Cos(var1[17]);
  t238 = -1.*t237;
  t240 = 1. + t238;
  t251 = Sin(var1[17]);
  t262 = t166*t181;
  t265 = t154*t229;
  t268 = t262 + t265;
  t276 = t154*t181;
  t280 = -1.*t166*t229;
  t287 = t276 + t280;
  t290 = Cos(var1[18]);
  t292 = -1.*t290;
  t296 = 1. + t292;
  t300 = Sin(var1[18]);
  t306 = -1.*t251*t268;
  t307 = t237*t287;
  t309 = t306 + t307;
  t324 = t237*t268;
  t327 = t251*t287;
  t331 = t324 + t327;
  t335 = Cos(var1[19]);
  t337 = -1.*t335;
  t340 = 1. + t337;
  t365 = Sin(var1[19]);
  t374 = t300*t309;
  t376 = t290*t331;
  t378 = t374 + t376;
  t389 = t290*t309;
  t402 = -1.*t300*t331;
  t404 = t389 + t402;
  t408 = Cos(var1[21]);
  t409 = -1.*t408;
  t413 = 1. + t409;
  t418 = Sin(var1[21]);
  t426 = -1.*t365*t378;
  t429 = t335*t404;
  t431 = t426 + t429;
  t450 = t335*t378;
  t451 = t365*t404;
  t452 = t450 + t451;
  t83 = 0.135*t80;
  t87 = 0. + t83;
  t42 = -0.049*t29;
  t60 = -0.135*t44;
  t75 = 0. + t42 + t60;
  t490 = Sin(var1[3]);
  t94 = -1.*t92;
  t95 = 1. + t94;
  t97 = -0.135*t95;
  t101 = 0. + t97;
  t498 = Cos(var1[3]);
  t108 = -0.135*t29;
  t113 = 0.049*t44;
  t115 = 0. + t108 + t113;
  t523 = t498*t19;
  t526 = -1.*t490*t90*t104;
  t527 = t523 + t526;
  t158 = -0.09*t157;
  t167 = 0.049*t166;
  t168 = 0. + t158 + t167;
  t497 = t19*t490*t90;
  t501 = t498*t104;
  t502 = t497 + t501;
  t532 = -1.*t15*t80*t490;
  t533 = t92*t527;
  t536 = t532 + t533;
  t212 = -0.049*t157;
  t218 = -0.09*t166;
  t219 = 0. + t212 + t218;
  t243 = -0.049*t240;
  t258 = -0.21*t251;
  t261 = 0. + t243 + t258;
  t545 = -1.*t92*t15*t490;
  t546 = -1.*t80*t527;
  t549 = t545 + t546;
  t584 = t24*t502;
  t585 = t44*t536;
  t586 = t584 + t585;
  t271 = -0.21*t240;
  t272 = 0.049*t251;
  t274 = 0. + t271 + t272;
  t298 = -0.27068*t296;
  t303 = 0.00159*t300;
  t304 = 0. + t298 + t303;
  t596 = t166*t549;
  t618 = t154*t586;
  t623 = t596 + t618;
  t627 = t154*t549;
  t628 = -1.*t166*t586;
  t632 = t627 + t628;
  t316 = -0.00159*t296;
  t320 = -0.27068*t300;
  t321 = 0. + t316 + t320;
  t347 = 0.01841*t340;
  t366 = -0.70544*t365;
  t367 = 0. + t347 + t366;
  t642 = -1.*t251*t623;
  t652 = t237*t632;
  t655 = t642 + t652;
  t664 = t237*t623;
  t666 = t251*t632;
  t670 = t664 + t666;
  t382 = -0.70544*t340;
  t384 = -0.01841*t365;
  t388 = 0. + t382 + t384;
  t414 = -1.11344*t413;
  t419 = 0.02159*t418;
  t420 = 0. + t414 + t419;
  t675 = t300*t655;
  t676 = t290*t670;
  t677 = t675 + t676;
  t682 = t290*t655;
  t684 = -1.*t300*t670;
  t694 = t682 + t684;
  t435 = -0.02159*t413;
  t436 = -1.11344*t418;
  t447 = 0. + t435 + t436;
  t699 = -1.*t365*t677;
  t702 = t335*t694;
  t703 = t699 + t702;
  t713 = t335*t677;
  t714 = t365*t694;
  t716 = t713 + t714;
  t763 = t19*t490;
  t764 = t498*t90*t104;
  t767 = t763 + t764;
  t751 = -1.*t498*t19*t90;
  t754 = t490*t104;
  t755 = t751 + t754;
  t777 = t498*t15*t80;
  t778 = t92*t767;
  t779 = t777 + t778;
  t785 = t92*t498*t15;
  t786 = -1.*t80*t767;
  t793 = t785 + t786;
  t805 = t24*t755;
  t806 = t44*t779;
  t808 = t805 + t806;
  t815 = t166*t793;
  t818 = t154*t808;
  t825 = t815 + t818;
  t830 = t154*t793;
  t832 = -1.*t166*t808;
  t833 = t830 + t832;
  t840 = -1.*t251*t825;
  t846 = t237*t833;
  t850 = t840 + t846;
  t853 = t237*t825;
  t855 = t251*t833;
  t856 = t853 + t855;
  t867 = t300*t850;
  t869 = t290*t856;
  t874 = t867 + t869;
  t877 = t290*t850;
  t879 = -1.*t300*t856;
  t880 = t877 + t879;
  t887 = -1.*t365*t874;
  t891 = t335*t880;
  t892 = t887 + t891;
  t908 = t335*t874;
  t909 = t365*t880;
  t910 = t908 + t909;
  p_output1[0]=0. + t115*t144 - 1.*t101*t104*t15 + t168*t181 + t219*t229 + t261*t268 + t274*t287 + t304*t309 + t321*t331 + t367*t378 + t388*t404 + t420*t431 - 0.1305*(t144*t24 - 1.*t15*t19*t44) + t447*t452 + 0.075595*(t418*t431 + t408*t452) - 1.077437*(t408*t431 - 1.*t418*t452) + t15*t19*t75 + t87*t90 + var1[0];
  p_output1[1]=0. + t101*t527 + t115*t536 - 0.1305*(-1.*t44*t502 + t24*t536) + t168*t549 + t219*t586 + t261*t623 + t274*t632 + t304*t655 + t321*t670 + t367*t677 + t388*t694 + t420*t703 + t447*t716 + 0.075595*(t418*t703 + t408*t716) - 1.077437*(t408*t703 - 1.*t418*t716) + t502*t75 - 1.*t15*t490*t87 + var1[1];
  p_output1[2]=0. + t75*t755 + t101*t767 + t115*t779 - 0.1305*(-1.*t44*t755 + t24*t779) + t168*t793 + t219*t808 + t261*t825 + t274*t833 + t304*t850 + t321*t856 + t15*t498*t87 + t367*t874 + t388*t880 + t420*t892 + t447*t910 + 0.075595*(t418*t892 + t408*t910) - 1.077437*(t408*t892 - 1.*t418*t910) + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#endif // MATLAB_MEX_FILE

namespace SymFunction
{

void p_rightToe_constraint_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




