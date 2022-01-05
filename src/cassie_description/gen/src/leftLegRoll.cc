/*
 * Automatically Generated from Mathematica.
 * Sun 7 Nov 2021 14:28:04 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "leftLegRoll.hh"
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
  double t26;
  double t72;
  double t98;
  double t125;
  double t126;
  double t145;
  double t148;
  double t155;
  double t45;
  double t160;
  double t181;
  double t193;
  double t211;
  double t317;
  double t359;
  double t370;
  double t387;
  double t305;
  double t308;
  double t314;
  double t467;
  double t475;
  double t504;
  double t531;
  double t533;
  double t535;
  double t552;
  double t696;
  double t700;
  double t567;
  double t570;
  double t572;
  double t634;
  double t663;
  double t665;
  double t703;
  double t708;
  double t709;
  double t730;
  double t774;
  double t775;
  double t781;
  double t830;
  double t842;
  double t848;
  double t872;
  double t878;
  double t931;
  double t944;
  double t964;
  double t965;
  double t967;
  double t976;
  double t977;
  double t979;
  double t1036;
  double t1037;
  double t1044;
  double t201;
  double t216;
  double t224;
  double t230;
  double t232;
  double t238;
  double t383;
  double t415;
  double t437;
  double t506;
  double t512;
  double t518;
  double t539;
  double t559;
  double t563;
  double t1104;
  double t1112;
  double t1115;
  double t1119;
  double t1120;
  double t1128;
  double t600;
  double t603;
  double t616;
  double t721;
  double t758;
  double t771;
  double t1146;
  double t1154;
  double t1161;
  double t1171;
  double t1184;
  double t1190;
  double t788;
  double t789;
  double t820;
  double t934;
  double t959;
  double t960;
  double t1197;
  double t1202;
  double t1206;
  double t1215;
  double t1236;
  double t1237;
  double t971;
  double t972;
  double t975;
  double t1242;
  double t1248;
  double t1254;
  double t1259;
  double t1265;
  double t1269;
  t26 = Cos(var1[3]);
  t72 = Cos(var1[6]);
  t98 = Sin(var1[3]);
  t125 = t72*t98;
  t126 = Cos(var1[4]);
  t145 = Sin(var1[6]);
  t148 = t26*t126*t145;
  t155 = t125 + t148;
  t45 = Sin(var1[4]);
  t160 = Cos(var1[7]);
  t181 = -1.*t160;
  t193 = 1. + t181;
  t211 = Sin(var1[7]);
  t317 = Cos(var1[8]);
  t359 = -1.*t317;
  t370 = 1. + t359;
  t387 = Sin(var1[8]);
  t305 = -1.*t26*t160*t45;
  t308 = t155*t211;
  t314 = t305 + t308;
  t467 = t26*t126*t72;
  t475 = -1.*t98*t145;
  t504 = t467 + t475;
  t531 = Cos(var1[9]);
  t533 = -1.*t531;
  t535 = 1. + t533;
  t552 = Sin(var1[9]);
  t696 = -1.*var1[9];
  t700 = 0.226893 + t696;
  t567 = t317*t314;
  t570 = t504*t387;
  t572 = t567 + t570;
  t634 = t317*t504;
  t663 = -1.*t314*t387;
  t665 = t634 + t663;
  t703 = Cos(t700);
  t708 = -1.*t703;
  t709 = 1. + t708;
  t730 = Sin(t700);
  t774 = -1.*t552*t572;
  t775 = t531*t665;
  t781 = t774 + t775;
  t830 = t531*t572;
  t842 = t552*t665;
  t848 = t830 + t842;
  t872 = Cos(var1[13]);
  t878 = -1.*t872;
  t931 = 1. + t878;
  t944 = Sin(var1[13]);
  t964 = t730*t781;
  t965 = t703*t848;
  t967 = t964 + t965;
  t976 = t703*t781;
  t977 = -1.*t730*t848;
  t979 = t976 + t977;
  t1036 = t26*t72;
  t1037 = -1.*t126*t98*t145;
  t1044 = t1036 + t1037;
  t201 = 0.135*t193;
  t216 = 0.049*t211;
  t224 = t201 + t216;
  t230 = -0.049*t193;
  t232 = 0.135*t211;
  t238 = t230 + t232;
  t383 = -0.049*t370;
  t415 = -0.09*t387;
  t437 = t383 + t415;
  t506 = -0.09*t370;
  t512 = 0.049*t387;
  t518 = t506 + t512;
  t539 = -0.049*t535;
  t559 = -0.21*t552;
  t563 = t539 + t559;
  t1104 = t160*t98*t45;
  t1112 = t1044*t211;
  t1115 = t1104 + t1112;
  t1119 = -1.*t126*t72*t98;
  t1120 = -1.*t26*t145;
  t1128 = t1119 + t1120;
  t600 = -0.21*t535;
  t603 = 0.049*t552;
  t616 = t600 + t603;
  t721 = -0.70544*t709;
  t758 = -0.01841*t730;
  t771 = t721 + t758;
  t1146 = t317*t1115;
  t1154 = t1128*t387;
  t1161 = t1146 + t1154;
  t1171 = t317*t1128;
  t1184 = -1.*t1115*t387;
  t1190 = t1171 + t1184;
  t788 = 0.01841*t709;
  t789 = -0.70544*t730;
  t820 = t788 + t789;
  t934 = -0.02159*t931;
  t959 = -1.11344*t944;
  t960 = t934 + t959;
  t1197 = -1.*t552*t1161;
  t1202 = t531*t1190;
  t1206 = t1197 + t1202;
  t1215 = t531*t1161;
  t1236 = t552*t1190;
  t1237 = t1215 + t1236;
  t971 = -1.11344*t931;
  t972 = 0.02159*t944;
  t975 = t971 + t972;
  t1242 = t730*t1206;
  t1248 = t703*t1237;
  t1254 = t1242 + t1248;
  t1259 = t703*t1206;
  t1265 = -1.*t730*t1237;
  t1269 = t1259 + t1265;
  p_output1[0]=ArcTan(0.135*t155 - 1.*t155*t224 - 1.*t314*t437 + 0.049*t26*t45 + t238*t26*t45 - 0.1305*(t155*t160 + t211*t26*t45) - 1.*t504*t518 - 1.*t563*t572 - 1.*t616*t665 - 1.*t771*t781 - 1.*t820*t848 - 1.*t960*t967 - 1.*t975*t979 + 1.11344*(-1.*t944*t967 + t872*t979) + 0.02159*(t872*t967 + t944*t979),-0.135*t1044 + t1044*t224 + t1115*t437 + t1128*t518 + t1161*t563 + t1190*t616 + t1206*t771 + t1237*t820 - 1.11344*(t1269*t872 - 1.*t1254*t944) - 0.02159*(t1254*t872 + t1269*t944) + t1254*t960 + t1269*t975 + 0.049*t45*t98 + t238*t45*t98 + 0.1305*(t1044*t160 - 1.*t211*t45*t98));
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

void leftLegRoll_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




