/*
 * Automatically Generated from Mathematica.
 * Thu 23 Dec 2021 16:09:34 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "dypelvis_leftFoot.hh"
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t301;
  double t50;
  double t462;
  double t531;
  double t588;
  double t168;
  double t1929;
  double t2022;
  double t2179;
  double t2471;
  double t2491;
  double t2514;
  double t2395;
  double t2398;
  double t2409;
  double t2428;
  double t2456;
  double t2660;
  double t2705;
  double t2710;
  double t2713;
  double t2725;
  double t2740;
  double t2755;
  double t2778;
  double t2846;
  double t2853;
  double t2868;
  double t2887;
  double t2913;
  double t2926;
  double t2934;
  double t2975;
  double t2993;
  double t3019;
  double t3050;
  double t3058;
  double t3061;
  double t3165;
  double t2596;
  double t2650;
  double t2658;
  double t2661;
  double t2662;
  double t2455;
  double t2460;
  double t2470;
  double t2668;
  double t2676;
  double t2680;
  double t2718;
  double t2733;
  double t2738;
  double t3350;
  double t3376;
  double t3381;
  double t3444;
  double t3447;
  double t3448;
  double t2795;
  double t2815;
  double t2823;
  double t2927;
  double t2939;
  double t2959;
  double t3457;
  double t3460;
  double t3461;
  double t3482;
  double t3491;
  double t3508;
  double t3022;
  double t3030;
  double t3036;
  double t3544;
  double t3560;
  double t3563;
  double t3575;
  double t3576;
  double t3577;
  double t3192;
  double t3223;
  double t3224;
  double t3235;
  double t3261;
  double t2220;
  double t3290;
  double t3318;
  double t3329;
  double t3702;
  double t3704;
  double t3707;
  double t3716;
  double t3720;
  double t3738;
  double t3751;
  double t3752;
  double t3755;
  double t3767;
  double t3768;
  double t3771;
  double t3775;
  double t3780;
  double t3781;
  double t3793;
  double t3796;
  double t3797;
  double t3802;
  double t3805;
  double t3810;
  double t3865;
  double t3867;
  double t3869;
  double t3875;
  double t3877;
  double t3878;
  double t3882;
  double t3883;
  double t3884;
  double t3886;
  double t3887;
  double t3888;
  double t3890;
  double t3891;
  double t3892;
  double t3910;
  double t3911;
  double t3914;
  double t3922;
  double t3923;
  double t3927;
  double t3970;
  double t3971;
  double t3973;
  double t3978;
  double t3980;
  double t3984;
  double t3986;
  double t3989;
  double t3990;
  double t3992;
  double t3994;
  double t3996;
  double t3997;
  double t4034;
  double t4037;
  double t4042;
  double t4053;
  double t4056;
  double t4060;
  double t4065;
  double t4131;
  double t4134;
  double t4135;
  double t4080;
  double t4103;
  double t4169;
  double t4171;
  double t1958;
  double t2037;
  double t2139;
  double t2218;
  double t2244;
  double t4188;
  double t4189;
  double t4190;
  double t4193;
  double t4196;
  double t4197;
  double t4205;
  double t4206;
  double t4219;
  double t4223;
  double t4228;
  double t4231;
  double t4235;
  double t4236;
  double t4239;
  double t4246;
  double t4257;
  double t4260;
  double t4307;
  double t4308;
  double t4309;
  double t4314;
  double t4315;
  double t4316;
  double t4318;
  double t4319;
  double t4320;
  double t4322;
  double t4323;
  double t4324;
  double t4326;
  double t4327;
  double t4328;
  double t4342;
  double t4343;
  double t4346;
  double t4354;
  double t4355;
  double t4359;
  double t4361;
  double t4369;
  double t4377;
  double t3649;
  double t3672;
  double t4437;
  double t4440;
  double t4445;
  double t4458;
  double t4459;
  double t4460;
  double t4464;
  double t4466;
  double t4468;
  double t4471;
  double t4472;
  double t4474;
  double t4476;
  double t4478;
  double t4479;
  double t4483;
  double t4484;
  double t4485;
  double t4487;
  double t4488;
  double t4489;
  double t4572;
  double t4575;
  double t4576;
  double t4606;
  double t4607;
  double t4609;
  double t4614;
  double t4616;
  double t4617;
  double t4620;
  double t4621;
  double t4622;
  double t4625;
  double t4628;
  double t4629;
  double t4631;
  double t4632;
  double t4633;
  double t4635;
  double t4636;
  double t4637;
  double t4639;
  double t4640;
  double t4641;
  double t4657;
  double t4658;
  double t4661;
  double t3850;
  double t3859;
  double t3870;
  double t3871;
  double t3873;
  double t4702;
  double t4705;
  double t4710;
  double t4712;
  double t4723;
  double t4726;
  double t4730;
  double t4731;
  double t4734;
  double t4741;
  double t4742;
  double t4751;
  double t4755;
  double t4760;
  double t4761;
  double t4773;
  double t4774;
  double t4775;
  double t4779;
  double t4780;
  double t4782;
  double t3967;
  double t3968;
  double t3969;
  double t3975;
  double t3976;
  double t4800;
  double t4801;
  double t4802;
  double t4805;
  double t4806;
  double t4808;
  double t4809;
  double t4811;
  double t4812;
  double t4814;
  double t4828;
  double t4832;
  double t4833;
  double t4018;
  double t4021;
  double t4029;
  double t4030;
  double t4033;
  double t4882;
  double t4883;
  double t4887;
  double t4889;
  double t4890;
  double t4895;
  double t4898;
  double t4119;
  double t4120;
  double t4124;
  double t4142;
  double t4143;
  double t4913;
  double t4914;
  double t4915;
  double t4902;
  double t4908;
  double t4944;
  double t4945;
  double t4946;
  double t4948;
  double t4949;
  double t4950;
  double t4970;
  double t4978;
  double t4983;
  double t4989;
  double t4992;
  double t4993;
  double t5001;
  double t5006;
  double t5007;
  double t5009;
  double t5010;
  double t5013;
  double t5035;
  double t5036;
  double t5037;
  double t5043;
  double t5044;
  double t5045;
  double t5047;
  double t5053;
  double t5061;
  double t5066;
  double t5069;
  double t5074;
  double t5076;
  double t5087;
  double t5092;
  double t5098;
  double t5101;
  double t5102;
  double t5110;
  double t5115;
  double t5116;
  double t5173;
  double t5177;
  double t5179;
  double t5191;
  double t5195;
  double t5196;
  double t5199;
  double t5200;
  double t5202;
  double t5205;
  double t5206;
  double t5207;
  double t5210;
  double t5213;
  double t5214;
  double t5216;
  double t5217;
  double t5218;
  double t5220;
  double t5221;
  double t5222;
  double t5262;
  double t5266;
  double t5274;
  double t5276;
  double t5277;
  double t5279;
  double t5282;
  double t5284;
  double t5285;
  double t5288;
  double t5289;
  double t5291;
  double t5295;
  double t5296;
  double t5297;
  double t5299;
  double t5300;
  double t5301;
  double t5303;
  double t5304;
  double t5305;
  double t5340;
  double t5341;
  double t5345;
  double t5358;
  double t5361;
  double t5366;
  double t5368;
  double t5379;
  double t5380;
  double t5381;
  double t5384;
  double t5386;
  double t5387;
  double t5405;
  double t5406;
  double t5407;
  double t5409;
  double t5410;
  double t5412;
  double t5413;
  double t5432;
  double t5434;
  double t5435;
  double t5416;
  double t5424;
  double t4525;
  double t4534;
  double t4540;
  double t4541;
  double t4918;
  double t4919;
  t301 = Cos(var1[5]);
  t50 = Cos(var1[3]);
  t462 = Sin(var1[3]);
  t531 = Sin(var1[4]);
  t588 = Sin(var1[5]);
  t168 = Cos(var1[4]);
  t1929 = Cos(var1[7]);
  t2022 = Sin(var1[7]);
  t2179 = Sin(var1[6]);
  t2471 = t1929*t531*t2179;
  t2491 = -1.*t168*t2022;
  t2514 = t2471 + t2491;
  t2395 = Cos(var1[8]);
  t2398 = Cos(var1[9]);
  t2409 = -1.*t2398;
  t2428 = 1. + t2409;
  t2456 = Sin(var1[9]);
  t2660 = Sin(var1[8]);
  t2705 = Cos(var1[11]);
  t2710 = -1.*t2705;
  t2713 = 1. + t2710;
  t2725 = Sin(var1[11]);
  t2740 = -1.*t2395*t2456*t2514;
  t2755 = -1.*t2398*t2514*t2660;
  t2778 = t2740 + t2755;
  t2846 = t2398*t2395*t2514;
  t2853 = -1.*t2456*t2514*t2660;
  t2868 = t2846 + t2853;
  t2887 = Cos(var1[13]);
  t2913 = -1.*t2887;
  t2926 = 1. + t2913;
  t2934 = Sin(var1[13]);
  t2975 = t2725*t2778;
  t2993 = t2705*t2868;
  t3019 = t2975 + t2993;
  t3050 = t2705*t2778;
  t3058 = -1.*t2725*t2868;
  t3061 = t3050 + t3058;
  t3165 = Cos(var1[6]);
  t2596 = -1.*t2395;
  t2650 = 1. + t2596;
  t2658 = -0.049*t2650;
  t2661 = -0.09*t2660;
  t2662 = t2658 + t2661;
  t2455 = -0.049*t2428;
  t2460 = -0.21*t2456;
  t2470 = t2455 + t2460;
  t2668 = -0.21*t2428;
  t2676 = 0.049*t2456;
  t2680 = t2668 + t2676;
  t2718 = -0.70544*t2713;
  t2733 = -0.01841*t2725;
  t2738 = t2718 + t2733;
  t3350 = t3165*t2395*t531*t2022;
  t3376 = -1.*t531*t2179*t2660;
  t3381 = t3350 + t3376;
  t3444 = -1.*t2395*t531*t2179;
  t3447 = -1.*t3165*t531*t2022*t2660;
  t3448 = t3444 + t3447;
  t2795 = 0.01841*t2713;
  t2815 = -0.70544*t2725;
  t2823 = t2795 + t2815;
  t2927 = -0.02159*t2926;
  t2939 = -1.11344*t2934;
  t2959 = t2927 + t2939;
  t3457 = -1.*t2456*t3381;
  t3460 = t2398*t3448;
  t3461 = t3457 + t3460;
  t3482 = t2398*t3381;
  t3491 = t2456*t3448;
  t3508 = t3482 + t3491;
  t3022 = -1.11344*t2926;
  t3030 = 0.02159*t2934;
  t3036 = t3022 + t3030;
  t3544 = t2725*t3461;
  t3560 = t2705*t3508;
  t3563 = t3544 + t3560;
  t3575 = t2705*t3461;
  t3576 = -1.*t2725*t3508;
  t3577 = t3575 + t3576;
  t3192 = -1.*t1929;
  t3223 = 1. + t3192;
  t3224 = 0.135*t3223;
  t3235 = 0.049*t2022;
  t3261 = t3224 + t3235;
  t2220 = 0.135*t2022;
  t3290 = -0.09*t2650;
  t3318 = 0.049*t2660;
  t3329 = t3290 + t3318;
  t3702 = -1.*t1929*t531;
  t3704 = t168*t2179*t2022;
  t3707 = t3702 + t3704;
  t3716 = t2395*t3707;
  t3720 = t168*t3165*t2660;
  t3738 = t3716 + t3720;
  t3751 = t168*t3165*t2395;
  t3752 = -1.*t3707*t2660;
  t3755 = t3751 + t3752;
  t3767 = -1.*t2456*t3738;
  t3768 = t2398*t3755;
  t3771 = t3767 + t3768;
  t3775 = t2398*t3738;
  t3780 = t2456*t3755;
  t3781 = t3775 + t3780;
  t3793 = t2725*t3771;
  t3796 = t2705*t3781;
  t3797 = t3793 + t3796;
  t3802 = t2705*t3771;
  t3805 = -1.*t2725*t3781;
  t3810 = t3802 + t3805;
  t3865 = t168*t1929;
  t3867 = t531*t2179*t2022;
  t3869 = t3865 + t3867;
  t3875 = -1.*t2395*t3869;
  t3877 = -1.*t3165*t531*t2660;
  t3878 = t3875 + t3877;
  t3882 = t3165*t2395*t531;
  t3883 = -1.*t3869*t2660;
  t3884 = t3882 + t3883;
  t3886 = t2456*t3878;
  t3887 = t2398*t3884;
  t3888 = t3886 + t3887;
  t3890 = t2398*t3878;
  t3891 = -1.*t2456*t3884;
  t3892 = t3890 + t3891;
  t3910 = -1.*t2725*t3888;
  t3911 = t2705*t3892;
  t3914 = t3910 + t3911;
  t3922 = t2705*t3888;
  t3923 = t2725*t3892;
  t3927 = t3922 + t3923;
  t3970 = t2395*t3869;
  t3971 = t3165*t531*t2660;
  t3973 = t3970 + t3971;
  t3978 = -1.*t2456*t3973;
  t3980 = t3978 + t3887;
  t3984 = -1.*t2398*t3973;
  t3986 = t3984 + t3891;
  t3989 = -1.*t2725*t3980;
  t3990 = t2705*t3986;
  t3992 = t3989 + t3990;
  t3994 = t2705*t3980;
  t3996 = t2725*t3986;
  t3997 = t3994 + t3996;
  t4034 = t2398*t3973;
  t4037 = t2456*t3884;
  t4042 = t4034 + t4037;
  t4053 = -1.*t2705*t4042;
  t4056 = t3989 + t4053;
  t4060 = -1.*t2725*t4042;
  t4065 = t3994 + t4060;
  t4131 = t2725*t3980;
  t4134 = t2705*t4042;
  t4135 = t4131 + t4134;
  t4080 = t2887*t4065;
  t4103 = -1.*t2934*t4065;
  t4169 = Sin(var1[14]);
  t4171 = Cos(var1[14]);
  t1958 = 0.135*t1929;
  t2037 = -0.049*t2022;
  t2139 = t1958 + t2037;
  t2218 = 0.049*t1929;
  t2244 = t2218 + t2220;
  t4188 = t50*t3165;
  t4189 = -1.*t168*t462*t2179;
  t4190 = t4188 + t4189;
  t4193 = t1929*t4190;
  t4196 = -1.*t462*t531*t2022;
  t4197 = t4193 + t4196;
  t4205 = -1.*t2395*t2456*t4197;
  t4206 = -1.*t2398*t4197*t2660;
  t4219 = t4205 + t4206;
  t4223 = t2398*t2395*t4197;
  t4228 = -1.*t2456*t4197*t2660;
  t4231 = t4223 + t4228;
  t4235 = t2725*t4219;
  t4236 = t2705*t4231;
  t4239 = t4235 + t4236;
  t4246 = t2705*t4219;
  t4257 = -1.*t2725*t4231;
  t4260 = t4246 + t4257;
  t4307 = -1.*t168*t3165*t462;
  t4308 = -1.*t50*t2179;
  t4309 = t4307 + t4308;
  t4314 = -1.*t50*t3165;
  t4315 = t168*t462*t2179;
  t4316 = t4314 + t4315;
  t4318 = t2395*t4309*t2022;
  t4319 = t4316*t2660;
  t4320 = t4318 + t4319;
  t4322 = t2395*t4316;
  t4323 = -1.*t4309*t2022*t2660;
  t4324 = t4322 + t4323;
  t4326 = -1.*t2456*t4320;
  t4327 = t2398*t4324;
  t4328 = t4326 + t4327;
  t4342 = t2398*t4320;
  t4343 = t2456*t4324;
  t4346 = t4342 + t4343;
  t4354 = t2725*t4328;
  t4355 = t2705*t4346;
  t4359 = t4354 + t4355;
  t4361 = t2705*t4328;
  t4369 = -1.*t2725*t4346;
  t4377 = t4361 + t4369;
  t3649 = -0.049*t3223;
  t3672 = t3649 + t2220;
  t4437 = t168*t1929*t462;
  t4440 = t462*t531*t2179*t2022;
  t4445 = t4437 + t4440;
  t4458 = t2395*t4445;
  t4459 = t3165*t462*t531*t2660;
  t4460 = t4458 + t4459;
  t4464 = t3165*t2395*t462*t531;
  t4466 = -1.*t4445*t2660;
  t4468 = t4464 + t4466;
  t4471 = -1.*t2456*t4460;
  t4472 = t2398*t4468;
  t4474 = t4471 + t4472;
  t4476 = t2398*t4460;
  t4478 = t2456*t4468;
  t4479 = t4476 + t4478;
  t4483 = t2725*t4474;
  t4484 = t2705*t4479;
  t4485 = t4483 + t4484;
  t4487 = t2705*t4474;
  t4488 = -1.*t2725*t4479;
  t4489 = t4487 + t4488;
  t4572 = -1.*t3165*t462;
  t4575 = -1.*t50*t168*t2179;
  t4576 = t4572 + t4575;
  t4606 = t50*t1929*t531;
  t4607 = t4576*t2022;
  t4609 = t4606 + t4607;
  t4614 = -1.*t50*t168*t3165;
  t4616 = t462*t2179;
  t4617 = t4614 + t4616;
  t4620 = t2395*t4609;
  t4621 = t4617*t2660;
  t4622 = t4620 + t4621;
  t4625 = t2395*t4617;
  t4628 = -1.*t4609*t2660;
  t4629 = t4625 + t4628;
  t4631 = -1.*t2456*t4622;
  t4632 = t2398*t4629;
  t4633 = t4631 + t4632;
  t4635 = t2398*t4622;
  t4636 = t2456*t4629;
  t4637 = t4635 + t4636;
  t4639 = t2725*t4633;
  t4640 = t2705*t4637;
  t4641 = t4639 + t4640;
  t4657 = t2705*t4633;
  t4658 = -1.*t2725*t4637;
  t4661 = t4657 + t4658;
  t3850 = 0.049*t2395;
  t3859 = t3850 + t2661;
  t3870 = -0.09*t2395;
  t3871 = -0.049*t2660;
  t3873 = t3870 + t3871;
  t4702 = t1929*t462*t531;
  t4705 = t4190*t2022;
  t4710 = t4702 + t4705;
  t4712 = -1.*t2395*t4710;
  t4723 = -1.*t4309*t2660;
  t4726 = t4712 + t4723;
  t4730 = t2395*t4309;
  t4731 = -1.*t4710*t2660;
  t4734 = t4730 + t4731;
  t4741 = t2456*t4726;
  t4742 = t2398*t4734;
  t4751 = t4741 + t4742;
  t4755 = t2398*t4726;
  t4760 = -1.*t2456*t4734;
  t4761 = t4755 + t4760;
  t4773 = -1.*t2725*t4751;
  t4774 = t2705*t4761;
  t4775 = t4773 + t4774;
  t4779 = t2705*t4751;
  t4780 = t2725*t4761;
  t4782 = t4779 + t4780;
  t3967 = -0.21*t2398;
  t3968 = -0.049*t2456;
  t3969 = t3967 + t3968;
  t3975 = 0.049*t2398;
  t3976 = t3975 + t2460;
  t4800 = t2395*t4710;
  t4801 = t4309*t2660;
  t4802 = t4800 + t4801;
  t4805 = -1.*t2456*t4802;
  t4806 = t4805 + t4742;
  t4808 = -1.*t2398*t4802;
  t4809 = t4808 + t4760;
  t4811 = -1.*t2725*t4806;
  t4812 = t2705*t4809;
  t4814 = t4811 + t4812;
  t4828 = t2705*t4806;
  t4832 = t2725*t4809;
  t4833 = t4828 + t4832;
  t4018 = -0.01841*t2705;
  t4021 = t4018 + t2815;
  t4029 = -0.70544*t2705;
  t4030 = 0.01841*t2725;
  t4033 = t4029 + t4030;
  t4882 = t2398*t4802;
  t4883 = t2456*t4734;
  t4887 = t4882 + t4883;
  t4889 = -1.*t2705*t4887;
  t4890 = t4811 + t4889;
  t4895 = -1.*t2725*t4887;
  t4898 = t4828 + t4895;
  t4119 = -1.11344*t2887;
  t4120 = -0.02159*t2934;
  t4124 = t4119 + t4120;
  t4142 = 0.02159*t2887;
  t4143 = t4142 + t2939;
  t4913 = t2725*t4806;
  t4914 = t2705*t4887;
  t4915 = t4913 + t4914;
  t4902 = t2887*t4898;
  t4908 = -1.*t2934*t4898;
  t4944 = t3165*t462;
  t4945 = t50*t168*t2179;
  t4946 = t4944 + t4945;
  t4948 = t1929*t4946;
  t4949 = t50*t531*t2022;
  t4950 = t4948 + t4949;
  t4970 = -1.*t2395*t2456*t4950;
  t4978 = -1.*t2398*t4950*t2660;
  t4983 = t4970 + t4978;
  t4989 = t2398*t2395*t4950;
  t4992 = -1.*t2456*t4950*t2660;
  t4993 = t4989 + t4992;
  t5001 = t2725*t4983;
  t5006 = t2705*t4993;
  t5007 = t5001 + t5006;
  t5009 = t2705*t4983;
  t5010 = -1.*t2725*t4993;
  t5013 = t5009 + t5010;
  t5035 = t50*t168*t3165;
  t5036 = -1.*t462*t2179;
  t5037 = t5035 + t5036;
  t5043 = t2395*t5037*t2022;
  t5044 = t4576*t2660;
  t5045 = t5043 + t5044;
  t5047 = t2395*t4576;
  t5053 = -1.*t5037*t2022*t2660;
  t5061 = t5047 + t5053;
  t5066 = -1.*t2456*t5045;
  t5069 = t2398*t5061;
  t5074 = t5066 + t5069;
  t5076 = t2398*t5045;
  t5087 = t2456*t5061;
  t5092 = t5076 + t5087;
  t5098 = t2725*t5074;
  t5101 = t2705*t5092;
  t5102 = t5098 + t5101;
  t5110 = t2705*t5074;
  t5115 = -1.*t2725*t5092;
  t5116 = t5110 + t5115;
  t5173 = -1.*t50*t168*t1929;
  t5177 = -1.*t50*t531*t2179*t2022;
  t5179 = t5173 + t5177;
  t5191 = t2395*t5179;
  t5195 = -1.*t50*t3165*t531*t2660;
  t5196 = t5191 + t5195;
  t5199 = -1.*t50*t3165*t2395*t531;
  t5200 = -1.*t5179*t2660;
  t5202 = t5199 + t5200;
  t5205 = -1.*t2456*t5196;
  t5206 = t2398*t5202;
  t5207 = t5205 + t5206;
  t5210 = t2398*t5196;
  t5213 = t2456*t5202;
  t5214 = t5210 + t5213;
  t5216 = t2725*t5207;
  t5217 = t2705*t5214;
  t5218 = t5216 + t5217;
  t5220 = t2705*t5207;
  t5221 = -1.*t2725*t5214;
  t5222 = t5220 + t5221;
  t5262 = -1.*t50*t1929*t531;
  t5266 = t4946*t2022;
  t5274 = t5262 + t5266;
  t5276 = -1.*t2395*t5274;
  t5277 = -1.*t5037*t2660;
  t5279 = t5276 + t5277;
  t5282 = t2395*t5037;
  t5284 = -1.*t5274*t2660;
  t5285 = t5282 + t5284;
  t5288 = t2456*t5279;
  t5289 = t2398*t5285;
  t5291 = t5288 + t5289;
  t5295 = t2398*t5279;
  t5296 = -1.*t2456*t5285;
  t5297 = t5295 + t5296;
  t5299 = -1.*t2725*t5291;
  t5300 = t2705*t5297;
  t5301 = t5299 + t5300;
  t5303 = t2705*t5291;
  t5304 = t2725*t5297;
  t5305 = t5303 + t5304;
  t5340 = t2395*t5274;
  t5341 = t5037*t2660;
  t5345 = t5340 + t5341;
  t5358 = -1.*t2456*t5345;
  t5361 = t5358 + t5289;
  t5366 = -1.*t2398*t5345;
  t5368 = t5366 + t5296;
  t5379 = -1.*t2725*t5361;
  t5380 = t2705*t5368;
  t5381 = t5379 + t5380;
  t5384 = t2705*t5361;
  t5386 = t2725*t5368;
  t5387 = t5384 + t5386;
  t5405 = t2398*t5345;
  t5406 = t2456*t5285;
  t5407 = t5405 + t5406;
  t5409 = -1.*t2705*t5407;
  t5410 = t5379 + t5409;
  t5412 = -1.*t2725*t5407;
  t5413 = t5384 + t5412;
  t5432 = t2725*t5361;
  t5434 = t2705*t5407;
  t5435 = t5432 + t5434;
  t5416 = t2887*t5413;
  t5424 = -1.*t2934*t5413;
  t4525 = -1.*t4171;
  t4534 = 1. + t4525;
  t4540 = -1.*t3165;
  t4541 = 1. + t4540;
  t4918 = -1.*t2934*t4915;
  t4919 = t4918 + t4902;
  p_output1[0]=(-1.*t301*t462*t531 - 1.*t50*t588)*var2[3] + t168*t301*t50*var2[4] + (-1.*t301*t462 - 1.*t50*t531*t588)*var2[5];
  p_output1[1]=(t301*t50 - 1.*t462*t531*t588)*var2[3] + t168*t50*t588*var2[4] + (t301*t50*t531 - 1.*t462*t588)*var2[5];
  p_output1[2]=var2[7];
  p_output1[3]=0.5*(0.27*t168*t2179 - 2.*t168*t2179*t3261 - 2.*t168*t3165*t3329 - 2.*t2662*t3707 - 2.*t2470*t3738 - 2.*t2680*t3755 - 2.*t2738*t3771 - 2.*t2823*t3781 - 2.*t2959*t3797 - 2.*t3036*t3810 + 2.22688*(-1.*t2934*t3797 + t2887*t3810) + 0.04318*(t2887*t3797 + t2934*t3810) + 0.098*t531 + 2.*t3672*t531 - 0.261*(t168*t1929*t2179 + t2022*t531))*var2[4] + 0.5*(-2.*t2470*t3381 - 2.*t2680*t3448 - 2.*t2738*t3461 - 2.*t2823*t3508 - 2.*t2959*t3563 - 2.*t3036*t3577 + 2.22688*(-1.*t2934*t3563 + t2887*t3577) + 0.04318*(t2887*t3563 + t2934*t3577) + 0.27*t3165*t531 - 0.261*t1929*t3165*t531 - 2.*t2022*t2662*t3165*t531 - 2.*t3165*t3261*t531 + 2.*t2179*t3329*t531)*var2[6] + 0.5*(-2.*t168*t2139 - 2.*t2395*t2470*t2514 - 2.*t2514*t2662 + 2.*t2514*t2660*t2680 - 2.*t2738*t2778 - 2.*t2823*t2868 - 2.*t2959*t3019 - 2.*t3036*t3061 + 2.22688*(-1.*t2934*t3019 + t2887*t3061) + 0.04318*(t2887*t3019 + t2934*t3061) - 2.*t2179*t2244*t531 - 0.261*(-1.*t168*t1929 - 1.*t2022*t2179*t531))*var2[7] + 0.5*(-2.*t3869*t3873 - 2.*t2680*t3878 - 2.*t2470*t3884 - 2.*t2823*t3888 - 2.*t2738*t3892 - 2.*t3036*t3914 - 2.*t2959*t3927 + 0.04318*(t2934*t3914 + t2887*t3927) + 2.22688*(t2887*t3914 - 1.*t2934*t3927) - 2.*t3165*t3859*t531)*var2[8] + 0.5*(-2.*t3969*t3973 - 2.*t3884*t3976 - 2.*t2823*t3980 - 2.*t2738*t3986 - 2.*t3036*t3992 - 2.*t2959*t3997 + 0.04318*(t2934*t3992 + t2887*t3997) + 2.22688*(t2887*t3992 - 1.*t2934*t3997))*var2[9] + 0.5*(-2.*t3980*t4021 - 2.*t4033*t4042 - 2.*t3036*t4056 - 2.*t2959*t4065 + 0.04318*(t2934*t4056 + t4080) + 2.22688*(t2887*t4056 + t4103))*var2[11] + 0.5*(-2.*t4124*t4135 + 2.22688*(t4103 - 1.*t2887*t4135) + 0.04318*(t4080 - 1.*t2934*t4135) - 2.*t4065*t4143)*var2[13];
  p_output1[4]=0.5*(0.135*t4576 - 2.*t3261*t4576 - 2.*t2662*t4609 - 2.*t3329*t4617 + 0.135*t4534*t462 + 0.135*t4541*t462 - 2.*t2470*t4622 - 2.*t2680*t4629 - 2.*t2738*t4633 - 2.*t2823*t4637 - 2.*t2959*t4641 - 2.*t3036*t4661 + 2.22688*(-1.*t2934*t4641 + t2887*t4661) + 0.04318*(t2887*t4641 + t2934*t4661) - 0.135*t168*t2179*t50 - 0.135*t168*t4169*t50 - 0.135*(-1.*t4171*t462 - 1.*t168*t4169*t50) - 0.098*t50*t531 - 2.*t3672*t50*t531 - 0.261*(t1929*t4576 - 1.*t2022*t50*t531))*var2[3] + 0.5*(-2.*t2662*t4445 - 2.*t2470*t4460 - 2.*t2680*t4468 - 2.*t2738*t4474 - 2.*t2823*t4479 - 2.*t2959*t4485 - 2.*t3036*t4489 + 2.22688*(-1.*t2934*t4485 + t2887*t4489) + 0.04318*(t2887*t4485 + t2934*t4489) - 0.098*t168*t462 - 2.*t168*t3672*t462 + 0.27*t2179*t462*t531 - 2.*t2179*t3261*t462*t531 - 2.*t3165*t3329*t462*t531 - 0.261*(-1.*t168*t2022*t462 + t1929*t2179*t462*t531))*var2[4] + 0.5*(0.135*t4309 - 0.261*t1929*t4309 - 2.*t2022*t2662*t4309 - 2.*t3261*t4309 - 2.*t3329*t4316 - 2.*t2470*t4320 - 2.*t2680*t4324 - 2.*t2738*t4328 - 2.*t2823*t4346 - 2.*t2959*t4359 - 2.*t3036*t4377 + 2.22688*(-1.*t2934*t4359 + t2887*t4377) + 0.04318*(t2887*t4359 + t2934*t4377) - 0.135*t168*t3165*t462 - 0.135*t2179*t50)*var2[6] + 0.5*(-2.*t2244*t4190 - 2.*t2395*t2470*t4197 - 2.*t2662*t4197 + 2.*t2660*t2680*t4197 - 2.*t2738*t4219 - 2.*t2823*t4231 - 2.*t2959*t4239 - 2.*t3036*t4260 + 2.22688*(-1.*t2934*t4239 + t2887*t4260) + 0.04318*(t2887*t4239 + t2934*t4260) - 2.*t2139*t462*t531 - 0.261*(-1.*t2022*t4190 - 1.*t1929*t462*t531))*var2[7] + 0.5*(-2.*t3859*t4309 - 2.*t3873*t4710 - 2.*t2680*t4726 - 2.*t2470*t4734 - 2.*t2823*t4751 - 2.*t2738*t4761 - 2.*t3036*t4775 - 2.*t2959*t4782 + 0.04318*(t2934*t4775 + t2887*t4782) + 2.22688*(t2887*t4775 - 1.*t2934*t4782))*var2[8] + 0.5*(-2.*t3976*t4734 - 2.*t3969*t4802 - 2.*t2823*t4806 - 2.*t2738*t4809 - 2.*t3036*t4814 - 2.*t2959*t4833 + 0.04318*(t2934*t4814 + t2887*t4833) + 2.22688*(t2887*t4814 - 1.*t2934*t4833))*var2[9] + 0.5*(-2.*t4021*t4806 - 2.*t4033*t4887 - 2.*t3036*t4890 - 2.*t2959*t4898 + 0.04318*(t2934*t4890 + t4902) + 2.22688*(t2887*t4890 + t4908))*var2[11] + 0.5*(-2.*t4143*t4898 - 2.*t4124*t4915 + 2.22688*(t4908 - 1.*t2887*t4915) + 0.04318*t4919)*var2[13] + 0.5*(-0.135*t168*t4171*t462 - 0.135*t4169*t50 - 0.135*(-1.*t168*t4171*t462 - 1.*t4169*t50))*var2[14];
  p_output1[5]=0.5*(0.135*t4190 - 2.*t3261*t4190 - 0.261*t4197 - 2.*t3329*t4309 - 0.135*t168*t2179*t462 - 0.135*t168*t4169*t462 - 2.*t2662*t4710 - 2.*t2680*t4734 - 2.*t2470*t4802 - 2.*t2738*t4806 - 2.*t2823*t4887 - 2.*t3036*t4898 - 2.*t2959*t4915 + 0.04318*(t2934*t4898 + t2887*t4915) + 2.22688*t4919 - 0.135*t4534*t50 - 0.135*t4541*t50 - 0.135*(-1.*t168*t4169*t462 + t4171*t50) - 0.098*t462*t531 - 2.*t3672*t462*t531)*var2[3] + 0.5*(0.098*t168*t50 + 2.*t168*t3672*t50 - 2.*t2662*t5179 - 2.*t2470*t5196 - 2.*t2680*t5202 - 2.*t2738*t5207 - 2.*t2823*t5214 - 2.*t2959*t5218 - 2.*t3036*t5222 + 2.22688*(-1.*t2934*t5218 + t2887*t5222) + 0.04318*(t2887*t5218 + t2934*t5222) - 0.27*t2179*t50*t531 + 2.*t2179*t3261*t50*t531 + 2.*t3165*t3329*t50*t531 - 0.261*(t168*t2022*t50 - 1.*t1929*t2179*t50*t531))*var2[4] + 0.5*(-2.*t3329*t4576 - 0.135*t2179*t462 + 0.135*t168*t3165*t50 + 0.135*t5037 - 0.261*t1929*t5037 - 2.*t2022*t2662*t5037 - 2.*t3261*t5037 - 2.*t2470*t5045 - 2.*t2680*t5061 - 2.*t2738*t5074 - 2.*t2823*t5092 - 2.*t2959*t5102 - 2.*t3036*t5116 + 2.22688*(-1.*t2934*t5102 + t2887*t5116) + 0.04318*(t2887*t5102 + t2934*t5116))*var2[6] + 0.5*(-2.*t2244*t4946 - 0.261*(t4606 - 1.*t2022*t4946) - 2.*t2395*t2470*t4950 - 2.*t2662*t4950 + 2.*t2660*t2680*t4950 - 2.*t2738*t4983 - 2.*t2823*t4993 - 2.*t2959*t5007 - 2.*t3036*t5013 + 2.22688*(-1.*t2934*t5007 + t2887*t5013) + 0.04318*(t2887*t5007 + t2934*t5013) + 2.*t2139*t50*t531)*var2[7] + 0.5*(-2.*t3859*t5037 - 2.*t3873*t5274 - 2.*t2680*t5279 - 2.*t2470*t5285 - 2.*t2823*t5291 - 2.*t2738*t5297 - 2.*t3036*t5301 - 2.*t2959*t5305 + 0.04318*(t2934*t5301 + t2887*t5305) + 2.22688*(t2887*t5301 - 1.*t2934*t5305))*var2[8] + 0.5*(-2.*t3976*t5285 - 2.*t3969*t5345 - 2.*t2823*t5361 - 2.*t2738*t5368 - 2.*t3036*t5381 - 2.*t2959*t5387 + 0.04318*(t2934*t5381 + t2887*t5387) + 2.22688*(t2887*t5381 - 1.*t2934*t5387))*var2[9] + 0.5*(-2.*t4021*t5361 - 2.*t4033*t5407 - 2.*t3036*t5410 - 2.*t2959*t5413 + 0.04318*(t2934*t5410 + t5416) + 2.22688*(t2887*t5410 + t5424))*var2[11] + 0.5*(-2.*t4143*t5413 - 2.*t4124*t5435 + 2.22688*(t5424 - 1.*t2887*t5435) + 0.04318*(t5416 - 1.*t2934*t5435))*var2[13] + 0.5*(-0.135*t4169*t462 + 0.135*t168*t4171*t50 - 0.135*(-1.*t4169*t462 + t168*t4171*t50))*var2[14];
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
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
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 22 && ncols == 1) && 
      !(mrows == 1 && ncols == 22))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 6, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#endif // MATLAB_MEX_FILE

namespace SymFunction
{

void dypelvis_leftFoot_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}




