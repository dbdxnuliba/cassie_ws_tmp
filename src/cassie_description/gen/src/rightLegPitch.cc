/*
 * Automatically Generated from Mathematica.
 * Sun 7 Nov 2021 14:28:01 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "rightLegPitch.hh"
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
  double t31;
  double t149;
  double t199;
  double t262;
  double t270;
  double t436;
  double t453;
  double t473;
  double t803;
  double t851;
  double t854;
  double t1009;
  double t1672;
  double t1330;
  double t1347;
  double t1371;
  double t1425;
  double t1519;
  double t1550;
  double t1551;
  double t2107;
  double t2112;
  double t2124;
  double t2228;
  double t2232;
  double t2242;
  double t2352;
  double t2509;
  double t2530;
  double t2397;
  double t2409;
  double t2413;
  double t2456;
  double t2473;
  double t2482;
  double t2534;
  double t2536;
  double t2537;
  double t2577;
  double t2587;
  double t2609;
  double t2613;
  double t2663;
  double t2685;
  double t2709;
  double t2782;
  double t2794;
  double t2804;
  double t2806;
  double t2853;
  double t2855;
  double t2868;
  double t2892;
  double t2893;
  double t2902;
  double t1815;
  double t1867;
  double t1905;
  double t932;
  double t1032;
  double t1087;
  double t1391;
  double t1437;
  double t1500;
  double t2012;
  double t2027;
  double t2098;
  double t2266;
  double t2394;
  double t2396;
  double t3301;
  double t3327;
  double t3339;
  double t2431;
  double t2441;
  double t2448;
  double t2549;
  double t2584;
  double t2585;
  double t3352;
  double t3356;
  double t3361;
  double t3457;
  double t3509;
  double t3515;
  double t2621;
  double t2633;
  double t2645;
  double t2805;
  double t2849;
  double t2850;
  double t3561;
  double t3572;
  double t3576;
  double t3590;
  double t3604;
  double t3631;
  double t2874;
  double t2888;
  double t2891;
  double t3682;
  double t3690;
  double t3710;
  double t3750;
  double t3751;
  double t3755;
  t31 = Cos(var1[3]);
  t149 = Cos(var1[4]);
  t199 = Sin(var1[14]);
  t262 = t31*t149*t199;
  t270 = Cos(var1[14]);
  t436 = Sin(var1[3]);
  t453 = t270*t436;
  t473 = t262 + t453;
  t803 = Cos(var1[15]);
  t851 = -1.*t803;
  t854 = 1. + t851;
  t1009 = Sin(var1[15]);
  t1672 = Sin(var1[4]);
  t1330 = Cos(var1[16]);
  t1347 = -1.*t1330;
  t1371 = 1. + t1347;
  t1425 = Sin(var1[16]);
  t1519 = t270*t31*t149;
  t1550 = -1.*t199*t436;
  t1551 = t1519 + t1550;
  t2107 = t1009*t473;
  t2112 = -1.*t803*t31*t1672;
  t2124 = t2107 + t2112;
  t2228 = Cos(var1[17]);
  t2232 = -1.*t2228;
  t2242 = 1. + t2232;
  t2352 = Sin(var1[17]);
  t2509 = -1.*var1[17];
  t2530 = 0.226893 + t2509;
  t2397 = t1425*t1551;
  t2409 = t1330*t2124;
  t2413 = t2397 + t2409;
  t2456 = t1330*t1551;
  t2473 = -1.*t1425*t2124;
  t2482 = t2456 + t2473;
  t2534 = Cos(t2530);
  t2536 = -1.*t2534;
  t2537 = 1. + t2536;
  t2577 = Sin(t2530);
  t2587 = -1.*t2352*t2413;
  t2609 = t2228*t2482;
  t2613 = t2587 + t2609;
  t2663 = t2228*t2413;
  t2685 = t2352*t2482;
  t2709 = t2663 + t2685;
  t2782 = Cos(var1[21]);
  t2794 = -1.*t2782;
  t2804 = 1. + t2794;
  t2806 = Sin(var1[21]);
  t2853 = t2577*t2613;
  t2855 = t2534*t2709;
  t2868 = t2853 + t2855;
  t2892 = t2534*t2613;
  t2893 = -1.*t2577*t2709;
  t2902 = t2892 + t2893;
  t1815 = -0.049*t854;
  t1867 = -0.135*t1009;
  t1905 = t1815 + t1867;
  t932 = -0.135*t854;
  t1032 = 0.049*t1009;
  t1087 = t932 + t1032;
  t1391 = -0.09*t1371;
  t1437 = 0.049*t1425;
  t1500 = t1391 + t1437;
  t2012 = -0.049*t1371;
  t2027 = -0.09*t1425;
  t2098 = t2012 + t2027;
  t2266 = -0.049*t2242;
  t2394 = -0.21*t2352;
  t2396 = t2266 + t2394;
  t3301 = t803*t149;
  t3327 = t199*t1009*t1672;
  t3339 = t3301 + t3327;
  t2431 = -0.21*t2242;
  t2441 = 0.049*t2352;
  t2448 = t2431 + t2441;
  t2549 = -0.70544*t2537;
  t2584 = -0.01841*t2577;
  t2585 = t2549 + t2584;
  t3352 = t270*t1425*t1672;
  t3356 = t1330*t3339;
  t3361 = t3352 + t3356;
  t3457 = t270*t1330*t1672;
  t3509 = -1.*t1425*t3339;
  t3515 = t3457 + t3509;
  t2621 = 0.01841*t2537;
  t2633 = -0.70544*t2577;
  t2645 = t2621 + t2633;
  t2805 = -0.02159*t2804;
  t2849 = -1.11344*t2806;
  t2850 = t2805 + t2849;
  t3561 = -1.*t2352*t3361;
  t3572 = t2228*t3515;
  t3576 = t3561 + t3572;
  t3590 = t2228*t3361;
  t3604 = t2352*t3515;
  t3631 = t3590 + t3604;
  t2874 = -1.11344*t2804;
  t2888 = 0.02159*t2806;
  t2891 = t2874 + t2888;
  t3682 = t2577*t3576;
  t3690 = t2534*t3631;
  t3710 = t3682 + t3690;
  t3750 = t2534*t3576;
  t3751 = -1.*t2577*t3631;
  t3755 = t3750 + t3751;
  p_output1[0]=ArcTan(-1.*t1500*t1551 - 1.*t2098*t2124 - 1.*t2396*t2413 - 1.*t2448*t2482 - 1.*t2585*t2613 - 1.*t2645*t2709 - 1.*t2850*t2868 - 1.*t2891*t2902 + 1.11344*(-1.*t2806*t2868 + t2782*t2902) + 0.02159*(t2782*t2868 + t2806*t2902) + 0.049*t1672*t31 + t1672*t1905*t31 - 0.135*t473 - 1.*t1087*t473 + 0.1305*(t1009*t1672*t31 + t473*t803),0.049*t149 + t149*t1905 + 0.135*t1672*t199 + t1087*t1672*t199 + t1500*t1672*t270 + t2098*t3339 + t2396*t3361 + t2448*t3515 + t2585*t3576 + t2645*t3631 + t2850*t3710 + t2891*t3755 - 1.11344*(-1.*t2806*t3710 + t2782*t3755) - 0.02159*(t2782*t3710 + t2806*t3755) - 0.1305*(-1.*t1009*t149 + t1672*t199*t803));
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#endif // MATLAB_MEX_FILE

namespace SymFunction
{

void rightLegPitch_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




