/*
 * Automatically Generated from Mathematica.
 * Sun 7 Nov 2021 14:25:57 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "position_leftFoot.hh"
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
  double t113;
  double t193;
  double t370;
  double t398;
  double t465;
  double t624;
  double t743;
  double t843;
  double t852;
  double t860;
  double t872;
  double t819;
  double t820;
  double t833;
  double t908;
  double t1038;
  double t1048;
  double t1050;
  double t1054;
  double t1144;
  double t1154;
  double t1156;
  double t1193;
  double t1196;
  double t1206;
  double t1217;
  double t1219;
  double t1220;
  double t1223;
  double t1231;
  double t1233;
  double t1234;
  double t1261;
  double t1270;
  double t1277;
  double t1289;
  double t1295;
  double t1302;
  double t1315;
  double t1330;
  double t1331;
  double t1333;
  double t1369;
  double t1373;
  double t1380;
  double t1395;
  double t1403;
  double t1415;
  double t1436;
  double t1447;
  double t1449;
  double t1451;
  double t1492;
  double t1501;
  double t1511;
  double t1563;
  double t1567;
  double t541;
  double t646;
  double t701;
  double t758;
  double t776;
  double t786;
  double t1570;
  double t1571;
  double t1573;
  double t866;
  double t880;
  double t894;
  double t915;
  double t924;
  double t934;
  double t1053;
  double t1055;
  double t1143;
  double t1585;
  double t1594;
  double t1595;
  double t1600;
  double t1601;
  double t1602;
  double t1176;
  double t1185;
  double t1192;
  double t1221;
  double t1227;
  double t1229;
  double t1607;
  double t1611;
  double t1612;
  double t1614;
  double t1615;
  double t1618;
  double t1237;
  double t1249;
  double t1257;
  double t1310;
  double t1323;
  double t1329;
  double t1623;
  double t1625;
  double t1627;
  double t1629;
  double t1631;
  double t1632;
  double t1343;
  double t1361;
  double t1363;
  double t1424;
  double t1443;
  double t1444;
  double t1638;
  double t1645;
  double t1646;
  double t1650;
  double t1652;
  double t1655;
  double t1475;
  double t1476;
  double t1485;
  double t1671;
  double t1678;
  double t1684;
  double t1695;
  double t1700;
  double t1707;
  double t1564;
  double t1565;
  double t1760;
  double t1765;
  double t1776;
  double t1815;
  double t1816;
  double t1817;
  double t1819;
  double t1827;
  double t1835;
  double t1852;
  double t1856;
  double t1865;
  double t1878;
  double t1884;
  double t1888;
  double t1895;
  double t1896;
  double t1898;
  double t1900;
  double t1902;
  double t1903;
  double t1905;
  double t1907;
  double t1908;
  double t1910;
  double t1911;
  double t1912;
  double t1915;
  double t1916;
  double t1923;
  double t1925;
  double t1927;
  double t1928;
  t113 = Sin(var1[4]);
  t193 = Sin(var1[6]);
  t370 = Cos(var1[7]);
  t398 = -1.*t370;
  t465 = 1. + t398;
  t624 = Sin(var1[7]);
  t743 = Cos(var1[4]);
  t843 = Cos(var1[8]);
  t852 = -1.*t843;
  t860 = 1. + t852;
  t872 = Sin(var1[8]);
  t819 = t743*t370;
  t820 = t113*t193*t624;
  t833 = t819 + t820;
  t908 = Cos(var1[6]);
  t1038 = Cos(var1[9]);
  t1048 = -1.*t1038;
  t1050 = 1. + t1048;
  t1054 = Sin(var1[9]);
  t1144 = t843*t833;
  t1154 = t908*t113*t872;
  t1156 = t1144 + t1154;
  t1193 = t908*t843*t113;
  t1196 = -1.*t833*t872;
  t1206 = t1193 + t1196;
  t1217 = Cos(var1[10]);
  t1219 = -1.*t1217;
  t1220 = 1. + t1219;
  t1223 = Sin(var1[10]);
  t1231 = -1.*t1054*t1156;
  t1233 = t1038*t1206;
  t1234 = t1231 + t1233;
  t1261 = t1038*t1156;
  t1270 = t1054*t1206;
  t1277 = t1261 + t1270;
  t1289 = Cos(var1[11]);
  t1295 = -1.*t1289;
  t1302 = 1. + t1295;
  t1315 = Sin(var1[11]);
  t1330 = t1223*t1234;
  t1331 = t1217*t1277;
  t1333 = t1330 + t1331;
  t1369 = t1217*t1234;
  t1373 = -1.*t1223*t1277;
  t1380 = t1369 + t1373;
  t1395 = Cos(var1[13]);
  t1403 = -1.*t1395;
  t1415 = 1. + t1403;
  t1436 = Sin(var1[13]);
  t1447 = -1.*t1315*t1333;
  t1449 = t1289*t1380;
  t1451 = t1447 + t1449;
  t1492 = t1289*t1333;
  t1501 = t1315*t1380;
  t1511 = t1492 + t1501;
  t1563 = Cos(var1[3]);
  t1567 = Sin(var1[3]);
  t541 = 0.135*t465;
  t646 = 0.049*t624;
  t701 = t541 + t646;
  t758 = -0.049*t465;
  t776 = 0.135*t624;
  t786 = t758 + t776;
  t1570 = t1563*t908;
  t1571 = -1.*t743*t1567*t193;
  t1573 = t1570 + t1571;
  t866 = -0.049*t860;
  t880 = -0.09*t872;
  t894 = t866 + t880;
  t915 = -0.09*t860;
  t924 = 0.049*t872;
  t934 = t915 + t924;
  t1053 = -0.049*t1050;
  t1055 = -0.21*t1054;
  t1143 = t1053 + t1055;
  t1585 = t370*t1567*t113;
  t1594 = t1573*t624;
  t1595 = t1585 + t1594;
  t1600 = -1.*t743*t908*t1567;
  t1601 = -1.*t1563*t193;
  t1602 = t1600 + t1601;
  t1176 = -0.21*t1050;
  t1185 = 0.049*t1054;
  t1192 = t1176 + t1185;
  t1221 = -0.27068*t1220;
  t1227 = 0.00159*t1223;
  t1229 = t1221 + t1227;
  t1607 = t843*t1595;
  t1611 = t1602*t872;
  t1612 = t1607 + t1611;
  t1614 = t843*t1602;
  t1615 = -1.*t1595*t872;
  t1618 = t1614 + t1615;
  t1237 = -0.00159*t1220;
  t1249 = -0.27068*t1223;
  t1257 = t1237 + t1249;
  t1310 = 0.01841*t1302;
  t1323 = -0.70544*t1315;
  t1329 = t1310 + t1323;
  t1623 = -1.*t1054*t1612;
  t1625 = t1038*t1618;
  t1627 = t1623 + t1625;
  t1629 = t1038*t1612;
  t1631 = t1054*t1618;
  t1632 = t1629 + t1631;
  t1343 = -0.70544*t1302;
  t1361 = -0.01841*t1315;
  t1363 = t1343 + t1361;
  t1424 = -1.11344*t1415;
  t1443 = 0.02159*t1436;
  t1444 = t1424 + t1443;
  t1638 = t1223*t1627;
  t1645 = t1217*t1632;
  t1646 = t1638 + t1645;
  t1650 = t1217*t1627;
  t1652 = -1.*t1223*t1632;
  t1655 = t1650 + t1652;
  t1475 = -0.02159*t1415;
  t1476 = -1.11344*t1436;
  t1485 = t1475 + t1476;
  t1671 = -1.*t1315*t1646;
  t1678 = t1289*t1655;
  t1684 = t1671 + t1678;
  t1695 = t1289*t1646;
  t1700 = t1315*t1655;
  t1707 = t1695 + t1700;
  t1564 = -1.*t908;
  t1565 = 1. + t1564;
  t1760 = t908*t1567;
  t1765 = t1563*t743*t193;
  t1776 = t1760 + t1765;
  t1815 = -1.*t1563*t370*t113;
  t1816 = t1776*t624;
  t1817 = t1815 + t1816;
  t1819 = t1563*t743*t908;
  t1827 = -1.*t1567*t193;
  t1835 = t1819 + t1827;
  t1852 = t843*t1817;
  t1856 = t1835*t872;
  t1865 = t1852 + t1856;
  t1878 = t843*t1835;
  t1884 = -1.*t1817*t872;
  t1888 = t1878 + t1884;
  t1895 = -1.*t1054*t1865;
  t1896 = t1038*t1888;
  t1898 = t1895 + t1896;
  t1900 = t1038*t1865;
  t1902 = t1054*t1888;
  t1903 = t1900 + t1902;
  t1905 = t1223*t1898;
  t1907 = t1217*t1903;
  t1908 = t1905 + t1907;
  t1910 = t1217*t1898;
  t1911 = -1.*t1223*t1903;
  t1912 = t1910 + t1911;
  t1915 = -1.*t1315*t1908;
  t1916 = t1289*t1912;
  t1923 = t1915 + t1916;
  t1925 = t1289*t1908;
  t1927 = t1315*t1912;
  t1928 = t1925 + t1927;
  p_output1[0]=t1143*t1156 + t1192*t1206 + t1229*t1234 + t1257*t1277 + t1329*t1333 + t1363*t1380 + t1444*t1451 + t1485*t1511 + 0.0306*(t1436*t1451 + t1395*t1511) - 1.13106*(t1395*t1451 - 1.*t1436*t1511) - 0.135*t113*t193 + t113*t193*t701 + 0.1305*(t113*t193*t370 - 1.*t624*t743) + t743*t786 + t833*t894 + t113*t908*t934 + var1[0];
  p_output1[1]=0.135*t1563*t1565 + t1143*t1612 + t1192*t1618 + t1229*t1627 + t1257*t1632 + t1329*t1646 + t1363*t1655 + t1444*t1684 + t1485*t1707 + 0.0306*(t1436*t1684 + t1395*t1707) - 1.13106*(t1395*t1684 - 1.*t1436*t1707) + 0.1305*(t1573*t370 - 1.*t113*t1567*t624) + t1573*t701 + 0.135*t1567*t193*t743 + t113*t1567*t786 + t1595*t894 + t1602*t934 + var1[1];
  p_output1[2]=0.135*t1565*t1567 + t1143*t1865 + t1192*t1888 + t1229*t1898 + t1257*t1903 + t1329*t1908 + t1363*t1912 + t1444*t1923 + t1485*t1928 + 0.0306*(t1436*t1923 + t1395*t1928) - 1.13106*(t1395*t1923 - 1.*t1436*t1928) + 0.1305*(t1776*t370 + t113*t1563*t624) + t1776*t701 - 0.135*t1563*t193*t743 - 1.*t113*t1563*t786 + t1817*t894 + t1835*t934 + var1[2];
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

void position_leftFoot_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




