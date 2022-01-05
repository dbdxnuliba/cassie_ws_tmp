/*
 * Automatically Generated from Mathematica.
 * Sun 7 Nov 2021 14:28:00 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "leftLegPitch.hh"
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
  double t180;
  double t286;
  double t392;
  double t436;
  double t452;
  double t455;
  double t473;
  double t549;
  double t228;
  double t612;
  double t645;
  double t647;
  double t710;
  double t1142;
  double t1200;
  double t1208;
  double t1249;
  double t1078;
  double t1087;
  double t1092;
  double t1330;
  double t1333;
  double t1339;
  double t1353;
  double t1361;
  double t1382;
  double t1394;
  double t1563;
  double t1585;
  double t1425;
  double t1437;
  double t1486;
  double t1519;
  double t1537;
  double t1540;
  double t1671;
  double t1681;
  double t1685;
  double t1690;
  double t1812;
  double t1815;
  double t1904;
  double t2098;
  double t2112;
  double t2129;
  double t2150;
  double t2153;
  double t2178;
  double t2193;
  double t2226;
  double t2232;
  double t2235;
  double t2352;
  double t2375;
  double t2391;
  double t682;
  double t726;
  double t735;
  double t810;
  double t836;
  double t844;
  double t1234;
  double t1258;
  double t1293;
  double t1342;
  double t1343;
  double t1346;
  double t1389;
  double t1400;
  double t1419;
  double t2585;
  double t2587;
  double t2607;
  double t1512;
  double t1513;
  double t1516;
  double t1686;
  double t1695;
  double t1700;
  double t2616;
  double t2633;
  double t2661;
  double t2709;
  double t2719;
  double t2740;
  double t1964;
  double t1987;
  double t2037;
  double t2189;
  double t2204;
  double t2209;
  double t2780;
  double t2782;
  double t2787;
  double t2804;
  double t2806;
  double t2828;
  double t2268;
  double t2310;
  double t2322;
  double t2853;
  double t2855;
  double t2871;
  double t2874;
  double t2875;
  double t2883;
  t180 = Cos(var1[3]);
  t286 = Cos(var1[6]);
  t392 = Sin(var1[3]);
  t436 = t286*t392;
  t452 = Cos(var1[4]);
  t455 = Sin(var1[6]);
  t473 = t180*t452*t455;
  t549 = t436 + t473;
  t228 = Sin(var1[4]);
  t612 = Cos(var1[7]);
  t645 = -1.*t612;
  t647 = 1. + t645;
  t710 = Sin(var1[7]);
  t1142 = Cos(var1[8]);
  t1200 = -1.*t1142;
  t1208 = 1. + t1200;
  t1249 = Sin(var1[8]);
  t1078 = -1.*t180*t612*t228;
  t1087 = t549*t710;
  t1092 = t1078 + t1087;
  t1330 = t180*t452*t286;
  t1333 = -1.*t392*t455;
  t1339 = t1330 + t1333;
  t1353 = Cos(var1[9]);
  t1361 = -1.*t1353;
  t1382 = 1. + t1361;
  t1394 = Sin(var1[9]);
  t1563 = -1.*var1[9];
  t1585 = 0.226893 + t1563;
  t1425 = t1142*t1092;
  t1437 = t1339*t1249;
  t1486 = t1425 + t1437;
  t1519 = t1142*t1339;
  t1537 = -1.*t1092*t1249;
  t1540 = t1519 + t1537;
  t1671 = Cos(t1585);
  t1681 = -1.*t1671;
  t1685 = 1. + t1681;
  t1690 = Sin(t1585);
  t1812 = -1.*t1394*t1486;
  t1815 = t1353*t1540;
  t1904 = t1812 + t1815;
  t2098 = t1353*t1486;
  t2112 = t1394*t1540;
  t2129 = t2098 + t2112;
  t2150 = Cos(var1[13]);
  t2153 = -1.*t2150;
  t2178 = 1. + t2153;
  t2193 = Sin(var1[13]);
  t2226 = t1690*t1904;
  t2232 = t1671*t2129;
  t2235 = t2226 + t2232;
  t2352 = t1671*t1904;
  t2375 = -1.*t1690*t2129;
  t2391 = t2352 + t2375;
  t682 = 0.135*t647;
  t726 = 0.049*t710;
  t735 = t682 + t726;
  t810 = -0.049*t647;
  t836 = 0.135*t710;
  t844 = t810 + t836;
  t1234 = -0.049*t1208;
  t1258 = -0.09*t1249;
  t1293 = t1234 + t1258;
  t1342 = -0.09*t1208;
  t1343 = 0.049*t1249;
  t1346 = t1342 + t1343;
  t1389 = -0.049*t1382;
  t1400 = -0.21*t1394;
  t1419 = t1389 + t1400;
  t2585 = t452*t612;
  t2587 = t228*t455*t710;
  t2607 = t2585 + t2587;
  t1512 = -0.21*t1382;
  t1513 = 0.049*t1394;
  t1516 = t1512 + t1513;
  t1686 = -0.70544*t1685;
  t1695 = -0.01841*t1690;
  t1700 = t1686 + t1695;
  t2616 = t1142*t2607;
  t2633 = t286*t228*t1249;
  t2661 = t2616 + t2633;
  t2709 = t286*t1142*t228;
  t2719 = -1.*t2607*t1249;
  t2740 = t2709 + t2719;
  t1964 = 0.01841*t1685;
  t1987 = -0.70544*t1690;
  t2037 = t1964 + t1987;
  t2189 = -0.02159*t2178;
  t2204 = -1.11344*t2193;
  t2209 = t2189 + t2204;
  t2780 = -1.*t1394*t2661;
  t2782 = t1353*t2740;
  t2787 = t2780 + t2782;
  t2804 = t1353*t2661;
  t2806 = t1394*t2740;
  t2828 = t2804 + t2806;
  t2268 = -1.11344*t2178;
  t2310 = 0.02159*t2193;
  t2322 = t2268 + t2310;
  t2853 = t1690*t2787;
  t2855 = t1671*t2828;
  t2871 = t2853 + t2855;
  t2874 = t1671*t2787;
  t2875 = -1.*t1690*t2828;
  t2883 = t2874 + t2875;
  p_output1[0]=ArcTan(-1.*t1092*t1293 - 1.*t1339*t1346 - 1.*t1419*t1486 - 1.*t1516*t1540 - 1.*t1700*t1904 - 1.*t2037*t2129 - 1.*t2209*t2235 + 0.049*t180*t228 - 1.*t2322*t2391 + 1.11344*(-1.*t2193*t2235 + t2150*t2391) + 0.02159*(t2150*t2235 + t2193*t2391) + 0.135*t549 - 0.1305*(t549*t612 + t180*t228*t710) - 1.*t549*t735 + t180*t228*t844,t1293*t2607 + t1419*t2661 + t1516*t2740 + t1700*t2787 + t2037*t2828 + t1346*t228*t286 + t2209*t2871 + t2322*t2883 - 1.11344*(-1.*t2193*t2871 + t2150*t2883) - 0.02159*(t2150*t2871 + t2193*t2883) + 0.049*t452 - 0.135*t228*t455 + 0.1305*(t228*t455*t612 - 1.*t452*t710) + t228*t455*t735 + t452*t844);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#endif // MATLAB_MEX_FILE

namespace SymFunction
{

void leftLegPitch_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




