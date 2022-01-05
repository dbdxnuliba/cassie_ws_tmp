/*
 * Automatically Generated from Mathematica.
 * Sat 1 Jan 2022 14:48:59 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "footPositionRight.hh"
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
  double t46;
  double t66;
  double t70;
  double t71;
  double t72;
  double t75;
  double t108;
  double t112;
  double t113;
  double t115;
  double t96;
  double t100;
  double t104;
  double t119;
  double t120;
  double t121;
  double t138;
  double t142;
  double t146;
  double t151;
  double t155;
  double t156;
  double t157;
  double t126;
  double t130;
  double t134;
  double t171;
  double t15;
  double t17;
  double t28;
  double t57;
  double t64;
  double t65;
  double t67;
  double t68;
  double t181;
  double t73;
  double t76;
  double t77;
  double t82;
  double t83;
  double t88;
  double t186;
  double t187;
  double t188;
  double t190;
  double t191;
  double t192;
  double t114;
  double t116;
  double t117;
  double t122;
  double t123;
  double t124;
  double t194;
  double t195;
  double t196;
  double t198;
  double t199;
  double t200;
  double t150;
  double t152;
  double t153;
  double t158;
  double t159;
  double t160;
  double t206;
  double t207;
  double t208;
  double t202;
  double t203;
  double t204;
  double t176;
  double t177;
  double t178;
  double t182;
  double t183;
  double t184;
  double t224;
  double t225;
  double t226;
  double t228;
  double t229;
  double t230;
  double t232;
  double t233;
  double t234;
  double t236;
  double t237;
  double t238;
  double t244;
  double t245;
  double t246;
  double t240;
  double t241;
  double t242;
  t6 = Cos(var1[8]);
  t46 = Cos(var1[9]);
  t66 = Sin(var1[9]);
  t70 = Cos(var1[10]);
  t71 = -1.*t70;
  t72 = 1. + t71;
  t75 = Sin(var1[10]);
  t108 = Cos(var1[12]);
  t112 = -1.*t108;
  t113 = 1. + t112;
  t115 = Sin(var1[12]);
  t96 = t6*t46*t70;
  t100 = -1.*t6*t66*t75;
  t104 = t96 + t100;
  t119 = -1.*t6*t70*t66;
  t120 = -1.*t6*t46*t75;
  t121 = t119 + t120;
  t138 = Cos(var1[13]);
  t142 = -1.*t138;
  t146 = 1. + t142;
  t151 = Sin(var1[13]);
  t155 = t108*t121;
  t156 = -1.*t104*t115;
  t157 = t155 + t156;
  t126 = t108*t104;
  t130 = t121*t115;
  t134 = t126 + t130;
  t171 = Cos(var1[7]);
  t15 = -1.*t6;
  t17 = 1. + t15;
  t28 = Sin(var1[8]);
  t57 = -1.*t46;
  t64 = 1. + t57;
  t65 = -0.049*t64;
  t67 = -0.09*t66;
  t68 = t65 + t67;
  t181 = Sin(var1[7]);
  t73 = -0.049*t72;
  t76 = -0.21*t75;
  t77 = t73 + t76;
  t82 = -0.21*t72;
  t83 = 0.049*t75;
  t88 = t82 + t83;
  t186 = t171*t46*t28;
  t187 = -1.*t181*t66;
  t188 = t186 + t187;
  t190 = -1.*t46*t181;
  t191 = -1.*t171*t28*t66;
  t192 = t190 + t191;
  t114 = 0.01841*t113;
  t116 = -0.70544*t115;
  t117 = t114 + t116;
  t122 = -0.70544*t113;
  t123 = -0.01841*t115;
  t124 = t122 + t123;
  t194 = t70*t188;
  t195 = t192*t75;
  t196 = t194 + t195;
  t198 = t70*t192;
  t199 = -1.*t188*t75;
  t200 = t198 + t199;
  t150 = -0.02159*t146;
  t152 = -1.11344*t151;
  t153 = t150 + t152;
  t158 = -1.11344*t146;
  t159 = 0.02159*t151;
  t160 = t158 + t159;
  t206 = t108*t200;
  t207 = -1.*t196*t115;
  t208 = t206 + t207;
  t202 = t108*t196;
  t203 = t200*t115;
  t204 = t202 + t203;
  t176 = -0.135*t17;
  t177 = 0.049*t28;
  t178 = t176 + t177;
  t182 = -0.09*t64;
  t183 = 0.049*t66;
  t184 = t182 + t183;
  t224 = t46*t181*t28;
  t225 = t171*t66;
  t226 = t224 + t225;
  t228 = t171*t46;
  t229 = -1.*t181*t28*t66;
  t230 = t228 + t229;
  t232 = t70*t226;
  t233 = t230*t75;
  t234 = t232 + t233;
  t236 = t70*t230;
  t237 = -1.*t226*t75;
  t238 = t236 + t237;
  t244 = t108*t238;
  t245 = -1.*t234*t115;
  t246 = t244 + t245;
  t240 = t108*t234;
  t241 = t238*t115;
  t242 = t240 + t241;
  p_output1[0]=t104*t117 + t121*t124 + t134*t153 - 1.13106*(-1.*t134*t151 + t138*t157) + 0.0306*(t134*t138 + t151*t157) + t157*t160 - 0.049*t17 - 0.0045*t28 + t6*t68 + t46*t6*t77 - 1.*t6*t66*t88;
  p_output1[1]=-0.135*(1. - 1.*t171) + t171*t178 - 1.*t181*t184 + t117*t196 + t124*t200 + t153*t204 + t160*t208 - 1.13106*(-1.*t151*t204 + t138*t208) + 0.0306*(t138*t204 + t151*t208) - 0.1305*t171*t6 + t171*t28*t68 + t188*t77 + t192*t88;
  p_output1[2]=0.135*t181 + t178*t181 + t171*t184 + t117*t234 + t124*t238 + t153*t242 + t160*t246 - 1.13106*(-1.*t151*t242 + t138*t246) + 0.0306*(t138*t242 + t151*t246) - 0.1305*t181*t6 + t181*t28*t68 + t226*t77 + t230*t88;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#endif // MATLAB_MEX_FILE

namespace SymFunction
{

void footPositionRight_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




