/*
 * Automatically Generated from Mathematica.
 * Sun 7 Nov 2021 14:27:16 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "p_leftHeel_constraint.hh"
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
  double t132;
  double t171;
  double t282;
  double t340;
  double t345;
  double t541;
  double t660;
  double t674;
  double t720;
  double t444;
  double t446;
  double t508;
  double t886;
  double t1212;
  double t1224;
  double t1225;
  double t1263;
  double t1145;
  double t1146;
  double t1199;
  double t1358;
  double t1367;
  double t1408;
  double t1439;
  double t1469;
  double t1472;
  double t1506;
  double t1588;
  double t1603;
  double t1623;
  double t1728;
  double t1735;
  double t1746;
  double t1759;
  double t1789;
  double t1827;
  double t1840;
  double t1859;
  double t1860;
  double t1891;
  double t1988;
  double t1993;
  double t2016;
  double t2040;
  double t2046;
  double t2052;
  double t2088;
  double t2099;
  double t2105;
  double t2111;
  double t2138;
  double t2147;
  double t2149;
  double t2152;
  double t2156;
  double t2170;
  double t2203;
  double t2238;
  double t2248;
  double t2262;
  double t2310;
  double t2312;
  double t2323;
  double t177;
  double t222;
  double t249;
  double t274;
  double t2388;
  double t394;
  double t436;
  double t2382;
  double t2383;
  double t2397;
  double t2408;
  double t686;
  double t845;
  double t861;
  double t897;
  double t903;
  double t905;
  double t2418;
  double t2429;
  double t2433;
  double t2517;
  double t2518;
  double t2519;
  double t1239;
  double t1276;
  double t1297;
  double t1415;
  double t1422;
  double t1432;
  double t1479;
  double t1577;
  double t1586;
  double t2667;
  double t2705;
  double t2752;
  double t2814;
  double t2852;
  double t2853;
  double t1669;
  double t1681;
  double t1695;
  double t1831;
  double t1852;
  double t1858;
  double t2857;
  double t2858;
  double t2873;
  double t2910;
  double t2929;
  double t2935;
  double t1928;
  double t1940;
  double t1987;
  double t2072;
  double t2094;
  double t2097;
  double t2937;
  double t2938;
  double t2939;
  double t2948;
  double t2949;
  double t2952;
  double t2120;
  double t2125;
  double t2128;
  double t2182;
  double t2230;
  double t2232;
  double t2967;
  double t2968;
  double t2975;
  double t2992;
  double t3039;
  double t3056;
  double t2274;
  double t2279;
  double t2299;
  double t3087;
  double t3093;
  double t3100;
  double t3122;
  double t3126;
  double t3129;
  double t3189;
  double t3190;
  double t3200;
  double t3219;
  double t3221;
  double t3223;
  double t3250;
  double t3256;
  double t3261;
  double t3335;
  double t3336;
  double t3337;
  double t3384;
  double t3390;
  double t3391;
  double t3398;
  double t3401;
  double t3405;
  double t3436;
  double t3456;
  double t3465;
  double t3473;
  double t3477;
  double t3490;
  double t3546;
  double t3586;
  double t3594;
  double t3610;
  double t3615;
  double t3622;
  double t3637;
  double t3670;
  double t3679;
  double t3723;
  double t3741;
  double t3768;
  double t3806;
  double t3809;
  double t3832;
  t132 = Cos(var1[4]);
  t171 = Cos(var1[6]);
  t282 = Sin(var1[5]);
  t340 = Sin(var1[4]);
  t345 = Sin(var1[6]);
  t541 = Cos(var1[7]);
  t660 = -1.*t541;
  t674 = 1. + t660;
  t720 = Sin(var1[7]);
  t444 = -1.*t132*t171*t282;
  t446 = t340*t345;
  t508 = t444 + t446;
  t886 = Cos(var1[5]);
  t1212 = Cos(var1[8]);
  t1224 = -1.*t1212;
  t1225 = 1. + t1224;
  t1263 = Sin(var1[8]);
  t1145 = t132*t886*t541;
  t1146 = t508*t720;
  t1199 = t1145 + t1146;
  t1358 = t171*t340;
  t1367 = t132*t282*t345;
  t1408 = t1358 + t1367;
  t1439 = Cos(var1[9]);
  t1469 = -1.*t1439;
  t1472 = 1. + t1469;
  t1506 = Sin(var1[9]);
  t1588 = t1212*t1199;
  t1603 = t1408*t1263;
  t1623 = t1588 + t1603;
  t1728 = t1212*t1408;
  t1735 = -1.*t1199*t1263;
  t1746 = t1728 + t1735;
  t1759 = Cos(var1[10]);
  t1789 = -1.*t1759;
  t1827 = 1. + t1789;
  t1840 = Sin(var1[10]);
  t1859 = -1.*t1506*t1623;
  t1860 = t1439*t1746;
  t1891 = t1859 + t1860;
  t1988 = t1439*t1623;
  t1993 = t1506*t1746;
  t2016 = t1988 + t1993;
  t2040 = Cos(var1[11]);
  t2046 = -1.*t2040;
  t2052 = 1. + t2046;
  t2088 = Sin(var1[11]);
  t2099 = t1840*t1891;
  t2105 = t1759*t2016;
  t2111 = t2099 + t2105;
  t2138 = t1759*t1891;
  t2147 = -1.*t1840*t2016;
  t2149 = t2138 + t2147;
  t2152 = Cos(var1[13]);
  t2156 = -1.*t2152;
  t2170 = 1. + t2156;
  t2203 = Sin(var1[13]);
  t2238 = -1.*t2088*t2111;
  t2248 = t2040*t2149;
  t2262 = t2238 + t2248;
  t2310 = t2040*t2111;
  t2312 = t2088*t2149;
  t2323 = t2310 + t2312;
  t177 = -1.*t171;
  t222 = 1. + t177;
  t249 = 0.135*t222;
  t274 = 0. + t249;
  t2388 = Sin(var1[3]);
  t394 = -0.135*t345;
  t436 = 0. + t394;
  t2382 = Cos(var1[3]);
  t2383 = t2382*t886;
  t2397 = -1.*t2388*t340*t282;
  t2408 = t2383 + t2397;
  t686 = 0.135*t674;
  t845 = 0.049*t720;
  t861 = 0. + t686 + t845;
  t897 = -0.049*t674;
  t903 = 0.135*t720;
  t905 = 0. + t897 + t903;
  t2418 = t171*t2408;
  t2429 = -1.*t132*t2388*t345;
  t2433 = t2418 + t2429;
  t2517 = t886*t2388*t340;
  t2518 = t2382*t282;
  t2519 = t2517 + t2518;
  t1239 = -0.049*t1225;
  t1276 = -0.09*t1263;
  t1297 = 0. + t1239 + t1276;
  t1415 = -0.09*t1225;
  t1422 = 0.049*t1263;
  t1432 = 0. + t1415 + t1422;
  t1479 = -0.049*t1472;
  t1577 = -0.21*t1506;
  t1586 = 0. + t1479 + t1577;
  t2667 = t541*t2519;
  t2705 = t2433*t720;
  t2752 = t2667 + t2705;
  t2814 = -1.*t132*t171*t2388;
  t2852 = -1.*t2408*t345;
  t2853 = t2814 + t2852;
  t1669 = -0.21*t1472;
  t1681 = 0.049*t1506;
  t1695 = 0. + t1669 + t1681;
  t1831 = -0.27068*t1827;
  t1852 = 0.00159*t1840;
  t1858 = 0. + t1831 + t1852;
  t2857 = t1212*t2752;
  t2858 = t2853*t1263;
  t2873 = t2857 + t2858;
  t2910 = t1212*t2853;
  t2929 = -1.*t2752*t1263;
  t2935 = t2910 + t2929;
  t1928 = -0.00159*t1827;
  t1940 = -0.27068*t1840;
  t1987 = 0. + t1928 + t1940;
  t2072 = 0.01841*t2052;
  t2094 = -0.70544*t2088;
  t2097 = 0. + t2072 + t2094;
  t2937 = -1.*t1506*t2873;
  t2938 = t1439*t2935;
  t2939 = t2937 + t2938;
  t2948 = t1439*t2873;
  t2949 = t1506*t2935;
  t2952 = t2948 + t2949;
  t2120 = -0.70544*t2052;
  t2125 = -0.01841*t2088;
  t2128 = 0. + t2120 + t2125;
  t2182 = -1.11344*t2170;
  t2230 = 0.02159*t2203;
  t2232 = 0. + t2182 + t2230;
  t2967 = t1840*t2939;
  t2968 = t1759*t2952;
  t2975 = t2967 + t2968;
  t2992 = t1759*t2939;
  t3039 = -1.*t1840*t2952;
  t3056 = t2992 + t3039;
  t2274 = -0.02159*t2170;
  t2279 = -1.11344*t2203;
  t2299 = 0. + t2274 + t2279;
  t3087 = -1.*t2088*t2975;
  t3093 = t2040*t3056;
  t3100 = t3087 + t3093;
  t3122 = t2040*t2975;
  t3126 = t2088*t3056;
  t3129 = t3122 + t3126;
  t3189 = t886*t2388;
  t3190 = t2382*t340*t282;
  t3200 = t3189 + t3190;
  t3219 = t171*t3200;
  t3221 = t2382*t132*t345;
  t3223 = t3219 + t3221;
  t3250 = -1.*t2382*t886*t340;
  t3256 = t2388*t282;
  t3261 = t3250 + t3256;
  t3335 = t541*t3261;
  t3336 = t3223*t720;
  t3337 = t3335 + t3336;
  t3384 = t2382*t132*t171;
  t3390 = -1.*t3200*t345;
  t3391 = t3384 + t3390;
  t3398 = t1212*t3337;
  t3401 = t3391*t1263;
  t3405 = t3398 + t3401;
  t3436 = t1212*t3391;
  t3456 = -1.*t3337*t1263;
  t3465 = t3436 + t3456;
  t3473 = -1.*t1506*t3405;
  t3477 = t1439*t3465;
  t3490 = t3473 + t3477;
  t3546 = t1439*t3405;
  t3586 = t1506*t3465;
  t3594 = t3546 + t3586;
  t3610 = t1840*t3490;
  t3615 = t1759*t3594;
  t3622 = t3610 + t3615;
  t3637 = t1759*t3490;
  t3670 = -1.*t1840*t3594;
  t3679 = t3637 + t3670;
  t3723 = -1.*t2088*t3622;
  t3741 = t2040*t3679;
  t3768 = t3723 + t3741;
  t3806 = t2040*t3622;
  t3809 = t2088*t3679;
  t3832 = t3806 + t3809;
  p_output1[0]=0. + t1199*t1297 + t1408*t1432 + t1586*t1623 + t1695*t1746 + t1858*t1891 + t1987*t2016 + t2097*t2111 + t2128*t2149 + t2232*t2262 + t2299*t2323 - 0.014395*(t2203*t2262 + t2152*t2323) - 1.184683*(t2152*t2262 - 1.*t2203*t2323) - 1.*t132*t274*t282 + t340*t436 + t508*t861 + 0.1305*(t508*t541 - 1.*t132*t720*t886) + t132*t886*t905 + var1[0];
  p_output1[1]=0. + t2408*t274 + t1297*t2752 + t1432*t2853 + t1586*t2873 + t1695*t2935 + t1858*t2939 + t1987*t2952 + t2097*t2975 + t2128*t3056 + t2232*t3100 + t2299*t3129 - 0.014395*(t2203*t3100 + t2152*t3129) - 1.184683*(t2152*t3100 - 1.*t2203*t3129) - 1.*t132*t2388*t436 + 0.1305*(t2433*t541 - 1.*t2519*t720) + t2433*t861 + t2519*t905 + var1[1];
  p_output1[2]=0. + t274*t3200 + t1297*t3337 + t1432*t3391 + t1586*t3405 + t1695*t3465 + t1858*t3490 + t1987*t3594 + t2097*t3622 + t2128*t3679 + t2232*t3768 + t2299*t3832 - 0.014395*(t2203*t3768 + t2152*t3832) - 1.184683*(t2152*t3768 - 1.*t2203*t3832) + t132*t2382*t436 + 0.1305*(t3223*t541 - 1.*t3261*t720) + t3223*t861 + t3261*t905 + var1[2];
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

void p_leftHeel_constraint_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




