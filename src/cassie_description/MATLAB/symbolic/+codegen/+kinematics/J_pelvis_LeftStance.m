%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% J_pelvis_LeftStance
% 
% This file is automatically converted to matlab format from C code.
% Source symbolic expressions exported from FROST:
% 	 https://github.com/ayonga/frost-dev
% 
% Author: Jenna Reher (jreher@caltech.edu)
% Automatically generated on: December 23, 2021 T 05:03
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
function out = J_pelvis_LeftStance(var1)

  out = zeros(6, 10);

  p_output1 = zeros(60,1);


  t1411 = var1(10) + var1(9);
  t1560 = var1(10) + var1(12) + var1(9);
  t1509 = cos(t1411);
  t1577 = cos(t1560);
  t2019 = sin(t1411);
  t2113 = sin(t1560);
  t2306 = cos(var1(7));
  t3471 = -1.*var1(7);
  t3623 = -1.*var1(8);
  t3274 = -1.*var1(9);
  t3481 = var1(10) + t3471 + var1(9);
  t3507 = var1(10) + var1(12) + t3471 + var1(9);
  t3554 = var1(10) + var1(7) + var1(9);
  t3615 = var1(10) + var1(12) + var1(7) + var1(9);
  t3627 = var1(10) + t3471 + t3623 + var1(9);
  t3630 = var1(10) + var1(12) + t3471 + t3623 + var1(9);
  t3648 = var1(10) + var1(7) + t3623 + var1(9);
  t3661 = var1(10) + var1(12) + var1(7) + t3623 + var1(9);
  t3664 = var1(10) + t3471 + var1(8) + var1(9);
  t3670 = var1(10) + var1(12) + t3471 + var1(8) + var1(9);
  t3678 = var1(10) + var1(7) + var1(8) + var1(9);
  t3688 = var1(10) + var1(12) + var1(7) + var1(8) + var1(9);
  t3717 = var1(7) + t3623;
  t3724 = var1(7) + var1(8);
  t3754 = var1(7) + t3623 + t3274;
  t3764 = var1(7) + var1(8) + t3274;
  t3504 = cos(t3481);
  t3511 = cos(t3507);
  t3585 = cos(t3554);
  t3616 = cos(t3615);
  t3628 = cos(t3627);
  t3638 = cos(t3630);
  t3917 = var1(7) + t3623 + var1(9);
  t3654 = cos(t3648);
  t3662 = cos(t3661);
  t3665 = cos(t3664);
  t3674 = cos(t3670);
  t3982 = var1(7) + var1(8) + var1(9);
  t3684 = cos(t3678);
  t3711 = cos(t3688);
  t465 = sin(var1(7));
  t3358 = var1(7) + t3274;
  t3793 = sin(t3481);
  t3799 = sin(t3507);
  t3513 = var1(7) + var1(9);
  t3808 = sin(t3554);
  t3821 = sin(t3615);
  t3848 = sin(t3627);
  t3873 = sin(t3630);
  t3958 = sin(t3648);
  t3967 = sin(t3661);
  t3970 = sin(t3664);
  t3973 = sin(t3670);
  t3986 = sin(t3678);
  t3993 = sin(t3688);
  t4000 = sin(var1(4));
  t3234 = -36000.*t2306;
  t3362 = cos(t3358);
  t3465 = -24000.*t3362;
  t3506 = -99088.*t3504;
  t3512 = -81600.*t3511;
  t3514 = cos(t3513);
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
  t3718 = sin(t3717);
  t3720 = -900.*t3718;
  t3727 = sin(t3724);
  t3740 = -900.*t3727;
  t3757 = sin(t3754);
  t3761 = -12000.*t3757;
  t3779 = sin(t3764);
  t3790 = 12000.*t3779;
  t3796 = 13482.*t3793;
  t3802 = -8000.*t3799;
  t3818 = 13482.*t3808;
  t3824 = -8000.*t3821;
  t3859 = -49544.*t3848;
  t3916 = -40800.*t3873;
  t3918 = sin(t3917);
  t3956 = 12000.*t3918;
  t3966 = 49544.*t3958;
  t3969 = 40800.*t3967;
  t3971 = 49544.*t3970;
  t3981 = 40800.*t3973;
  t3984 = sin(t3982);
  t3985 = -12000.*t3984;
  t3988 = -49544.*t3986;
  t3994 = -40800.*t3993;
  t3996 = t3234 + t3465 + t3506 + t3512 + t3536 + t3589 + t3617 + t3629 + t3642 + t3655 + t3663 + t3666 + t3675 + t3685 + t3716 + t3720 + t3740 + t3761 + t3790 + t3796 + t3802 + t3818 + t3824 + t3859 + t3916 + t3956 + t3966 + t3969 + t3971 + t3981 + t3985 + t3988 + t3994;
  t3229 = cos(var1(4));
  t3998 = cos(var1(5));
  t4008 = cos(t3717);
  t4009 = 900.*t4008;
  t4011 = cos(t3724);
  t4012 = 900.*t4011;
  t4013 = cos(t3754);
  t4015 = 12000.*t4013;
  t4017 = cos(t3764);
  t4019 = -12000.*t4017;
  t4020 = 13482.*t3504;
  t4021 = -8000.*t3511;
  t4022 = -13482.*t3585;
  t4023 = 8000.*t3616;
  t4024 = -49544.*t3628;
  t4025 = -40800.*t3638;
  t4026 = cos(t3917);
  t4027 = -12000.*t4026;
  t4028 = -49544.*t3654;
  t4029 = -40800.*t3662;
  t4030 = 49544.*t3665;
  t4031 = 40800.*t3674;
  t4032 = cos(t3982);
  t4033 = 12000.*t4032;
  t4034 = 49544.*t3684;
  t4035 = 40800.*t3711;
  t4036 = -36000.*t465;
  t4037 = sin(t3358);
  t4038 = -24000.*t4037;
  t4039 = 99088.*t3793;
  t4040 = 81600.*t3799;
  t4041 = sin(t3513);
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
  t224 = sin(var1(5));
  t2420 = sin(var1(8));
  t2312 = cos(var1(8));
  t2423 = 6741.*t1509;
  t2508 = -4000.*t1577;
  t2521 = sin(var1(9));
  t2524 = 12000.*t2521;
  t2553 = 49544.*t2019;
  t2565 = 40800.*t2113;
  t2629 = t2423 + t2508 + t2524 + t2553 + t2565;
  t4069 = var1(10) + t3623 + var1(9);
  t4072 = var1(10) + var1(12) + t3623 + var1(9);
  t4078 = var1(10) + var1(8) + var1(9);
  t4081 = var1(10) + var1(12) + var1(8) + var1(9);
  t4065 = 900.*t2312;
  t4066 = var1(8) + t3274;
  t4067 = cos(t4066);
  t4068 = -12000.*t4067;
  t4070 = cos(t4069);
  t4071 = -49544.*t4070;
  t4073 = cos(t4072);
  t4074 = -40800.*t4073;
  t4075 = var1(8) + var1(9);
  t4076 = cos(t4075);
  t4077 = 12000.*t4076;
  t4079 = cos(t4078);
  t4080 = 49544.*t4079;
  t4082 = cos(t4081);
  t4083 = 40800.*t4082;
  t4084 = sin(t4069);
  t4085 = 6741.*t4084;
  t4086 = sin(t4072);
  t4087 = -4000.*t4086;
  t4088 = sin(t4078);
  t4089 = -6741.*t4088;
  t4090 = sin(t4081);
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
  t907 = cos(var1(9));
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
  p_output1(4)=1.e-5*t224*(t2306*(450.*t2312 - 1.*t2420*t2629) - 1.*(9000. + t1330 + t1551 + t1779 + t2064 + t2171)*t465);
  p_output1(5)=2.5e-6*(t3229*t3996 - 1.*t3998*t4000*t4053);
  p_output1(6)=2.5e-6*(t3996*t4000 + t3229*t3998*t4053);
  p_output1(9)=1.;
  p_output1(10)=5.e-6*(-1.*t3998*t4092 + 2.*t224*(-450.*t2420 - 1.*t2312*t2629)*t465);
  p_output1(11)=2.5e-6*(t3229*t4107 - 1.*t4000*t4123);
  p_output1(12)=2.5e-6*(t4000*t4107 + t3229*t4123);
  p_output1(16)=5.e-6*(-1.*t3998*t4147 + 2.*t224*(t2306*(-12000.*t2521 + t4131 + t4132 + t4134 + t4135) - 1.*(t1330 + t1551 + t1779 + t2064 + t2171)*t2420*t465));
  p_output1(17)=2.5e-6*(t3229*t4161 - 1.*t4000*t4176);
  p_output1(18)=2.5e-6*(t4000*t4161 + t3229*t4176);
  p_output1(22)=5.e-6*(-1.*t3998*t4190 + 2.*t224*(t2306*(t4131 + t4132 + t4134 + t4135) - 1.*(t1551 + t1779 + t2064 + t2171)*t2420*t465));
  p_output1(23)=2.5e-6*(t3229*t4194 - 1.*t4000*t4199);
  p_output1(24)=2.5e-6*(t4000*t4194 + t3229*t4199);
  out = reshape(p_output1, 6, 10);
end