/*
 * Automatically Generated from Mathematica.
 * Sun 7 Nov 2021 14:26:01 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "position_rightFoot.hh"
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
  double t3283;
  double t2127;
  double t2446;
  double t2676;
  double t3023;
  double t3303;
  double t719;
  double t3519;
  double t3542;
  double t3560;
  double t3562;
  double t3500;
  double t3670;
  double t3674;
  double t3692;
  double t3718;
  double t3724;
  double t3725;
  double t3868;
  double t3882;
  double t3883;
  double t3969;
  double t3986;
  double t3991;
  double t3997;
  double t4000;
  double t4011;
  double t4016;
  double t4018;
  double t4022;
  double t4023;
  double t4024;
  double t4031;
  double t4032;
  double t4038;
  double t4047;
  double t4051;
  double t4057;
  double t4066;
  double t4084;
  double t4091;
  double t4097;
  double t4105;
  double t4110;
  double t4114;
  double t4123;
  double t4128;
  double t4133;
  double t4143;
  double t4162;
  double t4168;
  double t4169;
  double t4183;
  double t4189;
  double t4196;
  double t3561;
  double t3563;
  double t3569;
  double t4254;
  double t4256;
  double t3387;
  double t3394;
  double t3437;
  double t2841;
  double t3077;
  double t3159;
  double t3639;
  double t3651;
  double t3666;
  double t4264;
  double t4265;
  double t4266;
  double t3857;
  double t3870;
  double t3880;
  double t4259;
  double t4260;
  double t4261;
  double t4271;
  double t4272;
  double t4273;
  double t3972;
  double t3975;
  double t3976;
  double t4017;
  double t4020;
  double t4021;
  double t4282;
  double t4283;
  double t4289;
  double t4291;
  double t4292;
  double t4294;
  double t4028;
  double t4029;
  double t4030;
  double t4062;
  double t4071;
  double t4078;
  double t4297;
  double t4298;
  double t4299;
  double t4302;
  double t4303;
  double t4304;
  double t4099;
  double t4101;
  double t4103;
  double t4137;
  double t4151;
  double t4157;
  double t4307;
  double t4309;
  double t4310;
  double t4312;
  double t4313;
  double t4316;
  double t4172;
  double t4173;
  double t4175;
  double t4331;
  double t4336;
  double t4343;
  double t4352;
  double t4357;
  double t4361;
  double t4246;
  double t4253;
  double t4405;
  double t4409;
  double t4414;
  double t4422;
  double t4428;
  double t4432;
  double t4435;
  double t4438;
  double t4439;
  double t4460;
  double t4466;
  double t4471;
  double t4481;
  double t4486;
  double t4492;
  double t4499;
  double t4500;
  double t4501;
  double t4503;
  double t4505;
  double t4506;
  double t4510;
  double t4511;
  double t4513;
  double t4517;
  double t4519;
  double t4521;
  double t4524;
  double t4525;
  double t4532;
  double t4534;
  double t4535;
  double t4536;
  t3283 = Sin(var1[14]);
  t2127 = Cos(var1[15]);
  t2446 = -1.*t2127;
  t2676 = 1. + t2446;
  t3023 = Sin(var1[15]);
  t3303 = Sin(var1[4]);
  t719 = Cos(var1[4]);
  t3519 = Cos(var1[16]);
  t3542 = -1.*t3519;
  t3560 = 1. + t3542;
  t3562 = Sin(var1[16]);
  t3500 = Cos(var1[14]);
  t3670 = t2127*t719;
  t3674 = t3283*t3023*t3303;
  t3692 = t3670 + t3674;
  t3718 = Cos(var1[17]);
  t3724 = -1.*t3718;
  t3725 = 1. + t3724;
  t3868 = Sin(var1[17]);
  t3882 = t3500*t3562*t3303;
  t3883 = t3519*t3692;
  t3969 = t3882 + t3883;
  t3986 = t3500*t3519*t3303;
  t3991 = -1.*t3562*t3692;
  t3997 = t3986 + t3991;
  t4000 = Cos(var1[18]);
  t4011 = -1.*t4000;
  t4016 = 1. + t4011;
  t4018 = Sin(var1[18]);
  t4022 = -1.*t3868*t3969;
  t4023 = t3718*t3997;
  t4024 = t4022 + t4023;
  t4031 = t3718*t3969;
  t4032 = t3868*t3997;
  t4038 = t4031 + t4032;
  t4047 = Cos(var1[19]);
  t4051 = -1.*t4047;
  t4057 = 1. + t4051;
  t4066 = Sin(var1[19]);
  t4084 = t4018*t4024;
  t4091 = t4000*t4038;
  t4097 = t4084 + t4091;
  t4105 = t4000*t4024;
  t4110 = -1.*t4018*t4038;
  t4114 = t4105 + t4110;
  t4123 = Cos(var1[21]);
  t4128 = -1.*t4123;
  t4133 = 1. + t4128;
  t4143 = Sin(var1[21]);
  t4162 = -1.*t4066*t4097;
  t4168 = t4047*t4114;
  t4169 = t4162 + t4168;
  t4183 = t4047*t4097;
  t4189 = t4066*t4114;
  t4196 = t4183 + t4189;
  t3561 = -0.09*t3560;
  t3563 = 0.049*t3562;
  t3569 = t3561 + t3563;
  t4254 = Cos(var1[3]);
  t4256 = Sin(var1[3]);
  t3387 = -0.135*t2676;
  t3394 = 0.049*t3023;
  t3437 = t3387 + t3394;
  t2841 = -0.049*t2676;
  t3077 = -0.135*t3023;
  t3159 = t2841 + t3077;
  t3639 = -0.049*t3560;
  t3651 = -0.09*t3562;
  t3666 = t3639 + t3651;
  t4264 = t3500*t4254;
  t4265 = -1.*t719*t3283*t4256;
  t4266 = t4264 + t4265;
  t3857 = -0.049*t3725;
  t3870 = -0.21*t3868;
  t3880 = t3857 + t3870;
  t4259 = -1.*t4254*t3283;
  t4260 = -1.*t3500*t719*t4256;
  t4261 = t4259 + t4260;
  t4271 = t3023*t4266;
  t4272 = t2127*t4256*t3303;
  t4273 = t4271 + t4272;
  t3972 = -0.21*t3725;
  t3975 = 0.049*t3868;
  t3976 = t3972 + t3975;
  t4017 = -0.27068*t4016;
  t4020 = 0.00159*t4018;
  t4021 = t4017 + t4020;
  t4282 = t3562*t4261;
  t4283 = t3519*t4273;
  t4289 = t4282 + t4283;
  t4291 = t3519*t4261;
  t4292 = -1.*t3562*t4273;
  t4294 = t4291 + t4292;
  t4028 = -0.00159*t4016;
  t4029 = -0.27068*t4018;
  t4030 = t4028 + t4029;
  t4062 = 0.01841*t4057;
  t4071 = -0.70544*t4066;
  t4078 = t4062 + t4071;
  t4297 = -1.*t3868*t4289;
  t4298 = t3718*t4294;
  t4299 = t4297 + t4298;
  t4302 = t3718*t4289;
  t4303 = t3868*t4294;
  t4304 = t4302 + t4303;
  t4099 = -0.70544*t4057;
  t4101 = -0.01841*t4066;
  t4103 = t4099 + t4101;
  t4137 = -1.11344*t4133;
  t4151 = 0.02159*t4143;
  t4157 = t4137 + t4151;
  t4307 = t4018*t4299;
  t4309 = t4000*t4304;
  t4310 = t4307 + t4309;
  t4312 = t4000*t4299;
  t4313 = -1.*t4018*t4304;
  t4316 = t4312 + t4313;
  t4172 = -0.02159*t4133;
  t4173 = -1.11344*t4143;
  t4175 = t4172 + t4173;
  t4331 = -1.*t4066*t4310;
  t4336 = t4047*t4316;
  t4343 = t4331 + t4336;
  t4352 = t4047*t4310;
  t4357 = t4066*t4316;
  t4361 = t4352 + t4357;
  t4246 = -1.*t3500;
  t4253 = 1. + t4246;
  t4405 = t4254*t719*t3283;
  t4409 = t3500*t4256;
  t4414 = t4405 + t4409;
  t4422 = t3500*t4254*t719;
  t4428 = -1.*t3283*t4256;
  t4432 = t4422 + t4428;
  t4435 = t3023*t4414;
  t4438 = -1.*t2127*t4254*t3303;
  t4439 = t4435 + t4438;
  t4460 = t3562*t4432;
  t4466 = t3519*t4439;
  t4471 = t4460 + t4466;
  t4481 = t3519*t4432;
  t4486 = -1.*t3562*t4439;
  t4492 = t4481 + t4486;
  t4499 = -1.*t3868*t4471;
  t4500 = t3718*t4492;
  t4501 = t4499 + t4500;
  t4503 = t3718*t4471;
  t4505 = t3868*t4492;
  t4506 = t4503 + t4505;
  t4510 = t4018*t4501;
  t4511 = t4000*t4506;
  t4513 = t4510 + t4511;
  t4517 = t4000*t4501;
  t4519 = -1.*t4018*t4506;
  t4521 = t4517 + t4519;
  t4524 = -1.*t4066*t4513;
  t4525 = t4047*t4521;
  t4532 = t4524 + t4525;
  t4534 = t4047*t4513;
  t4535 = t4066*t4521;
  t4536 = t4534 + t4535;
  p_output1[0]=0.135*t3283*t3303 + t3283*t3303*t3437 + t3303*t3500*t3569 + t3666*t3692 + t3880*t3969 + t3976*t3997 + t4021*t4024 + t4030*t4038 + t4078*t4097 + t4103*t4114 + t4157*t4169 + t4175*t4196 + 0.0306*(t4143*t4169 + t4123*t4196) - 1.13106*(t4123*t4169 - 1.*t4143*t4196) + t3159*t719 - 0.1305*(t2127*t3283*t3303 - 1.*t3023*t719) + var1[0];
  p_output1[1]=-0.135*t4253*t4254 + t3159*t3303*t4256 + t3569*t4261 + t3437*t4266 - 0.1305*(-1.*t3023*t3303*t4256 + t2127*t4266) + t3666*t4273 + t3880*t4289 + t3976*t4294 + t4021*t4299 + t4030*t4304 + t4078*t4310 + t4103*t4316 + t4157*t4343 + t4175*t4361 + 0.0306*(t4143*t4343 + t4123*t4361) - 1.13106*(t4123*t4343 - 1.*t4143*t4361) - 0.135*t3283*t4256*t719 + var1[1];
  p_output1[2]=-1.*t3159*t3303*t4254 - 0.135*t4253*t4256 + t3437*t4414 - 0.1305*(t3023*t3303*t4254 + t2127*t4414) + t3569*t4432 + t3666*t4439 + t3880*t4471 + t3976*t4492 + t4021*t4501 + t4030*t4506 + t4078*t4513 + t4103*t4521 + t4157*t4532 + t4175*t4536 + 0.0306*(t4143*t4532 + t4123*t4536) - 1.13106*(t4123*t4532 - 1.*t4143*t4536) + 0.135*t3283*t4254*t719 + var1[2];
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

void position_rightFoot_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




