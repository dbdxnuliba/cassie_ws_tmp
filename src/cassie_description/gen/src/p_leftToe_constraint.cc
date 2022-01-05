/*
 * Automatically Generated from Mathematica.
 * Sun 7 Nov 2021 14:27:13 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "p_leftToe_constraint.hh"
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
  double t203;
  double t220;
  double t606;
  double t618;
  double t635;
  double t843;
  double t860;
  double t880;
  double t902;
  double t768;
  double t778;
  double t798;
  double t1815;
  double t4886;
  double t5023;
  double t5615;
  double t6213;
  double t3506;
  double t4596;
  double t4674;
  double t10388;
  double t10392;
  double t10397;
  double t10809;
  double t10816;
  double t10834;
  double t10968;
  double t11306;
  double t11432;
  double t11673;
  double t12019;
  double t12026;
  double t12031;
  double t12296;
  double t12623;
  double t12706;
  double t12795;
  double t12982;
  double t13472;
  double t13551;
  double t13842;
  double t13844;
  double t13845;
  double t13859;
  double t13860;
  double t13913;
  double t13950;
  double t14351;
  double t14403;
  double t14414;
  double t14445;
  double t14446;
  double t14449;
  double t14451;
  double t14456;
  double t14460;
  double t14471;
  double t14487;
  double t14489;
  double t14490;
  double t14533;
  double t14535;
  double t14604;
  double t565;
  double t571;
  double t580;
  double t581;
  double t15144;
  double t647;
  double t679;
  double t15097;
  double t15116;
  double t15145;
  double t15148;
  double t898;
  double t988;
  double t1449;
  double t1823;
  double t1954;
  double t1987;
  double t15161;
  double t15170;
  double t15176;
  double t15193;
  double t15198;
  double t15205;
  double t6206;
  double t7386;
  double t9501;
  double t10735;
  double t10751;
  double t10757;
  double t10942;
  double t10982;
  double t11131;
  double t15474;
  double t15477;
  double t15483;
  double t15500;
  double t15505;
  double t15509;
  double t11975;
  double t11991;
  double t11999;
  double t12740;
  double t12810;
  double t12811;
  double t15511;
  double t15513;
  double t15518;
  double t15630;
  double t15655;
  double t15679;
  double t13681;
  double t13811;
  double t13839;
  double t13947;
  double t14100;
  double t14127;
  double t15686;
  double t15690;
  double t15694;
  double t15706;
  double t15711;
  double t15712;
  double t14432;
  double t14436;
  double t14442;
  double t14467;
  double t14477;
  double t14481;
  double t15714;
  double t15718;
  double t15719;
  double t15761;
  double t15802;
  double t15821;
  double t14498;
  double t14504;
  double t14521;
  double t15876;
  double t15926;
  double t15941;
  double t15967;
  double t15975;
  double t15976;
  double t16079;
  double t16080;
  double t16084;
  double t16130;
  double t16156;
  double t16170;
  double t16182;
  double t16190;
  double t16194;
  double t16206;
  double t16207;
  double t16208;
  double t16211;
  double t16212;
  double t16214;
  double t16272;
  double t16273;
  double t16274;
  double t16308;
  double t16309;
  double t16320;
  double t16328;
  double t16332;
  double t16336;
  double t16338;
  double t16339;
  double t16340;
  double t16426;
  double t16460;
  double t16492;
  double t16551;
  double t16567;
  double t16581;
  double t16700;
  double t16701;
  double t16706;
  double t16731;
  double t16757;
  double t16775;
  t203 = Cos(var1[4]);
  t220 = Cos(var1[6]);
  t606 = Sin(var1[5]);
  t618 = Sin(var1[4]);
  t635 = Sin(var1[6]);
  t843 = Cos(var1[7]);
  t860 = -1.*t843;
  t880 = 1. + t860;
  t902 = Sin(var1[7]);
  t768 = -1.*t203*t220*t606;
  t778 = t618*t635;
  t798 = t768 + t778;
  t1815 = Cos(var1[5]);
  t4886 = Cos(var1[8]);
  t5023 = -1.*t4886;
  t5615 = 1. + t5023;
  t6213 = Sin(var1[8]);
  t3506 = t203*t1815*t843;
  t4596 = t798*t902;
  t4674 = t3506 + t4596;
  t10388 = t220*t618;
  t10392 = t203*t606*t635;
  t10397 = t10388 + t10392;
  t10809 = Cos(var1[9]);
  t10816 = -1.*t10809;
  t10834 = 1. + t10816;
  t10968 = Sin(var1[9]);
  t11306 = t4886*t4674;
  t11432 = t10397*t6213;
  t11673 = t11306 + t11432;
  t12019 = t4886*t10397;
  t12026 = -1.*t4674*t6213;
  t12031 = t12019 + t12026;
  t12296 = Cos(var1[10]);
  t12623 = -1.*t12296;
  t12706 = 1. + t12623;
  t12795 = Sin(var1[10]);
  t12982 = -1.*t10968*t11673;
  t13472 = t10809*t12031;
  t13551 = t12982 + t13472;
  t13842 = t10809*t11673;
  t13844 = t10968*t12031;
  t13845 = t13842 + t13844;
  t13859 = Cos(var1[11]);
  t13860 = -1.*t13859;
  t13913 = 1. + t13860;
  t13950 = Sin(var1[11]);
  t14351 = t12795*t13551;
  t14403 = t12296*t13845;
  t14414 = t14351 + t14403;
  t14445 = t12296*t13551;
  t14446 = -1.*t12795*t13845;
  t14449 = t14445 + t14446;
  t14451 = Cos(var1[13]);
  t14456 = -1.*t14451;
  t14460 = 1. + t14456;
  t14471 = Sin(var1[13]);
  t14487 = -1.*t13950*t14414;
  t14489 = t13859*t14449;
  t14490 = t14487 + t14489;
  t14533 = t13859*t14414;
  t14535 = t13950*t14449;
  t14604 = t14533 + t14535;
  t565 = -1.*t220;
  t571 = 1. + t565;
  t580 = 0.135*t571;
  t581 = 0. + t580;
  t15144 = Sin(var1[3]);
  t647 = -0.135*t635;
  t679 = 0. + t647;
  t15097 = Cos(var1[3]);
  t15116 = t15097*t1815;
  t15145 = -1.*t15144*t618*t606;
  t15148 = t15116 + t15145;
  t898 = 0.135*t880;
  t988 = 0.049*t902;
  t1449 = 0. + t898 + t988;
  t1823 = -0.049*t880;
  t1954 = 0.135*t902;
  t1987 = 0. + t1823 + t1954;
  t15161 = t220*t15148;
  t15170 = -1.*t203*t15144*t635;
  t15176 = t15161 + t15170;
  t15193 = t1815*t15144*t618;
  t15198 = t15097*t606;
  t15205 = t15193 + t15198;
  t6206 = -0.049*t5615;
  t7386 = -0.09*t6213;
  t9501 = 0. + t6206 + t7386;
  t10735 = -0.09*t5615;
  t10751 = 0.049*t6213;
  t10757 = 0. + t10735 + t10751;
  t10942 = -0.049*t10834;
  t10982 = -0.21*t10968;
  t11131 = 0. + t10942 + t10982;
  t15474 = t843*t15205;
  t15477 = t15176*t902;
  t15483 = t15474 + t15477;
  t15500 = -1.*t203*t220*t15144;
  t15505 = -1.*t15148*t635;
  t15509 = t15500 + t15505;
  t11975 = -0.21*t10834;
  t11991 = 0.049*t10968;
  t11999 = 0. + t11975 + t11991;
  t12740 = -0.27068*t12706;
  t12810 = 0.00159*t12795;
  t12811 = 0. + t12740 + t12810;
  t15511 = t4886*t15483;
  t15513 = t15509*t6213;
  t15518 = t15511 + t15513;
  t15630 = t4886*t15509;
  t15655 = -1.*t15483*t6213;
  t15679 = t15630 + t15655;
  t13681 = -0.00159*t12706;
  t13811 = -0.27068*t12795;
  t13839 = 0. + t13681 + t13811;
  t13947 = 0.01841*t13913;
  t14100 = -0.70544*t13950;
  t14127 = 0. + t13947 + t14100;
  t15686 = -1.*t10968*t15518;
  t15690 = t10809*t15679;
  t15694 = t15686 + t15690;
  t15706 = t10809*t15518;
  t15711 = t10968*t15679;
  t15712 = t15706 + t15711;
  t14432 = -0.70544*t13913;
  t14436 = -0.01841*t13950;
  t14442 = 0. + t14432 + t14436;
  t14467 = -1.11344*t14460;
  t14477 = 0.02159*t14471;
  t14481 = 0. + t14467 + t14477;
  t15714 = t12795*t15694;
  t15718 = t12296*t15712;
  t15719 = t15714 + t15718;
  t15761 = t12296*t15694;
  t15802 = -1.*t12795*t15712;
  t15821 = t15761 + t15802;
  t14498 = -0.02159*t14460;
  t14504 = -1.11344*t14471;
  t14521 = 0. + t14498 + t14504;
  t15876 = -1.*t13950*t15719;
  t15926 = t13859*t15821;
  t15941 = t15876 + t15926;
  t15967 = t13859*t15719;
  t15975 = t13950*t15821;
  t15976 = t15967 + t15975;
  t16079 = t1815*t15144;
  t16080 = t15097*t618*t606;
  t16084 = t16079 + t16080;
  t16130 = t220*t16084;
  t16156 = t15097*t203*t635;
  t16170 = t16130 + t16156;
  t16182 = -1.*t15097*t1815*t618;
  t16190 = t15144*t606;
  t16194 = t16182 + t16190;
  t16206 = t843*t16194;
  t16207 = t16170*t902;
  t16208 = t16206 + t16207;
  t16211 = t15097*t203*t220;
  t16212 = -1.*t16084*t635;
  t16214 = t16211 + t16212;
  t16272 = t4886*t16208;
  t16273 = t16214*t6213;
  t16274 = t16272 + t16273;
  t16308 = t4886*t16214;
  t16309 = -1.*t16208*t6213;
  t16320 = t16308 + t16309;
  t16328 = -1.*t10968*t16274;
  t16332 = t10809*t16320;
  t16336 = t16328 + t16332;
  t16338 = t10809*t16274;
  t16339 = t10968*t16320;
  t16340 = t16338 + t16339;
  t16426 = t12795*t16336;
  t16460 = t12296*t16340;
  t16492 = t16426 + t16460;
  t16551 = t12296*t16336;
  t16567 = -1.*t12795*t16340;
  t16581 = t16551 + t16567;
  t16700 = -1.*t13950*t16492;
  t16701 = t13859*t16581;
  t16706 = t16700 + t16701;
  t16731 = t13859*t16492;
  t16757 = t13950*t16581;
  t16775 = t16731 + t16757;
  p_output1[0]=0. + t10397*t10757 + t11131*t11673 + t11999*t12031 + t12811*t13551 + t13839*t13845 + t14127*t14414 + t14442*t14449 + t14481*t14490 + t14521*t14604 + 0.075595*(t14471*t14490 + t14451*t14604) - 1.077437*(t14451*t14490 - 1.*t14471*t14604) + t1815*t1987*t203 - 1.*t203*t581*t606 + t618*t679 + t1449*t798 + 0.1305*(t798*t843 - 1.*t1815*t203*t902) + t4674*t9501 + var1[0];
  p_output1[1]=0. + t1449*t15176 + t10757*t15509 + t11131*t15518 + t11999*t15679 + t12811*t15694 + t13839*t15712 + t14127*t15719 + t14442*t15821 + t14481*t15941 + t14521*t15976 + 0.075595*(t14471*t15941 + t14451*t15976) - 1.077437*(t14451*t15941 - 1.*t14471*t15976) + t15205*t1987 + t15148*t581 - 1.*t15144*t203*t679 + 0.1305*(t15176*t843 - 1.*t15205*t902) + t15483*t9501 + var1[1];
  p_output1[2]=0. + t1449*t16170 + t10757*t16214 + t11131*t16274 + t11999*t16320 + t12811*t16336 + t13839*t16340 + t14127*t16492 + t14442*t16581 + t14481*t16706 + t14521*t16775 + 0.075595*(t14471*t16706 + t14451*t16775) - 1.077437*(t14451*t16706 - 1.*t14471*t16775) + t16194*t1987 + t16084*t581 + t15097*t203*t679 + 0.1305*(t16170*t843 - 1.*t16194*t902) + t16208*t9501 + var1[2];
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

void p_leftToe_constraint_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




