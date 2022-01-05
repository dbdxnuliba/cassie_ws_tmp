/*
 * Automatically Generated from Mathematica.
 * Thu 23 Dec 2021 17:03:14 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "J_pelvis_LeftStance.hh"
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
  double t1411;
  double t1560;
  double t1509;
  double t1577;
  double t2019;
  double t2113;
  double t2306;
  double t3471;
  double t3623;
  double t3274;
  double t3481;
  double t3507;
  double t3554;
  double t3615;
  double t3627;
  double t3630;
  double t3648;
  double t3661;
  double t3664;
  double t3670;
  double t3678;
  double t3688;
  double t3717;
  double t3724;
  double t3754;
  double t3764;
  double t3504;
  double t3511;
  double t3585;
  double t3616;
  double t3628;
  double t3638;
  double t3917;
  double t3654;
  double t3662;
  double t3665;
  double t3674;
  double t3982;
  double t3684;
  double t3711;
  double t465;
  double t3358;
  double t3793;
  double t3799;
  double t3513;
  double t3808;
  double t3821;
  double t3848;
  double t3873;
  double t3958;
  double t3967;
  double t3970;
  double t3973;
  double t3986;
  double t3993;
  double t4000;
  double t3234;
  double t3362;
  double t3465;
  double t3506;
  double t3512;
  double t3514;
  double t3536;
  double t3589;
  double t3617;
  double t3629;
  double t3642;
  double t3655;
  double t3663;
  double t3666;
  double t3675;
  double t3685;
  double t3716;
  double t3718;
  double t3720;
  double t3727;
  double t3740;
  double t3757;
  double t3761;
  double t3779;
  double t3790;
  double t3796;
  double t3802;
  double t3818;
  double t3824;
  double t3859;
  double t3916;
  double t3918;
  double t3956;
  double t3966;
  double t3969;
  double t3971;
  double t3981;
  double t3984;
  double t3985;
  double t3988;
  double t3994;
  double t3996;
  double t3229;
  double t3998;
  double t4008;
  double t4009;
  double t4011;
  double t4012;
  double t4013;
  double t4015;
  double t4017;
  double t4019;
  double t4020;
  double t4021;
  double t4022;
  double t4023;
  double t4024;
  double t4025;
  double t4026;
  double t4027;
  double t4028;
  double t4029;
  double t4030;
  double t4031;
  double t4032;
  double t4033;
  double t4034;
  double t4035;
  double t4036;
  double t4037;
  double t4038;
  double t4039;
  double t4040;
  double t4041;
  double t4042;
  double t4043;
  double t4044;
  double t4045;
  double t4046;
  double t4047;
  double t4048;
  double t4049;
  double t4050;
  double t4051;
  double t4052;
  double t4053;
  double t224;
  double t2420;
  double t2312;
  double t2423;
  double t2508;
  double t2521;
  double t2524;
  double t2553;
  double t2565;
  double t2629;
  double t4069;
  double t4072;
  double t4078;
  double t4081;
  double t4065;
  double t4066;
  double t4067;
  double t4068;
  double t4070;
  double t4071;
  double t4073;
  double t4074;
  double t4075;
  double t4076;
  double t4077;
  double t4079;
  double t4080;
  double t4082;
  double t4083;
  double t4084;
  double t4085;
  double t4086;
  double t4087;
  double t4088;
  double t4089;
  double t4090;
  double t4091;
  double t4092;
  double t4096;
  double t4097;
  double t4098;
  double t4099;
  double t4100;
  double t4101;
  double t4102;
  double t4103;
  double t4104;
  double t4105;
  double t4106;
  double t4107;
  double t4109;
  double t4110;
  double t4111;
  double t4112;
  double t4113;
  double t4114;
  double t4115;
  double t4116;
  double t4117;
  double t4118;
  double t4119;
  double t4120;
  double t4121;
  double t4122;
  double t4123;
  double t907;
  double t1330;
  double t1551;
  double t1779;
  double t2064;
  double t2171;
  double t4142;
  double t4143;
  double t4144;
  double t4145;
  double t4146;
  double t4147;
  double t4151;
  double t4152;
  double t4153;
  double t4154;
  double t4155;
  double t4156;
  double t4157;
  double t4158;
  double t4159;
  double t4160;
  double t4161;
  double t4163;
  double t4164;
  double t4165;
  double t4166;
  double t4167;
  double t4168;
  double t4169;
  double t4170;
  double t4171;
  double t4172;
  double t4173;
  double t4174;
  double t4175;
  double t4176;
  double t4131;
  double t4132;
  double t4134;
  double t4135;
  double t4190;
  double t4194;
  double t4196;
  double t4197;
  double t4198;
  double t4199;
  t1411 = var1[9] + var1[8];
  t1560 = var1[9] + var1[11] + var1[8];
  t1509 = Cos(t1411);
  t1577 = Cos(t1560);
  t2019 = Sin(t1411);
  t2113 = Sin(t1560);
  t2306 = Cos(var1[6]);
  t3471 = -1.*var1[6];
  t3623 = -1.*var1[7];
  t3274 = -1.*var1[8];
  t3481 = var1[9] + t3471 + var1[8];
  t3507 = var1[9] + var1[11] + t3471 + var1[8];
  t3554 = var1[9] + var1[6] + var1[8];
  t3615 = var1[9] + var1[11] + var1[6] + var1[8];
  t3627 = var1[9] + t3471 + t3623 + var1[8];
  t3630 = var1[9] + var1[11] + t3471 + t3623 + var1[8];
  t3648 = var1[9] + var1[6] + t3623 + var1[8];
  t3661 = var1[9] + var1[11] + var1[6] + t3623 + var1[8];
  t3664 = var1[9] + t3471 + var1[7] + var1[8];
  t3670 = var1[9] + var1[11] + t3471 + var1[7] + var1[8];
  t3678 = var1[9] + var1[6] + var1[7] + var1[8];
  t3688 = var1[9] + var1[11] + var1[6] + var1[7] + var1[8];
  t3717 = var1[6] + t3623;
  t3724 = var1[6] + var1[7];
  t3754 = var1[6] + t3623 + t3274;
  t3764 = var1[6] + var1[7] + t3274;
  t3504 = Cos(t3481);
  t3511 = Cos(t3507);
  t3585 = Cos(t3554);
  t3616 = Cos(t3615);
  t3628 = Cos(t3627);
  t3638 = Cos(t3630);
  t3917 = var1[6] + t3623 + var1[8];
  t3654 = Cos(t3648);
  t3662 = Cos(t3661);
  t3665 = Cos(t3664);
  t3674 = Cos(t3670);
  t3982 = var1[6] + var1[7] + var1[8];
  t3684 = Cos(t3678);
  t3711 = Cos(t3688);
  t465 = Sin(var1[6]);
  t3358 = var1[6] + t3274;
  t3793 = Sin(t3481);
  t3799 = Sin(t3507);
  t3513 = var1[6] + var1[8];
  t3808 = Sin(t3554);
  t3821 = Sin(t3615);
  t3848 = Sin(t3627);
  t3873 = Sin(t3630);
  t3958 = Sin(t3648);
  t3967 = Sin(t3661);
  t3970 = Sin(t3664);
  t3973 = Sin(t3670);
  t3986 = Sin(t3678);
  t3993 = Sin(t3688);
  t4000 = Sin(var1[3]);
  t3234 = -36000.*t2306;
  t3362 = Cos(t3358);
  t3465 = -24000.*t3362;
  t3506 = -99088.*t3504;
  t3512 = -81600.*t3511;
  t3514 = Cos(t3513);
  t3536 = -24000.*t3514;
  t3589 = -99088.*t3585;
  t3617 = -81600.*t3616;
  t3629 = -6741.*t3628;
  t3642 = 4000.*t3638;
  t3655 = 6741.*t3654;
  t3663 = -4000.*t3662;
  t3666 = 6741.*t3665;
  t3675 = -4000.*t3674;
  t3685 = -6741.*t3684;
  t3716 = 4000.*t3711;
  t3718 = Sin(t3717);
  t3720 = -900.*t3718;
  t3727 = Sin(t3724);
  t3740 = -900.*t3727;
  t3757 = Sin(t3754);
  t3761 = -12000.*t3757;
  t3779 = Sin(t3764);
  t3790 = 12000.*t3779;
  t3796 = 13482.*t3793;
  t3802 = -8000.*t3799;
  t3818 = 13482.*t3808;
  t3824 = -8000.*t3821;
  t3859 = -49544.*t3848;
  t3916 = -40800.*t3873;
  t3918 = Sin(t3917);
  t3956 = 12000.*t3918;
  t3966 = 49544.*t3958;
  t3969 = 40800.*t3967;
  t3971 = 49544.*t3970;
  t3981 = 40800.*t3973;
  t3984 = Sin(t3982);
  t3985 = -12000.*t3984;
  t3988 = -49544.*t3986;
  t3994 = -40800.*t3993;
  t3996 = t3234 + t3465 + t3506 + t3512 + t3536 + t3589 + t3617 + t3629 + t3642 + t3655 + t3663 + t3666 + t3675 + t3685 + t3716 + t3720 + t3740 + t3761 + t3790 + t3796 + t3802 + t3818 + t3824 + t3859 + t3916 + t3956 + t3966 + t3969 + t3971 + t3981 + t3985 + t3988 + t3994;
  t3229 = Cos(var1[3]);
  t3998 = Cos(var1[4]);
  t4008 = Cos(t3717);
  t4009 = 900.*t4008;
  t4011 = Cos(t3724);
  t4012 = 900.*t4011;
  t4013 = Cos(t3754);
  t4015 = 12000.*t4013;
  t4017 = Cos(t3764);
  t4019 = -12000.*t4017;
  t4020 = 13482.*t3504;
  t4021 = -8000.*t3511;
  t4022 = -13482.*t3585;
  t4023 = 8000.*t3616;
  t4024 = -49544.*t3628;
  t4025 = -40800.*t3638;
  t4026 = Cos(t3917);
  t4027 = -12000.*t4026;
  t4028 = -49544.*t3654;
  t4029 = -40800.*t3662;
  t4030 = 49544.*t3665;
  t4031 = 40800.*t3674;
  t4032 = Cos(t3982);
  t4033 = 12000.*t4032;
  t4034 = 49544.*t3684;
  t4035 = 40800.*t3711;
  t4036 = -36000.*t465;
  t4037 = Sin(t3358);
  t4038 = -24000.*t4037;
  t4039 = 99088.*t3793;
  t4040 = 81600.*t3799;
  t4041 = Sin(t3513);
  t4042 = -24000.*t4041;
  t4043 = -99088.*t3808;
  t4044 = -81600.*t3821;
  t4045 = 6741.*t3848;
  t4046 = -4000.*t3873;
  t4047 = 6741.*t3958;
  t4048 = -4000.*t3967;
  t4049 = -6741.*t3970;
  t4050 = 4000.*t3973;
  t4051 = -6741.*t3986;
  t4052 = 4000.*t3993;
  t4053 = t4009 + t4012 + t4015 + t4019 + t4020 + t4021 + t4022 + t4023 + t4024 + t4025 + t4027 + t4028 + t4029 + t4030 + t4031 + t4033 + t4034 + t4035 + t4036 + t4038 + t4039 + t4040 + t4042 + t4043 + t4044 + t4045 + t4046 + t4047 + t4048 + t4049 + t4050 + t4051 + t4052;
  t224 = Sin(var1[4]);
  t2420 = Sin(var1[7]);
  t2312 = Cos(var1[7]);
  t2423 = 6741.*t1509;
  t2508 = -4000.*t1577;
  t2521 = Sin(var1[8]);
  t2524 = 12000.*t2521;
  t2553 = 49544.*t2019;
  t2565 = 40800.*t2113;
  t2629 = t2423 + t2508 + t2524 + t2553 + t2565;
  t4069 = var1[9] + t3623 + var1[8];
  t4072 = var1[9] + var1[11] + t3623 + var1[8];
  t4078 = var1[9] + var1[7] + var1[8];
  t4081 = var1[9] + var1[11] + var1[7] + var1[8];
  t4065 = 900.*t2312;
  t4066 = var1[7] + t3274;
  t4067 = Cos(t4066);
  t4068 = -12000.*t4067;
  t4070 = Cos(t4069);
  t4071 = -49544.*t4070;
  t4073 = Cos(t4072);
  t4074 = -40800.*t4073;
  t4075 = var1[7] + var1[8];
  t4076 = Cos(t4075);
  t4077 = 12000.*t4076;
  t4079 = Cos(t4078);
  t4080 = 49544.*t4079;
  t4082 = Cos(t4081);
  t4083 = 40800.*t4082;
  t4084 = Sin(t4069);
  t4085 = 6741.*t4084;
  t4086 = Sin(t4072);
  t4087 = -4000.*t4086;
  t4088 = Sin(t4078);
  t4089 = -6741.*t4088;
  t4090 = Sin(t4081);
  t4091 = 4000.*t4090;
  t4092 = t4065 + t4068 + t4071 + t4074 + t4077 + t4080 + t4083 + t4085 + t4087 + t4089 + t4091;
  t4096 = -6741.*t3654;
  t4097 = 4000.*t3662;
  t4098 = -6741.*t3665;
  t4099 = 4000.*t3674;
  t4100 = 900.*t3718;
  t4101 = 12000.*t3757;
  t4102 = -12000.*t3918;
  t4103 = -49544.*t3958;
  t4104 = -40800.*t3967;
  t4105 = -49544.*t3970;
  t4106 = -40800.*t3973;
  t4107 = t3629 + t3642 + t4096 + t4097 + t4098 + t4099 + t3685 + t3716 + t4100 + t3740 + t4101 + t3790 + t3859 + t3916 + t4102 + t4103 + t4104 + t4105 + t4106 + t3985 + t3988 + t3994;
  t4109 = 2.*t224*t4092;
  t4110 = -900.*t4008;
  t4111 = -12000.*t4013;
  t4112 = 12000.*t4026;
  t4113 = 49544.*t3654;
  t4114 = 40800.*t3662;
  t4115 = -49544.*t3665;
  t4116 = -40800.*t3674;
  t4117 = -6741.*t3958;
  t4118 = 4000.*t3967;
  t4119 = 6741.*t3970;
  t4120 = -4000.*t3973;
  t4121 = t4110 + t4012 + t4111 + t4019 + t4024 + t4025 + t4112 + t4113 + t4114 + t4115 + t4116 + t4033 + t4034 + t4035 + t4045 + t4046 + t4117 + t4118 + t4119 + t4120 + t4051 + t4052;
  t4122 = t3998*t4121;
  t4123 = t4109 + t4122;
  t907 = Cos(var1[8]);
  t1330 = 12000.*t907;
  t1551 = 49544.*t1509;
  t1779 = 40800.*t1577;
  t2064 = -6741.*t2019;
  t2171 = 4000.*t2113;
  t4142 = 12000.*t4067;
  t4143 = 49544.*t4070;
  t4144 = 40800.*t4073;
  t4145 = -6741.*t4084;
  t4146 = 4000.*t4086;
  t4147 = t4142 + t4143 + t4144 + t4077 + t4080 + t4083 + t4145 + t4146 + t4089 + t4091;
  t4151 = 24000.*t3362;
  t4152 = 99088.*t3504;
  t4153 = 81600.*t3511;
  t4154 = 6741.*t3628;
  t4155 = -4000.*t3638;
  t4156 = -12000.*t3779;
  t4157 = -13482.*t3793;
  t4158 = 8000.*t3799;
  t4159 = 49544.*t3848;
  t4160 = 40800.*t3873;
  t4161 = t4151 + t4152 + t4153 + t3536 + t3589 + t3617 + t4154 + t4155 + t3655 + t3663 + t4098 + t4099 + t3685 + t3716 + t4101 + t4156 + t4157 + t4158 + t3818 + t3824 + t4159 + t4160 + t3956 + t3966 + t3969 + t4105 + t4106 + t3985 + t3988 + t3994;
  t4163 = 2.*t224*t4147;
  t4164 = 12000.*t4017;
  t4165 = -13482.*t3504;
  t4166 = 8000.*t3511;
  t4167 = 49544.*t3628;
  t4168 = 40800.*t3638;
  t4169 = 24000.*t4037;
  t4170 = -99088.*t3793;
  t4171 = -81600.*t3799;
  t4172 = -6741.*t3848;
  t4173 = 4000.*t3873;
  t4174 = t4111 + t4164 + t4165 + t4166 + t4022 + t4023 + t4167 + t4168 + t4027 + t4028 + t4029 + t4115 + t4116 + t4033 + t4034 + t4035 + t4169 + t4170 + t4171 + t4042 + t4043 + t4044 + t4172 + t4173 + t4047 + t4048 + t4119 + t4120 + t4051 + t4052;
  t4175 = t3998*t4174;
  t4176 = t4163 + t4175;
  t4131 = -6741.*t1509;
  t4132 = 4000.*t1577;
  t4134 = -49544.*t2019;
  t4135 = -40800.*t2113;
  t4190 = t4143 + t4144 + t4080 + t4083 + t4145 + t4146 + t4089 + t4091;
  t4194 = t4152 + t4153 + t3589 + t3617 + t4154 + t4155 + t3655 + t3663 + t4098 + t4099 + t3685 + t3716 + t4157 + t4158 + t3818 + t3824 + t4159 + t4160 + t3966 + t3969 + t4105 + t4106 + t3988 + t3994;
  t4196 = 2.*t224*t4190;
  t4197 = t4165 + t4166 + t4022 + t4023 + t4167 + t4168 + t4028 + t4029 + t4115 + t4116 + t4034 + t4035 + t4170 + t4171 + t4043 + t4044 + t4172 + t4173 + t4047 + t4048 + t4119 + t4120 + t4051 + t4052;
  t4198 = t3998*t4197;
  t4199 = t4196 + t4198;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=1.e-5*t224*(t2306*(450.*t2312 - 1.*t2420*t2629) - 1.*(9000. + t1330 + t1551 + t1779 + t2064 + t2171)*t465);
  p_output1[4]=2.5e-6*(t3229*t3996 - 1.*t3998*t4000*t4053);
  p_output1[5]=2.5e-6*(t3996*t4000 + t3229*t3998*t4053);
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=5.e-6*(-1.*t3998*t4092 + 2.*t224*(-450.*t2420 - 1.*t2312*t2629)*t465);
  p_output1[10]=2.5e-6*(t3229*t4107 - 1.*t4000*t4123);
  p_output1[11]=2.5e-6*(t4000*t4107 + t3229*t4123);
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=5.e-6*(-1.*t3998*t4147 + 2.*t224*(t2306*(-12000.*t2521 + t4131 + t4132 + t4134 + t4135) - 1.*(t1330 + t1551 + t1779 + t2064 + t2171)*t2420*t465));
  p_output1[16]=2.5e-6*(t3229*t4161 - 1.*t4000*t4176);
  p_output1[17]=2.5e-6*(t4000*t4161 + t3229*t4176);
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=5.e-6*(-1.*t3998*t4190 + 2.*t224*(t2306*(t4131 + t4132 + t4134 + t4135) - 1.*(t1551 + t1779 + t2064 + t2171)*t2420*t465));
  p_output1[22]=2.5e-6*(t3229*t4194 - 1.*t4000*t4199);
  p_output1[23]=2.5e-6*(t4000*t4194 + t3229*t4199);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 6, (mwSize) 10, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#endif // MATLAB_MEX_FILE

namespace SymFunction
{

void J_pelvis_LeftStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




