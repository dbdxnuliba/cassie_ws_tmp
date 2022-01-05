/*
 * Automatically Generated from Mathematica.
 * Sun 7 Nov 2021 14:27:49 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "yaLeftStance.hh"
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
  double t37;
  double t70;
  double t137;
  double t141;
  double t170;
  double t325;
  double t400;
  double t412;
  double t439;
  double t472;
  double t480;
  double t551;
  double t591;
  double t602;
  double t626;
  double t654;
  double t657;
  double t667;
  double t690;
  double t702;
  double t772;
  double t814;
  double t913;
  double t930;
  double t945;
  double t1017;
  double t1038;
  double t1039;
  double t361;
  double t368;
  double t369;
  double t152;
  double t172;
  double t187;
  double t641;
  double t645;
  double t646;
  double t526;
  double t576;
  double t578;
  double t954;
  double t955;
  double t986;
  double t1198;
  double t1218;
  double t1221;
  double t786;
  double t834;
  double t896;
  double t1266;
  double t1280;
  double t1323;
  double t1324;
  double t1335;
  double t1426;
  double t1433;
  double t1470;
  double t1479;
  double t1481;
  double t1488;
  double t1513;
  double t1515;
  double t1521;
  double t1525;
  double t1528;
  double t1552;
  double t1579;
  double t1582;
  double t1583;
  double t1608;
  double t1612;
  double t1614;
  double t1631;
  double t1632;
  double t1638;
  double t1656;
  double t1675;
  double t1679;
  double t1683;
  double t1619;
  double t1620;
  double t1629;
  double t1487;
  double t1489;
  double t1492;
  double t1502;
  double t1504;
  double t1505;
  double t1598;
  double t1602;
  double t1604;
  double t1551;
  double t1576;
  double t1578;
  double t1812;
  double t1817;
  double t1819;
  double t1655;
  double t1660;
  double t1670;
  double t1686;
  double t1689;
  double t1691;
  double t1843;
  double t1846;
  double t1850;
  double t1866;
  double t1873;
  double t1879;
  double t1892;
  double t1903;
  double t1907;
  double t1909;
  double t1917;
  double t1704;
  double t1707;
  double t1712;
  double t1721;
  double t1729;
  double t1740;
  double t2014;
  double t2015;
  double t2001;
  double t2042;
  double t2044;
  double t2048;
  double t2013;
  double t2022;
  double t2024;
  double t2041;
  double t2054;
  double t2062;
  double t2066;
  double t2069;
  double t2072;
  double t2092;
  double t2093;
  double t2094;
  double t2065;
  double t2081;
  double t2085;
  double t2165;
  double t2173;
  double t2174;
  double t2175;
  double t2177;
  double t2189;
  double t2168;
  double t2198;
  double t2201;
  double t2206;
  double t2209;
  double t2221;
  double t2204;
  double t2225;
  double t2229;
  double t2233;
  double t2234;
  double t2241;
  double t2231;
  double t2246;
  double t2247;
  double t2258;
  double t2261;
  double t2265;
  double t2380;
  double t2393;
  double t2396;
  double t2377;
  double t2399;
  double t2402;
  double t2416;
  double t2423;
  double t2425;
  double t2410;
  double t2430;
  double t2446;
  double t2454;
  double t2456;
  double t2458;
  double t2452;
  double t2464;
  double t2474;
  double t2483;
  double t2490;
  double t2499;
  t37 = Cos(var1[8]);
  t70 = Cos(var1[9]);
  t137 = -1.*t70;
  t141 = 1. + t137;
  t170 = Sin(var1[9]);
  t325 = Sin(var1[8]);
  t400 = -1.*var1[9];
  t412 = 0.226893 + t400;
  t439 = Cos(t412);
  t472 = -1.*t439;
  t480 = 1. + t472;
  t551 = Sin(t412);
  t591 = -1.*t37*t170;
  t602 = -1.*t70*t325;
  t626 = t591 + t602;
  t654 = t70*t37;
  t657 = -1.*t170*t325;
  t667 = t654 + t657;
  t690 = Cos(var1[13]);
  t702 = -1.*t690;
  t772 = 1. + t702;
  t814 = Sin(var1[13]);
  t913 = t551*t626;
  t930 = t439*t667;
  t945 = t913 + t930;
  t1017 = t439*t626;
  t1038 = -1.*t551*t667;
  t1039 = t1017 + t1038;
  t361 = -0.21*t141;
  t368 = 0.049*t170;
  t369 = t361 + t368;
  t152 = -0.049*t141;
  t172 = -0.21*t170;
  t187 = t152 + t172;
  t641 = 0.01841*t480;
  t645 = -0.70544*t551;
  t646 = t641 + t645;
  t526 = -0.70544*t480;
  t576 = -0.01841*t551;
  t578 = t526 + t576;
  t954 = -1.11344*t772;
  t955 = 0.02159*t814;
  t986 = t954 + t955;
  t1198 = t37*t170;
  t1218 = t70*t325;
  t1221 = t1198 + t1218;
  t786 = -0.02159*t772;
  t834 = -1.11344*t814;
  t896 = t786 + t834;
  t1266 = -1.*t551*t1221;
  t1280 = t1266 + t930;
  t1323 = t439*t1221;
  t1324 = t551*t667;
  t1335 = t1323 + t1324;
  t1426 = Cos(var1[16]);
  t1433 = Sin(var1[16]);
  t1470 = Cos(var1[17]);
  t1479 = -1.*t1470;
  t1481 = 1. + t1479;
  t1488 = Sin(var1[17]);
  t1513 = -1.*var1[17];
  t1515 = 0.226893 + t1513;
  t1521 = Cos(t1515);
  t1525 = -1.*t1521;
  t1528 = 1. + t1525;
  t1552 = Sin(t1515);
  t1579 = -1.*t1470*t1433;
  t1582 = -1.*t1426*t1488;
  t1583 = t1579 + t1582;
  t1608 = t1426*t1470;
  t1612 = -1.*t1433*t1488;
  t1614 = t1608 + t1612;
  t1631 = Cos(var1[21]);
  t1632 = -1.*t1631;
  t1638 = 1. + t1632;
  t1656 = Sin(var1[21]);
  t1675 = t1521*t1583;
  t1679 = -1.*t1552*t1614;
  t1683 = t1675 + t1679;
  t1619 = t1552*t1583;
  t1620 = t1521*t1614;
  t1629 = t1619 + t1620;
  t1487 = -0.049*t1481;
  t1489 = -0.21*t1488;
  t1492 = t1487 + t1489;
  t1502 = -0.21*t1481;
  t1504 = 0.049*t1488;
  t1505 = t1502 + t1504;
  t1598 = 0.01841*t1528;
  t1602 = -0.70544*t1552;
  t1604 = t1598 + t1602;
  t1551 = -0.70544*t1528;
  t1576 = -0.01841*t1552;
  t1578 = t1551 + t1576;
  t1812 = t1470*t1433;
  t1817 = t1426*t1488;
  t1819 = t1812 + t1817;
  t1655 = -0.02159*t1638;
  t1660 = -1.11344*t1656;
  t1670 = t1655 + t1660;
  t1686 = -1.11344*t1638;
  t1689 = 0.02159*t1656;
  t1691 = t1686 + t1689;
  t1843 = t1521*t1819;
  t1846 = t1552*t1614;
  t1850 = t1843 + t1846;
  t1866 = -1.*t1552*t1819;
  t1873 = t1866 + t1620;
  t1879 = t1631*t1850;
  t1892 = t1873*t1656;
  t1903 = t1879 + t1892;
  t1907 = t1631*t1873;
  t1909 = -1.*t1850*t1656;
  t1917 = t1907 + t1909;
  t1704 = t1631*t1683;
  t1707 = -1.*t1629*t1656;
  t1712 = t1704 + t1707;
  t1721 = t1631*t1629;
  t1729 = t1683*t1656;
  t1740 = t1721 + t1729;
  t2014 = Cos(var1[14]);
  t2015 = Sin(var1[15]);
  t2001 = Sin(var1[14]);
  t2042 = t2014*t1426*t2015;
  t2044 = -1.*t2001*t1433;
  t2048 = t2042 + t2044;
  t2013 = -1.*t1426*t2001;
  t2022 = -1.*t2014*t2015*t1433;
  t2024 = t2013 + t2022;
  t2041 = t1470*t2024;
  t2054 = -1.*t2048*t1488;
  t2062 = t2041 + t2054;
  t2066 = t1470*t2048;
  t2069 = t2024*t1488;
  t2072 = t2066 + t2069;
  t2092 = t1552*t2062;
  t2093 = t1521*t2072;
  t2094 = t2092 + t2093;
  t2065 = t1521*t2062;
  t2081 = -1.*t1552*t2072;
  t2085 = t2065 + t2081;
  t2165 = Sin(var1[4]);
  t2173 = Cos(var1[15]);
  t2174 = Cos(var1[4]);
  t2175 = t2173*t2174;
  t2177 = t2001*t2015*t2165;
  t2189 = t2175 + t2177;
  t2168 = t2014*t1433*t2165;
  t2198 = t1426*t2189;
  t2201 = t2168 + t2198;
  t2206 = t2014*t1426*t2165;
  t2209 = -1.*t1433*t2189;
  t2221 = t2206 + t2209;
  t2204 = -1.*t1488*t2201;
  t2225 = t1470*t2221;
  t2229 = t2204 + t2225;
  t2233 = t1470*t2201;
  t2234 = t1488*t2221;
  t2241 = t2233 + t2234;
  t2231 = t1552*t2229;
  t2246 = t1521*t2241;
  t2247 = t2231 + t2246;
  t2258 = t1521*t2229;
  t2261 = -1.*t1552*t2241;
  t2265 = t2258 + t2261;
  t2380 = t2174*t2001*t2015;
  t2393 = -1.*t2173*t2165;
  t2396 = t2380 + t2393;
  t2377 = t2014*t2174*t1433;
  t2399 = t1426*t2396;
  t2402 = t2377 + t2399;
  t2416 = t2014*t1426*t2174;
  t2423 = -1.*t1433*t2396;
  t2425 = t2416 + t2423;
  t2410 = -1.*t1488*t2402;
  t2430 = t1470*t2425;
  t2446 = t2410 + t2430;
  t2454 = t1470*t2402;
  t2456 = t1488*t2425;
  t2458 = t2454 + t2456;
  t2452 = t1552*t2446;
  t2464 = t1521*t2458;
  t2474 = t2452 + t2464;
  t2483 = t1521*t2446;
  t2490 = -1.*t1552*t2458;
  t2499 = t2483 + t2490;
  p_output1[0]=var1[3];
  p_output1[1]=var1[4];
  p_output1[2]=var1[7];
  p_output1[3]=Sqrt(0.00002025 + Power(-0.09*t325 - 1.*t325*t369 + 0.049*t37 + t187*t37 + t578*t626 + t646*t667 + t896*t945 - 0.02159*(t1039*t814 + t690*t945) - 1.11344*(t1039*t690 - 1.*t814*t945) + t1039*t986,2) + Power(0.049*t325 + t187*t325 + 0.09*t37 + t369*t37 + t1221*t646 + t578*t667 - 0.02159*(t1335*t690 + t1280*t814) - 1.11344*(t1280*t690 - 1.*t1335*t814) + t1335*t896 + t1280*t986,2));
  p_output1[4]=Sqrt(0.00002025 + Power(0.049*t1426 - 0.09*t1433 + t1426*t1492 - 1.*t1433*t1505 + t1578*t1583 + t1604*t1614 + t1629*t1670 + t1683*t1691 - 1.11344*t1712 - 0.02159*t1740,2) + Power(0.09*t1426 + 0.049*t1433 + t1433*t1492 + t1426*t1505 + t1578*t1614 + t1604*t1819 + t1670*t1850 + t1691*t1873 - 0.02159*t1903 - 1.11344*t1917,2));
  p_output1[5]=ArcTan(-0.09*t1426 - 0.049*t1433 - 1.*t1433*t1492 - 1.*t1426*t1505 - 1.*t1578*t1614 - 1.*t1604*t1819 - 1.*t1670*t1850 - 1.*t1691*t1873 + 0.02159*t1903 + 1.11344*t1917,-0.049*t1426 + 0.09*t1433 - 1.*t1426*t1492 + t1433*t1505 - 1.*t1578*t1583 - 1.*t1604*t1614 - 1.*t1629*t1670 - 1.*t1683*t1691 + 1.11344*t1712 + 0.02159*t1740);
  p_output1[6]=var1[14];
  p_output1[7]=var1[15];
  p_output1[8]=ArcTan(Sqrt(Power(0.642788*(t1656*t2085 + t1631*t2094) + 0.766044*(t1631*t2085 - 1.*t1656*t2094),2) + Power(0.766044*(-1.*t1656*t2247 + t1631*t2265) + 0.642788*(t1631*t2247 + t1656*t2265),2)),-0.766044*(-1.*t1656*t2474 + t1631*t2499) - 0.642788*(t1631*t2474 + t1656*t2499));
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

void yaLeftStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




