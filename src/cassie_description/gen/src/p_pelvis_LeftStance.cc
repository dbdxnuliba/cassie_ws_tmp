/*
 * Automatically Generated from Mathematica.
 * Thu 23 Dec 2021 17:03:13 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "p_pelvis_LeftStance.hh"
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
  double t1191;
  double t1266;
  double t570;
  double t1240;
  double t1330;
  double t1779;
  double t2113;
  double t1933;
  double t2132;
  double t2191;
  double t2297;
  double t2659;
  double t2505;
  double t2660;
  double t2677;
  double t2694;
  double t2717;
  double t2750;
  double t3022;
  double t2370;
  double t3025;
  double t3034;
  double t3055;
  double t3072;
  double t3098;
  double t3120;
  double t3130;
  double t3133;
  double t3171;
  double t3193;
  double t3214;
  double t3229;
  double t2663;
  double t2673;
  double t2679;
  double t2693;
  double t2697;
  double t2707;
  double t2724;
  double t2733;
  double t2734;
  double t2755;
  double t2768;
  double t2770;
  double t2810;
  double t2873;
  double t2877;
  double t2878;
  double t2879;
  double t2894;
  double t2898;
  double t2901;
  double t2910;
  double t2913;
  double t2916;
  double t2919;
  double t2640;
  double t1514;
  double t3234;
  double t3028;
  double t3037;
  double t3274;
  double t3058;
  double t3075;
  double t3103;
  double t3121;
  double t3131;
  double t3134;
  double t3172;
  double t3194;
  double t3218;
  double t3231;
  double t2931;
  double t2948;
  double t2967;
  double t2993;
  double t3237;
  double t3239;
  double t3281;
  double t3286;
  double t3290;
  double t3292;
  double t3126;
  double t3297;
  double t3303;
  double t3314;
  double t3319;
  double t3209;
  double t3341;
  double t3351;
  double t2942;
  double t2945;
  double t2959;
  double t2960;
  double t2968;
  double t2972;
  double t3016;
  double t3019;
  double t3031;
  double t3048;
  double t3065;
  double t3085;
  double t3104;
  double t3123;
  double t3128;
  double t3129;
  double t3132;
  double t3170;
  double t3173;
  double t3196;
  double t3210;
  double t3212;
  double t3228;
  double t3232;
  double t3233;
  double t3235;
  double t3236;
  double t3238;
  double t3240;
  double t3276;
  double t3278;
  double t3283;
  double t3289;
  double t3291;
  double t3294;
  double t3299;
  double t3304;
  double t3315;
  double t3330;
  double t3344;
  double t3353;
  double t3354;
  double t3363;
  double t3364;
  double t3365;
  double t3373;
  double t3394;
  double t3401;
  double t3402;
  double t3404;
  double t3408;
  double t3409;
  double t3410;
  double t3411;
  double t3412;
  double t3413;
  double t3414;
  double t3417;
  double t3421;
  double t3422;
  double t3424;
  double t3428;
  double t3429;
  double t3431;
  double t3432;
  double t3433;
  double t3434;
  double t3435;
  double t3436;
  double t3437;
  double t3438;
  double t3439;
  double t3440;
  double t3441;
  double t3442;
  double t3448;
  double t3454;
  double t3458;
  double t3459;
  double t3460;
  double t3461;
  double t3462;
  double t3463;
  double t3464;
  double t3465;
  double t3466;
  double t3467;
  t1191 = Cos(var1[5]);
  t1266 = Sin(var1[3]);
  t570 = Cos(var1[3]);
  t1240 = Sin(var1[4]);
  t1330 = Sin(var1[5]);
  t1779 = var1[9] + var1[8];
  t2113 = var1[9] + var1[11] + var1[8];
  t1933 = Cos(t1779);
  t2132 = Cos(t2113);
  t2191 = Sin(t1779);
  t2297 = Sin(t2113);
  t2659 = -1.*var1[7];
  t2505 = Sin(var1[7]);
  t2660 = var1[9] + t2659 + var1[8];
  t2677 = var1[9] + var1[11] + t2659 + var1[8];
  t2694 = var1[9] + var1[7] + var1[8];
  t2717 = var1[9] + var1[11] + var1[7] + var1[8];
  t2750 = -1.*var1[8];
  t3022 = -1.*var1[6];
  t2370 = Sin(var1[6]);
  t3025 = var1[9] + t3022 + var1[8];
  t3034 = var1[9] + var1[11] + t3022 + var1[8];
  t3055 = var1[9] + var1[6] + var1[8];
  t3072 = var1[9] + var1[11] + var1[6] + var1[8];
  t3098 = var1[9] + t3022 + t2659 + var1[8];
  t3120 = var1[9] + var1[11] + t3022 + t2659 + var1[8];
  t3130 = var1[9] + var1[6] + t2659 + var1[8];
  t3133 = var1[9] + var1[11] + var1[6] + t2659 + var1[8];
  t3171 = var1[9] + t3022 + var1[7] + var1[8];
  t3193 = var1[9] + var1[11] + t3022 + var1[7] + var1[8];
  t3214 = var1[9] + var1[6] + var1[7] + var1[8];
  t3229 = var1[9] + var1[11] + var1[6] + var1[7] + var1[8];
  t2663 = Cos(t2660);
  t2673 = 6741.*t2663;
  t2679 = Cos(t2677);
  t2693 = -4000.*t2679;
  t2697 = Cos(t2694);
  t2707 = 6741.*t2697;
  t2724 = Cos(t2717);
  t2733 = -4000.*t2724;
  t2734 = 900.*t2505;
  t2755 = var1[7] + t2750;
  t2768 = Sin(t2755);
  t2770 = -12000.*t2768;
  t2810 = Sin(t2660);
  t2873 = 49544.*t2810;
  t2877 = Sin(t2677);
  t2878 = 40800.*t2877;
  t2879 = var1[7] + var1[8];
  t2894 = Sin(t2879);
  t2898 = 12000.*t2894;
  t2901 = Sin(t2694);
  t2910 = 49544.*t2901;
  t2913 = Sin(t2717);
  t2916 = 40800.*t2913;
  t2919 = t2673 + t2693 + t2707 + t2733 + t2734 + t2770 + t2873 + t2878 + t2898 + t2910 + t2916;
  t2640 = Cos(var1[4]);
  t1514 = Cos(var1[6]);
  t3234 = var1[6] + t2750;
  t3028 = Cos(t3025);
  t3037 = Cos(t3034);
  t3274 = var1[6] + var1[8];
  t3058 = Cos(t3055);
  t3075 = Cos(t3072);
  t3103 = Cos(t3098);
  t3121 = Cos(t3120);
  t3131 = Cos(t3130);
  t3134 = Cos(t3133);
  t3172 = Cos(t3171);
  t3194 = Cos(t3193);
  t3218 = Cos(t3214);
  t3231 = Cos(t3229);
  t2931 = var1[6] + t2659;
  t2948 = var1[6] + var1[7];
  t2967 = var1[6] + t2659 + t2750;
  t2993 = var1[6] + var1[7] + t2750;
  t3237 = Sin(t3025);
  t3239 = Sin(t3034);
  t3281 = Sin(t3055);
  t3286 = Sin(t3072);
  t3290 = Sin(t3098);
  t3292 = Sin(t3120);
  t3126 = var1[6] + t2659 + var1[8];
  t3297 = Sin(t3130);
  t3303 = Sin(t3133);
  t3314 = Sin(t3171);
  t3319 = Sin(t3193);
  t3209 = var1[6] + var1[7] + var1[8];
  t3341 = Sin(t3214);
  t3351 = Sin(t3229);
  t2942 = Cos(t2931);
  t2945 = 900.*t2942;
  t2959 = Cos(t2948);
  t2960 = 900.*t2959;
  t2968 = Cos(t2967);
  t2972 = 12000.*t2968;
  t3016 = Cos(t2993);
  t3019 = -12000.*t3016;
  t3031 = 13482.*t3028;
  t3048 = -8000.*t3037;
  t3065 = -13482.*t3058;
  t3085 = 8000.*t3075;
  t3104 = -49544.*t3103;
  t3123 = -40800.*t3121;
  t3128 = Cos(t3126);
  t3129 = -12000.*t3128;
  t3132 = -49544.*t3131;
  t3170 = -40800.*t3134;
  t3173 = 49544.*t3172;
  t3196 = 40800.*t3194;
  t3210 = Cos(t3209);
  t3212 = 12000.*t3210;
  t3228 = 49544.*t3218;
  t3232 = 40800.*t3231;
  t3233 = -36000.*t2370;
  t3235 = Sin(t3234);
  t3236 = -24000.*t3235;
  t3238 = 99088.*t3237;
  t3240 = 81600.*t3239;
  t3276 = Sin(t3274);
  t3278 = -24000.*t3276;
  t3283 = -99088.*t3281;
  t3289 = -81600.*t3286;
  t3291 = 6741.*t3290;
  t3294 = -4000.*t3292;
  t3299 = 6741.*t3297;
  t3304 = -4000.*t3303;
  t3315 = -6741.*t3314;
  t3330 = 4000.*t3319;
  t3344 = -6741.*t3341;
  t3353 = 4000.*t3351;
  t3354 = -54000. + t2945 + t2960 + t2972 + t3019 + t3031 + t3048 + t3065 + t3085 + t3104 + t3123 + t3129 + t3132 + t3170 + t3173 + t3196 + t3212 + t3228 + t3232 + t3233 + t3236 + t3238 + t3240 + t3278 + t3283 + t3289 + t3291 + t3294 + t3299 + t3304 + t3315 + t3330 + t3344 + t3353;
  t3363 = 2.*t1240*t2919;
  t3364 = 36000.*t1514;
  t3365 = Cos(t3234);
  t3373 = 24000.*t3365;
  t3394 = 99088.*t3028;
  t3401 = 81600.*t3037;
  t3402 = Cos(t3274);
  t3404 = 24000.*t3402;
  t3408 = 99088.*t3058;
  t3409 = 81600.*t3075;
  t3410 = 6741.*t3103;
  t3411 = -4000.*t3121;
  t3412 = -6741.*t3131;
  t3413 = 4000.*t3134;
  t3414 = -6741.*t3172;
  t3417 = 4000.*t3194;
  t3421 = 6741.*t3218;
  t3422 = -4000.*t3231;
  t3424 = Sin(t2931);
  t3428 = 900.*t3424;
  t3429 = Sin(t2948);
  t3431 = 900.*t3429;
  t3432 = Sin(t2967);
  t3433 = 12000.*t3432;
  t3434 = Sin(t2993);
  t3435 = -12000.*t3434;
  t3436 = -13482.*t3237;
  t3437 = 8000.*t3239;
  t3438 = -13482.*t3281;
  t3439 = 8000.*t3286;
  t3440 = 49544.*t3290;
  t3441 = 40800.*t3292;
  t3442 = Sin(t3126);
  t3448 = -12000.*t3442;
  t3454 = -49544.*t3297;
  t3458 = -40800.*t3303;
  t3459 = -49544.*t3314;
  t3460 = -40800.*t3319;
  t3461 = Sin(t3209);
  t3462 = 12000.*t3461;
  t3463 = 49544.*t3341;
  t3464 = 40800.*t3351;
  t3465 = t3364 + t3373 + t3394 + t3401 + t3404 + t3408 + t3409 + t3410 + t3411 + t3412 + t3413 + t3414 + t3417 + t3421 + t3422 + t3428 + t3431 + t3433 + t3435 + t3436 + t3437 + t3438 + t3439 + t3440 + t3441 + t3448 + t3454 + t3458 + t3459 + t3460 + t3462 + t3463 + t3464;
  t3466 = t2640*t3465;
  t3467 = t3363 + t3466;
  p_output1[0]=-1.*t1266*t1330 + t1191*t1240*t570;
  p_output1[1]=t1191*t1266 + t1240*t1330*t570;
  p_output1[2]=var1[7];
  p_output1[3]=5.e-6*(-1.*t2640*t2919 + 2.*t1240*(t1514*(9000. + 49544.*t1933 + 40800.*t2132 - 6741.*t2191 + 4000.*t2297 + 12000.*Cos(var1[8])) + t2370*(450.*Cos(var1[7]) - 1.*t2505*(6741.*t1933 - 4000.*t2132 + 49544.*t2191 + 40800.*t2297 + 12000.*Sin(var1[8])))));
  p_output1[4]=2.5e-6*(-1.*t1266*t3467 + t3354*t570);
  p_output1[5]=2.5e-6*(t1266*t3354 + t3467*t570);
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

void p_pelvis_LeftStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




