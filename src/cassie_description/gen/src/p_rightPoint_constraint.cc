/*
 * Automatically Generated from Mathematica.
 * Sun 7 Nov 2021 14:26:45 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "p_rightPoint_constraint.hh"
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
  double t19;
  double t77;
  double t80;
  double t83;
  double t97;
  double t157;
  double t186;
  double t225;
  double t276;
  double t44;
  double t298;
  double t300;
  double t304;
  double t316;
  double t320;
  double t321;
  double t365;
  double t381;
  double t382;
  double t388;
  double t516;
  double t526;
  double t532;
  double t561;
  double t568;
  double t576;
  double t640;
  double t666;
  double t670;
  double t671;
  double t719;
  double t722;
  double t725;
  double t754;
  double t764;
  double t767;
  double t802;
  double t806;
  double t815;
  double t825;
  double t908;
  double t909;
  double t910;
  double t916;
  double t919;
  double t920;
  double t922;
  double t929;
  double t938;
  double t943;
  double t985;
  double t986;
  double t992;
  double t90;
  double t108;
  double t146;
  double t1087;
  double t268;
  double t269;
  double t1110;
  double t287;
  double t290;
  double t296;
  double t1144;
  double t1158;
  double t1163;
  double t337;
  double t366;
  double t367;
  double t1108;
  double t1118;
  double t1127;
  double t1170;
  double t1180;
  double t1181;
  double t480;
  double t482;
  double t498;
  double t632;
  double t662;
  double t664;
  double t1201;
  double t1215;
  double t1216;
  double t1355;
  double t1383;
  double t1384;
  double t682;
  double t702;
  double t718;
  double t795;
  double t803;
  double t804;
  double t1394;
  double t1397;
  double t1403;
  double t1428;
  double t1436;
  double t1437;
  double t856;
  double t877;
  double t891;
  double t921;
  double t925;
  double t926;
  double t1458;
  double t1461;
  double t1462;
  double t1476;
  double t1484;
  double t1489;
  double t946;
  double t948;
  double t983;
  double t1496;
  double t1502;
  double t1508;
  double t1516;
  double t1523;
  double t1525;
  double t1596;
  double t1600;
  double t1605;
  double t1580;
  double t1581;
  double t1583;
  double t1611;
  double t1613;
  double t1619;
  double t1635;
  double t1647;
  double t1650;
  double t1690;
  double t1701;
  double t1703;
  double t1706;
  double t1708;
  double t1713;
  double t1721;
  double t1722;
  double t1723;
  double t1726;
  double t1729;
  double t1732;
  double t1737;
  double t1748;
  double t1755;
  double t1783;
  double t1788;
  double t1790;
  double t1795;
  double t1804;
  double t1810;
  double t1839;
  double t1851;
  double t1862;
  double t1904;
  double t1906;
  double t1908;
  double t1545;
  double t1549;
  double t1550;
  double t1909;
  double t1910;
  double t1911;
  double t1913;
  double t1040;
  double t1054;
  double t1061;
  t19 = Cos(var1[4]);
  t77 = Cos(var1[15]);
  t80 = -1.*t77;
  t83 = 1. + t80;
  t97 = Sin(var1[15]);
  t157 = Sin(var1[14]);
  t186 = Sin(var1[4]);
  t225 = Cos(var1[14]);
  t276 = Sin(var1[5]);
  t44 = Cos(var1[5]);
  t298 = t157*t186;
  t300 = -1.*t225*t19*t276;
  t304 = t298 + t300;
  t316 = Cos(var1[16]);
  t320 = -1.*t316;
  t321 = 1. + t320;
  t365 = Sin(var1[16]);
  t381 = t225*t186;
  t382 = t19*t157*t276;
  t388 = t381 + t382;
  t516 = t77*t19*t44;
  t526 = t97*t304;
  t532 = t516 + t526;
  t561 = Cos(var1[17]);
  t568 = -1.*t561;
  t576 = 1. + t568;
  t640 = Sin(var1[17]);
  t666 = t365*t388;
  t670 = t316*t532;
  t671 = t666 + t670;
  t719 = t316*t388;
  t722 = -1.*t365*t532;
  t725 = t719 + t722;
  t754 = Cos(var1[18]);
  t764 = -1.*t754;
  t767 = 1. + t764;
  t802 = Sin(var1[18]);
  t806 = -1.*t640*t671;
  t815 = t561*t725;
  t825 = t806 + t815;
  t908 = t561*t671;
  t909 = t640*t725;
  t910 = t908 + t909;
  t916 = Cos(var1[19]);
  t919 = -1.*t916;
  t920 = 1. + t919;
  t922 = Sin(var1[19]);
  t929 = t802*t825;
  t938 = t754*t910;
  t943 = t929 + t938;
  t985 = t754*t825;
  t986 = -1.*t802*t910;
  t992 = t985 + t986;
  t90 = -0.049*t83;
  t108 = -0.135*t97;
  t146 = t90 + t108;
  t1087 = Sin(var1[3]);
  t268 = -1.*t225;
  t269 = 1. + t268;
  t1110 = Cos(var1[3]);
  t287 = -0.135*t83;
  t290 = 0.049*t97;
  t296 = t287 + t290;
  t1144 = t1110*t44;
  t1158 = -1.*t1087*t186*t276;
  t1163 = t1144 + t1158;
  t337 = -0.09*t321;
  t366 = 0.049*t365;
  t367 = t337 + t366;
  t1108 = t44*t1087*t186;
  t1118 = t1110*t276;
  t1127 = t1108 + t1118;
  t1170 = -1.*t19*t157*t1087;
  t1180 = t225*t1163;
  t1181 = t1170 + t1180;
  t480 = -0.049*t321;
  t482 = -0.09*t365;
  t498 = t480 + t482;
  t632 = -0.049*t576;
  t662 = -0.21*t640;
  t664 = t632 + t662;
  t1201 = -1.*t225*t19*t1087;
  t1215 = -1.*t157*t1163;
  t1216 = t1201 + t1215;
  t1355 = t77*t1127;
  t1383 = t97*t1181;
  t1384 = t1355 + t1383;
  t682 = -0.21*t576;
  t702 = 0.049*t640;
  t718 = t682 + t702;
  t795 = -0.27068*t767;
  t803 = 0.00159*t802;
  t804 = t795 + t803;
  t1394 = t365*t1216;
  t1397 = t316*t1384;
  t1403 = t1394 + t1397;
  t1428 = t316*t1216;
  t1436 = -1.*t365*t1384;
  t1437 = t1428 + t1436;
  t856 = -0.00159*t767;
  t877 = -0.27068*t802;
  t891 = t856 + t877;
  t921 = 0.01841*t920;
  t925 = -0.70544*t922;
  t926 = t921 + t925;
  t1458 = -1.*t640*t1403;
  t1461 = t561*t1437;
  t1462 = t1458 + t1461;
  t1476 = t561*t1403;
  t1484 = t640*t1437;
  t1489 = t1476 + t1484;
  t946 = -0.70544*t920;
  t948 = -0.01841*t922;
  t983 = t946 + t948;
  t1496 = t802*t1462;
  t1502 = t754*t1489;
  t1508 = t1496 + t1502;
  t1516 = t754*t1462;
  t1523 = -1.*t802*t1489;
  t1525 = t1516 + t1523;
  t1596 = t44*t1087;
  t1600 = t1110*t186*t276;
  t1605 = t1596 + t1600;
  t1580 = -1.*t1110*t44*t186;
  t1581 = t1087*t276;
  t1583 = t1580 + t1581;
  t1611 = t1110*t19*t157;
  t1613 = t225*t1605;
  t1619 = t1611 + t1613;
  t1635 = t225*t1110*t19;
  t1647 = -1.*t157*t1605;
  t1650 = t1635 + t1647;
  t1690 = t77*t1583;
  t1701 = t97*t1619;
  t1703 = t1690 + t1701;
  t1706 = t365*t1650;
  t1708 = t316*t1703;
  t1713 = t1706 + t1708;
  t1721 = t316*t1650;
  t1722 = -1.*t365*t1703;
  t1723 = t1721 + t1722;
  t1726 = -1.*t640*t1713;
  t1729 = t561*t1723;
  t1732 = t1726 + t1729;
  t1737 = t561*t1713;
  t1748 = t640*t1723;
  t1755 = t1737 + t1748;
  t1783 = t802*t1732;
  t1788 = t754*t1755;
  t1790 = t1783 + t1788;
  t1795 = t754*t1732;
  t1804 = -1.*t802*t1755;
  t1810 = t1795 + t1804;
  t1839 = t916*t1790;
  t1851 = t922*t1810;
  t1862 = t1839 + t1851;
  t1904 = t97*t1583;
  t1906 = -1.*t77*t1619;
  t1908 = t1904 + t1906;
  t1545 = t916*t1508;
  t1549 = t922*t1525;
  t1550 = t1545 + t1549;
  t1909 = Power(t1908,2);
  t1910 = Power(t1862,2);
  t1911 = t1909 + t1910;
  t1913 = 1/Sqrt(t1911);
  t1040 = t916*t943;
  t1054 = t922*t992;
  t1061 = t1040 + t1054;
  p_output1[0]=-0.02159*t1061 + 0.135*t157*t186 + 0.135*t19*t269*t276 + t296*t304 + t367*t388 + t146*t19*t44 + t498*t532 + t664*t671 + t718*t725 + t804*t825 + t891*t910 + t926*t943 - 0.1305*(t304*t77 - 1.*t19*t44*t97) + t983*t992 - 1.11344*(-1.*t922*t943 + t916*t992) + var1[0];
  p_output1[1]=t1127*t146 - 0.02159*t1550 - 0.135*t1087*t157*t19 - 0.135*t1163*t269 + t1181*t296 + t1216*t367 + t1384*t498 + t1403*t664 + t1437*t718 + t1462*t804 + t1489*t891 - 1.11344*(t1525*t916 - 1.*t1508*t922) + t1508*t926 - 0.1305*(t1181*t77 - 1.*t1127*t97) + t1525*t983 + var1[1];
  p_output1[2]=t146*t1583 - 0.02159*t1862 + 0.135*t1110*t157*t19 - 0.135*t1605*t269 + t1619*t296 + t1650*t367 + t1703*t498 + t1713*t664 + t1723*t718 + t1732*t804 + t1755*t891 - 1.11344*(t1810*t916 - 1.*t1790*t922) + t1790*t926 - 0.1305*(t1619*t77 - 1.*t1583*t97) + t1810*t983 + var1[2];
  p_output1[3]=ArcTan(t1550*t1908*t1913 - 1.*t1862*t1913*(-1.*t1181*t77 + t1127*t97),-1.*t1061*t1908*t1913 + t1862*t1913*(-1.*t304*t77 + t19*t44*t97));
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

void p_rightPoint_constraint_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




