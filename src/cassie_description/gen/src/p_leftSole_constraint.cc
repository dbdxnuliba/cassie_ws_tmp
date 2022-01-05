/*
 * Automatically Generated from Mathematica.
 * Sun 7 Nov 2021 14:26:51 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "p_leftSole_constraint.hh"
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
  double t26;
  double t45;
  double t98;
  double t125;
  double t126;
  double t160;
  double t193;
  double t201;
  double t216;
  double t145;
  double t155;
  double t159;
  double t256;
  double t415;
  double t437;
  double t449;
  double t475;
  double t359;
  double t383;
  double t387;
  double t512;
  double t518;
  double t524;
  double t552;
  double t559;
  double t563;
  double t570;
  double t600;
  double t603;
  double t616;
  double t696;
  double t700;
  double t708;
  double t721;
  double t758;
  double t771;
  double t783;
  double t820;
  double t842;
  double t848;
  double t931;
  double t934;
  double t944;
  double t959;
  double t960;
  double t964;
  double t969;
  double t976;
  double t977;
  double t979;
  double t1005;
  double t1013;
  double t1019;
  double t1035;
  double t1037;
  double t1044;
  double t1065;
  double t1091;
  double t1093;
  double t1097;
  double t1119;
  double t1120;
  double t1165;
  double t53;
  double t72;
  double t1254;
  double t1237;
  double t1240;
  double t1257;
  double t1259;
  double t211;
  double t224;
  double t226;
  double t260;
  double t277;
  double t293;
  double t1265;
  double t1269;
  double t1274;
  double t1277;
  double t1289;
  double t1290;
  double t467;
  double t504;
  double t506;
  double t531;
  double t535;
  double t539;
  double t567;
  double t572;
  double t597;
  double t1345;
  double t1356;
  double t1357;
  double t1388;
  double t1396;
  double t1399;
  double t634;
  double t663;
  double t665;
  double t774;
  double t788;
  double t789;
  double t1440;
  double t1444;
  double t1445;
  double t1456;
  double t1463;
  double t1471;
  double t865;
  double t872;
  double t878;
  double t965;
  double t971;
  double t972;
  double t1473;
  double t1475;
  double t1478;
  double t1514;
  double t1524;
  double t1531;
  double t991;
  double t1001;
  double t1003;
  double t1048;
  double t1083;
  double t1085;
  double t1554;
  double t1568;
  double t1573;
  double t1592;
  double t1615;
  double t1622;
  double t1104;
  double t1112;
  double t1115;
  double t1625;
  double t1627;
  double t1637;
  double t1657;
  double t1658;
  double t1664;
  double t1699;
  double t1710;
  double t1714;
  double t1736;
  double t1738;
  double t1745;
  double t1747;
  double t1749;
  double t1751;
  double t1797;
  double t1802;
  double t1829;
  double t1832;
  double t1835;
  double t1838;
  double t1849;
  double t1855;
  double t1856;
  double t1872;
  double t1881;
  double t1882;
  double t1894;
  double t1898;
  double t1900;
  double t1915;
  double t1921;
  double t1927;
  double t1935;
  double t1956;
  double t1963;
  double t1996;
  double t1997;
  double t2004;
  double t2033;
  double t2034;
  double t2035;
  double t2038;
  double t2039;
  double t2051;
  double t1676;
  double t1677;
  double t1678;
  double t1684;
  double t1687;
  double t1693;
  double t1184;
  double t1190;
  double t1192;
  double t1202;
  double t1206;
  double t1209;
  double t2057;
  double t2070;
  double t2071;
  double t2078;
  double t2082;
  double t2083;
  double t1312;
  double t1314;
  double t1331;
  double t1770;
  double t1778;
  double t1785;
  double t2131;
  double t2132;
  double t2134;
  double t2136;
  double t2137;
  double t2139;
  double t2141;
  double t305;
  double t308;
  double t314;
  t26 = Cos(var1[4]);
  t45 = Cos(var1[6]);
  t98 = Sin(var1[5]);
  t125 = Sin(var1[4]);
  t126 = Sin(var1[6]);
  t160 = Cos(var1[7]);
  t193 = -1.*t160;
  t201 = 1. + t193;
  t216 = Sin(var1[7]);
  t145 = -1.*t26*t45*t98;
  t155 = t125*t126;
  t159 = t145 + t155;
  t256 = Cos(var1[5]);
  t415 = Cos(var1[8]);
  t437 = -1.*t415;
  t449 = 1. + t437;
  t475 = Sin(var1[8]);
  t359 = t26*t256*t160;
  t383 = t159*t216;
  t387 = t359 + t383;
  t512 = t45*t125;
  t518 = t26*t98*t126;
  t524 = t512 + t518;
  t552 = Cos(var1[9]);
  t559 = -1.*t552;
  t563 = 1. + t559;
  t570 = Sin(var1[9]);
  t600 = t415*t387;
  t603 = t524*t475;
  t616 = t600 + t603;
  t696 = t415*t524;
  t700 = -1.*t387*t475;
  t708 = t696 + t700;
  t721 = Cos(var1[10]);
  t758 = -1.*t721;
  t771 = 1. + t758;
  t783 = Sin(var1[10]);
  t820 = -1.*t570*t616;
  t842 = t552*t708;
  t848 = t820 + t842;
  t931 = t552*t616;
  t934 = t570*t708;
  t944 = t931 + t934;
  t959 = Cos(var1[11]);
  t960 = -1.*t959;
  t964 = 1. + t960;
  t969 = Sin(var1[11]);
  t976 = t783*t848;
  t977 = t721*t944;
  t979 = t976 + t977;
  t1005 = t721*t848;
  t1013 = -1.*t783*t944;
  t1019 = t1005 + t1013;
  t1035 = Cos(var1[13]);
  t1037 = -1.*t1035;
  t1044 = 1. + t1037;
  t1065 = Sin(var1[13]);
  t1091 = -1.*t969*t979;
  t1093 = t959*t1019;
  t1097 = t1091 + t1093;
  t1119 = t959*t979;
  t1120 = t969*t1019;
  t1165 = t1119 + t1120;
  t53 = -1.*t45;
  t72 = 1. + t53;
  t1254 = Sin(var1[3]);
  t1237 = Cos(var1[3]);
  t1240 = t1237*t256;
  t1257 = -1.*t1254*t125*t98;
  t1259 = t1240 + t1257;
  t211 = 0.135*t201;
  t224 = 0.049*t216;
  t226 = t211 + t224;
  t260 = -0.049*t201;
  t277 = 0.135*t216;
  t293 = t260 + t277;
  t1265 = t45*t1259;
  t1269 = -1.*t26*t1254*t126;
  t1274 = t1265 + t1269;
  t1277 = t256*t1254*t125;
  t1289 = t1237*t98;
  t1290 = t1277 + t1289;
  t467 = -0.049*t449;
  t504 = -0.09*t475;
  t506 = t467 + t504;
  t531 = -0.09*t449;
  t535 = 0.049*t475;
  t539 = t531 + t535;
  t567 = -0.049*t563;
  t572 = -0.21*t570;
  t597 = t567 + t572;
  t1345 = t160*t1290;
  t1356 = t1274*t216;
  t1357 = t1345 + t1356;
  t1388 = -1.*t26*t45*t1254;
  t1396 = -1.*t1259*t126;
  t1399 = t1388 + t1396;
  t634 = -0.21*t563;
  t663 = 0.049*t570;
  t665 = t634 + t663;
  t774 = -0.27068*t771;
  t788 = 0.00159*t783;
  t789 = t774 + t788;
  t1440 = t415*t1357;
  t1444 = t1399*t475;
  t1445 = t1440 + t1444;
  t1456 = t415*t1399;
  t1463 = -1.*t1357*t475;
  t1471 = t1456 + t1463;
  t865 = -0.00159*t771;
  t872 = -0.27068*t783;
  t878 = t865 + t872;
  t965 = 0.01841*t964;
  t971 = -0.70544*t969;
  t972 = t965 + t971;
  t1473 = -1.*t570*t1445;
  t1475 = t552*t1471;
  t1478 = t1473 + t1475;
  t1514 = t552*t1445;
  t1524 = t570*t1471;
  t1531 = t1514 + t1524;
  t991 = -0.70544*t964;
  t1001 = -0.01841*t969;
  t1003 = t991 + t1001;
  t1048 = -1.11344*t1044;
  t1083 = 0.02159*t1065;
  t1085 = t1048 + t1083;
  t1554 = t783*t1478;
  t1568 = t721*t1531;
  t1573 = t1554 + t1568;
  t1592 = t721*t1478;
  t1615 = -1.*t783*t1531;
  t1622 = t1592 + t1615;
  t1104 = -0.02159*t1044;
  t1112 = -1.11344*t1065;
  t1115 = t1104 + t1112;
  t1625 = -1.*t969*t1573;
  t1627 = t959*t1622;
  t1637 = t1625 + t1627;
  t1657 = t959*t1573;
  t1658 = t969*t1622;
  t1664 = t1657 + t1658;
  t1699 = t256*t1254;
  t1710 = t1237*t125*t98;
  t1714 = t1699 + t1710;
  t1736 = t45*t1714;
  t1738 = t1237*t26*t126;
  t1745 = t1736 + t1738;
  t1747 = -1.*t1237*t256*t125;
  t1749 = t1254*t98;
  t1751 = t1747 + t1749;
  t1797 = t160*t1751;
  t1802 = t1745*t216;
  t1829 = t1797 + t1802;
  t1832 = t1237*t26*t45;
  t1835 = -1.*t1714*t126;
  t1838 = t1832 + t1835;
  t1849 = t415*t1829;
  t1855 = t1838*t475;
  t1856 = t1849 + t1855;
  t1872 = t415*t1838;
  t1881 = -1.*t1829*t475;
  t1882 = t1872 + t1881;
  t1894 = -1.*t570*t1856;
  t1898 = t552*t1882;
  t1900 = t1894 + t1898;
  t1915 = t552*t1856;
  t1921 = t570*t1882;
  t1927 = t1915 + t1921;
  t1935 = t783*t1900;
  t1956 = t721*t1927;
  t1963 = t1935 + t1956;
  t1996 = t721*t1900;
  t1997 = -1.*t783*t1927;
  t2004 = t1996 + t1997;
  t2033 = -1.*t969*t1963;
  t2034 = t959*t2004;
  t2035 = t2033 + t2034;
  t2038 = t959*t1963;
  t2039 = t969*t2004;
  t2051 = t2038 + t2039;
  t1676 = t1065*t1637;
  t1677 = t1035*t1664;
  t1678 = t1676 + t1677;
  t1684 = t1035*t1637;
  t1687 = -1.*t1065*t1664;
  t1693 = t1684 + t1687;
  t1184 = t1065*t1097;
  t1190 = t1035*t1165;
  t1192 = t1184 + t1190;
  t1202 = t1035*t1097;
  t1206 = -1.*t1065*t1165;
  t1209 = t1202 + t1206;
  t2057 = t1065*t2035;
  t2070 = t1035*t2051;
  t2071 = t2057 + t2070;
  t2078 = t1035*t2035;
  t2082 = -1.*t1065*t2051;
  t2083 = t2078 + t2082;
  t1312 = t160*t1274;
  t1314 = -1.*t1290*t216;
  t1331 = t1312 + t1314;
  t1770 = t160*t1745;
  t1778 = -1.*t1751*t216;
  t1785 = t1770 + t1778;
  t2131 = -0.766044*t2071;
  t2132 = 0.642788*t2083;
  t2134 = t2131 + t2132;
  t2136 = Power(t1785,2);
  t2137 = Power(t2134,2);
  t2139 = t2136 + t2137;
  t2141 = 1/Sqrt(t2139);
  t305 = t160*t159;
  t308 = -1.*t26*t256*t216;
  t314 = t305 + t308;
  p_output1[0]=t1003*t1019 + t1085*t1097 + t1115*t1165 + 0.0306*t1192 - 1.13106*t1209 - 0.135*t125*t126 + t159*t226 + t256*t26*t293 + 0.1305*t314 + t387*t506 + t524*t539 + t597*t616 + t665*t708 + t789*t848 + t878*t944 + t972*t979 - 0.135*t26*t72*t98 + var1[0];
  p_output1[1]=0.1305*t1331 + t1003*t1622 + t1085*t1637 + t1115*t1664 + 0.0306*t1678 - 1.13106*t1693 + t1274*t226 + 0.135*t1254*t126*t26 + t1290*t293 + t1357*t506 + t1399*t539 + t1445*t597 + t1471*t665 + 0.135*t1259*t72 + t1478*t789 + t1531*t878 + t1573*t972 + var1[1];
  p_output1[2]=0.1305*t1785 + t1003*t2004 + t1085*t2035 + t1115*t2051 + 0.0306*t2071 - 1.13106*t2083 + t1745*t226 - 0.135*t1237*t126*t26 + t1751*t293 + t1829*t506 + t1838*t539 + t1856*t597 + t1882*t665 + 0.135*t1714*t72 + t1900*t789 + t1927*t878 + t1963*t972 + var1[2];
  p_output1[3]=ArcTan(Sqrt(Power(0.642788*t1192 + 0.766044*t1209,2) + Power(0.642788*t1678 + 0.766044*t1693,2)),-0.642788*t2071 - 0.766044*t2083);
  p_output1[4]=ArcTan(-1.*(-0.766044*t1678 + 0.642788*t1693)*t1785*t2141 + t1331*t2134*t2141,(-0.766044*t1192 + 0.642788*t1209)*t1785*t2141 - 1.*t2134*t2141*t314);
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

void p_leftSole_constraint_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




