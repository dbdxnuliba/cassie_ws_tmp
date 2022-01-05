/*
 * Automatically Generated from Mathematica.
 * Sun 7 Nov 2021 14:26:38 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "p_leftPoint_constraint.hh"
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
  double t126;
  double t159;
  double t415;
  double t539;
  double t541;
  double t608;
  double t620;
  double t663;
  double t761;
  double t552;
  double t572;
  double t580;
  double t848;
  double t959;
  double t960;
  double t965;
  double t971;
  double t931;
  double t934;
  double t951;
  double t1001;
  double t1005;
  double t1025;
  double t1091;
  double t1093;
  double t1097;
  double t1115;
  double t1166;
  double t1184;
  double t1190;
  double t1209;
  double t1224;
  double t1225;
  double t1254;
  double t1257;
  double t1259;
  double t1269;
  double t1289;
  double t1290;
  double t1305;
  double t1399;
  double t1444;
  double t1445;
  double t1471;
  double t1478;
  double t1479;
  double t1537;
  double t1651;
  double t1657;
  double t1658;
  double t1695;
  double t1696;
  double t1715;
  double t211;
  double t277;
  double t1747;
  double t1745;
  double t1746;
  double t1749;
  double t1756;
  double t720;
  double t774;
  double t783;
  double t861;
  double t865;
  double t872;
  double t1770;
  double t1778;
  double t1792;
  double t1797;
  double t1802;
  double t1805;
  double t969;
  double t972;
  double t976;
  double t1037;
  double t1065;
  double t1085;
  double t1098;
  double t1119;
  double t1165;
  double t1829;
  double t1831;
  double t1832;
  double t1838;
  double t1840;
  double t1849;
  double t1192;
  double t1202;
  double t1206;
  double t1265;
  double t1276;
  double t1277;
  double t1855;
  double t1856;
  double t1858;
  double t1872;
  double t1881;
  double t1882;
  double t1312;
  double t1367;
  double t1396;
  double t1524;
  double t1622;
  double t1625;
  double t1898;
  double t1900;
  double t1902;
  double t1921;
  double t1927;
  double t1928;
  double t1676;
  double t1687;
  double t1693;
  double t1956;
  double t1963;
  double t1987;
  double t1996;
  double t1997;
  double t2016;
  double t2051;
  double t2052;
  double t2057;
  double t2070;
  double t2071;
  double t2072;
  double t2078;
  double t2083;
  double t2088;
  double t2104;
  double t2105;
  double t2106;
  double t2109;
  double t2110;
  double t2111;
  double t2116;
  double t2119;
  double t2120;
  double t2122;
  double t2123;
  double t2125;
  double t2131;
  double t2132;
  double t2134;
  double t2136;
  double t2137;
  double t2139;
  double t2141;
  double t2143;
  double t2147;
  double t2149;
  double t2150;
  double t2151;
  double t2165;
  double t2166;
  double t2170;
  double t2200;
  double t2203;
  double t2227;
  double t2034;
  double t2038;
  double t2039;
  double t2230;
  double t2232;
  double t2238;
  double t2244;
  double t1735;
  double t1736;
  double t1738;
  t126 = Cos(var1[4]);
  t159 = Cos(var1[6]);
  t415 = Sin(var1[5]);
  t539 = Sin(var1[4]);
  t541 = Sin(var1[6]);
  t608 = Cos(var1[7]);
  t620 = -1.*t608;
  t663 = 1. + t620;
  t761 = Sin(var1[7]);
  t552 = -1.*t126*t159*t415;
  t572 = t539*t541;
  t580 = t552 + t572;
  t848 = Cos(var1[5]);
  t959 = Cos(var1[8]);
  t960 = -1.*t959;
  t965 = 1. + t960;
  t971 = Sin(var1[8]);
  t931 = t126*t848*t608;
  t934 = t580*t761;
  t951 = t931 + t934;
  t1001 = t159*t539;
  t1005 = t126*t415*t541;
  t1025 = t1001 + t1005;
  t1091 = Cos(var1[9]);
  t1093 = -1.*t1091;
  t1097 = 1. + t1093;
  t1115 = Sin(var1[9]);
  t1166 = t959*t951;
  t1184 = t1025*t971;
  t1190 = t1166 + t1184;
  t1209 = t959*t1025;
  t1224 = -1.*t951*t971;
  t1225 = t1209 + t1224;
  t1254 = Cos(var1[10]);
  t1257 = -1.*t1254;
  t1259 = 1. + t1257;
  t1269 = Sin(var1[10]);
  t1289 = -1.*t1115*t1190;
  t1290 = t1091*t1225;
  t1305 = t1289 + t1290;
  t1399 = t1091*t1190;
  t1444 = t1115*t1225;
  t1445 = t1399 + t1444;
  t1471 = Cos(var1[11]);
  t1478 = -1.*t1471;
  t1479 = 1. + t1478;
  t1537 = Sin(var1[11]);
  t1651 = t1269*t1305;
  t1657 = t1254*t1445;
  t1658 = t1651 + t1657;
  t1695 = t1254*t1305;
  t1696 = -1.*t1269*t1445;
  t1715 = t1695 + t1696;
  t211 = -1.*t159;
  t277 = 1. + t211;
  t1747 = Sin(var1[3]);
  t1745 = Cos(var1[3]);
  t1746 = t1745*t848;
  t1749 = -1.*t1747*t539*t415;
  t1756 = t1746 + t1749;
  t720 = 0.135*t663;
  t774 = 0.049*t761;
  t783 = t720 + t774;
  t861 = -0.049*t663;
  t865 = 0.135*t761;
  t872 = t861 + t865;
  t1770 = t159*t1756;
  t1778 = -1.*t126*t1747*t541;
  t1792 = t1770 + t1778;
  t1797 = t848*t1747*t539;
  t1802 = t1745*t415;
  t1805 = t1797 + t1802;
  t969 = -0.049*t965;
  t972 = -0.09*t971;
  t976 = t969 + t972;
  t1037 = -0.09*t965;
  t1065 = 0.049*t971;
  t1085 = t1037 + t1065;
  t1098 = -0.049*t1097;
  t1119 = -0.21*t1115;
  t1165 = t1098 + t1119;
  t1829 = t608*t1805;
  t1831 = t1792*t761;
  t1832 = t1829 + t1831;
  t1838 = -1.*t126*t159*t1747;
  t1840 = -1.*t1756*t541;
  t1849 = t1838 + t1840;
  t1192 = -0.21*t1097;
  t1202 = 0.049*t1115;
  t1206 = t1192 + t1202;
  t1265 = -0.27068*t1259;
  t1276 = 0.00159*t1269;
  t1277 = t1265 + t1276;
  t1855 = t959*t1832;
  t1856 = t1849*t971;
  t1858 = t1855 + t1856;
  t1872 = t959*t1849;
  t1881 = -1.*t1832*t971;
  t1882 = t1872 + t1881;
  t1312 = -0.00159*t1259;
  t1367 = -0.27068*t1269;
  t1396 = t1312 + t1367;
  t1524 = 0.01841*t1479;
  t1622 = -0.70544*t1537;
  t1625 = t1524 + t1622;
  t1898 = -1.*t1115*t1858;
  t1900 = t1091*t1882;
  t1902 = t1898 + t1900;
  t1921 = t1091*t1858;
  t1927 = t1115*t1882;
  t1928 = t1921 + t1927;
  t1676 = -0.70544*t1479;
  t1687 = -0.01841*t1537;
  t1693 = t1676 + t1687;
  t1956 = t1269*t1902;
  t1963 = t1254*t1928;
  t1987 = t1956 + t1963;
  t1996 = t1254*t1902;
  t1997 = -1.*t1269*t1928;
  t2016 = t1996 + t1997;
  t2051 = t848*t1747;
  t2052 = t1745*t539*t415;
  t2057 = t2051 + t2052;
  t2070 = t159*t2057;
  t2071 = t1745*t126*t541;
  t2072 = t2070 + t2071;
  t2078 = -1.*t1745*t848*t539;
  t2083 = t1747*t415;
  t2088 = t2078 + t2083;
  t2104 = t608*t2088;
  t2105 = t2072*t761;
  t2106 = t2104 + t2105;
  t2109 = t1745*t126*t159;
  t2110 = -1.*t2057*t541;
  t2111 = t2109 + t2110;
  t2116 = t959*t2106;
  t2119 = t2111*t971;
  t2120 = t2116 + t2119;
  t2122 = t959*t2111;
  t2123 = -1.*t2106*t971;
  t2125 = t2122 + t2123;
  t2131 = -1.*t1115*t2120;
  t2132 = t1091*t2125;
  t2134 = t2131 + t2132;
  t2136 = t1091*t2120;
  t2137 = t1115*t2125;
  t2139 = t2136 + t2137;
  t2141 = t1269*t2134;
  t2143 = t1254*t2139;
  t2147 = t2141 + t2143;
  t2149 = t1254*t2134;
  t2150 = -1.*t1269*t2139;
  t2151 = t2149 + t2150;
  t2165 = t1471*t2147;
  t2166 = t1537*t2151;
  t2170 = t2165 + t2166;
  t2200 = -1.*t608*t2072;
  t2203 = t2088*t761;
  t2227 = t2200 + t2203;
  t2034 = t1471*t1987;
  t2038 = t1537*t2016;
  t2039 = t2034 + t2038;
  t2230 = Power(t2227,2);
  t2232 = Power(t2170,2);
  t2238 = t2230 + t2232;
  t2244 = 1/Sqrt(t2238);
  t1735 = t1471*t1658;
  t1736 = t1537*t1715;
  t1738 = t1735 + t1736;
  p_output1[0]=t1025*t1085 + t1165*t1190 + t1206*t1225 + t1277*t1305 + t1396*t1445 + t1625*t1658 + t1693*t1715 - 1.11344*(-1.*t1537*t1658 + t1471*t1715) - 0.02159*t1738 - 0.135*t126*t277*t415 - 0.135*t539*t541 + t580*t783 + 0.1305*(t580*t608 - 1.*t126*t761*t848) + t126*t848*t872 + t951*t976 + var1[0];
  p_output1[1]=t1085*t1849 + t1165*t1858 + t1206*t1882 + t1277*t1902 + t1396*t1928 + t1625*t1987 + t1693*t2016 - 1.11344*(-1.*t1537*t1987 + t1471*t2016) - 0.02159*t2039 + 0.135*t1756*t277 + 0.135*t126*t1747*t541 + 0.1305*(t1792*t608 - 1.*t1805*t761) + t1792*t783 + t1805*t872 + t1832*t976 + var1[1];
  p_output1[2]=t1085*t2111 + t1165*t2120 + t1206*t2125 + t1277*t2134 + t1396*t2139 + t1625*t2147 + t1693*t2151 - 1.11344*(-1.*t1537*t2147 + t1471*t2151) - 0.02159*t2170 + 0.135*t2057*t277 - 0.135*t126*t1745*t541 + 0.1305*(t2072*t608 - 1.*t2088*t761) + t2072*t783 + t2088*t872 + t2106*t976 + var1[2];
  p_output1[3]=ArcTan(t2039*t2227*t2244 - 1.*t2170*t2244*(-1.*t1792*t608 + t1805*t761),-1.*t1738*t2227*t2244 + t2170*t2244*(-1.*t580*t608 + t126*t761*t848));
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#endif // MATLAB_MEX_FILE

namespace SymFunction
{

void p_leftPoint_constraint_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




