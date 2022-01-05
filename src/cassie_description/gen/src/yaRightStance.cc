/*
 * Automatically Generated from Mathematica.
 * Sun 7 Nov 2021 14:27:50 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "yaRightStance.hh"
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
  double t40;
  double t172;
  double t341;
  double t378;
  double t391;
  double t426;
  double t1017;
  double t1040;
  double t1049;
  double t1052;
  double t1063;
  double t1098;
  double t1116;
  double t1122;
  double t1124;
  double t1163;
  double t1169;
  double t1177;
  double t1229;
  double t1252;
  double t1310;
  double t1324;
  double t1359;
  double t1361;
  double t1368;
  double t1198;
  double t1218;
  double t1225;
  double t412;
  double t627;
  double t654;
  double t701;
  double t913;
  double t930;
  double t1141;
  double t1143;
  double t1150;
  double t1079;
  double t1106;
  double t1107;
  double t1428;
  double t1449;
  double t1467;
  double t1323;
  double t1327;
  double t1336;
  double t1369;
  double t1375;
  double t1376;
  double t1515;
  double t1589;
  double t1608;
  double t1619;
  double t1620;
  double t1776;
  double t1782;
  double t1786;
  double t1798;
  double t1809;
  double t1828;
  double t1846;
  double t1862;
  double t1874;
  double t1879;
  double t1892;
  double t1907;
  double t1926;
  double t1929;
  double t1933;
  double t1952;
  double t1953;
  double t1957;
  double t1962;
  double t1965;
  double t1966;
  double t1970;
  double t1975;
  double t1976;
  double t1978;
  double t2000;
  double t2024;
  double t2041;
  double t1833;
  double t1836;
  double t1843;
  double t1803;
  double t1812;
  double t1817;
  double t1943;
  double t1947;
  double t1950;
  double t1905;
  double t1922;
  double t1923;
  double t1984;
  double t1985;
  double t1992;
  double t2142;
  double t2146;
  double t2161;
  double t1969;
  double t1971;
  double t1972;
  double t2174;
  double t2175;
  double t2188;
  double t2198;
  double t2206;
  double t2225;
  double t2229;
  double t2231;
  double t2234;
  double t2240;
  double t2246;
  double t2062;
  double t2065;
  double t2066;
  double t2069;
  double t2087;
  double t2092;
  double t2527;
  double t2524;
  double t2525;
  double t2526;
  double t2528;
  double t2534;
  double t2539;
  double t2550;
  double t2552;
  double t2536;
  double t2557;
  double t2560;
  double t2566;
  double t2573;
  double t2574;
  double t2563;
  double t2578;
  double t2581;
  double t2594;
  double t2604;
  double t2608;
  double t2662;
  double t2647;
  double t2648;
  double t2653;
  double t2676;
  double t2680;
  double t2681;
  double t2684;
  double t2686;
  double t2695;
  double t2707;
  double t2724;
  double t2692;
  double t2725;
  double t2726;
  double t2732;
  double t2738;
  double t2742;
  double t2729;
  double t2745;
  double t2755;
  double t2788;
  double t2791;
  double t2798;
  double t2875;
  double t2884;
  double t2890;
  double t2900;
  double t2904;
  double t2915;
  double t2963;
  double t2971;
  double t2972;
  double t2958;
  double t2973;
  double t2974;
  double t2976;
  double t2977;
  double t2979;
  double t2975;
  double t2980;
  double t2981;
  double t2987;
  double t2997;
  double t2998;
  t40 = Cos(var1[16]);
  t172 = Sin(var1[16]);
  t341 = Cos(var1[17]);
  t378 = -1.*t341;
  t391 = 1. + t378;
  t426 = Sin(var1[17]);
  t1017 = -1.*var1[17];
  t1040 = 0.226893 + t1017;
  t1049 = Cos(t1040);
  t1052 = -1.*t1049;
  t1063 = 1. + t1052;
  t1098 = Sin(t1040);
  t1116 = -1.*t341*t172;
  t1122 = -1.*t40*t426;
  t1124 = t1116 + t1122;
  t1163 = t40*t341;
  t1169 = -1.*t172*t426;
  t1177 = t1163 + t1169;
  t1229 = Cos(var1[21]);
  t1252 = -1.*t1229;
  t1310 = 1. + t1252;
  t1324 = Sin(var1[21]);
  t1359 = t1049*t1124;
  t1361 = -1.*t1098*t1177;
  t1368 = t1359 + t1361;
  t1198 = t1098*t1124;
  t1218 = t1049*t1177;
  t1225 = t1198 + t1218;
  t412 = -0.049*t391;
  t627 = -0.21*t426;
  t654 = t412 + t627;
  t701 = -0.21*t391;
  t913 = 0.049*t426;
  t930 = t701 + t913;
  t1141 = 0.01841*t1063;
  t1143 = -0.70544*t1098;
  t1150 = t1141 + t1143;
  t1079 = -0.70544*t1063;
  t1106 = -0.01841*t1098;
  t1107 = t1079 + t1106;
  t1428 = t341*t172;
  t1449 = t40*t426;
  t1467 = t1428 + t1449;
  t1323 = -0.02159*t1310;
  t1327 = -1.11344*t1324;
  t1336 = t1323 + t1327;
  t1369 = -1.11344*t1310;
  t1375 = 0.02159*t1324;
  t1376 = t1369 + t1375;
  t1515 = t1049*t1467;
  t1589 = t1098*t1177;
  t1608 = t1515 + t1589;
  t1619 = -1.*t1098*t1467;
  t1620 = t1619 + t1218;
  t1776 = Cos(var1[8]);
  t1782 = Cos(var1[9]);
  t1786 = -1.*t1782;
  t1798 = 1. + t1786;
  t1809 = Sin(var1[9]);
  t1828 = Sin(var1[8]);
  t1846 = -1.*var1[9];
  t1862 = 0.226893 + t1846;
  t1874 = Cos(t1862);
  t1879 = -1.*t1874;
  t1892 = 1. + t1879;
  t1907 = Sin(t1862);
  t1926 = -1.*t1776*t1809;
  t1929 = -1.*t1782*t1828;
  t1933 = t1926 + t1929;
  t1952 = t1782*t1776;
  t1953 = -1.*t1809*t1828;
  t1957 = t1952 + t1953;
  t1962 = Cos(var1[13]);
  t1965 = -1.*t1962;
  t1966 = 1. + t1965;
  t1970 = Sin(var1[13]);
  t1975 = t1907*t1933;
  t1976 = t1874*t1957;
  t1978 = t1975 + t1976;
  t2000 = t1874*t1933;
  t2024 = -1.*t1907*t1957;
  t2041 = t2000 + t2024;
  t1833 = -0.21*t1798;
  t1836 = 0.049*t1809;
  t1843 = t1833 + t1836;
  t1803 = -0.049*t1798;
  t1812 = -0.21*t1809;
  t1817 = t1803 + t1812;
  t1943 = 0.01841*t1892;
  t1947 = -0.70544*t1907;
  t1950 = t1943 + t1947;
  t1905 = -0.70544*t1892;
  t1922 = -0.01841*t1907;
  t1923 = t1905 + t1922;
  t1984 = -1.11344*t1966;
  t1985 = 0.02159*t1970;
  t1992 = t1984 + t1985;
  t2142 = t1776*t1809;
  t2146 = t1782*t1828;
  t2161 = t2142 + t2146;
  t1969 = -0.02159*t1966;
  t1971 = -1.11344*t1970;
  t1972 = t1969 + t1971;
  t2174 = -1.*t1907*t2161;
  t2175 = t2174 + t1976;
  t2188 = t1874*t2161;
  t2198 = t1907*t1957;
  t2206 = t2188 + t2198;
  t2225 = t1970*t2175;
  t2229 = t1962*t2206;
  t2231 = t2225 + t2229;
  t2234 = t1962*t2175;
  t2240 = -1.*t1970*t2206;
  t2246 = t2234 + t2240;
  t2062 = -1.*t1970*t1978;
  t2065 = t1962*t2041;
  t2066 = t2062 + t2065;
  t2069 = t1962*t1978;
  t2087 = t1970*t2041;
  t2092 = t2069 + t2087;
  t2527 = Sin(var1[6]);
  t2524 = Cos(var1[6]);
  t2525 = Sin(var1[7]);
  t2526 = t2524*t1776*t2525;
  t2528 = -1.*t2527*t1828;
  t2534 = t2526 + t2528;
  t2539 = -1.*t1776*t2527;
  t2550 = -1.*t2524*t2525*t1828;
  t2552 = t2539 + t2550;
  t2536 = -1.*t1809*t2534;
  t2557 = t1782*t2552;
  t2560 = t2536 + t2557;
  t2566 = t1782*t2534;
  t2573 = t1809*t2552;
  t2574 = t2566 + t2573;
  t2563 = t1907*t2560;
  t2578 = t1874*t2574;
  t2581 = t2563 + t2578;
  t2594 = t1874*t2560;
  t2604 = -1.*t1907*t2574;
  t2608 = t2594 + t2604;
  t2662 = Sin(var1[4]);
  t2647 = Cos(var1[4]);
  t2648 = Cos(var1[7]);
  t2653 = t2647*t2648;
  t2676 = t2662*t2527*t2525;
  t2680 = t2653 + t2676;
  t2681 = t1776*t2680;
  t2684 = t2524*t2662*t1828;
  t2686 = t2681 + t2684;
  t2695 = t2524*t1776*t2662;
  t2707 = -1.*t2680*t1828;
  t2724 = t2695 + t2707;
  t2692 = -1.*t1809*t2686;
  t2725 = t1782*t2724;
  t2726 = t2692 + t2725;
  t2732 = t1782*t2686;
  t2738 = t1809*t2724;
  t2742 = t2732 + t2738;
  t2729 = t1907*t2726;
  t2745 = t1874*t2742;
  t2755 = t2729 + t2745;
  t2788 = t1874*t2726;
  t2791 = -1.*t1907*t2742;
  t2798 = t2788 + t2791;
  t2875 = -1.*t2648*t2662;
  t2884 = t2647*t2527*t2525;
  t2890 = t2875 + t2884;
  t2900 = t1776*t2890;
  t2904 = t2647*t2524*t1828;
  t2915 = t2900 + t2904;
  t2963 = t2647*t2524*t1776;
  t2971 = -1.*t2890*t1828;
  t2972 = t2963 + t2971;
  t2958 = -1.*t1809*t2915;
  t2973 = t1782*t2972;
  t2974 = t2958 + t2973;
  t2976 = t1782*t2915;
  t2977 = t1809*t2972;
  t2979 = t2976 + t2977;
  t2975 = t1907*t2974;
  t2980 = t1874*t2979;
  t2981 = t2975 + t2980;
  t2987 = t1874*t2974;
  t2997 = -1.*t1907*t2979;
  t2998 = t2987 + t2997;
  p_output1[0]=var1[3];
  p_output1[1]=var1[4];
  p_output1[2]=var1[15];
  p_output1[3]=Sqrt(0.00002025 + Power(t1107*t1124 + t1150*t1177 + t1225*t1336 - 1.11344*(-1.*t1225*t1324 + t1229*t1368) - 0.02159*(t1225*t1229 + t1324*t1368) + t1368*t1376 - 0.09*t172 + 0.049*t40 + t40*t654 - 1.*t172*t930,2) + Power(t1107*t1177 + t1150*t1467 + t1336*t1608 + t1376*t1620 - 1.11344*(-1.*t1324*t1608 + t1229*t1620) - 0.02159*(t1229*t1608 + t1324*t1620) + 0.049*t172 + 0.09*t40 + t172*t654 + t40*t930,2));
  p_output1[4]=Sqrt(0.00002025 + Power(0.049*t1776 + t1776*t1817 - 0.09*t1828 - 1.*t1828*t1843 + t1923*t1933 + t1950*t1957 + t1972*t1978 + t1992*t2041 - 1.11344*t2066 - 0.02159*t2092,2) + Power(0.09*t1776 + 0.049*t1828 + t1817*t1828 + t1776*t1843 + t1923*t1957 + t1950*t2161 + t1992*t2175 + t1972*t2206 - 0.02159*t2231 - 1.11344*t2246,2));
  p_output1[5]=ArcTan(-0.09*t1776 - 0.049*t1828 - 1.*t1817*t1828 - 1.*t1776*t1843 - 1.*t1923*t1957 - 1.*t1950*t2161 - 1.*t1992*t2175 - 1.*t1972*t2206 + 0.02159*t2231 + 1.11344*t2246,-0.049*t1776 - 1.*t1776*t1817 + 0.09*t1828 + t1828*t1843 - 1.*t1923*t1933 - 1.*t1950*t1957 - 1.*t1972*t1978 - 1.*t1992*t2041 + 1.11344*t2066 + 0.02159*t2092);
  p_output1[6]=var1[6];
  p_output1[7]=var1[7];
  p_output1[8]=ArcTan(Sqrt(Power(0.766044*(-1.*t1970*t2581 + t1962*t2608) + 0.642788*(t1962*t2581 + t1970*t2608),2) + Power(0.766044*(-1.*t1970*t2755 + t1962*t2798) + 0.642788*(t1962*t2755 + t1970*t2798),2)),-0.766044*(-1.*t1970*t2981 + t1962*t2998) - 0.642788*(t1962*t2981 + t1970*t2998));
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 9, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#endif // MATLAB_MEX_FILE

namespace SymFunction
{

void yaRightStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




