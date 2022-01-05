/*
 * Automatically Generated from Mathematica.
 * Thu 23 Dec 2021 16:09:35 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "J_pelvis_leftFoot_all.hh"
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
  double t396;
  double t200;
  double t368;
  double t389;
  double t500;
  double t946;
  double t949;
  double t970;
  double t1358;
  double t1740;
  double t1939;
  double t1943;
  double t1976;
  double t2057;
  double t2105;
  double t2307;
  double t2336;
  double t3267;
  double t3279;
  double t3347;
  double t3398;
  double t3163;
  double t3182;
  double t3183;
  double t3462;
  double t3491;
  double t3544;
  double t3606;
  double t3631;
  double t3680;
  double t3704;
  double t3782;
  double t3793;
  double t3796;
  double t3822;
  double t3823;
  double t3826;
  double t3832;
  double t3833;
  double t3861;
  double t3867;
  double t3906;
  double t3923;
  double t3945;
  double t3988;
  double t3990;
  double t3993;
  double t3996;
  double t4000;
  double t4001;
  double t4003;
  double t4057;
  double t4072;
  double t4075;
  double t4131;
  double t4147;
  double t4159;
  double t1087;
  double t1273;
  double t1360;
  double t1428;
  double t4244;
  double t4265;
  double t4276;
  double t2335;
  double t2349;
  double t2383;
  double t2543;
  double t2598;
  double t2599;
  double t3350;
  double t3437;
  double t3453;
  double t3578;
  double t3579;
  double t3580;
  double t3695;
  double t3720;
  double t3768;
  double t4319;
  double t4321;
  double t4322;
  double t4327;
  double t4338;
  double t4354;
  double t3802;
  double t3812;
  double t3813;
  double t3865;
  double t3874;
  double t3886;
  double t4380;
  double t4381;
  double t4384;
  double t4388;
  double t4393;
  double t4397;
  double t3966;
  double t3977;
  double t3981;
  double t4002;
  double t4007;
  double t4026;
  double t4419;
  double t4436;
  double t4447;
  double t4459;
  double t4463;
  double t4464;
  double t4089;
  double t4092;
  double t4107;
  double t4472;
  double t4475;
  double t4476;
  double t4482;
  double t4486;
  double t4507;
  double t4727;
  double t4742;
  double t4774;
  double t4780;
  double t4783;
  double t4784;
  double t4787;
  double t4790;
  double t4792;
  double t4795;
  double t4800;
  double t4807;
  double t4842;
  double t4862;
  double t4869;
  double t4888;
  double t4894;
  double t4899;
  double t4903;
  double t4906;
  double t4907;
  double t5008;
  double t5009;
  double t5016;
  double t5035;
  double t5038;
  double t5039;
  double t5041;
  double t5042;
  double t5043;
  double t5046;
  double t5047;
  double t5065;
  double t5095;
  double t5105;
  double t5118;
  double t5140;
  double t5143;
  double t5148;
  double t5152;
  double t5156;
  double t5157;
  double t5302;
  double t5303;
  double t5304;
  double t5308;
  double t5309;
  double t5311;
  double t5340;
  double t5347;
  double t5362;
  double t5380;
  double t5382;
  double t5384;
  double t5389;
  double t5390;
  double t5392;
  double t5396;
  double t5400;
  double t5401;
  double t5403;
  double t5404;
  double t5405;
  double t5446;
  double t5447;
  double t5448;
  double t5463;
  double t5464;
  double t5468;
  double t5471;
  double t5481;
  double t5482;
  double t5484;
  double t5485;
  double t5486;
  double t5488;
  double t5490;
  double t5491;
  double t5494;
  double t5495;
  double t5498;
  double t5535;
  double t5536;
  double t5537;
  double t5540;
  double t5541;
  double t5543;
  double t5547;
  double t5548;
  double t5550;
  double t5554;
  double t5555;
  double t5556;
  double t5558;
  double t5559;
  double t5560;
  double t5562;
  double t5563;
  double t5564;
  double t5579;
  double t5580;
  double t5584;
  double t5624;
  double t5628;
  double t5629;
  double t5636;
  double t5637;
  double t5638;
  double t5640;
  double t5641;
  double t5642;
  double t5644;
  double t5645;
  double t5646;
  double t5656;
  double t5657;
  double t5658;
  double t5661;
  double t5662;
  double t5663;
  double t5665;
  double t5666;
  double t5667;
  double t5703;
  double t5704;
  double t5705;
  double t5713;
  double t5714;
  double t5715;
  double t5720;
  double t5722;
  double t5723;
  double t5725;
  double t5728;
  double t5729;
  double t5731;
  double t5732;
  double t5733;
  double t5695;
  double t5696;
  double t5698;
  double t5700;
  double t5701;
  double t4313;
  double t4315;
  double t4317;
  double t5755;
  double t5756;
  double t5757;
  double t5761;
  double t5762;
  double t5763;
  double t5765;
  double t5766;
  double t5767;
  double t5769;
  double t5770;
  double t5771;
  double t5784;
  double t5785;
  double t5786;
  double t5788;
  double t5789;
  double t5790;
  double t5797;
  double t5798;
  double t5799;
  double t5801;
  double t5802;
  double t5803;
  double t5805;
  double t5806;
  double t5807;
  double t5809;
  double t5810;
  double t5811;
  double t5826;
  double t5827;
  double t5828;
  double t5833;
  double t5834;
  double t5835;
  double t5837;
  double t5838;
  double t5839;
  double t5841;
  double t5842;
  double t5843;
  double t5845;
  double t5846;
  double t5847;
  double t5849;
  double t5850;
  double t5851;
  double t5853;
  double t5854;
  double t5855;
  double t5823;
  double t5824;
  double t5829;
  double t5830;
  double t5831;
  double t5869;
  double t5870;
  double t5871;
  double t5874;
  double t5875;
  double t5877;
  double t5878;
  double t5879;
  double t5881;
  double t5882;
  double t5883;
  double t5885;
  double t5886;
  double t5887;
  double t5900;
  double t5901;
  double t5902;
  double t5904;
  double t5905;
  double t5906;
  double t5908;
  double t5909;
  double t5910;
  double t5912;
  double t5913;
  double t5914;
  double t5916;
  double t5917;
  double t5918;
  double t5920;
  double t5921;
  double t5922;
  double t5924;
  double t5925;
  double t5926;
  double t5941;
  double t5942;
  double t5943;
  double t5948;
  double t5949;
  double t5951;
  double t5952;
  double t5954;
  double t5955;
  double t5956;
  double t5958;
  double t5959;
  double t5960;
  double t5938;
  double t5939;
  double t5940;
  double t5945;
  double t5946;
  double t5975;
  double t5976;
  double t5978;
  double t5979;
  double t5980;
  double t5982;
  double t5983;
  double t5996;
  double t5997;
  double t5998;
  double t6001;
  double t6002;
  double t6004;
  double t6005;
  double t6008;
  double t6009;
  double t6010;
  double t6012;
  double t6013;
  double t6014;
  double t6032;
  double t6033;
  double t6034;
  double t6036;
  double t6037;
  double t6039;
  double t6040;
  double t6026;
  double t6027;
  double t6029;
  double t6030;
  double t6031;
  double t6054;
  double t6055;
  double t4557;
  double t6068;
  double t6069;
  double t6070;
  double t6072;
  double t6073;
  double t6075;
  double t6076;
  double t6091;
  double t6092;
  double t6093;
  double t6043;
  double t6047;
  double t6088;
  double t6089;
  double t6090;
  double t6095;
  double t6096;
  double t4544;
  double t4588;
  double t6062;
  double t6114;
  double t6115;
  double t6116;
  double t6079;
  double t6083;
  t396 = Cos(var1[3]);
  t200 = Cos(var1[5]);
  t368 = Sin(var1[3]);
  t389 = Sin(var1[4]);
  t500 = Sin(var1[5]);
  t946 = Cos(var1[4]);
  t949 = Sin(var1[14]);
  t970 = Cos(var1[14]);
  t1358 = Cos(var1[6]);
  t1740 = Sin(var1[6]);
  t1939 = -1.*t1358*t368;
  t1943 = -1.*t396*t946*t1740;
  t1976 = t1939 + t1943;
  t2057 = Cos(var1[7]);
  t2105 = -1.*t2057;
  t2307 = 1. + t2105;
  t2336 = Sin(var1[7]);
  t3267 = Cos(var1[8]);
  t3279 = -1.*t3267;
  t3347 = 1. + t3279;
  t3398 = Sin(var1[8]);
  t3163 = t396*t2057*t389;
  t3182 = t1976*t2336;
  t3183 = t3163 + t3182;
  t3462 = -1.*t396*t946*t1358;
  t3491 = t368*t1740;
  t3544 = t3462 + t3491;
  t3606 = Cos(var1[9]);
  t3631 = -1.*t3606;
  t3680 = 1. + t3631;
  t3704 = Sin(var1[9]);
  t3782 = t3267*t3183;
  t3793 = t3544*t3398;
  t3796 = t3782 + t3793;
  t3822 = t3267*t3544;
  t3823 = -1.*t3183*t3398;
  t3826 = t3822 + t3823;
  t3832 = Cos(var1[11]);
  t3833 = -1.*t3832;
  t3861 = 1. + t3833;
  t3867 = Sin(var1[11]);
  t3906 = -1.*t3704*t3796;
  t3923 = t3606*t3826;
  t3945 = t3906 + t3923;
  t3988 = t3606*t3796;
  t3990 = t3704*t3826;
  t3993 = t3988 + t3990;
  t3996 = Cos(var1[13]);
  t4000 = -1.*t3996;
  t4001 = 1. + t4000;
  t4003 = Sin(var1[13]);
  t4057 = t3867*t3945;
  t4072 = t3832*t3993;
  t4075 = t4057 + t4072;
  t4131 = t3832*t3945;
  t4147 = -1.*t3867*t3993;
  t4159 = t4131 + t4147;
  t1087 = -1.*t970;
  t1273 = 1. + t1087;
  t1360 = -1.*t1358;
  t1428 = 1. + t1360;
  t4244 = t396*t1358;
  t4265 = -1.*t946*t368*t1740;
  t4276 = t4244 + t4265;
  t2335 = 0.135*t2307;
  t2349 = 0.049*t2336;
  t2383 = t2335 + t2349;
  t2543 = -0.049*t2307;
  t2598 = 0.135*t2336;
  t2599 = t2543 + t2598;
  t3350 = -0.049*t3347;
  t3437 = -0.09*t3398;
  t3453 = t3350 + t3437;
  t3578 = -0.09*t3347;
  t3579 = 0.049*t3398;
  t3580 = t3578 + t3579;
  t3695 = -0.049*t3680;
  t3720 = -0.21*t3704;
  t3768 = t3695 + t3720;
  t4319 = t2057*t368*t389;
  t4321 = t4276*t2336;
  t4322 = t4319 + t4321;
  t4327 = -1.*t946*t1358*t368;
  t4338 = -1.*t396*t1740;
  t4354 = t4327 + t4338;
  t3802 = -0.21*t3680;
  t3812 = 0.049*t3704;
  t3813 = t3802 + t3812;
  t3865 = -0.70544*t3861;
  t3874 = -0.01841*t3867;
  t3886 = t3865 + t3874;
  t4380 = t3267*t4322;
  t4381 = t4354*t3398;
  t4384 = t4380 + t4381;
  t4388 = t3267*t4354;
  t4393 = -1.*t4322*t3398;
  t4397 = t4388 + t4393;
  t3966 = 0.01841*t3861;
  t3977 = -0.70544*t3867;
  t3981 = t3966 + t3977;
  t4002 = -0.02159*t4001;
  t4007 = -1.11344*t4003;
  t4026 = t4002 + t4007;
  t4419 = -1.*t3704*t4384;
  t4436 = t3606*t4397;
  t4447 = t4419 + t4436;
  t4459 = t3606*t4384;
  t4463 = t3704*t4397;
  t4464 = t4459 + t4463;
  t4089 = -1.11344*t4001;
  t4092 = 0.02159*t4003;
  t4107 = t4089 + t4092;
  t4472 = t3867*t4447;
  t4475 = t3832*t4464;
  t4476 = t4472 + t4475;
  t4482 = t3832*t4447;
  t4486 = -1.*t3867*t4464;
  t4507 = t4482 + t4486;
  t4727 = -1.*t2057*t389;
  t4742 = t946*t1740*t2336;
  t4774 = t4727 + t4742;
  t4780 = t3267*t4774;
  t4783 = t946*t1358*t3398;
  t4784 = t4780 + t4783;
  t4787 = t946*t1358*t3267;
  t4790 = -1.*t4774*t3398;
  t4792 = t4787 + t4790;
  t4795 = -1.*t3704*t4784;
  t4800 = t3606*t4792;
  t4807 = t4795 + t4800;
  t4842 = t3606*t4784;
  t4862 = t3704*t4792;
  t4869 = t4842 + t4862;
  t4888 = t3867*t4807;
  t4894 = t3832*t4869;
  t4899 = t4888 + t4894;
  t4903 = t3832*t4807;
  t4906 = -1.*t3867*t4869;
  t4907 = t4903 + t4906;
  t5008 = t946*t2057*t368;
  t5009 = t368*t389*t1740*t2336;
  t5016 = t5008 + t5009;
  t5035 = t3267*t5016;
  t5038 = t1358*t368*t389*t3398;
  t5039 = t5035 + t5038;
  t5041 = t1358*t3267*t368*t389;
  t5042 = -1.*t5016*t3398;
  t5043 = t5041 + t5042;
  t5046 = -1.*t3704*t5039;
  t5047 = t3606*t5043;
  t5065 = t5046 + t5047;
  t5095 = t3606*t5039;
  t5105 = t3704*t5043;
  t5118 = t5095 + t5105;
  t5140 = t3867*t5065;
  t5143 = t3832*t5118;
  t5148 = t5140 + t5143;
  t5152 = t3832*t5065;
  t5156 = -1.*t3867*t5118;
  t5157 = t5152 + t5156;
  t5302 = -1.*t396*t946*t2057;
  t5303 = -1.*t396*t389*t1740*t2336;
  t5304 = t5302 + t5303;
  t5308 = t3267*t5304;
  t5309 = -1.*t396*t1358*t389*t3398;
  t5311 = t5308 + t5309;
  t5340 = -1.*t396*t1358*t3267*t389;
  t5347 = -1.*t5304*t3398;
  t5362 = t5340 + t5347;
  t5380 = -1.*t3704*t5311;
  t5382 = t3606*t5362;
  t5384 = t5380 + t5382;
  t5389 = t3606*t5311;
  t5390 = t3704*t5362;
  t5392 = t5389 + t5390;
  t5396 = t3867*t5384;
  t5400 = t3832*t5392;
  t5401 = t5396 + t5400;
  t5403 = t3832*t5384;
  t5404 = -1.*t3867*t5392;
  t5405 = t5403 + t5404;
  t5446 = t1358*t3267*t389*t2336;
  t5447 = -1.*t389*t1740*t3398;
  t5448 = t5446 + t5447;
  t5463 = -1.*t3267*t389*t1740;
  t5464 = -1.*t1358*t389*t2336*t3398;
  t5468 = t5463 + t5464;
  t5471 = -1.*t3704*t5448;
  t5481 = t3606*t5468;
  t5482 = t5471 + t5481;
  t5484 = t3606*t5448;
  t5485 = t3704*t5468;
  t5486 = t5484 + t5485;
  t5488 = t3867*t5482;
  t5490 = t3832*t5486;
  t5491 = t5488 + t5490;
  t5494 = t3832*t5482;
  t5495 = -1.*t3867*t5486;
  t5498 = t5494 + t5495;
  t5535 = -1.*t396*t1358;
  t5536 = t946*t368*t1740;
  t5537 = t5535 + t5536;
  t5540 = t3267*t4354*t2336;
  t5541 = t5537*t3398;
  t5543 = t5540 + t5541;
  t5547 = t3267*t5537;
  t5548 = -1.*t4354*t2336*t3398;
  t5550 = t5547 + t5548;
  t5554 = -1.*t3704*t5543;
  t5555 = t3606*t5550;
  t5556 = t5554 + t5555;
  t5558 = t3606*t5543;
  t5559 = t3704*t5550;
  t5560 = t5558 + t5559;
  t5562 = t3867*t5556;
  t5563 = t3832*t5560;
  t5564 = t5562 + t5563;
  t5579 = t3832*t5556;
  t5580 = -1.*t3867*t5560;
  t5584 = t5579 + t5580;
  t5624 = t396*t946*t1358;
  t5628 = -1.*t368*t1740;
  t5629 = t5624 + t5628;
  t5636 = t3267*t5629*t2336;
  t5637 = t1976*t3398;
  t5638 = t5636 + t5637;
  t5640 = t3267*t1976;
  t5641 = -1.*t5629*t2336*t3398;
  t5642 = t5640 + t5641;
  t5644 = -1.*t3704*t5638;
  t5645 = t3606*t5642;
  t5646 = t5644 + t5645;
  t5656 = t3606*t5638;
  t5657 = t3704*t5642;
  t5658 = t5656 + t5657;
  t5661 = t3867*t5646;
  t5662 = t3832*t5658;
  t5663 = t5661 + t5662;
  t5665 = t3832*t5646;
  t5666 = -1.*t3867*t5658;
  t5667 = t5665 + t5666;
  t5703 = t2057*t389*t1740;
  t5704 = -1.*t946*t2336;
  t5705 = t5703 + t5704;
  t5713 = -1.*t3267*t3704*t5705;
  t5714 = -1.*t3606*t5705*t3398;
  t5715 = t5713 + t5714;
  t5720 = t3606*t3267*t5705;
  t5722 = -1.*t3704*t5705*t3398;
  t5723 = t5720 + t5722;
  t5725 = t3867*t5715;
  t5728 = t3832*t5723;
  t5729 = t5725 + t5728;
  t5731 = t3832*t5715;
  t5732 = -1.*t3867*t5723;
  t5733 = t5731 + t5732;
  t5695 = 0.135*t2057;
  t5696 = -0.049*t2336;
  t5698 = t5695 + t5696;
  t5700 = 0.049*t2057;
  t5701 = t5700 + t2598;
  t4313 = t2057*t4276;
  t4315 = -1.*t368*t389*t2336;
  t4317 = t4313 + t4315;
  t5755 = -1.*t3267*t3704*t4317;
  t5756 = -1.*t3606*t4317*t3398;
  t5757 = t5755 + t5756;
  t5761 = t3606*t3267*t4317;
  t5762 = -1.*t3704*t4317*t3398;
  t5763 = t5761 + t5762;
  t5765 = t3867*t5757;
  t5766 = t3832*t5763;
  t5767 = t5765 + t5766;
  t5769 = t3832*t5757;
  t5770 = -1.*t3867*t5763;
  t5771 = t5769 + t5770;
  t5784 = t1358*t368;
  t5785 = t396*t946*t1740;
  t5786 = t5784 + t5785;
  t5788 = t2057*t5786;
  t5789 = t396*t389*t2336;
  t5790 = t5788 + t5789;
  t5797 = -1.*t3267*t3704*t5790;
  t5798 = -1.*t3606*t5790*t3398;
  t5799 = t5797 + t5798;
  t5801 = t3606*t3267*t5790;
  t5802 = -1.*t3704*t5790*t3398;
  t5803 = t5801 + t5802;
  t5805 = t3867*t5799;
  t5806 = t3832*t5803;
  t5807 = t5805 + t5806;
  t5809 = t3832*t5799;
  t5810 = -1.*t3867*t5803;
  t5811 = t5809 + t5810;
  t5826 = t946*t2057;
  t5827 = t389*t1740*t2336;
  t5828 = t5826 + t5827;
  t5833 = -1.*t3267*t5828;
  t5834 = -1.*t1358*t389*t3398;
  t5835 = t5833 + t5834;
  t5837 = t1358*t3267*t389;
  t5838 = -1.*t5828*t3398;
  t5839 = t5837 + t5838;
  t5841 = t3704*t5835;
  t5842 = t3606*t5839;
  t5843 = t5841 + t5842;
  t5845 = t3606*t5835;
  t5846 = -1.*t3704*t5839;
  t5847 = t5845 + t5846;
  t5849 = -1.*t3867*t5843;
  t5850 = t3832*t5847;
  t5851 = t5849 + t5850;
  t5853 = t3832*t5843;
  t5854 = t3867*t5847;
  t5855 = t5853 + t5854;
  t5823 = 0.049*t3267;
  t5824 = t5823 + t3437;
  t5829 = -0.09*t3267;
  t5830 = -0.049*t3398;
  t5831 = t5829 + t5830;
  t5869 = -1.*t3267*t4322;
  t5870 = -1.*t4354*t3398;
  t5871 = t5869 + t5870;
  t5874 = t3704*t5871;
  t5875 = t5874 + t4436;
  t5877 = t3606*t5871;
  t5878 = -1.*t3704*t4397;
  t5879 = t5877 + t5878;
  t5881 = -1.*t3867*t5875;
  t5882 = t3832*t5879;
  t5883 = t5881 + t5882;
  t5885 = t3832*t5875;
  t5886 = t3867*t5879;
  t5887 = t5885 + t5886;
  t5900 = -1.*t396*t2057*t389;
  t5901 = t5786*t2336;
  t5902 = t5900 + t5901;
  t5904 = -1.*t3267*t5902;
  t5905 = -1.*t5629*t3398;
  t5906 = t5904 + t5905;
  t5908 = t3267*t5629;
  t5909 = -1.*t5902*t3398;
  t5910 = t5908 + t5909;
  t5912 = t3704*t5906;
  t5913 = t3606*t5910;
  t5914 = t5912 + t5913;
  t5916 = t3606*t5906;
  t5917 = -1.*t3704*t5910;
  t5918 = t5916 + t5917;
  t5920 = -1.*t3867*t5914;
  t5921 = t3832*t5918;
  t5922 = t5920 + t5921;
  t5924 = t3832*t5914;
  t5925 = t3867*t5918;
  t5926 = t5924 + t5925;
  t5941 = t3267*t5828;
  t5942 = t1358*t389*t3398;
  t5943 = t5941 + t5942;
  t5948 = -1.*t3704*t5943;
  t5949 = t5948 + t5842;
  t5951 = -1.*t3606*t5943;
  t5952 = t5951 + t5846;
  t5954 = -1.*t3867*t5949;
  t5955 = t3832*t5952;
  t5956 = t5954 + t5955;
  t5958 = t3832*t5949;
  t5959 = t3867*t5952;
  t5960 = t5958 + t5959;
  t5938 = -0.21*t3606;
  t5939 = -0.049*t3704;
  t5940 = t5938 + t5939;
  t5945 = 0.049*t3606;
  t5946 = t5945 + t3720;
  t5975 = -1.*t3606*t4384;
  t5976 = t5975 + t5878;
  t5978 = -1.*t3867*t4447;
  t5979 = t3832*t5976;
  t5980 = t5978 + t5979;
  t5982 = t3867*t5976;
  t5983 = t4482 + t5982;
  t5996 = t3267*t5902;
  t5997 = t5629*t3398;
  t5998 = t5996 + t5997;
  t6001 = -1.*t3704*t5998;
  t6002 = t6001 + t5913;
  t6004 = -1.*t3606*t5998;
  t6005 = t6004 + t5917;
  t6008 = -1.*t3867*t6002;
  t6009 = t3832*t6005;
  t6010 = t6008 + t6009;
  t6012 = t3832*t6002;
  t6013 = t3867*t6005;
  t6014 = t6012 + t6013;
  t6032 = t3606*t5943;
  t6033 = t3704*t5839;
  t6034 = t6032 + t6033;
  t6036 = -1.*t3832*t6034;
  t6037 = t5954 + t6036;
  t6039 = -1.*t3867*t6034;
  t6040 = t5958 + t6039;
  t6026 = -0.01841*t3832;
  t6027 = t6026 + t3977;
  t6029 = -0.70544*t3832;
  t6030 = 0.01841*t3867;
  t6031 = t6029 + t6030;
  t6054 = -1.*t3832*t4464;
  t6055 = t5978 + t6054;
  t4557 = t3996*t4507;
  t6068 = t3606*t5998;
  t6069 = t3704*t5910;
  t6070 = t6068 + t6069;
  t6072 = -1.*t3832*t6070;
  t6073 = t6008 + t6072;
  t6075 = -1.*t3867*t6070;
  t6076 = t6012 + t6075;
  t6091 = t3867*t5949;
  t6092 = t3832*t6034;
  t6093 = t6091 + t6092;
  t6043 = t3996*t6040;
  t6047 = -1.*t4003*t6040;
  t6088 = -1.11344*t3996;
  t6089 = -0.02159*t4003;
  t6090 = t6088 + t6089;
  t6095 = 0.02159*t3996;
  t6096 = t6095 + t4007;
  t4544 = -1.*t4003*t4476;
  t4588 = t4544 + t4557;
  t6062 = -1.*t4003*t4507;
  t6114 = t3867*t6002;
  t6115 = t3832*t6070;
  t6116 = t6114 + t6115;
  t6079 = t3996*t6076;
  t6083 = -1.*t4003*t6076;
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
  p_output1[18]=-1.*t200*t368*t389 - 1.*t396*t500;
  p_output1[19]=t200*t396 - 1.*t368*t389*t500;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0.5*(0.135*t1976 - 2.*t1976*t2383 - 2.*t3183*t3453 - 2.*t3544*t3580 + 0.135*t1273*t368 + 0.135*t1428*t368 - 2.*t3768*t3796 - 2.*t3813*t3826 - 2.*t3886*t3945 - 0.098*t389*t396 - 2.*t2599*t389*t396 - 0.261*(t1976*t2057 - 1.*t2336*t389*t396) - 2.*t3981*t3993 - 2.*t4026*t4075 - 2.*t4107*t4159 + 2.22688*(-1.*t4003*t4075 + t3996*t4159) + 0.04318*(t3996*t4075 + t4003*t4159) - 0.135*t1740*t396*t946 - 0.135*t396*t946*t949 - 0.135*(-1.*t396*t946*t949 - 1.*t368*t970));
  p_output1[23]=0.5*(-0.098*t368*t389 - 2.*t2599*t368*t389 - 0.135*t1273*t396 - 0.135*t1428*t396 + 0.135*t4276 - 2.*t2383*t4276 - 0.261*t4317 - 2.*t3453*t4322 - 2.*t3580*t4354 - 2.*t3768*t4384 - 2.*t3813*t4397 - 2.*t3886*t4447 - 2.*t3981*t4464 - 2.*t4026*t4476 - 2.*t4107*t4507 + 0.04318*(t3996*t4476 + t4003*t4507) + 2.22688*t4588 - 0.135*t1740*t368*t946 - 0.135*t368*t946*t949 - 0.135*(-1.*t368*t946*t949 + t396*t970));
  p_output1[24]=t200*t396*t946;
  p_output1[25]=t396*t500*t946;
  p_output1[26]=0;
  p_output1[27]=0.5*(0.098*t389 + 2.*t2599*t389 - 2.*t3453*t4774 - 2.*t3768*t4784 - 2.*t3813*t4792 - 2.*t3886*t4807 - 2.*t3981*t4869 - 2.*t4026*t4899 - 2.*t4107*t4907 + 2.22688*(-1.*t4003*t4899 + t3996*t4907) + 0.04318*(t3996*t4899 + t4003*t4907) + 0.27*t1740*t946 - 2.*t1740*t2383*t946 - 2.*t1358*t3580*t946 - 0.261*(t2336*t389 + t1740*t2057*t946));
  p_output1[28]=0.5*(0.27*t1740*t368*t389 - 2.*t1740*t2383*t368*t389 - 2.*t1358*t3580*t368*t389 - 2.*t3453*t5016 - 2.*t3768*t5039 - 2.*t3813*t5043 - 2.*t3886*t5065 - 2.*t3981*t5118 - 2.*t4026*t5148 - 2.*t4107*t5157 + 2.22688*(-1.*t4003*t5148 + t3996*t5157) + 0.04318*(t3996*t5148 + t4003*t5157) - 0.098*t368*t946 - 2.*t2599*t368*t946 - 0.261*(t1740*t2057*t368*t389 - 1.*t2336*t368*t946));
  p_output1[29]=0.5*(-0.27*t1740*t389*t396 + 2.*t1740*t2383*t389*t396 + 2.*t1358*t3580*t389*t396 - 2.*t3453*t5304 - 2.*t3768*t5311 - 2.*t3813*t5362 - 2.*t3886*t5384 - 2.*t3981*t5392 - 2.*t4026*t5401 - 2.*t4107*t5405 + 2.22688*(-1.*t4003*t5401 + t3996*t5405) + 0.04318*(t3996*t5401 + t4003*t5405) + 0.098*t396*t946 + 2.*t2599*t396*t946 - 0.261*(-1.*t1740*t2057*t389*t396 + t2336*t396*t946));
  p_output1[30]=-1.*t200*t368 - 1.*t389*t396*t500;
  p_output1[31]=t200*t389*t396 - 1.*t368*t500;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0.5*(0.27*t1358*t389 - 0.261*t1358*t2057*t389 - 2.*t1358*t2383*t389 - 2.*t1358*t2336*t3453*t389 + 2.*t1740*t3580*t389 - 2.*t3768*t5448 - 2.*t3813*t5468 - 2.*t3886*t5482 - 2.*t3981*t5486 - 2.*t4026*t5491 - 2.*t4107*t5498 + 2.22688*(-1.*t4003*t5491 + t3996*t5498) + 0.04318*(t3996*t5491 + t4003*t5498));
  p_output1[40]=0.5*(-0.135*t1740*t396 + 0.135*t4354 - 0.261*t2057*t4354 - 2.*t2383*t4354 - 2.*t2336*t3453*t4354 - 2.*t3580*t5537 - 2.*t3768*t5543 - 2.*t3813*t5550 - 2.*t3886*t5556 - 2.*t3981*t5560 - 2.*t4026*t5564 - 2.*t4107*t5584 + 2.22688*(-1.*t4003*t5564 + t3996*t5584) + 0.04318*(t3996*t5564 + t4003*t5584) - 0.135*t1358*t368*t946);
  p_output1[41]=0.5*(-2.*t1976*t3580 - 0.135*t1740*t368 + 0.135*t5629 - 0.261*t2057*t5629 - 2.*t2383*t5629 - 2.*t2336*t3453*t5629 - 2.*t3768*t5638 - 2.*t3813*t5642 - 2.*t3886*t5646 - 2.*t3981*t5658 - 2.*t4026*t5663 - 2.*t4107*t5667 + 2.22688*(-1.*t4003*t5663 + t3996*t5667) + 0.04318*(t3996*t5663 + t4003*t5667) + 0.135*t1358*t396*t946);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=1.;
  p_output1[45]=0.5*(-2.*t1740*t389*t5701 - 2.*t3453*t5705 - 2.*t3267*t3768*t5705 + 2.*t3398*t3813*t5705 - 2.*t3886*t5715 - 2.*t3981*t5723 - 2.*t4026*t5729 - 2.*t4107*t5733 + 2.22688*(-1.*t4003*t5729 + t3996*t5733) + 0.04318*(t3996*t5729 + t4003*t5733) - 2.*t5698*t946 - 0.261*(-1.*t1740*t2336*t389 - 1.*t2057*t946));
  p_output1[46]=0.5*(-0.261*(-1.*t2057*t368*t389 - 1.*t2336*t4276) - 2.*t3453*t4317 - 2.*t3267*t3768*t4317 + 2.*t3398*t3813*t4317 - 2.*t368*t389*t5698 - 2.*t4276*t5701 - 2.*t3886*t5757 - 2.*t3981*t5763 - 2.*t4026*t5767 - 2.*t4107*t5771 + 2.22688*(-1.*t4003*t5767 + t3996*t5771) + 0.04318*(t3996*t5767 + t4003*t5771));
  p_output1[47]=0.5*(2.*t389*t396*t5698 - 2.*t5701*t5786 - 0.261*(t3163 - 1.*t2336*t5786) - 2.*t3453*t5790 - 2.*t3267*t3768*t5790 + 2.*t3398*t3813*t5790 - 2.*t3886*t5799 - 2.*t3981*t5803 - 2.*t4026*t5807 - 2.*t4107*t5811 + 2.22688*(-1.*t4003*t5807 + t3996*t5811) + 0.04318*(t3996*t5807 + t4003*t5811));
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0.5*(-2.*t1358*t389*t5824 - 2.*t5828*t5831 - 2.*t3813*t5835 - 2.*t3768*t5839 - 2.*t3981*t5843 - 2.*t3886*t5847 - 2.*t4107*t5851 - 2.*t4026*t5855 + 0.04318*(t4003*t5851 + t3996*t5855) + 2.22688*(t3996*t5851 - 1.*t4003*t5855));
  p_output1[52]=0.5*(-2.*t3768*t4397 - 2.*t4354*t5824 - 2.*t4322*t5831 - 2.*t3813*t5871 - 2.*t3981*t5875 - 2.*t3886*t5879 - 2.*t4107*t5883 - 2.*t4026*t5887 + 0.04318*(t4003*t5883 + t3996*t5887) + 2.22688*(t3996*t5883 - 1.*t4003*t5887));
  p_output1[53]=0.5*(-2.*t5629*t5824 - 2.*t5831*t5902 - 2.*t3813*t5906 - 2.*t3768*t5910 - 2.*t3981*t5914 - 2.*t3886*t5918 - 2.*t4107*t5922 - 2.*t4026*t5926 + 0.04318*(t4003*t5922 + t3996*t5926) + 2.22688*(t3996*t5922 - 1.*t4003*t5926));
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0.5*(-2.*t5940*t5943 - 2.*t5839*t5946 - 2.*t3981*t5949 - 2.*t3886*t5952 - 2.*t4107*t5956 - 2.*t4026*t5960 + 0.04318*(t4003*t5956 + t3996*t5960) + 2.22688*(t3996*t5956 - 1.*t4003*t5960));
  p_output1[58]=0.5*(-2.*t3981*t4447 - 2.*t4384*t5940 - 2.*t4397*t5946 - 2.*t3886*t5976 - 2.*t4107*t5980 - 2.*t4026*t5983 + 0.04318*(t4003*t5980 + t3996*t5983) + 2.22688*(t3996*t5980 - 1.*t4003*t5983));
  p_output1[59]=0.5*(-2.*t5910*t5946 - 2.*t5940*t5998 - 2.*t3981*t6002 - 2.*t3886*t6005 - 2.*t4107*t6010 - 2.*t4026*t6014 + 0.04318*(t4003*t6010 + t3996*t6014) + 2.22688*(t3996*t6010 - 1.*t4003*t6014));
  p_output1[60]=0;
  p_output1[61]=0;
  p_output1[62]=0;
  p_output1[63]=0;
  p_output1[64]=0;
  p_output1[65]=0;
  p_output1[66]=0;
  p_output1[67]=0;
  p_output1[68]=0;
  p_output1[69]=0.5*(-2.*t5949*t6027 - 2.*t6031*t6034 - 2.*t4107*t6037 - 2.*t4026*t6040 + 0.04318*(t4003*t6037 + t6043) + 2.22688*(t3996*t6037 + t6047));
  p_output1[70]=0.5*(-2.*t4026*t4507 - 2.*t4447*t6027 - 2.*t4464*t6031 - 2.*t4107*t6055 + 0.04318*(t4557 + t4003*t6055) + 2.22688*(t3996*t6055 + t6062));
  p_output1[71]=0.5*(-2.*t6002*t6027 - 2.*t6031*t6070 - 2.*t4107*t6073 - 2.*t4026*t6076 + 0.04318*(t4003*t6073 + t6079) + 2.22688*(t3996*t6073 + t6083));
  p_output1[72]=0;
  p_output1[73]=0;
  p_output1[74]=0;
  p_output1[75]=0;
  p_output1[76]=0;
  p_output1[77]=0;
  p_output1[78]=0;
  p_output1[79]=0;
  p_output1[80]=0;
  p_output1[81]=0.5*(-2.*t6090*t6093 + 2.22688*(t6047 - 1.*t3996*t6093) + 0.04318*(t6043 - 1.*t4003*t6093) - 2.*t6040*t6096);
  p_output1[82]=0.5*(0.04318*t4588 + 2.22688*(-1.*t3996*t4476 + t6062) - 2.*t4476*t6090 - 2.*t4507*t6096);
  p_output1[83]=0.5*(-2.*t6076*t6096 - 2.*t6090*t6116 + 2.22688*(t6083 - 1.*t3996*t6116) + 0.04318*(t6079 - 1.*t4003*t6116));
  p_output1[84]=0;
  p_output1[85]=0;
  p_output1[86]=0;
  p_output1[87]=0;
  p_output1[88]=0.5*(-0.135*t396*t949 - 0.135*t368*t946*t970 - 0.135*(-1.*t396*t949 - 1.*t368*t946*t970));
  p_output1[89]=0.5*(-0.135*t368*t949 + 0.135*t396*t946*t970 - 0.135*(-1.*t368*t949 + t396*t946*t970));
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 6, (mwSize) 22, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#endif // MATLAB_MEX_FILE

namespace SymFunction
{

void J_pelvis_leftFoot_all_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




