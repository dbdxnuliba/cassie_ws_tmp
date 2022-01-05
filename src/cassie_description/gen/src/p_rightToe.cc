/*
 * Automatically Generated from Mathematica.
 * Sun 7 Nov 2021 14:26:04 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "p_rightToe.hh"
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
  double t1456;
  double t1509;
  double t2634;
  double t2659;
  double t5039;
  double t5374;
  double t5375;
  double t5524;
  double t5664;
  double t1500;
  double t5821;
  double t5828;
  double t5829;
  double t5835;
  double t5841;
  double t5848;
  double t5858;
  double t5879;
  double t5883;
  double t5889;
  double t5979;
  double t5990;
  double t6008;
  double t6013;
  double t6014;
  double t6015;
  double t6018;
  double t6041;
  double t6047;
  double t6051;
  double t6056;
  double t6063;
  double t6080;
  double t6090;
  double t6105;
  double t6113;
  double t6131;
  double t6146;
  double t6147;
  double t6148;
  double t6157;
  double t6159;
  double t6160;
  double t6173;
  double t6177;
  double t6179;
  double t6181;
  double t6201;
  double t6205;
  double t6210;
  double t6243;
  double t6247;
  double t6248;
  double t6251;
  double t6252;
  double t6253;
  double t6255;
  double t6259;
  double t6260;
  double t6265;
  double t6273;
  double t6278;
  double t6284;
  double t4918;
  double t5295;
  double t5372;
  double t6336;
  double t5535;
  double t5599;
  double t6339;
  double t5712;
  double t5774;
  double t5784;
  double t6345;
  double t6346;
  double t6348;
  double t5853;
  double t5862;
  double t5866;
  double t6338;
  double t6340;
  double t6343;
  double t6350;
  double t6351;
  double t6352;
  double t5954;
  double t5968;
  double t5972;
  double t6017;
  double t6032;
  double t6036;
  double t6360;
  double t6367;
  double t6373;
  double t6403;
  double t6405;
  double t6406;
  double t6053;
  double t6054;
  double t6055;
  double t6117;
  double t6140;
  double t6145;
  double t6410;
  double t6411;
  double t6412;
  double t6416;
  double t6418;
  double t6423;
  double t6152;
  double t6155;
  double t6156;
  double t6180;
  double t6183;
  double t6189;
  double t6426;
  double t6427;
  double t6428;
  double t6431;
  double t6436;
  double t6437;
  double t6228;
  double t6233;
  double t6239;
  double t6254;
  double t6256;
  double t6258;
  double t6447;
  double t6452;
  double t6460;
  double t6496;
  double t6500;
  double t6507;
  double t6268;
  double t6270;
  double t6272;
  double t6509;
  double t6513;
  double t6514;
  double t6516;
  double t6517;
  double t6518;
  double t6568;
  double t6572;
  double t6578;
  double t6547;
  double t6552;
  double t6557;
  double t6580;
  double t6581;
  double t6582;
  double t6587;
  double t6588;
  double t6589;
  double t6598;
  double t6602;
  double t6608;
  double t6622;
  double t6627;
  double t6635;
  double t6649;
  double t6680;
  double t6682;
  double t6685;
  double t6686;
  double t6687;
  double t6690;
  double t6691;
  double t6692;
  double t6695;
  double t6696;
  double t6701;
  double t6707;
  double t6713;
  double t6719;
  double t6728;
  double t6733;
  double t6740;
  double t6751;
  double t6752;
  double t6753;
  t1456 = Cos(var1[4]);
  t1509 = Cos(var1[15]);
  t2634 = -1.*t1509;
  t2659 = 1. + t2634;
  t5039 = Sin(var1[15]);
  t5374 = Sin(var1[14]);
  t5375 = Sin(var1[4]);
  t5524 = Cos(var1[14]);
  t5664 = Sin(var1[5]);
  t1500 = Cos(var1[5]);
  t5821 = t5374*t5375;
  t5828 = -1.*t5524*t1456*t5664;
  t5829 = t5821 + t5828;
  t5835 = Cos(var1[16]);
  t5841 = -1.*t5835;
  t5848 = 1. + t5841;
  t5858 = Sin(var1[16]);
  t5879 = t5524*t5375;
  t5883 = t1456*t5374*t5664;
  t5889 = t5879 + t5883;
  t5979 = t1509*t1456*t1500;
  t5990 = t5039*t5829;
  t6008 = t5979 + t5990;
  t6013 = Cos(var1[17]);
  t6014 = -1.*t6013;
  t6015 = 1. + t6014;
  t6018 = Sin(var1[17]);
  t6041 = t5858*t5889;
  t6047 = t5835*t6008;
  t6051 = t6041 + t6047;
  t6056 = t5835*t5889;
  t6063 = -1.*t5858*t6008;
  t6080 = t6056 + t6063;
  t6090 = Cos(var1[18]);
  t6105 = -1.*t6090;
  t6113 = 1. + t6105;
  t6131 = Sin(var1[18]);
  t6146 = -1.*t6018*t6051;
  t6147 = t6013*t6080;
  t6148 = t6146 + t6147;
  t6157 = t6013*t6051;
  t6159 = t6018*t6080;
  t6160 = t6157 + t6159;
  t6173 = Cos(var1[19]);
  t6177 = -1.*t6173;
  t6179 = 1. + t6177;
  t6181 = Sin(var1[19]);
  t6201 = t6131*t6148;
  t6205 = t6090*t6160;
  t6210 = t6201 + t6205;
  t6243 = t6090*t6148;
  t6247 = -1.*t6131*t6160;
  t6248 = t6243 + t6247;
  t6251 = Cos(var1[21]);
  t6252 = -1.*t6251;
  t6253 = 1. + t6252;
  t6255 = Sin(var1[21]);
  t6259 = -1.*t6181*t6210;
  t6260 = t6173*t6248;
  t6265 = t6259 + t6260;
  t6273 = t6173*t6210;
  t6278 = t6181*t6248;
  t6284 = t6273 + t6278;
  t4918 = -0.049*t2659;
  t5295 = -0.135*t5039;
  t5372 = t4918 + t5295;
  t6336 = Sin(var1[3]);
  t5535 = -1.*t5524;
  t5599 = 1. + t5535;
  t6339 = Cos(var1[3]);
  t5712 = -0.135*t2659;
  t5774 = 0.049*t5039;
  t5784 = t5712 + t5774;
  t6345 = t6339*t1500;
  t6346 = -1.*t6336*t5375*t5664;
  t6348 = t6345 + t6346;
  t5853 = -0.09*t5848;
  t5862 = 0.049*t5858;
  t5866 = t5853 + t5862;
  t6338 = t1500*t6336*t5375;
  t6340 = t6339*t5664;
  t6343 = t6338 + t6340;
  t6350 = -1.*t1456*t5374*t6336;
  t6351 = t5524*t6348;
  t6352 = t6350 + t6351;
  t5954 = -0.049*t5848;
  t5968 = -0.09*t5858;
  t5972 = t5954 + t5968;
  t6017 = -0.049*t6015;
  t6032 = -0.21*t6018;
  t6036 = t6017 + t6032;
  t6360 = -1.*t5524*t1456*t6336;
  t6367 = -1.*t5374*t6348;
  t6373 = t6360 + t6367;
  t6403 = t1509*t6343;
  t6405 = t5039*t6352;
  t6406 = t6403 + t6405;
  t6053 = -0.21*t6015;
  t6054 = 0.049*t6018;
  t6055 = t6053 + t6054;
  t6117 = -0.27068*t6113;
  t6140 = 0.00159*t6131;
  t6145 = t6117 + t6140;
  t6410 = t5858*t6373;
  t6411 = t5835*t6406;
  t6412 = t6410 + t6411;
  t6416 = t5835*t6373;
  t6418 = -1.*t5858*t6406;
  t6423 = t6416 + t6418;
  t6152 = -0.00159*t6113;
  t6155 = -0.27068*t6131;
  t6156 = t6152 + t6155;
  t6180 = 0.01841*t6179;
  t6183 = -0.70544*t6181;
  t6189 = t6180 + t6183;
  t6426 = -1.*t6018*t6412;
  t6427 = t6013*t6423;
  t6428 = t6426 + t6427;
  t6431 = t6013*t6412;
  t6436 = t6018*t6423;
  t6437 = t6431 + t6436;
  t6228 = -0.70544*t6179;
  t6233 = -0.01841*t6181;
  t6239 = t6228 + t6233;
  t6254 = -1.11344*t6253;
  t6256 = 0.02159*t6255;
  t6258 = t6254 + t6256;
  t6447 = t6131*t6428;
  t6452 = t6090*t6437;
  t6460 = t6447 + t6452;
  t6496 = t6090*t6428;
  t6500 = -1.*t6131*t6437;
  t6507 = t6496 + t6500;
  t6268 = -0.02159*t6253;
  t6270 = -1.11344*t6255;
  t6272 = t6268 + t6270;
  t6509 = -1.*t6181*t6460;
  t6513 = t6173*t6507;
  t6514 = t6509 + t6513;
  t6516 = t6173*t6460;
  t6517 = t6181*t6507;
  t6518 = t6516 + t6517;
  t6568 = t1500*t6336;
  t6572 = t6339*t5375*t5664;
  t6578 = t6568 + t6572;
  t6547 = -1.*t6339*t1500*t5375;
  t6552 = t6336*t5664;
  t6557 = t6547 + t6552;
  t6580 = t6339*t1456*t5374;
  t6581 = t5524*t6578;
  t6582 = t6580 + t6581;
  t6587 = t5524*t6339*t1456;
  t6588 = -1.*t5374*t6578;
  t6589 = t6587 + t6588;
  t6598 = t1509*t6557;
  t6602 = t5039*t6582;
  t6608 = t6598 + t6602;
  t6622 = t5858*t6589;
  t6627 = t5835*t6608;
  t6635 = t6622 + t6627;
  t6649 = t5835*t6589;
  t6680 = -1.*t5858*t6608;
  t6682 = t6649 + t6680;
  t6685 = -1.*t6018*t6635;
  t6686 = t6013*t6682;
  t6687 = t6685 + t6686;
  t6690 = t6013*t6635;
  t6691 = t6018*t6682;
  t6692 = t6690 + t6691;
  t6695 = t6131*t6687;
  t6696 = t6090*t6692;
  t6701 = t6695 + t6696;
  t6707 = t6090*t6687;
  t6713 = -1.*t6131*t6692;
  t6719 = t6707 + t6713;
  t6728 = -1.*t6181*t6701;
  t6733 = t6173*t6719;
  t6740 = t6728 + t6733;
  t6751 = t6173*t6701;
  t6752 = t6181*t6719;
  t6753 = t6751 + t6752;
  p_output1[0]=t1456*t1500*t5372 + 0.135*t5374*t5375 + 0.135*t1456*t5599*t5664 + t5784*t5829 - 0.1305*(-1.*t1456*t1500*t5039 + t1509*t5829) + t5866*t5889 + t5972*t6008 + t6036*t6051 + t6055*t6080 + t6145*t6148 + t6156*t6160 + t6189*t6210 + t6239*t6248 + t6258*t6265 + t6272*t6284 - 0.02159*(t6255*t6265 + t6251*t6284) - 1.11344*(t6251*t6265 - 1.*t6255*t6284) + var1[0];
  p_output1[1]=-0.135*t1456*t5374*t6336 + t5372*t6343 - 0.135*t5599*t6348 + t5784*t6352 - 0.1305*(-1.*t5039*t6343 + t1509*t6352) + t5866*t6373 + t5972*t6406 + t6036*t6412 + t6055*t6423 + t6145*t6428 + t6156*t6437 + t6189*t6460 + t6239*t6507 + t6258*t6514 + t6272*t6518 - 0.02159*(t6255*t6514 + t6251*t6518) - 1.11344*(t6251*t6514 - 1.*t6255*t6518) + var1[1];
  p_output1[2]=0.135*t1456*t5374*t6339 + t5372*t6557 - 0.135*t5599*t6578 + t5784*t6582 - 0.1305*(-1.*t5039*t6557 + t1509*t6582) + t5866*t6589 + t5972*t6608 + t6036*t6635 + t6055*t6682 + t6145*t6687 + t6156*t6692 + t6189*t6701 + t6239*t6719 + t6258*t6740 + t6272*t6753 - 0.02159*(t6255*t6740 + t6251*t6753) - 1.11344*(t6251*t6740 - 1.*t6255*t6753) + var1[2];
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

void p_rightToe_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




