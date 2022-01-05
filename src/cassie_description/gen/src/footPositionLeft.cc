/*
 * Automatically Generated from Mathematica.
 * Sat 1 Jan 2022 14:48:58 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "footPositionLeft.hh"
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
  double t3;
  double t7;
  double t8;
  double t9;
  double t10;
  double t12;
  double t21;
  double t29;
  double t30;
  double t31;
  double t33;
  double t36;
  double t37;
  double t38;
  double t43;
  double t44;
  double t45;
  double t47;
  double t48;
  double t49;
  double t51;
  double t54;
  double t55;
  double t56;
  double t61;
  double t62;
  double t63;
  double t74;
  double t4;
  double t5;
  double t16;
  double t18;
  double t19;
  double t20;
  double t22;
  double t23;
  double t11;
  double t13;
  double t14;
  double t84;
  double t25;
  double t26;
  double t27;
  double t32;
  double t34;
  double t35;
  double t89;
  double t90;
  double t91;
  double t93;
  double t94;
  double t95;
  double t40;
  double t41;
  double t42;
  double t50;
  double t52;
  double t53;
  double t97;
  double t98;
  double t99;
  double t101;
  double t102;
  double t103;
  double t58;
  double t59;
  double t60;
  double t105;
  double t106;
  double t107;
  double t109;
  double t110;
  double t111;
  double t79;
  double t80;
  double t81;
  double t85;
  double t86;
  double t87;
  double t127;
  double t128;
  double t129;
  double t131;
  double t132;
  double t133;
  double t135;
  double t136;
  double t137;
  double t139;
  double t140;
  double t141;
  double t143;
  double t144;
  double t145;
  double t147;
  double t148;
  double t149;
  t3 = Cos(var1[1]);
  t7 = Cos(var1[2]);
  t8 = Cos(var1[3]);
  t9 = -1.*t8;
  t10 = 1. + t9;
  t12 = Sin(var1[3]);
  t21 = Sin(var1[2]);
  t29 = Cos(var1[5]);
  t30 = -1.*t29;
  t31 = 1. + t30;
  t33 = Sin(var1[5]);
  t36 = -1.*t3*t7*t12;
  t37 = -1.*t8*t3*t21;
  t38 = t36 + t37;
  t43 = t8*t3*t7;
  t44 = -1.*t3*t12*t21;
  t45 = t43 + t44;
  t47 = Cos(var1[6]);
  t48 = -1.*t47;
  t49 = 1. + t48;
  t51 = Sin(var1[6]);
  t54 = t33*t38;
  t55 = t29*t45;
  t56 = t54 + t55;
  t61 = t29*t38;
  t62 = -1.*t33*t45;
  t63 = t61 + t62;
  t74 = Cos(var1[0]);
  t4 = -1.*t3;
  t5 = 1. + t4;
  t16 = Sin(var1[1]);
  t18 = -1.*t7;
  t19 = 1. + t18;
  t20 = -0.049*t19;
  t22 = -0.09*t21;
  t23 = t20 + t22;
  t11 = -0.049*t10;
  t13 = -0.21*t12;
  t14 = t11 + t13;
  t84 = Sin(var1[0]);
  t25 = -0.21*t10;
  t26 = 0.049*t12;
  t27 = t25 + t26;
  t32 = -0.70544*t31;
  t34 = -0.01841*t33;
  t35 = t32 + t34;
  t89 = t74*t7*t16;
  t90 = -1.*t84*t21;
  t91 = t89 + t90;
  t93 = -1.*t7*t84;
  t94 = -1.*t74*t16*t21;
  t95 = t93 + t94;
  t40 = 0.01841*t31;
  t41 = -0.70544*t33;
  t42 = t40 + t41;
  t50 = -0.02159*t49;
  t52 = -1.11344*t51;
  t53 = t50 + t52;
  t97 = -1.*t12*t91;
  t98 = t8*t95;
  t99 = t97 + t98;
  t101 = t8*t91;
  t102 = t12*t95;
  t103 = t101 + t102;
  t58 = -1.11344*t49;
  t59 = 0.02159*t51;
  t60 = t58 + t59;
  t105 = t33*t99;
  t106 = t29*t103;
  t107 = t105 + t106;
  t109 = t29*t99;
  t110 = -1.*t33*t103;
  t111 = t109 + t110;
  t79 = 0.135*t5;
  t80 = 0.049*t16;
  t81 = t79 + t80;
  t85 = -0.09*t19;
  t86 = 0.049*t21;
  t87 = t85 + t86;
  t127 = t7*t84*t16;
  t128 = t74*t21;
  t129 = t127 + t128;
  t131 = t74*t7;
  t132 = -1.*t84*t16*t21;
  t133 = t131 + t132;
  t135 = -1.*t12*t129;
  t136 = t8*t133;
  t137 = t135 + t136;
  t139 = t8*t129;
  t140 = t12*t133;
  t141 = t139 + t140;
  t143 = t33*t137;
  t144 = t29*t141;
  t145 = t143 + t144;
  t147 = t29*t137;
  t148 = -1.*t33*t141;
  t149 = t147 + t148;
  p_output1[0]=0.0045*t16 + t23*t3 - 1.*t21*t27*t3 + t35*t38 + t42*t45 - 0.049*t5 + t53*t56 + t60*t63 - 1.13106*(-1.*t51*t56 + t47*t63) + 0.0306*(t47*t56 + t51*t63) + t14*t3*t7;
  p_output1[1]=t103*t42 - 1.13106*(t111*t47 - 1.*t107*t51) + 0.0306*(t107*t47 + t111*t51) + t107*t53 + t111*t60 + 0.135*(1. - 1.*t74) + t16*t23*t74 + 0.1305*t3*t74 + t74*t81 - 1.*t84*t87 + t14*t91 + t27*t95 + t35*t99;
  p_output1[2]=t129*t14 + t133*t27 + t137*t35 + t141*t42 - 1.13106*(t149*t47 - 1.*t145*t51) + 0.0306*(t145*t47 + t149*t51) + t145*t53 + t149*t60 - 0.135*t84 + t16*t23*t84 + 0.1305*t3*t84 + t81*t84 + t74*t87;
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

void footPositionLeft_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




