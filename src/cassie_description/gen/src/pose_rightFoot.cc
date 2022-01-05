/*
 * Automatically Generated from Mathematica.
 * Sun 7 Nov 2021 14:25:59 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "pose_rightFoot.hh"
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
  double t1566;
  double t740;
  double t756;
  double t801;
  double t1529;
  double t1568;
  double t331;
  double t1991;
  double t2033;
  double t2068;
  double t2119;
  double t1949;
  double t2182;
  double t2192;
  double t2200;
  double t2207;
  double t2213;
  double t2217;
  double t2232;
  double t2245;
  double t2255;
  double t2262;
  double t2307;
  double t2341;
  double t2343;
  double t2345;
  double t2349;
  double t2350;
  double t2359;
  double t2397;
  double t2409;
  double t2424;
  double t2489;
  double t2504;
  double t2507;
  double t2509;
  double t2510;
  double t2511;
  double t2513;
  double t2518;
  double t2519;
  double t2520;
  double t2537;
  double t2539;
  double t2559;
  double t2591;
  double t2618;
  double t2638;
  double t2673;
  double t2689;
  double t2690;
  double t2695;
  double t2703;
  double t2705;
  double t2707;
  double t2116;
  double t2120;
  double t2123;
  double t2774;
  double t2804;
  double t1720;
  double t1789;
  double t1872;
  double t900;
  double t1557;
  double t1558;
  double t2150;
  double t2156;
  double t2162;
  double t2846;
  double t2847;
  double t2850;
  double t2227;
  double t2238;
  double t2244;
  double t2828;
  double t2839;
  double t2840;
  double t2863;
  double t2864;
  double t2868;
  double t2287;
  double t2295;
  double t2299;
  double t2353;
  double t2364;
  double t2387;
  double t2885;
  double t2889;
  double t2896;
  double t2907;
  double t2912;
  double t2927;
  double t2472;
  double t2476;
  double t2481;
  double t2512;
  double t2514;
  double t2517;
  double t2933;
  double t2939;
  double t2943;
  double t2945;
  double t2948;
  double t2949;
  double t2523;
  double t2524;
  double t2525;
  double t2651;
  double t2687;
  double t2688;
  double t2963;
  double t2967;
  double t2968;
  double t2973;
  double t2990;
  double t2998;
  double t2699;
  double t2700;
  double t2701;
  double t3007;
  double t3013;
  double t3017;
  double t3028;
  double t3035;
  double t3036;
  double t2741;
  double t2758;
  double t3086;
  double t3087;
  double t3100;
  double t3114;
  double t3120;
  double t3126;
  double t3140;
  double t3141;
  double t3143;
  double t3151;
  double t3152;
  double t3156;
  double t3166;
  double t3168;
  double t3169;
  double t3172;
  double t3173;
  double t3174;
  double t3186;
  double t3195;
  double t3201;
  double t3213;
  double t3214;
  double t3215;
  double t3217;
  double t3218;
  double t3221;
  double t3223;
  double t3224;
  double t3225;
  double t3231;
  double t3232;
  double t3234;
  double t3241;
  double t3242;
  double t3243;
  double t3252;
  double t3256;
  double t3261;
  double t3145;
  double t3146;
  double t3149;
  double t2710;
  double t2711;
  double t2713;
  double t2715;
  double t2721;
  double t2723;
  double t3038;
  double t3041;
  double t3047;
  double t3061;
  double t3063;
  double t3066;
  double t2871;
  double t2872;
  double t2873;
  double t3272;
  double t3274;
  double t3275;
  double t3327;
  double t3335;
  double t3343;
  double t3347;
  double t2128;
  double t2129;
  double t2136;
  t1566 = Sin(var1[14]);
  t740 = Cos(var1[15]);
  t756 = -1.*t740;
  t801 = 1. + t756;
  t1529 = Sin(var1[15]);
  t1568 = Sin(var1[4]);
  t331 = Cos(var1[4]);
  t1991 = Cos(var1[16]);
  t2033 = -1.*t1991;
  t2068 = 1. + t2033;
  t2119 = Sin(var1[16]);
  t1949 = Cos(var1[14]);
  t2182 = t740*t331;
  t2192 = t1566*t1529*t1568;
  t2200 = t2182 + t2192;
  t2207 = Cos(var1[17]);
  t2213 = -1.*t2207;
  t2217 = 1. + t2213;
  t2232 = Sin(var1[17]);
  t2245 = t1949*t2119*t1568;
  t2255 = t1991*t2200;
  t2262 = t2245 + t2255;
  t2307 = t1949*t1991*t1568;
  t2341 = -1.*t2119*t2200;
  t2343 = t2307 + t2341;
  t2345 = Cos(var1[18]);
  t2349 = -1.*t2345;
  t2350 = 1. + t2349;
  t2359 = Sin(var1[18]);
  t2397 = -1.*t2232*t2262;
  t2409 = t2207*t2343;
  t2424 = t2397 + t2409;
  t2489 = t2207*t2262;
  t2504 = t2232*t2343;
  t2507 = t2489 + t2504;
  t2509 = Cos(var1[19]);
  t2510 = -1.*t2509;
  t2511 = 1. + t2510;
  t2513 = Sin(var1[19]);
  t2518 = t2359*t2424;
  t2519 = t2345*t2507;
  t2520 = t2518 + t2519;
  t2537 = t2345*t2424;
  t2539 = -1.*t2359*t2507;
  t2559 = t2537 + t2539;
  t2591 = Cos(var1[21]);
  t2618 = -1.*t2591;
  t2638 = 1. + t2618;
  t2673 = Sin(var1[21]);
  t2689 = -1.*t2513*t2520;
  t2690 = t2509*t2559;
  t2695 = t2689 + t2690;
  t2703 = t2509*t2520;
  t2705 = t2513*t2559;
  t2707 = t2703 + t2705;
  t2116 = -0.09*t2068;
  t2120 = 0.049*t2119;
  t2123 = t2116 + t2120;
  t2774 = Cos(var1[3]);
  t2804 = Sin(var1[3]);
  t1720 = -0.135*t801;
  t1789 = 0.049*t1529;
  t1872 = t1720 + t1789;
  t900 = -0.049*t801;
  t1557 = -0.135*t1529;
  t1558 = t900 + t1557;
  t2150 = -0.049*t2068;
  t2156 = -0.09*t2119;
  t2162 = t2150 + t2156;
  t2846 = t1949*t2774;
  t2847 = -1.*t331*t1566*t2804;
  t2850 = t2846 + t2847;
  t2227 = -0.049*t2217;
  t2238 = -0.21*t2232;
  t2244 = t2227 + t2238;
  t2828 = -1.*t2774*t1566;
  t2839 = -1.*t1949*t331*t2804;
  t2840 = t2828 + t2839;
  t2863 = t1529*t2850;
  t2864 = t740*t2804*t1568;
  t2868 = t2863 + t2864;
  t2287 = -0.21*t2217;
  t2295 = 0.049*t2232;
  t2299 = t2287 + t2295;
  t2353 = -0.27068*t2350;
  t2364 = 0.00159*t2359;
  t2387 = t2353 + t2364;
  t2885 = t2119*t2840;
  t2889 = t1991*t2868;
  t2896 = t2885 + t2889;
  t2907 = t1991*t2840;
  t2912 = -1.*t2119*t2868;
  t2927 = t2907 + t2912;
  t2472 = -0.00159*t2350;
  t2476 = -0.27068*t2359;
  t2481 = t2472 + t2476;
  t2512 = 0.01841*t2511;
  t2514 = -0.70544*t2513;
  t2517 = t2512 + t2514;
  t2933 = -1.*t2232*t2896;
  t2939 = t2207*t2927;
  t2943 = t2933 + t2939;
  t2945 = t2207*t2896;
  t2948 = t2232*t2927;
  t2949 = t2945 + t2948;
  t2523 = -0.70544*t2511;
  t2524 = -0.01841*t2513;
  t2525 = t2523 + t2524;
  t2651 = -1.11344*t2638;
  t2687 = 0.02159*t2673;
  t2688 = t2651 + t2687;
  t2963 = t2359*t2943;
  t2967 = t2345*t2949;
  t2968 = t2963 + t2967;
  t2973 = t2345*t2943;
  t2990 = -1.*t2359*t2949;
  t2998 = t2973 + t2990;
  t2699 = -0.02159*t2638;
  t2700 = -1.11344*t2673;
  t2701 = t2699 + t2700;
  t3007 = -1.*t2513*t2968;
  t3013 = t2509*t2998;
  t3017 = t3007 + t3013;
  t3028 = t2509*t2968;
  t3035 = t2513*t2998;
  t3036 = t3028 + t3035;
  t2741 = -1.*t1949;
  t2758 = 1. + t2741;
  t3086 = t2774*t331*t1566;
  t3087 = t1949*t2804;
  t3100 = t3086 + t3087;
  t3114 = t1949*t2774*t331;
  t3120 = -1.*t1566*t2804;
  t3126 = t3114 + t3120;
  t3140 = t1529*t3100;
  t3141 = -1.*t740*t2774*t1568;
  t3143 = t3140 + t3141;
  t3151 = t2119*t3126;
  t3152 = t1991*t3143;
  t3156 = t3151 + t3152;
  t3166 = t1991*t3126;
  t3168 = -1.*t2119*t3143;
  t3169 = t3166 + t3168;
  t3172 = -1.*t2232*t3156;
  t3173 = t2207*t3169;
  t3174 = t3172 + t3173;
  t3186 = t2207*t3156;
  t3195 = t2232*t3169;
  t3201 = t3186 + t3195;
  t3213 = t2359*t3174;
  t3214 = t2345*t3201;
  t3215 = t3213 + t3214;
  t3217 = t2345*t3174;
  t3218 = -1.*t2359*t3201;
  t3221 = t3217 + t3218;
  t3223 = -1.*t2513*t3215;
  t3224 = t2509*t3221;
  t3225 = t3223 + t3224;
  t3231 = t2509*t3215;
  t3232 = t2513*t3221;
  t3234 = t3231 + t3232;
  t3241 = t2673*t3225;
  t3242 = t2591*t3234;
  t3243 = t3241 + t3242;
  t3252 = t2591*t3225;
  t3256 = -1.*t2673*t3234;
  t3261 = t3252 + t3256;
  t3145 = t740*t3100;
  t3146 = t2774*t1529*t1568;
  t3149 = t3145 + t3146;
  t2710 = t2673*t2695;
  t2711 = t2591*t2707;
  t2713 = t2710 + t2711;
  t2715 = t2591*t2695;
  t2721 = -1.*t2673*t2707;
  t2723 = t2715 + t2721;
  t3038 = t2673*t3017;
  t3041 = t2591*t3036;
  t3047 = t3038 + t3041;
  t3061 = t2591*t3017;
  t3063 = -1.*t2673*t3036;
  t3066 = t3061 + t3063;
  t2871 = t740*t2850;
  t2872 = -1.*t1529*t2804*t1568;
  t2873 = t2871 + t2872;
  t3272 = -0.766044*t3243;
  t3274 = 0.642788*t3261;
  t3275 = t3272 + t3274;
  t3327 = Power(t3149,2);
  t3335 = Power(t3275,2);
  t3343 = t3327 + t3335;
  t3347 = 1/Sqrt(t3343);
  t2128 = -1.*t331*t1529;
  t2129 = t740*t1566*t1568;
  t2136 = t2128 + t2129;
  p_output1[0]=0.135*t1566*t1568 + t1566*t1568*t1872 + t1568*t1949*t2123 - 0.1305*t2136 + t2162*t2200 + t2244*t2262 + t2299*t2343 + t2387*t2424 + t2481*t2507 + t2517*t2520 + t2525*t2559 + t2688*t2695 + t2701*t2707 + 0.0306*t2713 - 1.13106*t2723 + t1558*t331 + var1[0];
  p_output1[1]=-0.135*t2758*t2774 + t1558*t1568*t2804 + t2123*t2840 + t1872*t2850 + t2162*t2868 - 0.1305*t2873 + t2244*t2896 + t2299*t2927 + t2387*t2943 + t2481*t2949 + t2517*t2968 + t2525*t2998 + t2688*t3017 + t2701*t3036 + 0.0306*t3047 - 1.13106*t3066 - 0.135*t1566*t2804*t331 + var1[1];
  p_output1[2]=-1.*t1558*t1568*t2774 - 0.135*t2758*t2804 + t1872*t3100 + t2123*t3126 + t2162*t3143 - 0.1305*t3149 + t2244*t3156 + t2299*t3169 + t2387*t3174 + t2481*t3201 + t2517*t3215 + t2525*t3221 + t2688*t3225 + t2701*t3234 + 0.0306*t3243 - 1.13106*t3261 + 0.135*t1566*t2774*t331 + var1[2];
  p_output1[3]=ArcTan(t3275,t3149);
  p_output1[4]=ArcTan(Sqrt(Power(0.642788*t2713 + 0.766044*t2723,2) + Power(0.642788*t3047 + 0.766044*t3066,2)),-0.642788*t3243 - 0.766044*t3261);
  p_output1[5]=ArcTan(-1.*(-0.766044*t3047 + 0.642788*t3066)*t3149*t3347 + t2873*t3275*t3347,(-0.766044*t2713 + 0.642788*t2723)*t3149*t3347 - 1.*t2136*t3275*t3347);
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

void pose_rightFoot_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




