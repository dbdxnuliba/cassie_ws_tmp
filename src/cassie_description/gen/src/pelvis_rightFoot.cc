/*
 * Automatically Generated from Mathematica.
 * Thu 23 Dec 2021 16:09:25 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "pelvis_rightFoot.hh"
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
  double t4;
  double t7;
  double t3;
  double t5;
  double t8;
  double t14;
  double t24;
  double t16;
  double t17;
  double t18;
  double t20;
  double t31;
  double t32;
  double t33;
  double t35;
  double t30;
  double t46;
  double t47;
  double t48;
  double t50;
  double t51;
  double t52;
  double t54;
  double t57;
  double t58;
  double t59;
  double t64;
  double t65;
  double t66;
  double t68;
  double t69;
  double t70;
  double t72;
  double t75;
  double t76;
  double t77;
  double t82;
  double t83;
  double t84;
  double t86;
  double t87;
  double t88;
  double t90;
  double t93;
  double t94;
  double t95;
  double t100;
  double t101;
  double t102;
  double t34;
  double t36;
  double t37;
  double t26;
  double t27;
  double t28;
  double t126;
  double t127;
  double t128;
  double t19;
  double t21;
  double t22;
  double t43;
  double t44;
  double t45;
  double t53;
  double t55;
  double t56;
  double t122;
  double t123;
  double t124;
  double t133;
  double t134;
  double t135;
  double t61;
  double t62;
  double t63;
  double t71;
  double t73;
  double t74;
  double t141;
  double t142;
  double t143;
  double t145;
  double t146;
  double t147;
  double t79;
  double t80;
  double t81;
  double t89;
  double t91;
  double t92;
  double t149;
  double t150;
  double t151;
  double t153;
  double t154;
  double t155;
  double t97;
  double t98;
  double t99;
  double t157;
  double t158;
  double t159;
  double t161;
  double t162;
  double t163;
  double t117;
  double t173;
  double t114;
  double t115;
  double t118;
  double t119;
  double t184;
  double t185;
  double t186;
  double t189;
  double t190;
  double t191;
  double t195;
  double t196;
  double t197;
  double t203;
  double t204;
  double t205;
  double t207;
  double t208;
  double t209;
  double t211;
  double t212;
  double t213;
  double t215;
  double t216;
  double t217;
  double t219;
  double t220;
  double t221;
  double t223;
  double t224;
  double t225;
  t4 = Cos(var1[5]);
  t7 = Sin(var1[3]);
  t3 = Cos(var1[3]);
  t5 = Sin(var1[4]);
  t8 = Sin(var1[5]);
  t14 = Cos(var1[4]);
  t24 = Sin(var1[14]);
  t16 = Cos(var1[15]);
  t17 = -1.*t16;
  t18 = 1. + t17;
  t20 = Sin(var1[15]);
  t31 = Cos(var1[16]);
  t32 = -1.*t31;
  t33 = 1. + t32;
  t35 = Sin(var1[16]);
  t30 = Cos(var1[14]);
  t46 = t16*t14;
  t47 = t24*t20*t5;
  t48 = t46 + t47;
  t50 = Cos(var1[17]);
  t51 = -1.*t50;
  t52 = 1. + t51;
  t54 = Sin(var1[17]);
  t57 = t30*t35*t5;
  t58 = t31*t48;
  t59 = t57 + t58;
  t64 = t30*t31*t5;
  t65 = -1.*t35*t48;
  t66 = t64 + t65;
  t68 = Cos(var1[19]);
  t69 = -1.*t68;
  t70 = 1. + t69;
  t72 = Sin(var1[19]);
  t75 = -1.*t54*t59;
  t76 = t50*t66;
  t77 = t75 + t76;
  t82 = t50*t59;
  t83 = t54*t66;
  t84 = t82 + t83;
  t86 = Cos(var1[21]);
  t87 = -1.*t86;
  t88 = 1. + t87;
  t90 = Sin(var1[21]);
  t93 = t72*t77;
  t94 = t68*t84;
  t95 = t93 + t94;
  t100 = t68*t77;
  t101 = -1.*t72*t84;
  t102 = t100 + t101;
  t34 = -0.09*t33;
  t36 = 0.049*t35;
  t37 = t34 + t36;
  t26 = -0.135*t18;
  t27 = 0.049*t20;
  t28 = t26 + t27;
  t126 = t30*t3;
  t127 = -1.*t14*t24*t7;
  t128 = t126 + t127;
  t19 = -0.049*t18;
  t21 = -0.135*t20;
  t22 = t19 + t21;
  t43 = -0.049*t33;
  t44 = -0.09*t35;
  t45 = t43 + t44;
  t53 = -0.049*t52;
  t55 = -0.21*t54;
  t56 = t53 + t55;
  t122 = -1.*t3*t24;
  t123 = -1.*t30*t14*t7;
  t124 = t122 + t123;
  t133 = t20*t128;
  t134 = t16*t7*t5;
  t135 = t133 + t134;
  t61 = -0.21*t52;
  t62 = 0.049*t54;
  t63 = t61 + t62;
  t71 = -0.70544*t70;
  t73 = -0.01841*t72;
  t74 = t71 + t73;
  t141 = t35*t124;
  t142 = t31*t135;
  t143 = t141 + t142;
  t145 = t31*t124;
  t146 = -1.*t35*t135;
  t147 = t145 + t146;
  t79 = 0.01841*t70;
  t80 = -0.70544*t72;
  t81 = t79 + t80;
  t89 = -0.02159*t88;
  t91 = -1.11344*t90;
  t92 = t89 + t91;
  t149 = -1.*t54*t143;
  t150 = t50*t147;
  t151 = t149 + t150;
  t153 = t50*t143;
  t154 = t54*t147;
  t155 = t153 + t154;
  t97 = -1.11344*t88;
  t98 = 0.02159*t90;
  t99 = t97 + t98;
  t157 = t72*t151;
  t158 = t68*t155;
  t159 = t157 + t158;
  t161 = t68*t151;
  t162 = -1.*t72*t155;
  t163 = t161 + t162;
  t117 = Cos(var1[6]);
  t173 = Sin(var1[6]);
  t114 = -1.*t30;
  t115 = 1. + t114;
  t118 = -1.*t117;
  t119 = 1. + t118;
  t184 = t3*t14*t24;
  t185 = t30*t7;
  t186 = t184 + t185;
  t189 = t30*t3*t14;
  t190 = -1.*t24*t7;
  t191 = t189 + t190;
  t195 = t20*t186;
  t196 = -1.*t16*t3*t5;
  t197 = t195 + t196;
  t203 = t35*t191;
  t204 = t31*t197;
  t205 = t203 + t204;
  t207 = t31*t191;
  t208 = -1.*t35*t197;
  t209 = t207 + t208;
  t211 = -1.*t54*t205;
  t212 = t50*t209;
  t213 = t211 + t212;
  t215 = t50*t205;
  t216 = t54*t209;
  t217 = t215 + t216;
  t219 = t72*t213;
  t220 = t68*t217;
  t221 = t219 + t220;
  t223 = t68*t213;
  t224 = -1.*t72*t217;
  t225 = t223 + t224;
  p_output1[0]=t3*t4*t5 - 1.*t7*t8;
  p_output1[1]=t4*t7 + t3*t5*t8;
  p_output1[2]=var1[15];
  p_output1[3]=0.5*(-0.098*t14 - 2.*t14*t22 - 2.*t45*t48 - 0.27*t24*t5 - 2.*t24*t28*t5 - 2.*t30*t37*t5 + 0.261*(-1.*t14*t20 + t16*t24*t5) - 2.*t56*t59 - 2.*t63*t66 - 2.*t74*t77 - 2.*t81*t84 - 2.*t92*t95 + 0.04318*(t102*t90 + t86*t95) + 2.22688*(t102*t86 - 1.*t90*t95) - 2.*t102*t99);
  p_output1[4]=0.5*(-0.135*t128 - 2.*t128*t28 + 0.135*t115*t3 + 0.135*t119*t3 - 2.*t124*t37 - 2.*t135*t45 - 2.*t143*t56 - 2.*t147*t63 + 0.135*t14*t173*t7 + 0.135*t14*t24*t7 - 0.098*t5*t7 - 2.*t22*t5*t7 + 0.135*(t117*t3 - 1.*t14*t173*t7) + 0.261*(t128*t16 - 1.*t20*t5*t7) - 2.*t151*t74 - 2.*t155*t81 + 2.22688*(t163*t86 - 1.*t159*t90) + 0.04318*(t159*t86 + t163*t90) - 2.*t159*t92 - 2.*t163*t99);
  p_output1[5]=0.5*(-0.135*t186 - 2.*t186*t28 - 0.135*t14*t173*t3 - 0.135*t14*t24*t3 - 2.*t191*t37 - 2.*t197*t45 + 0.098*t3*t5 + 2.*t22*t3*t5 + 0.261*(t16*t186 + t20*t3*t5) - 2.*t205*t56 - 2.*t209*t63 + 0.135*t115*t7 + 0.135*t119*t7 + 0.135*(t14*t173*t3 + t117*t7) - 2.*t213*t74 - 2.*t217*t81 + 2.22688*(t225*t86 - 1.*t221*t90) + 0.04318*(t221*t86 + t225*t90) - 2.*t221*t92 - 2.*t225*t99);
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

void pelvis_rightFoot_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




