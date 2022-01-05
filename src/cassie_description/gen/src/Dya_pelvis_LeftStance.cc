/*
 * Automatically Generated from Mathematica.
 * Thu 23 Dec 2021 17:03:17 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "Dya_pelvis_LeftStance.hh"
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
  double t1350;
  double t742;
  double t791;
  double t895;
  double t1719;
  double t2208;
  double t4063;
  double t4202;
  double t4205;
  double t4318;
  double t4329;
  double t4362;
  double t4371;
  double t4415;
  double t4563;
  double t4570;
  double t4585;
  double t4650;
  double t4710;
  double t4716;
  double t4802;
  double t4812;
  double t4820;
  double t4823;
  double t4723;
  double t4242;
  double t4321;
  double t4736;
  double t4353;
  double t4365;
  double t4409;
  double t4418;
  double t4564;
  double t4573;
  double t4630;
  double t4666;
  double t4712;
  double t4717;
  double t2449;
  double t2796;
  double t4094;
  double t4138;
  double t4728;
  double t4732;
  double t4741;
  double t4743;
  double t4745;
  double t4747;
  double t4451;
  double t4749;
  double t4751;
  double t4753;
  double t4759;
  double t4683;
  double t4780;
  double t4789;
  double t2450;
  double t2451;
  double t3133;
  double t4056;
  double t4125;
  double t4133;
  double t4141;
  double t4184;
  double t4256;
  double t4324;
  double t4356;
  double t4368;
  double t4412;
  double t4435;
  double t4471;
  double t4501;
  double t4567;
  double t4578;
  double t4646;
  double t4670;
  double t4687;
  double t4706;
  double t4714;
  double t4718;
  double t4719;
  double t4720;
  double t4724;
  double t4725;
  double t4729;
  double t4733;
  double t4737;
  double t4740;
  double t4742;
  double t4744;
  double t4746;
  double t4748;
  double t4750;
  double t4752;
  double t4756;
  double t4778;
  double t4784;
  double t4791;
  double t4796;
  double t4807;
  double t4809;
  double t4817;
  double t4819;
  double t4821;
  double t4822;
  double t4824;
  double t4825;
  double t4826;
  double t4827;
  double t4828;
  double t4832;
  double t4836;
  double t4840;
  double t4844;
  double t4848;
  double t4849;
  double t4850;
  double t4851;
  double t4852;
  double t4853;
  double t4854;
  double t4855;
  double t4856;
  double t4857;
  double t4858;
  double t4859;
  double t4860;
  double t4861;
  double t4862;
  double t4863;
  double t4864;
  double t4865;
  double t4866;
  double t4870;
  double t4874;
  double t4878;
  double t4879;
  double t4880;
  double t4881;
  double t4882;
  double t4883;
  double t4884;
  double t4885;
  double t4891;
  double t4892;
  double t4894;
  double t4895;
  double t4905;
  double t4906;
  double t4907;
  double t4909;
  double t4910;
  double t4912;
  double t4914;
  double t4915;
  double t4917;
  double t4919;
  double t4920;
  double t4922;
  double t4923;
  double t4924;
  double t4925;
  double t4926;
  double t4927;
  double t4929;
  double t4930;
  double t4931;
  double t4932;
  double t4933;
  double t4934;
  double t4935;
  double t4956;
  double t4965;
  double t4963;
  double t4966;
  double t4976;
  double t4978;
  double t5017;
  double t5019;
  double t5020;
  double t4948;
  double t4949;
  double t4964;
  double t4967;
  double t4977;
  double t4983;
  double t4984;
  double t4987;
  double t4988;
  double t4991;
  double t4992;
  double t4994;
  double t4996;
  double t4997;
  double t5000;
  double t5001;
  double t5003;
  double t5005;
  double t5035;
  double t5037;
  double t5038;
  double t5039;
  double t5040;
  double t5041;
  double t5042;
  double t5043;
  double t5044;
  double t5045;
  double t5046;
  double t5050;
  double t5051;
  double t5061;
  double t5062;
  double t5069;
  double t5070;
  double t5071;
  double t5072;
  double t5073;
  double t5074;
  double t5076;
  double t5077;
  double t5078;
  double t5079;
  double t5080;
  double t5081;
  double t5083;
  double t5084;
  double t5087;
  double t5088;
  double t5091;
  double t5093;
  double t5094;
  double t5098;
  double t5115;
  double t5118;
  double t5119;
  double t5120;
  double t5123;
  double t5124;
  double t5125;
  double t5126;
  double t5127;
  double t5128;
  double t5129;
  double t5130;
  double t5131;
  double t5132;
  double t5136;
  double t5138;
  double t5139;
  double t5140;
  double t5141;
  double t5142;
  double t5143;
  double t5144;
  double t5145;
  double t5146;
  double t5147;
  double t5148;
  double t5149;
  double t5150;
  double t5151;
  double t5152;
  double t5171;
  double t5172;
  double t5173;
  double t5174;
  double t5175;
  double t5176;
  double t5180;
  double t5182;
  double t5183;
  double t5184;
  double t5185;
  double t5186;
  double t5187;
  double t5188;
  double t5189;
  double t5190;
  double t5191;
  double t5192;
  double t5193;
  double t5194;
  double t5195;
  double t5160;
  double t5161;
  double t5163;
  double t5164;
  double t5209;
  double t5213;
  double t5215;
  double t5216;
  double t5217;
  double t5218;
  double t5232;
  double t5236;
  double t5238;
  double t5239;
  double t5240;
  double t5241;
  t1350 = Cos(var1[3]);
  t742 = Cos(var1[5]);
  t791 = Sin(var1[3]);
  t895 = Sin(var1[4]);
  t1719 = Sin(var1[5]);
  t2208 = -1.*var1[7];
  t4063 = -1.*var1[8];
  t4202 = -1.*var1[6];
  t4205 = var1[9] + t4202 + var1[8];
  t4318 = var1[9] + var1[11] + t4202 + var1[8];
  t4329 = var1[9] + var1[6] + var1[8];
  t4362 = var1[9] + var1[11] + var1[6] + var1[8];
  t4371 = var1[9] + t4202 + t2208 + var1[8];
  t4415 = var1[9] + var1[11] + t4202 + t2208 + var1[8];
  t4563 = var1[9] + var1[6] + t2208 + var1[8];
  t4570 = var1[9] + var1[11] + var1[6] + t2208 + var1[8];
  t4585 = var1[9] + t4202 + var1[7] + var1[8];
  t4650 = var1[9] + var1[11] + t4202 + var1[7] + var1[8];
  t4710 = var1[9] + var1[6] + var1[7] + var1[8];
  t4716 = var1[9] + var1[11] + var1[6] + var1[7] + var1[8];
  t4802 = var1[9] + t2208 + var1[8];
  t4812 = var1[9] + var1[11] + t2208 + var1[8];
  t4820 = var1[9] + var1[7] + var1[8];
  t4823 = var1[9] + var1[11] + var1[7] + var1[8];
  t4723 = var1[6] + t4063;
  t4242 = Cos(t4205);
  t4321 = Cos(t4318);
  t4736 = var1[6] + var1[8];
  t4353 = Cos(t4329);
  t4365 = Cos(t4362);
  t4409 = Cos(t4371);
  t4418 = Cos(t4415);
  t4564 = Cos(t4563);
  t4573 = Cos(t4570);
  t4630 = Cos(t4585);
  t4666 = Cos(t4650);
  t4712 = Cos(t4710);
  t4717 = Cos(t4716);
  t2449 = var1[6] + t2208;
  t2796 = var1[6] + var1[7];
  t4094 = var1[6] + t2208 + t4063;
  t4138 = var1[6] + var1[7] + t4063;
  t4728 = Sin(t4205);
  t4732 = Sin(t4318);
  t4741 = Sin(t4329);
  t4743 = Sin(t4362);
  t4745 = Sin(t4371);
  t4747 = Sin(t4415);
  t4451 = var1[6] + t2208 + var1[8];
  t4749 = Sin(t4563);
  t4751 = Sin(t4570);
  t4753 = Sin(t4585);
  t4759 = Sin(t4650);
  t4683 = var1[6] + var1[7] + var1[8];
  t4780 = Sin(t4710);
  t4789 = Sin(t4716);
  t2450 = Cos(t2449);
  t2451 = 900.*t2450;
  t3133 = Cos(t2796);
  t4056 = 900.*t3133;
  t4125 = Cos(t4094);
  t4133 = 12000.*t4125;
  t4141 = Cos(t4138);
  t4184 = -12000.*t4141;
  t4256 = 13482.*t4242;
  t4324 = -8000.*t4321;
  t4356 = -13482.*t4353;
  t4368 = 8000.*t4365;
  t4412 = -49544.*t4409;
  t4435 = -40800.*t4418;
  t4471 = Cos(t4451);
  t4501 = -12000.*t4471;
  t4567 = -49544.*t4564;
  t4578 = -40800.*t4573;
  t4646 = 49544.*t4630;
  t4670 = 40800.*t4666;
  t4687 = Cos(t4683);
  t4706 = 12000.*t4687;
  t4714 = 49544.*t4712;
  t4718 = 40800.*t4717;
  t4719 = Sin(var1[6]);
  t4720 = -36000.*t4719;
  t4724 = Sin(t4723);
  t4725 = -24000.*t4724;
  t4729 = 99088.*t4728;
  t4733 = 81600.*t4732;
  t4737 = Sin(t4736);
  t4740 = -24000.*t4737;
  t4742 = -99088.*t4741;
  t4744 = -81600.*t4743;
  t4746 = 6741.*t4745;
  t4748 = -4000.*t4747;
  t4750 = 6741.*t4749;
  t4752 = -4000.*t4751;
  t4756 = -6741.*t4753;
  t4778 = 4000.*t4759;
  t4784 = -6741.*t4780;
  t4791 = 4000.*t4789;
  t4796 = -54000. + t2451 + t4056 + t4133 + t4184 + t4256 + t4324 + t4356 + t4368 + t4412 + t4435 + t4501 + t4567 + t4578 + t4646 + t4670 + t4706 + t4714 + t4718 + t4720 + t4725 + t4729 + t4733 + t4740 + t4742 + t4744 + t4746 + t4748 + t4750 + t4752 + t4756 + t4778 + t4784 + t4791;
  t4807 = Cos(t4802);
  t4809 = 6741.*t4807;
  t4817 = Cos(t4812);
  t4819 = -4000.*t4817;
  t4821 = Cos(t4820);
  t4822 = 6741.*t4821;
  t4824 = Cos(t4823);
  t4825 = -4000.*t4824;
  t4826 = Sin(var1[7]);
  t4827 = 900.*t4826;
  t4828 = var1[7] + t4063;
  t4832 = Sin(t4828);
  t4836 = -12000.*t4832;
  t4840 = Sin(t4802);
  t4844 = 49544.*t4840;
  t4848 = Sin(t4812);
  t4849 = 40800.*t4848;
  t4850 = var1[7] + var1[8];
  t4851 = Sin(t4850);
  t4852 = 12000.*t4851;
  t4853 = Sin(t4820);
  t4854 = 49544.*t4853;
  t4855 = Sin(t4823);
  t4856 = 40800.*t4855;
  t4857 = t4809 + t4819 + t4822 + t4825 + t4827 + t4836 + t4844 + t4849 + t4852 + t4854 + t4856;
  t4858 = 2.*t895*t4857;
  t4859 = Cos(var1[4]);
  t4860 = Cos(var1[6]);
  t4861 = 36000.*t4860;
  t4862 = Cos(t4723);
  t4863 = 24000.*t4862;
  t4864 = 99088.*t4242;
  t4865 = 81600.*t4321;
  t4866 = Cos(t4736);
  t4870 = 24000.*t4866;
  t4874 = 99088.*t4353;
  t4878 = 81600.*t4365;
  t4879 = 6741.*t4409;
  t4880 = -4000.*t4418;
  t4881 = -6741.*t4564;
  t4882 = 4000.*t4573;
  t4883 = -6741.*t4630;
  t4884 = 4000.*t4666;
  t4885 = 6741.*t4712;
  t4891 = -4000.*t4717;
  t4892 = Sin(t2449);
  t4894 = 900.*t4892;
  t4895 = Sin(t2796);
  t4905 = 900.*t4895;
  t4906 = Sin(t4094);
  t4907 = 12000.*t4906;
  t4909 = Sin(t4138);
  t4910 = -12000.*t4909;
  t4912 = -13482.*t4728;
  t4914 = 8000.*t4732;
  t4915 = -13482.*t4741;
  t4917 = 8000.*t4743;
  t4919 = 49544.*t4745;
  t4920 = 40800.*t4747;
  t4922 = Sin(t4451);
  t4923 = -12000.*t4922;
  t4924 = -49544.*t4749;
  t4925 = -40800.*t4751;
  t4926 = -49544.*t4753;
  t4927 = -40800.*t4759;
  t4929 = Sin(t4683);
  t4930 = 12000.*t4929;
  t4931 = 49544.*t4780;
  t4932 = 40800.*t4789;
  t4933 = t4861 + t4863 + t4864 + t4865 + t4870 + t4874 + t4878 + t4879 + t4880 + t4881 + t4882 + t4883 + t4884 + t4885 + t4891 + t4894 + t4905 + t4907 + t4910 + t4912 + t4914 + t4915 + t4917 + t4919 + t4920 + t4923 + t4924 + t4925 + t4926 + t4927 + t4930 + t4931 + t4932;
  t4934 = t4859*t4933;
  t4935 = t4858 + t4934;
  t4956 = var1[9] + var1[8];
  t4965 = var1[9] + var1[11] + var1[8];
  t4963 = Cos(t4956);
  t4966 = Cos(t4965);
  t4976 = Sin(t4956);
  t4978 = Sin(t4965);
  t5017 = 2.*t4859*t4857;
  t5019 = -1.*t895*t4933;
  t5020 = t5017 + t5019;
  t4948 = Cos(var1[8]);
  t4949 = 12000.*t4948;
  t4964 = 49544.*t4963;
  t4967 = 40800.*t4966;
  t4977 = -6741.*t4976;
  t4983 = 4000.*t4978;
  t4984 = 9000. + t4949 + t4964 + t4967 + t4977 + t4983;
  t4987 = Cos(var1[7]);
  t4988 = 450.*t4987;
  t4991 = 6741.*t4963;
  t4992 = -4000.*t4966;
  t4994 = Sin(var1[8]);
  t4996 = 12000.*t4994;
  t4997 = 49544.*t4976;
  t5000 = 40800.*t4978;
  t5001 = t4991 + t4992 + t4996 + t4997 + t5000;
  t5003 = -1.*t4826*t5001;
  t5005 = t4988 + t5003;
  t5035 = -36000.*t4860;
  t5037 = -24000.*t4862;
  t5038 = -99088.*t4242;
  t5039 = -81600.*t4321;
  t5040 = -24000.*t4866;
  t5041 = -99088.*t4353;
  t5042 = -81600.*t4365;
  t5043 = -6741.*t4409;
  t5044 = 4000.*t4418;
  t5045 = 6741.*t4564;
  t5046 = -4000.*t4573;
  t5050 = 6741.*t4630;
  t5051 = -4000.*t4666;
  t5061 = -6741.*t4712;
  t5062 = 4000.*t4717;
  t5069 = -900.*t4892;
  t5070 = -900.*t4895;
  t5071 = -12000.*t4906;
  t5072 = 12000.*t4909;
  t5073 = 13482.*t4728;
  t5074 = -8000.*t4732;
  t5076 = 13482.*t4741;
  t5077 = -8000.*t4743;
  t5078 = -49544.*t4745;
  t5079 = -40800.*t4747;
  t5080 = 12000.*t4922;
  t5081 = 49544.*t4749;
  t5083 = 40800.*t4751;
  t5084 = 49544.*t4753;
  t5087 = 40800.*t4759;
  t5088 = -12000.*t4929;
  t5091 = -49544.*t4780;
  t5093 = -40800.*t4789;
  t5094 = t5035 + t5037 + t5038 + t5039 + t5040 + t5041 + t5042 + t5043 + t5044 + t5045 + t5046 + t5050 + t5051 + t5061 + t5062 + t5069 + t5070 + t5071 + t5072 + t5073 + t5074 + t5076 + t5077 + t5078 + t5079 + t5080 + t5081 + t5083 + t5084 + t5087 + t5088 + t5091 + t5093;
  t5098 = t2451 + t4056 + t4133 + t4184 + t4256 + t4324 + t4356 + t4368 + t4412 + t4435 + t4501 + t4567 + t4578 + t4646 + t4670 + t4706 + t4714 + t4718 + t4720 + t4725 + t4729 + t4733 + t4740 + t4742 + t4744 + t4746 + t4748 + t4750 + t4752 + t4756 + t4778 + t4784 + t4791;
  t5115 = 900.*t4987;
  t5118 = Cos(t4828);
  t5119 = -12000.*t5118;
  t5120 = -49544.*t4807;
  t5123 = -40800.*t4817;
  t5124 = Cos(t4850);
  t5125 = 12000.*t5124;
  t5126 = 49544.*t4821;
  t5127 = 40800.*t4824;
  t5128 = 6741.*t4840;
  t5129 = -4000.*t4848;
  t5130 = -6741.*t4853;
  t5131 = 4000.*t4855;
  t5132 = t5115 + t5119 + t5120 + t5123 + t5125 + t5126 + t5127 + t5128 + t5129 + t5130 + t5131;
  t5136 = t5043 + t5044 + t4881 + t4882 + t4883 + t4884 + t5061 + t5062 + t4894 + t5070 + t4907 + t5072 + t5078 + t5079 + t4923 + t4924 + t4925 + t4926 + t4927 + t5088 + t5091 + t5093;
  t5138 = 2.*t895*t5132;
  t5139 = -900.*t2450;
  t5140 = -12000.*t4125;
  t5141 = 12000.*t4471;
  t5142 = 49544.*t4564;
  t5143 = 40800.*t4573;
  t5144 = -49544.*t4630;
  t5145 = -40800.*t4666;
  t5146 = -6741.*t4749;
  t5147 = 4000.*t4751;
  t5148 = 6741.*t4753;
  t5149 = -4000.*t4759;
  t5150 = t5139 + t4056 + t5140 + t4184 + t4412 + t4435 + t5141 + t5142 + t5143 + t5144 + t5145 + t4706 + t4714 + t4718 + t4746 + t4748 + t5146 + t5147 + t5148 + t5149 + t4784 + t4791;
  t5151 = t4859*t5150;
  t5152 = t5138 + t5151;
  t5171 = 12000.*t5118;
  t5172 = 49544.*t4807;
  t5173 = 40800.*t4817;
  t5174 = -6741.*t4840;
  t5175 = 4000.*t4848;
  t5176 = t5171 + t5172 + t5173 + t5125 + t5126 + t5127 + t5174 + t5175 + t5130 + t5131;
  t5180 = t4863 + t4864 + t4865 + t5040 + t5041 + t5042 + t4879 + t4880 + t5045 + t5046 + t4883 + t4884 + t5061 + t5062 + t4907 + t4910 + t4912 + t4914 + t5076 + t5077 + t4919 + t4920 + t5080 + t5081 + t5083 + t4926 + t4927 + t5088 + t5091 + t5093;
  t5182 = 2.*t895*t5176;
  t5183 = 12000.*t4141;
  t5184 = -13482.*t4242;
  t5185 = 8000.*t4321;
  t5186 = 49544.*t4409;
  t5187 = 40800.*t4418;
  t5188 = 24000.*t4724;
  t5189 = -99088.*t4728;
  t5190 = -81600.*t4732;
  t5191 = -6741.*t4745;
  t5192 = 4000.*t4747;
  t5193 = t5140 + t5183 + t5184 + t5185 + t4356 + t4368 + t5186 + t5187 + t4501 + t4567 + t4578 + t5144 + t5145 + t4706 + t4714 + t4718 + t5188 + t5189 + t5190 + t4740 + t4742 + t4744 + t5191 + t5192 + t4750 + t4752 + t5148 + t5149 + t4784 + t4791;
  t5194 = t4859*t5193;
  t5195 = t5182 + t5194;
  t5160 = -6741.*t4963;
  t5161 = 4000.*t4966;
  t5163 = -49544.*t4976;
  t5164 = -40800.*t4978;
  t5209 = t5172 + t5173 + t5126 + t5127 + t5174 + t5175 + t5130 + t5131;
  t5213 = t4864 + t4865 + t5041 + t5042 + t4879 + t4880 + t5045 + t5046 + t4883 + t4884 + t5061 + t5062 + t4912 + t4914 + t5076 + t5077 + t4919 + t4920 + t5081 + t5083 + t4926 + t4927 + t5091 + t5093;
  t5215 = 2.*t895*t5209;
  t5216 = t5184 + t5185 + t4356 + t4368 + t5186 + t5187 + t4567 + t4578 + t5144 + t5145 + t4714 + t4718 + t5189 + t5190 + t4742 + t4744 + t5191 + t5192 + t4750 + t4752 + t5148 + t5149 + t4784 + t4791;
  t5217 = t4859*t5216;
  t5218 = t5215 + t5217;
  t5232 = t5173 + t5127 + t5175 + t5131;
  t5236 = t4865 + t5042 + t4880 + t5046 + t4884 + t5062 + t4914 + t5077 + t4920 + t5083 + t4927 + t5093;
  t5238 = 2.*t895*t5232;
  t5239 = t5185 + t4368 + t5187 + t4578 + t5145 + t4718 + t5190 + t4744 + t5192 + t4752 + t5149 + t4791;
  t5240 = t4859*t5239;
  t5241 = t5238 + t5240;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=-1.*t1350*t1719 - 1.*t742*t791*t895;
  p_output1[19]=t1350*t742 - 1.*t1719*t791*t895;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=2.5e-6*(-1.*t1350*t4935 - 1.*t4796*t791);
  p_output1[23]=2.5e-6*(t1350*t4796 - 1.*t4935*t791);
  p_output1[24]=t1350*t4859*t742;
  p_output1[25]=t1350*t1719*t4859;
  p_output1[26]=0;
  p_output1[27]=5.e-6*(2.*t4859*(t4860*t4984 + t4719*t5005) + t4857*t895);
  p_output1[28]=-2.5e-6*t5020*t791;
  p_output1[29]=2.5e-6*t1350*t5020;
  p_output1[30]=-1.*t742*t791 - 1.*t1350*t1719*t895;
  p_output1[31]=-1.*t1719*t791 + t1350*t742*t895;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=1.e-5*(-1.*t4719*t4984 + t4860*t5005)*t895;
  p_output1[40]=2.5e-6*(t1350*t5094 - 1.*t4859*t5098*t791);
  p_output1[41]=2.5e-6*(t1350*t4859*t5098 + t5094*t791);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=1.;
  p_output1[45]=5.e-6*(-1.*t4859*t5132 + 2.*t4719*(-450.*t4826 - 1.*t4987*t5001)*t895);
  p_output1[46]=2.5e-6*(t1350*t5136 - 1.*t5152*t791);
  p_output1[47]=2.5e-6*(t1350*t5152 + t5136*t791);
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=5.e-6*(-1.*t4859*t5176 + 2.*(-1.*t4719*t4826*(t4949 + t4964 + t4967 + t4977 + t4983) + t4860*(-12000.*t4994 + t5160 + t5161 + t5163 + t5164))*t895);
  p_output1[52]=2.5e-6*(t1350*t5180 - 1.*t5195*t791);
  p_output1[53]=2.5e-6*(t1350*t5195 + t5180*t791);
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=5.e-6*(-1.*t4859*t5209 + 2.*(-1.*t4719*t4826*(t4964 + t4967 + t4977 + t4983) + t4860*(t5160 + t5161 + t5163 + t5164))*t895);
  p_output1[58]=2.5e-6*(t1350*t5213 - 1.*t5218*t791);
  p_output1[59]=2.5e-6*(t1350*t5218 + t5213*t791);
  p_output1[60]=0;
  p_output1[61]=0;
  p_output1[62]=0;
  p_output1[63]=0;
  p_output1[64]=0;
  p_output1[65]=0;
  p_output1[66]=0;
  p_output1[67]=0;
  p_output1[68]=0;
  p_output1[69]=5.e-6*(-1.*t4859*t5232 + 2.*(-1.*t4719*t4826*(t4967 + t4983) + t4860*(t5161 + t5164))*t895);
  p_output1[70]=2.5e-6*(t1350*t5236 - 1.*t5241*t791);
  p_output1[71]=2.5e-6*(t1350*t5241 + t5236*t791);
  p_output1[72]=0;
  p_output1[73]=0;
  p_output1[74]=0;
  p_output1[75]=0;
  p_output1[76]=0;
  p_output1[77]=0;
  p_output1[78]=0;
  p_output1[79]=0;
  p_output1[80]=0;
  p_output1[81]=0;
  p_output1[82]=0;
  p_output1[83]=0;
  p_output1[84]=0;
  p_output1[85]=0;
  p_output1[86]=0;
  p_output1[87]=0;
  p_output1[88]=0;
  p_output1[89]=0;
  p_output1[90]=0;
  p_output1[91]=0;
  p_output1[92]=0;
  p_output1[93]=0;
  p_output1[94]=0;
  p_output1[95]=0;
  p_output1[96]=0;
  p_output1[97]=0;
  p_output1[98]=0;
  p_output1[99]=0;
  p_output1[100]=0;
  p_output1[101]=0;
  p_output1[102]=0;
  p_output1[103]=0;
  p_output1[104]=0;
  p_output1[105]=0;
  p_output1[106]=0;
  p_output1[107]=0;
  p_output1[108]=0;
  p_output1[109]=0;
  p_output1[110]=0;
  p_output1[111]=0;
  p_output1[112]=0;
  p_output1[113]=0;
  p_output1[114]=0;
  p_output1[115]=0;
  p_output1[116]=0;
  p_output1[117]=0;
  p_output1[118]=0;
  p_output1[119]=0;
  p_output1[120]=0;
  p_output1[121]=0;
  p_output1[122]=0;
  p_output1[123]=0;
  p_output1[124]=0;
  p_output1[125]=0;
  p_output1[126]=0;
  p_output1[127]=0;
  p_output1[128]=0;
  p_output1[129]=0;
  p_output1[130]=0;
  p_output1[131]=0;
  p_output1[132]=0;
  p_output1[133]=0;
  p_output1[134]=0;
  p_output1[135]=0;
  p_output1[136]=0;
  p_output1[137]=0;
  p_output1[138]=0;
  p_output1[139]=0;
  p_output1[140]=0;
  p_output1[141]=0;
  p_output1[142]=0;
  p_output1[143]=0;
  p_output1[144]=0;
  p_output1[145]=0;
  p_output1[146]=0;
  p_output1[147]=0;
  p_output1[148]=0;
  p_output1[149]=0;
  p_output1[150]=0;
  p_output1[151]=0;
  p_output1[152]=0;
  p_output1[153]=0;
  p_output1[154]=0;
  p_output1[155]=0;
  p_output1[156]=0;
  p_output1[157]=0;
  p_output1[158]=0;
  p_output1[159]=0;
  p_output1[160]=0;
  p_output1[161]=0;
  p_output1[162]=0;
  p_output1[163]=0;
  p_output1[164]=0;
  p_output1[165]=0;
  p_output1[166]=0;
  p_output1[167]=0;
  p_output1[168]=0;
  p_output1[169]=0;
  p_output1[170]=0;
  p_output1[171]=0;
  p_output1[172]=0;
  p_output1[173]=0;
  p_output1[174]=0;
  p_output1[175]=0;
  p_output1[176]=0;
  p_output1[177]=0;
  p_output1[178]=0;
  p_output1[179]=0;
  p_output1[180]=0;
  p_output1[181]=0;
  p_output1[182]=0;
  p_output1[183]=0;
  p_output1[184]=0;
  p_output1[185]=0;
  p_output1[186]=0;
  p_output1[187]=0;
  p_output1[188]=0;
  p_output1[189]=0;
  p_output1[190]=0;
  p_output1[191]=0;
  p_output1[192]=0;
  p_output1[193]=0;
  p_output1[194]=0;
  p_output1[195]=0;
  p_output1[196]=0;
  p_output1[197]=0;
  p_output1[198]=0;
  p_output1[199]=0;
  p_output1[200]=0;
  p_output1[201]=0;
  p_output1[202]=0;
  p_output1[203]=0;
  p_output1[204]=0;
  p_output1[205]=0;
  p_output1[206]=0;
  p_output1[207]=0;
  p_output1[208]=0;
  p_output1[209]=0;
  p_output1[210]=0;
  p_output1[211]=0;
  p_output1[212]=0;
  p_output1[213]=0;
  p_output1[214]=0;
  p_output1[215]=0;
  p_output1[216]=0;
  p_output1[217]=0;
  p_output1[218]=0;
  p_output1[219]=0;
  p_output1[220]=0;
  p_output1[221]=0;
  p_output1[222]=0;
  p_output1[223]=0;
  p_output1[224]=0;
  p_output1[225]=0;
  p_output1[226]=0;
  p_output1[227]=0;
  p_output1[228]=0;
  p_output1[229]=0;
  p_output1[230]=0;
  p_output1[231]=0;
  p_output1[232]=0;
  p_output1[233]=0;
  p_output1[234]=0;
  p_output1[235]=0;
  p_output1[236]=0;
  p_output1[237]=0;
  p_output1[238]=0;
  p_output1[239]=0;
  p_output1[240]=0;
  p_output1[241]=0;
  p_output1[242]=0;
  p_output1[243]=0;
  p_output1[244]=0;
  p_output1[245]=0;
  p_output1[246]=0;
  p_output1[247]=0;
  p_output1[248]=0;
  p_output1[249]=0;
  p_output1[250]=0;
  p_output1[251]=0;
  p_output1[252]=0;
  p_output1[253]=0;
  p_output1[254]=0;
  p_output1[255]=0;
  p_output1[256]=0;
  p_output1[257]=0;
  p_output1[258]=0;
  p_output1[259]=0;
  p_output1[260]=0;
  p_output1[261]=0;
  p_output1[262]=0;
  p_output1[263]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 6, (mwSize) 44, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#endif // MATLAB_MEX_FILE

namespace SymFunction
{

void Dya_pelvis_LeftStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




