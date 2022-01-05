/*
 * Automatically Generated from Mathematica.
 * Sun 7 Nov 2021 14:27:43 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "p_rightHeel_constraint.hh"
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
  double t74;
  double t89;
  double t138;
  double t212;
  double t265;
  double t329;
  double t388;
  double t407;
  double t451;
  double t76;
  double t488;
  double t493;
  double t497;
  double t516;
  double t530;
  double t533;
  double t579;
  double t627;
  double t640;
  double t652;
  double t718;
  double t730;
  double t736;
  double t741;
  double t754;
  double t762;
  double t764;
  double t778;
  double t793;
  double t810;
  double t855;
  double t867;
  double t875;
  double t891;
  double t908;
  double t912;
  double t925;
  double t943;
  double t945;
  double t948;
  double t980;
  double t986;
  double t990;
  double t994;
  double t995;
  double t996;
  double t1002;
  double t1014;
  double t1017;
  double t1020;
  double t1049;
  double t1057;
  double t1059;
  double t1066;
  double t1068;
  double t1075;
  double t1089;
  double t1103;
  double t1107;
  double t1108;
  double t1132;
  double t1140;
  double t1142;
  double t366;
  double t367;
  double t243;
  double t287;
  double t310;
  double t1180;
  double t414;
  double t427;
  double t435;
  double t441;
  double t1215;
  double t474;
  double t480;
  double t482;
  double t1226;
  double t1232;
  double t1234;
  double t576;
  double t590;
  double t596;
  double t1201;
  double t1216;
  double t1220;
  double t1238;
  double t1248;
  double t1249;
  double t689;
  double t702;
  double t714;
  double t763;
  double t769;
  double t777;
  double t1264;
  double t1282;
  double t1298;
  double t1326;
  double t1328;
  double t1329;
  double t846;
  double t850;
  double t851;
  double t913;
  double t930;
  double t938;
  double t1335;
  double t1340;
  double t1349;
  double t1368;
  double t1370;
  double t1375;
  double t954;
  double t968;
  double t978;
  double t1000;
  double t1004;
  double t1011;
  double t1384;
  double t1389;
  double t1394;
  double t1398;
  double t1402;
  double t1403;
  double t1024;
  double t1038;
  double t1040;
  double t1079;
  double t1098;
  double t1099;
  double t1408;
  double t1413;
  double t1416;
  double t1426;
  double t1430;
  double t1431;
  double t1118;
  double t1124;
  double t1127;
  double t1436;
  double t1451;
  double t1457;
  double t1462;
  double t1464;
  double t1466;
  double t1520;
  double t1521;
  double t1523;
  double t1508;
  double t1509;
  double t1516;
  double t1526;
  double t1536;
  double t1537;
  double t1540;
  double t1543;
  double t1545;
  double t1567;
  double t1572;
  double t1575;
  double t1580;
  double t1583;
  double t1585;
  double t1598;
  double t1599;
  double t1600;
  double t1609;
  double t1612;
  double t1614;
  double t1617;
  double t1619;
  double t1621;
  double t1635;
  double t1638;
  double t1644;
  double t1646;
  double t1647;
  double t1650;
  double t1663;
  double t1670;
  double t1671;
  double t1688;
  double t1689;
  double t1690;
  t74 = Cos(var1[4]);
  t89 = Cos(var1[15]);
  t138 = -1.*t89;
  t212 = 1. + t138;
  t265 = Sin(var1[15]);
  t329 = Sin(var1[14]);
  t388 = Sin(var1[4]);
  t407 = Cos(var1[14]);
  t451 = Sin(var1[5]);
  t76 = Cos(var1[5]);
  t488 = t329*t388;
  t493 = -1.*t407*t74*t451;
  t497 = t488 + t493;
  t516 = Cos(var1[16]);
  t530 = -1.*t516;
  t533 = 1. + t530;
  t579 = Sin(var1[16]);
  t627 = t407*t388;
  t640 = t74*t329*t451;
  t652 = t627 + t640;
  t718 = t89*t74*t76;
  t730 = t265*t497;
  t736 = t718 + t730;
  t741 = Cos(var1[17]);
  t754 = -1.*t741;
  t762 = 1. + t754;
  t764 = Sin(var1[17]);
  t778 = t579*t652;
  t793 = t516*t736;
  t810 = t778 + t793;
  t855 = t516*t652;
  t867 = -1.*t579*t736;
  t875 = t855 + t867;
  t891 = Cos(var1[18]);
  t908 = -1.*t891;
  t912 = 1. + t908;
  t925 = Sin(var1[18]);
  t943 = -1.*t764*t810;
  t945 = t741*t875;
  t948 = t943 + t945;
  t980 = t741*t810;
  t986 = t764*t875;
  t990 = t980 + t986;
  t994 = Cos(var1[19]);
  t995 = -1.*t994;
  t996 = 1. + t995;
  t1002 = Sin(var1[19]);
  t1014 = t925*t948;
  t1017 = t891*t990;
  t1020 = t1014 + t1017;
  t1049 = t891*t948;
  t1057 = -1.*t925*t990;
  t1059 = t1049 + t1057;
  t1066 = Cos(var1[21]);
  t1068 = -1.*t1066;
  t1075 = 1. + t1068;
  t1089 = Sin(var1[21]);
  t1103 = -1.*t1002*t1020;
  t1107 = t994*t1059;
  t1108 = t1103 + t1107;
  t1132 = t994*t1020;
  t1140 = t1002*t1059;
  t1142 = t1132 + t1140;
  t366 = 0.135*t329;
  t367 = 0. + t366;
  t243 = -0.049*t212;
  t287 = -0.135*t265;
  t310 = 0. + t243 + t287;
  t1180 = Sin(var1[3]);
  t414 = -1.*t407;
  t427 = 1. + t414;
  t435 = -0.135*t427;
  t441 = 0. + t435;
  t1215 = Cos(var1[3]);
  t474 = -0.135*t212;
  t480 = 0.049*t265;
  t482 = 0. + t474 + t480;
  t1226 = t1215*t76;
  t1232 = -1.*t1180*t388*t451;
  t1234 = t1226 + t1232;
  t576 = -0.09*t533;
  t590 = 0.049*t579;
  t596 = 0. + t576 + t590;
  t1201 = t76*t1180*t388;
  t1216 = t1215*t451;
  t1220 = t1201 + t1216;
  t1238 = -1.*t74*t329*t1180;
  t1248 = t407*t1234;
  t1249 = t1238 + t1248;
  t689 = -0.049*t533;
  t702 = -0.09*t579;
  t714 = 0. + t689 + t702;
  t763 = -0.049*t762;
  t769 = -0.21*t764;
  t777 = 0. + t763 + t769;
  t1264 = -1.*t407*t74*t1180;
  t1282 = -1.*t329*t1234;
  t1298 = t1264 + t1282;
  t1326 = t89*t1220;
  t1328 = t265*t1249;
  t1329 = t1326 + t1328;
  t846 = -0.21*t762;
  t850 = 0.049*t764;
  t851 = 0. + t846 + t850;
  t913 = -0.27068*t912;
  t930 = 0.00159*t925;
  t938 = 0. + t913 + t930;
  t1335 = t579*t1298;
  t1340 = t516*t1329;
  t1349 = t1335 + t1340;
  t1368 = t516*t1298;
  t1370 = -1.*t579*t1329;
  t1375 = t1368 + t1370;
  t954 = -0.00159*t912;
  t968 = -0.27068*t925;
  t978 = 0. + t954 + t968;
  t1000 = 0.01841*t996;
  t1004 = -0.70544*t1002;
  t1011 = 0. + t1000 + t1004;
  t1384 = -1.*t764*t1349;
  t1389 = t741*t1375;
  t1394 = t1384 + t1389;
  t1398 = t741*t1349;
  t1402 = t764*t1375;
  t1403 = t1398 + t1402;
  t1024 = -0.70544*t996;
  t1038 = -0.01841*t1002;
  t1040 = 0. + t1024 + t1038;
  t1079 = -1.11344*t1075;
  t1098 = 0.02159*t1089;
  t1099 = 0. + t1079 + t1098;
  t1408 = t925*t1394;
  t1413 = t891*t1403;
  t1416 = t1408 + t1413;
  t1426 = t891*t1394;
  t1430 = -1.*t925*t1403;
  t1431 = t1426 + t1430;
  t1118 = -0.02159*t1075;
  t1124 = -1.11344*t1089;
  t1127 = 0. + t1118 + t1124;
  t1436 = -1.*t1002*t1416;
  t1451 = t994*t1431;
  t1457 = t1436 + t1451;
  t1462 = t994*t1416;
  t1464 = t1002*t1431;
  t1466 = t1462 + t1464;
  t1520 = t76*t1180;
  t1521 = t1215*t388*t451;
  t1523 = t1520 + t1521;
  t1508 = -1.*t1215*t76*t388;
  t1509 = t1180*t451;
  t1516 = t1508 + t1509;
  t1526 = t1215*t74*t329;
  t1536 = t407*t1523;
  t1537 = t1526 + t1536;
  t1540 = t407*t1215*t74;
  t1543 = -1.*t329*t1523;
  t1545 = t1540 + t1543;
  t1567 = t89*t1516;
  t1572 = t265*t1537;
  t1575 = t1567 + t1572;
  t1580 = t579*t1545;
  t1583 = t516*t1575;
  t1585 = t1580 + t1583;
  t1598 = t516*t1545;
  t1599 = -1.*t579*t1575;
  t1600 = t1598 + t1599;
  t1609 = -1.*t764*t1585;
  t1612 = t741*t1600;
  t1614 = t1609 + t1612;
  t1617 = t741*t1585;
  t1619 = t764*t1600;
  t1621 = t1617 + t1619;
  t1635 = t925*t1614;
  t1638 = t891*t1621;
  t1644 = t1635 + t1638;
  t1646 = t891*t1614;
  t1647 = -1.*t925*t1621;
  t1650 = t1646 + t1647;
  t1663 = -1.*t1002*t1644;
  t1670 = t994*t1650;
  t1671 = t1663 + t1670;
  t1688 = t994*t1644;
  t1689 = t1002*t1650;
  t1690 = t1688 + t1689;
  p_output1[0]=0. + t1011*t1020 + t1040*t1059 + t1099*t1108 + t1127*t1142 - 0.014395*(t1089*t1108 + t1066*t1142) - 1.184683*(t1066*t1108 - 1.*t1089*t1142) + t367*t388 + t482*t497 + t596*t652 + t714*t736 - 1.*t441*t451*t74 + t310*t74*t76 + t777*t810 + t851*t875 - 0.1305*(-1.*t265*t74*t76 + t497*t89) + t938*t948 + t978*t990 + var1[0];
  p_output1[1]=0. + t1011*t1416 + t1040*t1431 + t1099*t1457 + t1127*t1466 - 0.014395*(t1089*t1457 + t1066*t1466) - 1.184683*(t1066*t1457 - 1.*t1089*t1466) + t1220*t310 + t1234*t441 + t1249*t482 + t1298*t596 + t1329*t714 - 1.*t1180*t367*t74 + t1349*t777 + t1375*t851 - 0.1305*(-1.*t1220*t265 + t1249*t89) + t1394*t938 + t1403*t978 + var1[1];
  p_output1[2]=0. + t1011*t1644 + t1040*t1650 + t1099*t1671 + t1127*t1690 - 0.014395*(t1089*t1671 + t1066*t1690) - 1.184683*(t1066*t1671 - 1.*t1089*t1690) + t1516*t310 + t1523*t441 + t1537*t482 + t1545*t596 + t1575*t714 + t1215*t367*t74 + t1585*t777 + t1600*t851 - 0.1305*(-1.*t1516*t265 + t1537*t89) + t1614*t938 + t1621*t978 + var1[2];
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

void p_rightHeel_constraint_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




