/*
 * Automatically Generated from Mathematica.
 * Sun 7 Nov 2021 14:27:19 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "p_rightSole_constraint.hh"
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
  double t49;
  double t107;
  double t114;
  double t123;
  double t140;
  double t217;
  double t254;
  double t264;
  double t397;
  double t65;
  double t491;
  double t509;
  double t529;
  double t550;
  double t555;
  double t560;
  double t599;
  double t617;
  double t619;
  double t630;
  double t766;
  double t796;
  double t800;
  double t807;
  double t857;
  double t861;
  double t884;
  double t904;
  double t907;
  double t915;
  double t952;
  double t953;
  double t963;
  double t974;
  double t982;
  double t984;
  double t989;
  double t1010;
  double t1030;
  double t1031;
  double t1195;
  double t1222;
  double t1230;
  double t1261;
  double t1268;
  double t1308;
  double t1358;
  double t1407;
  double t1410;
  double t1422;
  double t1468;
  double t1483;
  double t1485;
  double t1498;
  double t1538;
  double t1561;
  double t1588;
  double t1649;
  double t1651;
  double t1666;
  double t1720;
  double t1725;
  double t1730;
  double t124;
  double t142;
  double t184;
  double t1808;
  double t285;
  double t291;
  double t1858;
  double t462;
  double t463;
  double t487;
  double t1878;
  double t1887;
  double t1897;
  double t564;
  double t601;
  double t604;
  double t1857;
  double t1860;
  double t1864;
  double t1939;
  double t1983;
  double t1986;
  double t661;
  double t715;
  double t745;
  double t873;
  double t893;
  double t895;
  double t1989;
  double t2018;
  double t2025;
  double t2059;
  double t2073;
  double t2089;
  double t927;
  double t933;
  double t947;
  double t987;
  double t999;
  double t1008;
  double t2096;
  double t2100;
  double t2102;
  double t2105;
  double t2106;
  double t2108;
  double t1090;
  double t1191;
  double t1194;
  double t1354;
  double t1364;
  double t1366;
  double t2113;
  double t2116;
  double t2119;
  double t2121;
  double t2122;
  double t2126;
  double t1441;
  double t1454;
  double t1455;
  double t1577;
  double t1591;
  double t1639;
  double t2140;
  double t2143;
  double t2148;
  double t2155;
  double t2157;
  double t2158;
  double t1697;
  double t1717;
  double t1719;
  double t2179;
  double t2190;
  double t2192;
  double t2194;
  double t2196;
  double t2217;
  double t2276;
  double t2277;
  double t2283;
  double t2263;
  double t2264;
  double t2269;
  double t2287;
  double t2290;
  double t2291;
  double t2294;
  double t2296;
  double t2297;
  double t2307;
  double t2309;
  double t2316;
  double t2320;
  double t2324;
  double t2325;
  double t2331;
  double t2332;
  double t2333;
  double t2335;
  double t2338;
  double t2339;
  double t2341;
  double t2343;
  double t2345;
  double t2347;
  double t2348;
  double t2349;
  double t2351;
  double t2353;
  double t2355;
  double t2358;
  double t2359;
  double t2360;
  double t2363;
  double t2366;
  double t2367;
  double t1739;
  double t1743;
  double t1764;
  double t1771;
  double t1772;
  double t1796;
  double t2230;
  double t2245;
  double t2248;
  double t2250;
  double t2251;
  double t2252;
  double t2371;
  double t2372;
  double t2374;
  double t2379;
  double t2384;
  double t2385;
  double t2028;
  double t2049;
  double t2050;
  double t2302;
  double t2303;
  double t2305;
  double t2481;
  double t2484;
  double t2492;
  double t2493;
  double t2494;
  double t2495;
  double t2497;
  double t643;
  double t644;
  double t648;
  t49 = Cos(var1[4]);
  t107 = Cos(var1[15]);
  t114 = -1.*t107;
  t123 = 1. + t114;
  t140 = Sin(var1[15]);
  t217 = Sin(var1[14]);
  t254 = Sin(var1[4]);
  t264 = Cos(var1[14]);
  t397 = Sin(var1[5]);
  t65 = Cos(var1[5]);
  t491 = t217*t254;
  t509 = -1.*t264*t49*t397;
  t529 = t491 + t509;
  t550 = Cos(var1[16]);
  t555 = -1.*t550;
  t560 = 1. + t555;
  t599 = Sin(var1[16]);
  t617 = t264*t254;
  t619 = t49*t217*t397;
  t630 = t617 + t619;
  t766 = t107*t49*t65;
  t796 = t140*t529;
  t800 = t766 + t796;
  t807 = Cos(var1[17]);
  t857 = -1.*t807;
  t861 = 1. + t857;
  t884 = Sin(var1[17]);
  t904 = t599*t630;
  t907 = t550*t800;
  t915 = t904 + t907;
  t952 = t550*t630;
  t953 = -1.*t599*t800;
  t963 = t952 + t953;
  t974 = Cos(var1[18]);
  t982 = -1.*t974;
  t984 = 1. + t982;
  t989 = Sin(var1[18]);
  t1010 = -1.*t884*t915;
  t1030 = t807*t963;
  t1031 = t1010 + t1030;
  t1195 = t807*t915;
  t1222 = t884*t963;
  t1230 = t1195 + t1222;
  t1261 = Cos(var1[19]);
  t1268 = -1.*t1261;
  t1308 = 1. + t1268;
  t1358 = Sin(var1[19]);
  t1407 = t989*t1031;
  t1410 = t974*t1230;
  t1422 = t1407 + t1410;
  t1468 = t974*t1031;
  t1483 = -1.*t989*t1230;
  t1485 = t1468 + t1483;
  t1498 = Cos(var1[21]);
  t1538 = -1.*t1498;
  t1561 = 1. + t1538;
  t1588 = Sin(var1[21]);
  t1649 = -1.*t1358*t1422;
  t1651 = t1261*t1485;
  t1666 = t1649 + t1651;
  t1720 = t1261*t1422;
  t1725 = t1358*t1485;
  t1730 = t1720 + t1725;
  t124 = -0.049*t123;
  t142 = -0.135*t140;
  t184 = t124 + t142;
  t1808 = Sin(var1[3]);
  t285 = -1.*t264;
  t291 = 1. + t285;
  t1858 = Cos(var1[3]);
  t462 = -0.135*t123;
  t463 = 0.049*t140;
  t487 = t462 + t463;
  t1878 = t1858*t65;
  t1887 = -1.*t1808*t254*t397;
  t1897 = t1878 + t1887;
  t564 = -0.09*t560;
  t601 = 0.049*t599;
  t604 = t564 + t601;
  t1857 = t65*t1808*t254;
  t1860 = t1858*t397;
  t1864 = t1857 + t1860;
  t1939 = -1.*t49*t217*t1808;
  t1983 = t264*t1897;
  t1986 = t1939 + t1983;
  t661 = -0.049*t560;
  t715 = -0.09*t599;
  t745 = t661 + t715;
  t873 = -0.049*t861;
  t893 = -0.21*t884;
  t895 = t873 + t893;
  t1989 = -1.*t264*t49*t1808;
  t2018 = -1.*t217*t1897;
  t2025 = t1989 + t2018;
  t2059 = t107*t1864;
  t2073 = t140*t1986;
  t2089 = t2059 + t2073;
  t927 = -0.21*t861;
  t933 = 0.049*t884;
  t947 = t927 + t933;
  t987 = -0.27068*t984;
  t999 = 0.00159*t989;
  t1008 = t987 + t999;
  t2096 = t599*t2025;
  t2100 = t550*t2089;
  t2102 = t2096 + t2100;
  t2105 = t550*t2025;
  t2106 = -1.*t599*t2089;
  t2108 = t2105 + t2106;
  t1090 = -0.00159*t984;
  t1191 = -0.27068*t989;
  t1194 = t1090 + t1191;
  t1354 = 0.01841*t1308;
  t1364 = -0.70544*t1358;
  t1366 = t1354 + t1364;
  t2113 = -1.*t884*t2102;
  t2116 = t807*t2108;
  t2119 = t2113 + t2116;
  t2121 = t807*t2102;
  t2122 = t884*t2108;
  t2126 = t2121 + t2122;
  t1441 = -0.70544*t1308;
  t1454 = -0.01841*t1358;
  t1455 = t1441 + t1454;
  t1577 = -1.11344*t1561;
  t1591 = 0.02159*t1588;
  t1639 = t1577 + t1591;
  t2140 = t989*t2119;
  t2143 = t974*t2126;
  t2148 = t2140 + t2143;
  t2155 = t974*t2119;
  t2157 = -1.*t989*t2126;
  t2158 = t2155 + t2157;
  t1697 = -0.02159*t1561;
  t1717 = -1.11344*t1588;
  t1719 = t1697 + t1717;
  t2179 = -1.*t1358*t2148;
  t2190 = t1261*t2158;
  t2192 = t2179 + t2190;
  t2194 = t1261*t2148;
  t2196 = t1358*t2158;
  t2217 = t2194 + t2196;
  t2276 = t65*t1808;
  t2277 = t1858*t254*t397;
  t2283 = t2276 + t2277;
  t2263 = -1.*t1858*t65*t254;
  t2264 = t1808*t397;
  t2269 = t2263 + t2264;
  t2287 = t1858*t49*t217;
  t2290 = t264*t2283;
  t2291 = t2287 + t2290;
  t2294 = t264*t1858*t49;
  t2296 = -1.*t217*t2283;
  t2297 = t2294 + t2296;
  t2307 = t107*t2269;
  t2309 = t140*t2291;
  t2316 = t2307 + t2309;
  t2320 = t599*t2297;
  t2324 = t550*t2316;
  t2325 = t2320 + t2324;
  t2331 = t550*t2297;
  t2332 = -1.*t599*t2316;
  t2333 = t2331 + t2332;
  t2335 = -1.*t884*t2325;
  t2338 = t807*t2333;
  t2339 = t2335 + t2338;
  t2341 = t807*t2325;
  t2343 = t884*t2333;
  t2345 = t2341 + t2343;
  t2347 = t989*t2339;
  t2348 = t974*t2345;
  t2349 = t2347 + t2348;
  t2351 = t974*t2339;
  t2353 = -1.*t989*t2345;
  t2355 = t2351 + t2353;
  t2358 = -1.*t1358*t2349;
  t2359 = t1261*t2355;
  t2360 = t2358 + t2359;
  t2363 = t1261*t2349;
  t2366 = t1358*t2355;
  t2367 = t2363 + t2366;
  t1739 = t1588*t1666;
  t1743 = t1498*t1730;
  t1764 = t1739 + t1743;
  t1771 = t1498*t1666;
  t1772 = -1.*t1588*t1730;
  t1796 = t1771 + t1772;
  t2230 = t1588*t2192;
  t2245 = t1498*t2217;
  t2248 = t2230 + t2245;
  t2250 = t1498*t2192;
  t2251 = -1.*t1588*t2217;
  t2252 = t2250 + t2251;
  t2371 = t1588*t2360;
  t2372 = t1498*t2367;
  t2374 = t2371 + t2372;
  t2379 = t1498*t2360;
  t2384 = -1.*t1588*t2367;
  t2385 = t2379 + t2384;
  t2028 = -1.*t140*t1864;
  t2049 = t107*t1986;
  t2050 = t2028 + t2049;
  t2302 = -1.*t140*t2269;
  t2303 = t107*t2291;
  t2305 = t2302 + t2303;
  t2481 = -0.766044*t2374;
  t2484 = 0.642788*t2385;
  t2492 = t2481 + t2484;
  t2493 = Power(t2305,2);
  t2494 = Power(t2492,2);
  t2495 = t2493 + t2494;
  t2497 = 1/Sqrt(t2495);
  t643 = -1.*t49*t65*t140;
  t644 = t107*t529;
  t648 = t643 + t644;
  p_output1[0]=t1008*t1031 + t1194*t1230 + t1366*t1422 + t1455*t1485 + t1639*t1666 + t1719*t1730 + 0.0306*t1764 - 1.13106*t1796 + 0.135*t217*t254 + 0.135*t291*t397*t49 + t487*t529 + t604*t630 - 0.1305*t648 + t184*t49*t65 + t745*t800 + t895*t915 + t947*t963 + var1[0];
  p_output1[1]=t184*t1864 - 0.1305*t2050 + t1008*t2119 + t1194*t2126 + t1366*t2148 + t1455*t2158 + t1639*t2192 + t1719*t2217 + 0.0306*t2248 - 1.13106*t2252 - 0.135*t1897*t291 + t1986*t487 - 0.135*t1808*t217*t49 + t2025*t604 + t2089*t745 + t2102*t895 + t2108*t947 + var1[1];
  p_output1[2]=t184*t2269 - 0.1305*t2305 + t1008*t2339 + t1194*t2345 + t1366*t2349 + t1455*t2355 + t1639*t2360 + t1719*t2367 + 0.0306*t2374 - 1.13106*t2385 - 0.135*t2283*t291 + t2291*t487 + 0.135*t1858*t217*t49 + t2297*t604 + t2316*t745 + t2325*t895 + t2333*t947 + var1[2];
  p_output1[3]=ArcTan(Sqrt(Power(0.642788*t1764 + 0.766044*t1796,2) + Power(0.642788*t2248 + 0.766044*t2252,2)),-0.642788*t2374 - 0.766044*t2385);
  p_output1[4]=ArcTan(-1.*(-0.766044*t2248 + 0.642788*t2252)*t2305*t2497 + t2050*t2492*t2497,(-0.766044*t1764 + 0.642788*t1796)*t2305*t2497 - 1.*t2492*t2497*t648);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 5, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#endif // MATLAB_MEX_FILE

namespace SymFunction
{

void p_rightSole_constraint_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




