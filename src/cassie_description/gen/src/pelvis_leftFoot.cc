/*
 * Automatically Generated from Mathematica.
 * Thu 23 Dec 2021 16:09:33 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "pelvis_leftFoot.hh"
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
  double t50;
  double t371;
  double t34;
  double t123;
  double t389;
  double t1005;
  double t800;
  double t1056;
  double t1072;
  double t1098;
  double t1108;
  double t1647;
  double t1662;
  double t1664;
  double t1690;
  double t1513;
  double t1516;
  double t1564;
  double t1735;
  double t1855;
  double t1866;
  double t1888;
  double t1905;
  double t1925;
  double t1929;
  double t1936;
  double t2022;
  double t2032;
  double t2036;
  double t2041;
  double t2044;
  double t2047;
  double t2065;
  double t2147;
  double t2160;
  double t2164;
  double t2218;
  double t2220;
  double t2243;
  double t2250;
  double t2280;
  double t2301;
  double t2352;
  double t2372;
  double t2395;
  double t2397;
  double t2428;
  double t2434;
  double t2435;
  double t2555;
  double t2651;
  double t2680;
  double t2682;
  double t2684;
  double t1104;
  double t1135;
  double t1152;
  double t1225;
  double t1234;
  double t1237;
  double t1672;
  double t1691;
  double t1703;
  double t1743;
  double t1765;
  double t1766;
  double t1889;
  double t1918;
  double t1922;
  double t2738;
  double t2740;
  double t2745;
  double t2756;
  double t2759;
  double t2770;
  double t2006;
  double t2015;
  double t2017;
  double t2052;
  double t2070;
  double t2076;
  double t2783;
  double t2795;
  double t2805;
  double t2823;
  double t2826;
  double t2827;
  double t2183;
  double t2194;
  double t2208;
  double t2304;
  double t2366;
  double t2370;
  double t2852;
  double t2853;
  double t2858;
  double t2876;
  double t2887;
  double t2905;
  double t2404;
  double t2407;
  double t2427;
  double t2926;
  double t2927;
  double t2933;
  double t2939;
  double t2950;
  double t2958;
  double t2584;
  double t2588;
  double t2619;
  double t2647;
  double t3163;
  double t3165;
  double t3179;
  double t3266;
  double t3267;
  double t3270;
  double t3290;
  double t3320;
  double t3326;
  double t3347;
  double t3350;
  double t3373;
  double t3381;
  double t3423;
  double t3433;
  double t3438;
  double t3444;
  double t3445;
  double t3448;
  double t3453;
  double t3456;
  double t3460;
  double t3461;
  double t3468;
  double t3482;
  double t3483;
  double t3487;
  t50 = Cos(var1[5]);
  t371 = Sin(var1[3]);
  t34 = Cos(var1[3]);
  t123 = Sin(var1[4]);
  t389 = Sin(var1[5]);
  t1005 = Sin(var1[6]);
  t800 = Cos(var1[4]);
  t1056 = Cos(var1[7]);
  t1072 = -1.*t1056;
  t1098 = 1. + t1072;
  t1108 = Sin(var1[7]);
  t1647 = Cos(var1[8]);
  t1662 = -1.*t1647;
  t1664 = 1. + t1662;
  t1690 = Sin(var1[8]);
  t1513 = t800*t1056;
  t1516 = t123*t1005*t1108;
  t1564 = t1513 + t1516;
  t1735 = Cos(var1[6]);
  t1855 = Cos(var1[9]);
  t1866 = -1.*t1855;
  t1888 = 1. + t1866;
  t1905 = Sin(var1[9]);
  t1925 = t1647*t1564;
  t1929 = t1735*t123*t1690;
  t1936 = t1925 + t1929;
  t2022 = t1735*t1647*t123;
  t2032 = -1.*t1564*t1690;
  t2036 = t2022 + t2032;
  t2041 = Cos(var1[11]);
  t2044 = -1.*t2041;
  t2047 = 1. + t2044;
  t2065 = Sin(var1[11]);
  t2147 = -1.*t1905*t1936;
  t2160 = t1855*t2036;
  t2164 = t2147 + t2160;
  t2218 = t1855*t1936;
  t2220 = t1905*t2036;
  t2243 = t2218 + t2220;
  t2250 = Cos(var1[13]);
  t2280 = -1.*t2250;
  t2301 = 1. + t2280;
  t2352 = Sin(var1[13]);
  t2372 = t2065*t2164;
  t2395 = t2041*t2243;
  t2397 = t2372 + t2395;
  t2428 = t2041*t2164;
  t2434 = -1.*t2065*t2243;
  t2435 = t2428 + t2434;
  t2555 = Cos(var1[14]);
  t2651 = Sin(var1[14]);
  t2680 = t34*t1735;
  t2682 = -1.*t800*t371*t1005;
  t2684 = t2680 + t2682;
  t1104 = 0.135*t1098;
  t1135 = 0.049*t1108;
  t1152 = t1104 + t1135;
  t1225 = -0.049*t1098;
  t1234 = 0.135*t1108;
  t1237 = t1225 + t1234;
  t1672 = -0.049*t1664;
  t1691 = -0.09*t1690;
  t1703 = t1672 + t1691;
  t1743 = -0.09*t1664;
  t1765 = 0.049*t1690;
  t1766 = t1743 + t1765;
  t1889 = -0.049*t1888;
  t1918 = -0.21*t1905;
  t1922 = t1889 + t1918;
  t2738 = t1056*t371*t123;
  t2740 = t2684*t1108;
  t2745 = t2738 + t2740;
  t2756 = -1.*t800*t1735*t371;
  t2759 = -1.*t34*t1005;
  t2770 = t2756 + t2759;
  t2006 = -0.21*t1888;
  t2015 = 0.049*t1905;
  t2017 = t2006 + t2015;
  t2052 = -0.70544*t2047;
  t2070 = -0.01841*t2065;
  t2076 = t2052 + t2070;
  t2783 = t1647*t2745;
  t2795 = t2770*t1690;
  t2805 = t2783 + t2795;
  t2823 = t1647*t2770;
  t2826 = -1.*t2745*t1690;
  t2827 = t2823 + t2826;
  t2183 = 0.01841*t2047;
  t2194 = -0.70544*t2065;
  t2208 = t2183 + t2194;
  t2304 = -0.02159*t2301;
  t2366 = -1.11344*t2352;
  t2370 = t2304 + t2366;
  t2852 = -1.*t1905*t2805;
  t2853 = t1855*t2827;
  t2858 = t2852 + t2853;
  t2876 = t1855*t2805;
  t2887 = t1905*t2827;
  t2905 = t2876 + t2887;
  t2404 = -1.11344*t2301;
  t2407 = 0.02159*t2352;
  t2427 = t2404 + t2407;
  t2926 = t2065*t2858;
  t2927 = t2041*t2905;
  t2933 = t2926 + t2927;
  t2939 = t2041*t2858;
  t2950 = -1.*t2065*t2905;
  t2958 = t2939 + t2950;
  t2584 = -1.*t2555;
  t2588 = 1. + t2584;
  t2619 = -1.*t1735;
  t2647 = 1. + t2619;
  t3163 = t1735*t371;
  t3165 = t34*t800*t1005;
  t3179 = t3163 + t3165;
  t3266 = -1.*t34*t1056*t123;
  t3267 = t3179*t1108;
  t3270 = t3266 + t3267;
  t3290 = t34*t800*t1735;
  t3320 = -1.*t371*t1005;
  t3326 = t3290 + t3320;
  t3347 = t1647*t3270;
  t3350 = t3326*t1690;
  t3373 = t3347 + t3350;
  t3381 = t1647*t3326;
  t3423 = -1.*t3270*t1690;
  t3433 = t3381 + t3423;
  t3438 = -1.*t1905*t3373;
  t3444 = t1855*t3433;
  t3445 = t3438 + t3444;
  t3448 = t1855*t3373;
  t3453 = t1905*t3433;
  t3456 = t3448 + t3453;
  t3460 = t2065*t3445;
  t3461 = t2041*t3456;
  t3468 = t3460 + t3461;
  t3482 = t2041*t3445;
  t3483 = -1.*t2065*t3456;
  t3487 = t3482 + t3483;
  p_output1[0]=-1.*t371*t389 + t123*t34*t50;
  p_output1[1]=t123*t34*t389 + t371*t50;
  p_output1[2]=var1[7];
  p_output1[3]=0.5*(0.27*t1005*t123 - 2.*t1005*t1152*t123 - 2.*t1564*t1703 - 2.*t123*t1735*t1766 - 2.*t1922*t1936 - 2.*t2017*t2036 - 2.*t2076*t2164 - 2.*t2208*t2243 - 2.*t2370*t2397 - 2.*t2427*t2435 + 2.22688*(-1.*t2352*t2397 + t2250*t2435) + 0.04318*(t2250*t2397 + t2352*t2435) - 0.098*t800 - 2.*t1237*t800 - 0.261*(t1005*t1056*t123 - 1.*t1108*t800));
  p_output1[4]=0.5*(0.135*t2684 - 2.*t1152*t2684 - 2.*t1703*t2745 - 2.*t1766*t2770 - 2.*t1922*t2805 - 2.*t2017*t2827 - 2.*t2076*t2858 - 2.*t2208*t2905 - 2.*t2370*t2933 - 2.*t2427*t2958 + 2.22688*(-1.*t2352*t2933 + t2250*t2958) + 0.04318*(t2250*t2933 + t2352*t2958) - 0.135*t2588*t34 - 0.135*t2647*t34 - 0.098*t123*t371 - 2.*t123*t1237*t371 - 0.261*(t1056*t2684 - 1.*t1108*t123*t371) - 0.135*t1005*t371*t800 - 0.135*t2651*t371*t800 - 0.135*(t2555*t34 - 1.*t2651*t371*t800));
  p_output1[5]=0.5*(0.135*t3179 - 2.*t1152*t3179 - 2.*t1703*t3270 - 2.*t1766*t3326 - 2.*t1922*t3373 + 0.098*t123*t34 + 2.*t123*t1237*t34 - 0.261*(t1056*t3179 + t1108*t123*t34) - 2.*t2017*t3433 - 2.*t2076*t3445 - 2.*t2208*t3456 - 2.*t2370*t3468 - 2.*t2427*t3487 + 2.22688*(-1.*t2352*t3468 + t2250*t3487) + 0.04318*(t2250*t3468 + t2352*t3487) - 0.135*t2588*t371 - 0.135*t2647*t371 + 0.135*t1005*t34*t800 + 0.135*t2651*t34*t800 - 0.135*(t2555*t371 + t2651*t34*t800));
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

void pelvis_leftFoot_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




