/*
 * Automatically Generated from Mathematica.
 * Thu 23 Dec 2021 17:03:05 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "p_pelvis_RightStance.hh"
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
  double t19;
  double t26;
  double t30;
  double t46;
  double t27;
  double t31;
  double t34;
  double t37;
  double t40;
  double t43;
  double t47;
  double t50;
  double t53;
  double t56;
  double t59;
  double t62;
  double t104;
  double t108;
  double t111;
  double t117;
  double t120;
  double t65;
  double t68;
  double t71;
  double t74;
  double t28;
  double t32;
  double t35;
  double t38;
  double t41;
  double t44;
  double t48;
  double t51;
  double t54;
  double t57;
  double t60;
  double t63;
  double t20;
  double t23;
  double t77;
  double t79;
  double t81;
  double t83;
  double t85;
  double t87;
  double t89;
  double t91;
  double t93;
  double t95;
  double t97;
  double t99;
  double t17;
  double t14;
  double t189;
  double t192;
  double t15;
  double t167;
  double t204;
  double t187;
  double t202;
  double t205;
  double t207;
  double t209;
  double t103;
  double t123;
  double t109;
  double t112;
  double t130;
  double t118;
  double t121;
  double t105;
  double t126;
  double t128;
  double t114;
  double t133;
  double t135;
  double t190;
  double t193;
  double t242;
  double t195;
  double t246;
  double t197;
  double t260;
  double t262;
  double t266;
  double t267;
  double t268;
  double t261;
  double t263;
  double t264;
  double t201;
  double t203;
  double t206;
  double t208;
  double t210;
  double t211;
  double t222;
  double t223;
  double t224;
  double t225;
  double t226;
  double t227;
  double t228;
  double t229;
  double t230;
  double t231;
  double t232;
  double t233;
  double t234;
  double t235;
  double t236;
  double t237;
  double t238;
  double t283;
  double t284;
  double t287;
  double t290;
  double t293;
  double t296;
  double t299;
  double t302;
  double t305;
  double t311;
  double t314;
  double t323;
  double t326;
  double t332;
  double t335;
  double t344;
  double t347;
  t4 = Cos(var1[5]);
  t7 = Sin(var1[3]);
  t3 = Cos(var1[3]);
  t5 = Sin(var1[4]);
  t8 = Sin(var1[5]);
  t19 = -1.*var1[16];
  t26 = -1.*var1[17];
  t30 = -1.*var1[15];
  t46 = -1.*var1[19];
  t27 = var1[14] + t19 + t26;
  t31 = var1[14] + t30 + t19 + t26;
  t34 = var1[14] + var1[15] + t19 + t26;
  t37 = var1[14] + var1[16] + var1[17];
  t40 = var1[14] + t30 + var1[16] + var1[17];
  t43 = var1[14] + var1[15] + var1[16] + var1[17];
  t47 = var1[14] + t19 + t26 + t46;
  t50 = var1[14] + t30 + t19 + t26 + t46;
  t53 = var1[14] + var1[15] + t19 + t26 + t46;
  t56 = var1[14] + var1[16] + var1[17] + var1[19];
  t59 = var1[14] + t30 + var1[16] + var1[17] + var1[19];
  t62 = var1[14] + var1[15] + var1[16] + var1[17] + var1[19];
  t104 = -1.*var1[4];
  t108 = var1[16] + var1[17] + t104;
  t111 = var1[16] + var1[17] + var1[19] + t104;
  t117 = var1[16] + var1[17] + var1[4];
  t120 = var1[16] + var1[17] + var1[19] + var1[4];
  t65 = var1[14] + t30 + t19;
  t68 = var1[14] + var1[15] + t19;
  t71 = var1[14] + t30 + var1[16];
  t74 = var1[14] + var1[15] + var1[16];
  t28 = Cos(t27);
  t32 = Cos(t31);
  t35 = Cos(t34);
  t38 = Cos(t37);
  t41 = Cos(t40);
  t44 = Cos(t43);
  t48 = Cos(t47);
  t51 = Cos(t50);
  t54 = Cos(t53);
  t57 = Cos(t56);
  t60 = Cos(t59);
  t63 = Cos(t62);
  t20 = var1[14] + t19;
  t23 = var1[14] + var1[16];
  t77 = Sin(t27);
  t79 = Sin(t31);
  t81 = Sin(t34);
  t83 = Sin(t37);
  t85 = Sin(t40);
  t87 = Sin(t43);
  t89 = Sin(t47);
  t91 = Sin(t50);
  t93 = Sin(t53);
  t95 = Sin(t56);
  t97 = Sin(t59);
  t99 = Sin(t62);
  t17 = Cos(var1[14]);
  t14 = Cos(var1[4]);
  t189 = var1[16] + var1[17];
  t192 = var1[16] + var1[17] + var1[19];
  t15 = Sin(var1[15]);
  t167 = Sin(var1[14]);
  t204 = var1[17] + var1[19];
  t187 = Cos(var1[16]);
  t202 = Cos(var1[17]);
  t205 = Cos(t204);
  t207 = Sin(var1[17]);
  t209 = Sin(t204);
  t103 = Cos(var1[15]);
  t123 = var1[16] + t104;
  t109 = Cos(t108);
  t112 = Cos(t111);
  t130 = var1[16] + var1[4];
  t118 = Cos(t117);
  t121 = Cos(t120);
  t105 = var1[14] + t104;
  t126 = Sin(t108);
  t128 = Sin(t111);
  t114 = var1[14] + var1[4];
  t133 = Sin(t117);
  t135 = Sin(t120);
  t190 = Cos(t189);
  t193 = Cos(t192);
  t242 = var1[16] + t26;
  t195 = Sin(t189);
  t246 = var1[16] + t26 + t46;
  t197 = Sin(t192);
  t260 = Cos(var1[19]);
  t262 = Sin(var1[19]);
  t266 = -4000.*t260;
  t267 = 40800.*t262;
  t268 = 6741. + t266 + t267;
  t261 = 10200.*t260;
  t263 = 1000.*t262;
  t264 = 12386. + t261 + t263;
  t201 = Sin(var1[16]);
  t203 = 49544.*t202;
  t206 = 40800.*t205;
  t208 = -6741.*t207;
  t210 = 4000.*t209;
  t211 = 12000. + t203 + t206 + t208 + t210;
  t222 = Cos(t123);
  t223 = -12000.*t222;
  t224 = -49544.*t109;
  t225 = -40800.*t112;
  t226 = Cos(t130);
  t227 = 12000.*t226;
  t228 = 49544.*t118;
  t229 = 40800.*t121;
  t230 = Sin(t105);
  t231 = 450.*t230;
  t232 = 6741.*t126;
  t233 = -4000.*t128;
  t234 = Sin(t114);
  t235 = 450.*t234;
  t236 = -6741.*t133;
  t237 = 4000.*t135;
  t238 = t223 + t224 + t225 + t227 + t228 + t229 + t231 + t232 + t233 + t235 + t236 + t237;
  t283 = -1.*var1[3];
  t284 = var1[15] + t19 + t26 + t283;
  t287 = var1[15] + var1[16] + var1[17] + t283;
  t290 = var1[15] + t19 + t26 + t46 + t283;
  t293 = var1[15] + var1[16] + var1[17] + var1[19] + t283;
  t296 = var1[15] + t19 + t26 + var1[3];
  t299 = var1[15] + var1[16] + var1[17] + var1[3];
  t302 = var1[15] + t19 + t26 + t46 + var1[3];
  t305 = var1[15] + var1[16] + var1[17] + var1[19] + var1[3];
  t311 = var1[16] + var1[17] + t283 + t104;
  t314 = var1[16] + var1[17] + var1[19] + t283 + t104;
  t323 = var1[16] + var1[17] + var1[3] + t104;
  t326 = var1[16] + var1[17] + var1[19] + var1[3] + t104;
  t332 = var1[16] + var1[17] + t283 + var1[4];
  t335 = var1[16] + var1[17] + var1[19] + t283 + var1[4];
  t344 = var1[16] + var1[17] + var1[3] + var1[4];
  t347 = var1[16] + var1[17] + var1[19] + var1[3] + var1[4];
  p_output1[0]=t3*t4*t5 - 1.*t7*t8;
  p_output1[1]=t4*t7 + t3*t5*t8;
  p_output1[2]=var1[15];
  p_output1[3]=2.5e-6*(1800.*t14*t15 - 2.*t103*(6741.*t109 - 4000.*t112 + 6741.*t118 - 4000.*t121 + 49544.*t126 + 40800.*t128 + 49544.*t133 + 40800.*t135 + 450.*Cos(t105) - 450.*Cos(t114) + 12000.*Sin(t123) + 12000.*Sin(t130)) + t5*(36000.*t17 + 99088.*t28 - 6741.*t32 + 6741.*t35 + 99088.*t38 - 6741.*t41 + 6741.*t44 + 81600.*t48 + 4000.*t51 - 4000.*t54 + 81600.*t57 + 4000.*t60 - 4000.*t63 + 13482.*t77 + 49544.*t79 - 49544.*t81 - 13482.*t83 - 49544.*t85 + 49544.*t87 - 8000.*t89 + 40800.*t91 - 40800.*t93 + 8000.*t95 - 40800.*t97 + 40800.*t99 + 24000.*Cos(t20) + 24000.*Cos(t23) + 12000.*Sin(t65) - 12000.*Sin(t68) - 12000.*Sin(t71) + 12000.*Sin(t74)));
  p_output1[4]=2.5e-6*(-4.*t14*t17*(9000. + 12000.*t187 + 49544.*t190 + 40800.*t193 - 6741.*t195 + 4000.*t197)*t7 + 2.*t103*t238*t7 + 4.*t15*(t14*t167*t187*(6741.*t202 - 4000.*t205 + 49544.*t207 + 40800.*t209) + t14*t167*t201*t211 + 450.*t5)*t7 - 1.*t3*(-54000. + 36000.*t167 - 13482.*t28 - 49544.*t32 + 49544.*t35 + 13482.*t38 + 49544.*t41 - 49544.*t44 + 8000.*t48 - 40800.*t51 + 40800.*t54 - 8000.*t57 + 40800.*t60 - 40800.*t63 + 99088.*t77 - 6741.*t79 + 6741.*t81 + 99088.*t83 - 6741.*t85 + 6741.*t87 + 81600.*t89 + 4000.*t91 - 4000.*t93 + 81600.*t95 + 4000.*t97 - 4000.*t99 - 12000.*Cos(t65) + 12000.*Cos(t68) + 12000.*Cos(t71) - 12000.*Cos(t74) + 900.*Cos(t30 + var1[14]) + 900.*Cos(var1[14] + var1[15]) + 24000.*Sin(t20) + 24000.*Sin(t23)));
  p_output1[5]=2.5e-6*(-2.*t103*t238*t3 + 4.*t15*t3*(-1.*t14*t167*t201*t211 - 450.*t5) - 4.*t167*t187*(4.*t14*t15*t207*t264*t3 - 1.*(-12000. + t207*t268)*t7 + t202*(t14*t15*t268*t3 + 4.*t264*t7)) + 2.*t7*(27000. + t167*(-18000. - 49544.*t190 - 40800.*t193 + 6741.*t195 - 4000.*t197 + 49544.*Cos(t242) + 40800.*Cos(t246) + 6741.*Sin(t242) - 4000.*Sin(t246))) + t17*(-6741.*Cos(t284) - 6741.*Cos(t287) + 4000.*Cos(t290) + 4000.*Cos(t293) + 6741.*Cos(t296) + 6741.*Cos(t299) - 4000.*Cos(t302) - 4000.*Cos(t305) + 49544.*Cos(t311) + 40800.*Cos(t314) + 49544.*Cos(t323) + 40800.*Cos(t326) + 49544.*Cos(t332) + 40800.*Cos(t335) + 49544.*Cos(t344) + 40800.*Cos(t347) + 18000.*Cos(t104 + var1[3]) + 18000.*Cos(var1[3] + var1[4]) + 12000.*Cos(t104 + t283 + var1[16]) + 12000.*Cos(t104 + var1[3] + var1[16]) + 12000.*Cos(t283 + var1[4] + var1[16]) + 12000.*Cos(var1[3] + var1[4] + var1[16]) + 49544.*Sin(t284) - 49544.*Sin(t287) + 40800.*Sin(t290) - 40800.*Sin(t293) - 49544.*Sin(t296) + 49544.*Sin(t299) - 40800.*Sin(t302) + 40800.*Sin(t305) - 6741.*Sin(t311) + 4000.*Sin(t314) - 6741.*Sin(t323) + 4000.*Sin(t326) - 6741.*Sin(t332) + 4000.*Sin(t335) - 6741.*Sin(t344) + 4000.*Sin(t347) + 900.*Sin(t283 + var1[15]) + 12000.*Sin(t19 + t283 + var1[15]) - 900.*Sin(var1[3] + var1[15]) - 12000.*Sin(t19 + var1[3] + var1[15]) - 12000.*Sin(t283 + var1[15] + var1[16]) + 12000.*Sin(var1[3] + var1[15] + var1[16])));
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

void p_pelvis_RightStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




