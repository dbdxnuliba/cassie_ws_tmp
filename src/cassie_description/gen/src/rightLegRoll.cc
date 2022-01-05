/*
 * Automatically Generated from Mathematica.
 * Sun 7 Nov 2021 14:28:04 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "rightLegRoll.hh"
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
  double t53;
  double t125;
  double t148;
  double t159;
  double t182;
  double t226;
  double t240;
  double t256;
  double t277;
  double t293;
  double t308;
  double t449;
  double t856;
  double t570;
  double t597;
  double t634;
  double t700;
  double t783;
  double t812;
  double t830;
  double t1001;
  double t1003;
  double t1005;
  double t1033;
  double t1035;
  double t1036;
  double t1065;
  double t1192;
  double t1202;
  double t1091;
  double t1093;
  double t1097;
  double t1146;
  double t1154;
  double t1165;
  double t1209;
  double t1215;
  double t1232;
  double t1240;
  double t1257;
  double t1259;
  double t1274;
  double t1314;
  double t1315;
  double t1316;
  double t1345;
  double t1356;
  double t1357;
  double t1388;
  double t1440;
  double t1444;
  double t1445;
  double t1474;
  double t1475;
  double t1478;
  double t678;
  double t701;
  double t775;
  double t388;
  double t467;
  double t524;
  double t1627;
  double t1637;
  double t1657;
  double t879;
  double t964;
  double t965;
  double t976;
  double t991;
  double t993;
  double t1048;
  double t1083;
  double t1085;
  double t1592;
  double t1615;
  double t1622;
  double t1677;
  double t1678;
  double t1684;
  double t1112;
  double t1116;
  double t1145;
  double t1236;
  double t1242;
  double t1248;
  double t1718;
  double t1722;
  double t1734;
  double t1736;
  double t1737;
  double t1738;
  double t1289;
  double t1290;
  double t1312;
  double t1387;
  double t1396;
  double t1399;
  double t1747;
  double t1749;
  double t1751;
  double t1778;
  double t1785;
  double t1797;
  double t1463;
  double t1471;
  double t1473;
  double t1810;
  double t1829;
  double t1832;
  double t1838;
  double t1839;
  double t1849;
  t53 = Cos(var1[3]);
  t125 = Cos(var1[4]);
  t148 = Sin(var1[14]);
  t159 = t53*t125*t148;
  t182 = Cos(var1[14]);
  t226 = Sin(var1[3]);
  t240 = t182*t226;
  t256 = t159 + t240;
  t277 = Cos(var1[15]);
  t293 = -1.*t277;
  t308 = 1. + t293;
  t449 = Sin(var1[15]);
  t856 = Sin(var1[4]);
  t570 = Cos(var1[16]);
  t597 = -1.*t570;
  t634 = 1. + t597;
  t700 = Sin(var1[16]);
  t783 = t182*t53*t125;
  t812 = -1.*t148*t226;
  t830 = t783 + t812;
  t1001 = t449*t256;
  t1003 = -1.*t277*t53*t856;
  t1005 = t1001 + t1003;
  t1033 = Cos(var1[17]);
  t1035 = -1.*t1033;
  t1036 = 1. + t1035;
  t1065 = Sin(var1[17]);
  t1192 = -1.*var1[17];
  t1202 = 0.226893 + t1192;
  t1091 = t700*t830;
  t1093 = t570*t1005;
  t1097 = t1091 + t1093;
  t1146 = t570*t830;
  t1154 = -1.*t700*t1005;
  t1165 = t1146 + t1154;
  t1209 = Cos(t1202);
  t1215 = -1.*t1209;
  t1232 = 1. + t1215;
  t1240 = Sin(t1202);
  t1257 = -1.*t1065*t1097;
  t1259 = t1033*t1165;
  t1274 = t1257 + t1259;
  t1314 = t1033*t1097;
  t1315 = t1065*t1165;
  t1316 = t1314 + t1315;
  t1345 = Cos(var1[21]);
  t1356 = -1.*t1345;
  t1357 = 1. + t1356;
  t1388 = Sin(var1[21]);
  t1440 = t1240*t1274;
  t1444 = t1209*t1316;
  t1445 = t1440 + t1444;
  t1474 = t1209*t1274;
  t1475 = -1.*t1240*t1316;
  t1478 = t1474 + t1475;
  t678 = -0.09*t634;
  t701 = 0.049*t700;
  t775 = t678 + t701;
  t388 = -0.135*t308;
  t467 = 0.049*t449;
  t524 = t388 + t467;
  t1627 = t182*t53;
  t1637 = -1.*t125*t148*t226;
  t1657 = t1627 + t1637;
  t879 = -0.049*t308;
  t964 = -0.135*t449;
  t965 = t879 + t964;
  t976 = -0.049*t634;
  t991 = -0.09*t700;
  t993 = t976 + t991;
  t1048 = -0.049*t1036;
  t1083 = -0.21*t1065;
  t1085 = t1048 + t1083;
  t1592 = -1.*t53*t148;
  t1615 = -1.*t182*t125*t226;
  t1622 = t1592 + t1615;
  t1677 = t449*t1657;
  t1678 = t277*t226*t856;
  t1684 = t1677 + t1678;
  t1112 = -0.21*t1036;
  t1116 = 0.049*t1065;
  t1145 = t1112 + t1116;
  t1236 = -0.70544*t1232;
  t1242 = -0.01841*t1240;
  t1248 = t1236 + t1242;
  t1718 = t700*t1622;
  t1722 = t570*t1684;
  t1734 = t1718 + t1722;
  t1736 = t570*t1622;
  t1737 = -1.*t700*t1684;
  t1738 = t1736 + t1737;
  t1289 = 0.01841*t1232;
  t1290 = -0.70544*t1240;
  t1312 = t1289 + t1290;
  t1387 = -0.02159*t1357;
  t1396 = -1.11344*t1388;
  t1399 = t1387 + t1396;
  t1747 = -1.*t1065*t1734;
  t1749 = t1033*t1738;
  t1751 = t1747 + t1749;
  t1778 = t1033*t1734;
  t1785 = t1065*t1738;
  t1797 = t1778 + t1785;
  t1463 = -1.11344*t1357;
  t1471 = 0.02159*t1388;
  t1473 = t1463 + t1471;
  t1810 = t1240*t1751;
  t1829 = t1209*t1797;
  t1832 = t1810 + t1829;
  t1838 = t1209*t1751;
  t1839 = -1.*t1240*t1797;
  t1849 = t1838 + t1839;
  p_output1[0]=ArcTan(-1.*t1085*t1097 - 1.*t1145*t1165 - 1.*t1248*t1274 - 1.*t1312*t1316 - 1.*t1399*t1445 - 1.*t1473*t1478 + 1.11344*(-1.*t1388*t1445 + t1345*t1478) + 0.02159*(t1345*t1445 + t1388*t1478) - 0.135*t256 - 1.*t256*t524 - 1.*t775*t830 + 0.049*t53*t856 + 0.1305*(t256*t277 + t449*t53*t856) + t53*t856*t965 - 1.*t1005*t993,0.135*t1657 + t1085*t1734 + t1145*t1738 + t1248*t1751 + t1312*t1797 + t1399*t1832 + t1473*t1849 - 1.11344*(-1.*t1388*t1832 + t1345*t1849) - 0.02159*(t1345*t1832 + t1388*t1849) + t1657*t524 + t1622*t775 + 0.049*t226*t856 - 0.1305*(t1657*t277 - 1.*t226*t449*t856) + t226*t856*t965 + t1684*t993);
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

void rightLegRoll_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




