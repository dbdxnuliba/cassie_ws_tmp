/*
 * Automatically Generated from Mathematica.
 * Sun 7 Nov 2021 14:26:03 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "p_leftToe.hh"
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
  double t1079;
  double t1633;
  double t3600;
  double t4214;
  double t4270;
  double t4375;
  double t4376;
  double t4434;
  double t4523;
  double t4348;
  double t4367;
  double t4374;
  double t4616;
  double t4727;
  double t4732;
  double t4750;
  double t4756;
  double t4713;
  double t4717;
  double t4721;
  double t4785;
  double t4791;
  double t4801;
  double t4841;
  double t4846;
  double t4851;
  double t4876;
  double t4884;
  double t4888;
  double t4891;
  double t4936;
  double t4945;
  double t4971;
  double t5000;
  double t5004;
  double t5009;
  double t5021;
  double t5027;
  double t5028;
  double t5029;
  double t5036;
  double t5037;
  double t5038;
  double t5040;
  double t5041;
  double t5042;
  double t5058;
  double t5096;
  double t5113;
  double t5118;
  double t5169;
  double t5171;
  double t5172;
  double t5175;
  double t5176;
  double t5177;
  double t5180;
  double t5185;
  double t5186;
  double t5187;
  double t5209;
  double t5221;
  double t5233;
  double t2458;
  double t3586;
  double t5308;
  double t5305;
  double t5306;
  double t5309;
  double t5310;
  double t4493;
  double t4543;
  double t4551;
  double t4650;
  double t4692;
  double t4693;
  double t5313;
  double t5318;
  double t5328;
  double t5338;
  double t5342;
  double t5348;
  double t4755;
  double t4761;
  double t4768;
  double t4806;
  double t4810;
  double t4818;
  double t4855;
  double t4877;
  double t4878;
  double t5376;
  double t5379;
  double t5383;
  double t5387;
  double t5388;
  double t5389;
  double t4924;
  double t4928;
  double t4935;
  double t5015;
  double t5022;
  double t5026;
  double t5395;
  double t5399;
  double t5403;
  double t5422;
  double t5426;
  double t5430;
  double t5033;
  double t5034;
  double t5035;
  double t5047;
  double t5076;
  double t5084;
  double t5438;
  double t5444;
  double t5448;
  double t5455;
  double t5459;
  double t5463;
  double t5156;
  double t5165;
  double t5167;
  double t5179;
  double t5182;
  double t5183;
  double t5465;
  double t5466;
  double t5468;
  double t5473;
  double t5475;
  double t5476;
  double t5193;
  double t5198;
  double t5204;
  double t5489;
  double t5491;
  double t5493;
  double t5503;
  double t5508;
  double t5512;
  double t5536;
  double t5537;
  double t5538;
  double t5550;
  double t5551;
  double t5552;
  double t5554;
  double t5555;
  double t5556;
  double t5584;
  double t5585;
  double t5586;
  double t5589;
  double t5590;
  double t5591;
  double t5594;
  double t5595;
  double t5596;
  double t5600;
  double t5601;
  double t5602;
  double t5605;
  double t5606;
  double t5608;
  double t5618;
  double t5623;
  double t5629;
  double t5639;
  double t5641;
  double t5642;
  double t5644;
  double t5645;
  double t5646;
  double t5648;
  double t5649;
  double t5654;
  double t5657;
  double t5658;
  double t5659;
  t1079 = Cos(var1[4]);
  t1633 = Cos(var1[6]);
  t3600 = Sin(var1[5]);
  t4214 = Sin(var1[4]);
  t4270 = Sin(var1[6]);
  t4375 = Cos(var1[7]);
  t4376 = -1.*t4375;
  t4434 = 1. + t4376;
  t4523 = Sin(var1[7]);
  t4348 = -1.*t1079*t1633*t3600;
  t4367 = t4214*t4270;
  t4374 = t4348 + t4367;
  t4616 = Cos(var1[5]);
  t4727 = Cos(var1[8]);
  t4732 = -1.*t4727;
  t4750 = 1. + t4732;
  t4756 = Sin(var1[8]);
  t4713 = t1079*t4616*t4375;
  t4717 = t4374*t4523;
  t4721 = t4713 + t4717;
  t4785 = t1633*t4214;
  t4791 = t1079*t3600*t4270;
  t4801 = t4785 + t4791;
  t4841 = Cos(var1[9]);
  t4846 = -1.*t4841;
  t4851 = 1. + t4846;
  t4876 = Sin(var1[9]);
  t4884 = t4727*t4721;
  t4888 = t4801*t4756;
  t4891 = t4884 + t4888;
  t4936 = t4727*t4801;
  t4945 = -1.*t4721*t4756;
  t4971 = t4936 + t4945;
  t5000 = Cos(var1[10]);
  t5004 = -1.*t5000;
  t5009 = 1. + t5004;
  t5021 = Sin(var1[10]);
  t5027 = -1.*t4876*t4891;
  t5028 = t4841*t4971;
  t5029 = t5027 + t5028;
  t5036 = t4841*t4891;
  t5037 = t4876*t4971;
  t5038 = t5036 + t5037;
  t5040 = Cos(var1[11]);
  t5041 = -1.*t5040;
  t5042 = 1. + t5041;
  t5058 = Sin(var1[11]);
  t5096 = t5021*t5029;
  t5113 = t5000*t5038;
  t5118 = t5096 + t5113;
  t5169 = t5000*t5029;
  t5171 = -1.*t5021*t5038;
  t5172 = t5169 + t5171;
  t5175 = Cos(var1[13]);
  t5176 = -1.*t5175;
  t5177 = 1. + t5176;
  t5180 = Sin(var1[13]);
  t5185 = -1.*t5058*t5118;
  t5186 = t5040*t5172;
  t5187 = t5185 + t5186;
  t5209 = t5040*t5118;
  t5221 = t5058*t5172;
  t5233 = t5209 + t5221;
  t2458 = -1.*t1633;
  t3586 = 1. + t2458;
  t5308 = Sin(var1[3]);
  t5305 = Cos(var1[3]);
  t5306 = t5305*t4616;
  t5309 = -1.*t5308*t4214*t3600;
  t5310 = t5306 + t5309;
  t4493 = 0.135*t4434;
  t4543 = 0.049*t4523;
  t4551 = t4493 + t4543;
  t4650 = -0.049*t4434;
  t4692 = 0.135*t4523;
  t4693 = t4650 + t4692;
  t5313 = t1633*t5310;
  t5318 = -1.*t1079*t5308*t4270;
  t5328 = t5313 + t5318;
  t5338 = t4616*t5308*t4214;
  t5342 = t5305*t3600;
  t5348 = t5338 + t5342;
  t4755 = -0.049*t4750;
  t4761 = -0.09*t4756;
  t4768 = t4755 + t4761;
  t4806 = -0.09*t4750;
  t4810 = 0.049*t4756;
  t4818 = t4806 + t4810;
  t4855 = -0.049*t4851;
  t4877 = -0.21*t4876;
  t4878 = t4855 + t4877;
  t5376 = t4375*t5348;
  t5379 = t5328*t4523;
  t5383 = t5376 + t5379;
  t5387 = -1.*t1079*t1633*t5308;
  t5388 = -1.*t5310*t4270;
  t5389 = t5387 + t5388;
  t4924 = -0.21*t4851;
  t4928 = 0.049*t4876;
  t4935 = t4924 + t4928;
  t5015 = -0.27068*t5009;
  t5022 = 0.00159*t5021;
  t5026 = t5015 + t5022;
  t5395 = t4727*t5383;
  t5399 = t5389*t4756;
  t5403 = t5395 + t5399;
  t5422 = t4727*t5389;
  t5426 = -1.*t5383*t4756;
  t5430 = t5422 + t5426;
  t5033 = -0.00159*t5009;
  t5034 = -0.27068*t5021;
  t5035 = t5033 + t5034;
  t5047 = 0.01841*t5042;
  t5076 = -0.70544*t5058;
  t5084 = t5047 + t5076;
  t5438 = -1.*t4876*t5403;
  t5444 = t4841*t5430;
  t5448 = t5438 + t5444;
  t5455 = t4841*t5403;
  t5459 = t4876*t5430;
  t5463 = t5455 + t5459;
  t5156 = -0.70544*t5042;
  t5165 = -0.01841*t5058;
  t5167 = t5156 + t5165;
  t5179 = -1.11344*t5177;
  t5182 = 0.02159*t5180;
  t5183 = t5179 + t5182;
  t5465 = t5021*t5448;
  t5466 = t5000*t5463;
  t5468 = t5465 + t5466;
  t5473 = t5000*t5448;
  t5475 = -1.*t5021*t5463;
  t5476 = t5473 + t5475;
  t5193 = -0.02159*t5177;
  t5198 = -1.11344*t5180;
  t5204 = t5193 + t5198;
  t5489 = -1.*t5058*t5468;
  t5491 = t5040*t5476;
  t5493 = t5489 + t5491;
  t5503 = t5040*t5468;
  t5508 = t5058*t5476;
  t5512 = t5503 + t5508;
  t5536 = t4616*t5308;
  t5537 = t5305*t4214*t3600;
  t5538 = t5536 + t5537;
  t5550 = t1633*t5538;
  t5551 = t5305*t1079*t4270;
  t5552 = t5550 + t5551;
  t5554 = -1.*t5305*t4616*t4214;
  t5555 = t5308*t3600;
  t5556 = t5554 + t5555;
  t5584 = t4375*t5556;
  t5585 = t5552*t4523;
  t5586 = t5584 + t5585;
  t5589 = t5305*t1079*t1633;
  t5590 = -1.*t5538*t4270;
  t5591 = t5589 + t5590;
  t5594 = t4727*t5586;
  t5595 = t5591*t4756;
  t5596 = t5594 + t5595;
  t5600 = t4727*t5591;
  t5601 = -1.*t5586*t4756;
  t5602 = t5600 + t5601;
  t5605 = -1.*t4876*t5596;
  t5606 = t4841*t5602;
  t5608 = t5605 + t5606;
  t5618 = t4841*t5596;
  t5623 = t4876*t5602;
  t5629 = t5618 + t5623;
  t5639 = t5021*t5608;
  t5641 = t5000*t5629;
  t5642 = t5639 + t5641;
  t5644 = t5000*t5608;
  t5645 = -1.*t5021*t5629;
  t5646 = t5644 + t5645;
  t5648 = -1.*t5058*t5642;
  t5649 = t5040*t5646;
  t5654 = t5648 + t5649;
  t5657 = t5040*t5642;
  t5658 = t5058*t5646;
  t5659 = t5657 + t5658;
  p_output1[0]=-0.135*t1079*t3586*t3600 - 0.135*t4214*t4270 + t4374*t4551 + 0.1305*(t4374*t4375 - 1.*t1079*t4523*t4616) + t1079*t4616*t4693 + t4721*t4768 + t4801*t4818 + t4878*t4891 + t4935*t4971 + t5026*t5029 + t5035*t5038 + t5084*t5118 + t5167*t5172 + t5183*t5187 + t5204*t5233 - 0.02159*(t5180*t5187 + t5175*t5233) - 1.11344*(t5175*t5187 - 1.*t5180*t5233) + var1[0];
  p_output1[1]=0.135*t1079*t4270*t5308 + 0.135*t3586*t5310 + t4551*t5328 + t4693*t5348 + 0.1305*(t4375*t5328 - 1.*t4523*t5348) + t4768*t5383 + t4818*t5389 + t4878*t5403 + t4935*t5430 + t5026*t5448 + t5035*t5463 + t5084*t5468 + t5167*t5476 + t5183*t5493 + t5204*t5512 - 0.02159*(t5180*t5493 + t5175*t5512) - 1.11344*(t5175*t5493 - 1.*t5180*t5512) + var1[1];
  p_output1[2]=-0.135*t1079*t4270*t5305 + 0.135*t3586*t5538 + t4551*t5552 + t4693*t5556 + 0.1305*(t4375*t5552 - 1.*t4523*t5556) + t4768*t5586 + t4818*t5591 + t4878*t5596 + t4935*t5602 + t5026*t5608 + t5035*t5629 + t5084*t5642 + t5167*t5646 + t5183*t5654 + t5204*t5659 - 0.02159*(t5180*t5654 + t5175*t5659) - 1.11344*(t5175*t5654 - 1.*t5180*t5659) + var1[2];
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

void p_leftToe_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




