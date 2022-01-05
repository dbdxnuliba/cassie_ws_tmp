/*
 * Automatically Generated from Mathematica.
 * Sun 7 Nov 2021 14:27:57 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "Dya_RightStanceActual.hh"
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
  double t32;
  double t103;
  double t111;
  double t118;
  double t153;
  double t221;
  double t337;
  double t339;
  double t340;
  double t382;
  double t406;
  double t420;
  double t605;
  double t623;
  double t635;
  double t693;
  double t737;
  double t785;
  double t852;
  double t911;
  double t983;
  double t1067;
  double t1113;
  double t1138;
  double t1140;
  double t1313;
  double t1321;
  double t1322;
  double t234;
  double t266;
  double t318;
  double t148;
  double t186;
  double t209;
  double t687;
  double t689;
  double t691;
  double t411;
  double t514;
  double t525;
  double t1235;
  double t1271;
  double t1283;
  double t1605;
  double t1667;
  double t1701;
  double t1051;
  double t1069;
  double t1100;
  double t1781;
  double t1790;
  double t1837;
  double t1861;
  double t1883;
  double t68;
  double t215;
  double t228;
  double t334;
  double t674;
  double t847;
  double t1160;
  double t1373;
  double t1374;
  double t1385;
  double t1465;
  double t1482;
  double t1501;
  double t1522;
  double t1532;
  double t1533;
  double t1548;
  double t1574;
  double t1581;
  double t1587;
  double t1590;
  double t1707;
  double t1711;
  double t1792;
  double t1885;
  double t1912;
  double t1916;
  double t1941;
  double t1960;
  double t1967;
  double t2103;
  double t2110;
  double t2114;
  double t2117;
  double t2424;
  double t2429;
  double t2430;
  double t2455;
  double t2460;
  double t2479;
  double t2512;
  double t2544;
  double t2739;
  double t2747;
  double t2752;
  double t2754;
  double t2762;
  double t2768;
  double t2769;
  double t2776;
  double t2789;
  double t2790;
  double t2810;
  double t2213;
  double t2223;
  double t2279;
  double t2356;
  double t2823;
  double t2831;
  double t2834;
  double t2852;
  double t2876;
  double t2878;
  double t2882;
  double t2552;
  double t2556;
  double t2565;
  double t2595;
  double t2606;
  double t2650;
  double t2814;
  double t2893;
  double t2896;
  double t2916;
  double t1556;
  double t2128;
  double t2135;
  double t2164;
  double t3240;
  double t3375;
  double t3377;
  double t3035;
  double t3036;
  double t3042;
  double t3020;
  double t3024;
  double t2401;
  double t3118;
  double t3141;
  double t3163;
  double t3058;
  double t3060;
  double t2449;
  double t3662;
  double t3726;
  double t3415;
  double t3418;
  double t3493;
  double t3519;
  double t3524;
  double t3532;
  double t2933;
  double t2957;
  double t3740;
  double t3755;
  double t3760;
  double t3764;
  double t3766;
  double t3772;
  double t4198;
  double t4231;
  double t4108;
  double t4163;
  double t4164;
  double t4400;
  double t4411;
  double t4421;
  double t4287;
  double t4288;
  double t4314;
  double t4573;
  double t4576;
  double t4580;
  double t4588;
  double t4590;
  double t4597;
  double t4623;
  double t4626;
  double t4627;
  double t4628;
  double t4631;
  double t4645;
  double t4654;
  double t4656;
  double t4659;
  double t4703;
  double t4710;
  double t4719;
  double t4744;
  double t4746;
  double t4748;
  double t4758;
  double t4776;
  double t4778;
  double t4789;
  double t4731;
  double t4740;
  double t4742;
  double t4591;
  double t4600;
  double t4608;
  double t4614;
  double t4617;
  double t4618;
  double t4668;
  double t4679;
  double t4684;
  double t4643;
  double t4647;
  double t4649;
  double t4841;
  double t4842;
  double t4845;
  double t4757;
  double t4764;
  double t4765;
  double t4790;
  double t4791;
  double t4792;
  double t4852;
  double t4854;
  double t4855;
  double t4858;
  double t4859;
  double t4575;
  double t4579;
  double t4612;
  double t4620;
  double t4667;
  double t4730;
  double t4771;
  double t4795;
  double t4796;
  double t4797;
  double t4802;
  double t4804;
  double t4813;
  double t4819;
  double t4820;
  double t4824;
  double t4827;
  double t4832;
  double t4837;
  double t4839;
  double t4840;
  double t4846;
  double t4850;
  double t4857;
  double t4864;
  double t4867;
  double t4869;
  double t4870;
  double t4873;
  double t4874;
  double t4876;
  double t4877;
  double t4878;
  double t4881;
  double t4912;
  double t4914;
  double t4915;
  double t4922;
  double t4924;
  double t4928;
  double t4929;
  double t4931;
  double t4831;
  double t4882;
  double t4888;
  double t4889;
  double t4996;
  double t5013;
  double t5017;
  double t4960;
  double t4963;
  double t4972;
  double t4973;
  double t4977;
  double t4911;
  double t4983;
  double t4993;
  double t4994;
  double t4979;
  double t4980;
  double t4916;
  double t5068;
  double t5070;
  double t5091;
  double t5093;
  double t5095;
  double t5097;
  double t5098;
  t32 = Cos(var1[8]);
  t103 = Cos(var1[9]);
  t111 = -1.*t103;
  t118 = 1. + t111;
  t153 = Sin(var1[9]);
  t221 = Sin(var1[8]);
  t337 = -1.*var1[9];
  t339 = 0.226893 + t337;
  t340 = Cos(t339);
  t382 = -1.*t340;
  t406 = 1. + t382;
  t420 = Sin(t339);
  t605 = -1.*t32*t153;
  t623 = -1.*t103*t221;
  t635 = t605 + t623;
  t693 = t103*t32;
  t737 = -1.*t153*t221;
  t785 = t693 + t737;
  t852 = Cos(var1[13]);
  t911 = -1.*t852;
  t983 = 1. + t911;
  t1067 = Sin(var1[13]);
  t1113 = t420*t635;
  t1138 = t340*t785;
  t1140 = t1113 + t1138;
  t1313 = t340*t635;
  t1321 = -1.*t420*t785;
  t1322 = t1313 + t1321;
  t234 = -0.21*t118;
  t266 = 0.049*t153;
  t318 = t234 + t266;
  t148 = -0.049*t118;
  t186 = -0.21*t153;
  t209 = t148 + t186;
  t687 = 0.01841*t406;
  t689 = -0.70544*t420;
  t691 = t687 + t689;
  t411 = -0.70544*t406;
  t514 = -0.01841*t420;
  t525 = t411 + t514;
  t1235 = -1.11344*t983;
  t1271 = 0.02159*t1067;
  t1283 = t1235 + t1271;
  t1605 = t32*t153;
  t1667 = t103*t221;
  t1701 = t1605 + t1667;
  t1051 = -0.02159*t983;
  t1069 = -1.11344*t1067;
  t1100 = t1051 + t1069;
  t1781 = -1.*t420*t1701;
  t1790 = t1781 + t1138;
  t1837 = t340*t1701;
  t1861 = t420*t785;
  t1883 = t1837 + t1861;
  t68 = 0.049*t32;
  t215 = t32*t209;
  t228 = -0.09*t221;
  t334 = -1.*t318*t221;
  t674 = t525*t635;
  t847 = t691*t785;
  t1160 = t1100*t1140;
  t1373 = t1283*t1322;
  t1374 = -1.*t1067*t1140;
  t1385 = t852*t1322;
  t1465 = t1374 + t1385;
  t1482 = -1.11344*t1465;
  t1501 = t852*t1140;
  t1522 = t1067*t1322;
  t1532 = t1501 + t1522;
  t1533 = -0.02159*t1532;
  t1548 = t68 + t215 + t228 + t334 + t674 + t847 + t1160 + t1373 + t1482 + t1533;
  t1574 = 0.09*t32;
  t1581 = t32*t318;
  t1587 = 0.049*t221;
  t1590 = t209*t221;
  t1707 = t691*t1701;
  t1711 = t525*t785;
  t1792 = t1283*t1790;
  t1885 = t1100*t1883;
  t1912 = t1067*t1790;
  t1916 = t852*t1883;
  t1941 = t1912 + t1916;
  t1960 = -0.02159*t1941;
  t1967 = t852*t1790;
  t2103 = -1.*t1067*t1883;
  t2110 = t1967 + t2103;
  t2114 = -1.11344*t2110;
  t2117 = t1574 + t1581 + t1587 + t1590 + t1707 + t1711 + t1792 + t1885 + t1960 + t2114;
  t2424 = -1.*t103*t32;
  t2429 = t153*t221;
  t2430 = t2424 + t2429;
  t2455 = -1.*t420*t635;
  t2460 = t340*t2430;
  t2479 = t2455 + t2460;
  t2512 = t420*t2430;
  t2544 = t1313 + t2512;
  t2739 = -0.049*t32;
  t2747 = -1.*t32*t209;
  t2752 = 0.09*t221;
  t2754 = t318*t221;
  t2762 = -1.*t525*t635;
  t2768 = -1.*t691*t785;
  t2769 = -1.*t1100*t1140;
  t2776 = -1.*t1283*t1322;
  t2789 = 1.11344*t1465;
  t2790 = 0.02159*t1532;
  t2810 = t2739 + t2747 + t2752 + t2754 + t2762 + t2768 + t2769 + t2776 + t2789 + t2790;
  t2213 = -0.09*t32;
  t2223 = -1.*t32*t318;
  t2279 = -0.049*t221;
  t2356 = -1.*t209*t221;
  t2823 = -1.*t691*t1701;
  t2831 = -1.*t525*t785;
  t2834 = -1.*t1283*t1790;
  t2852 = -1.*t1100*t1883;
  t2876 = 0.02159*t1941;
  t2878 = 1.11344*t2110;
  t2882 = t2213 + t2223 + t2279 + t2356 + t2823 + t2831 + t2834 + t2852 + t2876 + t2878;
  t2552 = t1067*t2479;
  t2556 = t852*t2544;
  t2565 = t2552 + t2556;
  t2595 = t852*t2479;
  t2606 = -1.*t1067*t2544;
  t2650 = t2595 + t2606;
  t2814 = Power(t2810,2);
  t2893 = Power(t2882,2);
  t2896 = t2814 + t2893;
  t2916 = 1/t2896;
  t1556 = Power(t1548,2);
  t2128 = Power(t2117,2);
  t2135 = 0.00002025 + t1556 + t2128;
  t2164 = 1/Sqrt(t2135);
  t3240 = t1313 + t1837;
  t3375 = t420*t1701;
  t3377 = t1113 + t3375;
  t3035 = -0.21*t103;
  t3036 = -0.049*t153;
  t3042 = t3035 + t3036;
  t3020 = 0.049*t103;
  t3024 = t3020 + t186;
  t2401 = t691*t635;
  t3118 = 0.01841*t340;
  t3141 = 0.70544*t420;
  t3163 = t3118 + t3141;
  t3058 = 0.70544*t340;
  t3060 = t3058 + t514;
  t2449 = t525*t2430;
  t3662 = t1138 + t2460;
  t3726 = t1861 + t2512;
  t3415 = t1067*t3240;
  t3418 = t852*t3377;
  t3493 = t3415 + t3418;
  t3519 = t852*t3240;
  t3524 = -1.*t1067*t3377;
  t3532 = t3519 + t3524;
  t2933 = -1.*t691*t635;
  t2957 = -1.*t525*t2430;
  t3740 = t1067*t3662;
  t3755 = t852*t3726;
  t3760 = t3740 + t3755;
  t3764 = t852*t3662;
  t3766 = -1.*t1067*t3726;
  t3772 = t3764 + t3766;
  t4198 = 0.02159*t852;
  t4231 = t4198 + t1069;
  t4108 = -1.11344*t852;
  t4163 = -0.02159*t1067;
  t4164 = t4108 + t4163;
  t4400 = -1.*t1067*t1790;
  t4411 = -1.*t852*t1883;
  t4421 = t4400 + t4411;
  t4287 = -1.*t852*t1140;
  t4288 = -1.*t1067*t1322;
  t4314 = t4287 + t4288;
  t4573 = Cos(var1[16]);
  t4576 = Sin(var1[16]);
  t4580 = Cos(var1[17]);
  t4588 = -1.*t4580;
  t4590 = 1. + t4588;
  t4597 = Sin(var1[17]);
  t4623 = -1.*var1[17];
  t4626 = 0.226893 + t4623;
  t4627 = Cos(t4626);
  t4628 = -1.*t4627;
  t4631 = 1. + t4628;
  t4645 = Sin(t4626);
  t4654 = -1.*t4580*t4576;
  t4656 = -1.*t4573*t4597;
  t4659 = t4654 + t4656;
  t4703 = t4573*t4580;
  t4710 = -1.*t4576*t4597;
  t4719 = t4703 + t4710;
  t4744 = Cos(var1[21]);
  t4746 = -1.*t4744;
  t4748 = 1. + t4746;
  t4758 = Sin(var1[21]);
  t4776 = t4627*t4659;
  t4778 = -1.*t4645*t4719;
  t4789 = t4776 + t4778;
  t4731 = t4645*t4659;
  t4740 = t4627*t4719;
  t4742 = t4731 + t4740;
  t4591 = -0.049*t4590;
  t4600 = -0.21*t4597;
  t4608 = t4591 + t4600;
  t4614 = -0.21*t4590;
  t4617 = 0.049*t4597;
  t4618 = t4614 + t4617;
  t4668 = 0.01841*t4631;
  t4679 = -0.70544*t4645;
  t4684 = t4668 + t4679;
  t4643 = -0.70544*t4631;
  t4647 = -0.01841*t4645;
  t4649 = t4643 + t4647;
  t4841 = t4580*t4576;
  t4842 = t4573*t4597;
  t4845 = t4841 + t4842;
  t4757 = -0.02159*t4748;
  t4764 = -1.11344*t4758;
  t4765 = t4757 + t4764;
  t4790 = -1.11344*t4748;
  t4791 = 0.02159*t4758;
  t4792 = t4790 + t4791;
  t4852 = t4627*t4845;
  t4854 = t4645*t4719;
  t4855 = t4852 + t4854;
  t4858 = -1.*t4645*t4845;
  t4859 = t4858 + t4740;
  t4575 = 0.049*t4573;
  t4579 = -0.09*t4576;
  t4612 = t4573*t4608;
  t4620 = -1.*t4576*t4618;
  t4667 = t4649*t4659;
  t4730 = t4684*t4719;
  t4771 = t4742*t4765;
  t4795 = t4789*t4792;
  t4796 = t4744*t4789;
  t4797 = -1.*t4742*t4758;
  t4802 = t4796 + t4797;
  t4804 = -1.11344*t4802;
  t4813 = t4744*t4742;
  t4819 = t4789*t4758;
  t4820 = t4813 + t4819;
  t4824 = -0.02159*t4820;
  t4827 = t4575 + t4579 + t4612 + t4620 + t4667 + t4730 + t4771 + t4795 + t4804 + t4824;
  t4832 = 0.09*t4573;
  t4837 = 0.049*t4576;
  t4839 = t4576*t4608;
  t4840 = t4573*t4618;
  t4846 = t4684*t4845;
  t4850 = t4649*t4719;
  t4857 = t4855*t4765;
  t4864 = t4859*t4792;
  t4867 = t4744*t4855;
  t4869 = t4859*t4758;
  t4870 = t4867 + t4869;
  t4873 = -0.02159*t4870;
  t4874 = t4744*t4859;
  t4876 = -1.*t4855*t4758;
  t4877 = t4874 + t4876;
  t4878 = -1.11344*t4877;
  t4881 = t4832 + t4837 + t4839 + t4840 + t4846 + t4850 + t4857 + t4864 + t4873 + t4878;
  t4912 = -1.*t4573*t4580;
  t4914 = t4576*t4597;
  t4915 = t4912 + t4914;
  t4922 = t4645*t4915;
  t4924 = t4776 + t4922;
  t4928 = -1.*t4645*t4659;
  t4929 = t4627*t4915;
  t4931 = t4928 + t4929;
  t4831 = Power(t4827,2);
  t4882 = Power(t4881,2);
  t4888 = 0.00002025 + t4831 + t4882;
  t4889 = 1/Sqrt(t4888);
  t4996 = t4645*t4845;
  t5013 = t4731 + t4996;
  t5017 = t4776 + t4852;
  t4960 = 0.049*t4580;
  t4963 = t4960 + t4600;
  t4972 = -0.21*t4580;
  t4973 = -0.049*t4597;
  t4977 = t4972 + t4973;
  t4911 = t4684*t4659;
  t4983 = 0.01841*t4627;
  t4993 = 0.70544*t4645;
  t4994 = t4983 + t4993;
  t4979 = 0.70544*t4627;
  t4980 = t4979 + t4647;
  t4916 = t4649*t4915;
  t5068 = t4854 + t4922;
  t5070 = t4740 + t4929;
  t5091 = 0.02159*t4744;
  t5093 = t5091 + t4764;
  t5095 = -1.11344*t4744;
  t5097 = -0.02159*t4758;
  t5098 = t5095 + t5097;
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
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=1.;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=1.;
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
  p_output1[60]=1.;
  p_output1[61]=0;
  p_output1[62]=0;
  p_output1[63]=0;
  p_output1[64]=0;
  p_output1[65]=0;
  p_output1[66]=0;
  p_output1[67]=0;
  p_output1[68]=0;
  p_output1[69]=0;
  p_output1[70]=1.;
  p_output1[71]=0;
  p_output1[72]=0;
  p_output1[73]=0;
  p_output1[74]=0;
  p_output1[75]=0;
  p_output1[76]=0.5*t2164*(2.*t1548*t2117 + 2.*t1548*(t2213 + t2223 + t2279 + t2356 + t2401 + t2449 + t1283*t2479 + t1100*t2544 - 0.02159*t2565 - 1.11344*t2650));
  p_output1[77]=t1548*t2810*t2916 + t2882*t2916*(t1574 + t1581 + t1587 + t1590 - 1.*t1283*t2479 - 1.*t1100*t2544 + 0.02159*t2565 + 1.11344*t2650 + t2933 + t2957);
  p_output1[78]=0;
  p_output1[79]=0;
  p_output1[80]=0;
  p_output1[81]=0;
  p_output1[82]=0;
  p_output1[83]=0;
  p_output1[84]=0;
  p_output1[85]=0.5*t2164*(2.*t1548*(t2401 + t2449 - 1.*t221*t3024 + t3042*t32 + t1283*t3662 + t1100*t3726 - 0.02159*t3760 - 1.11344*t3772 + t3163*t635 + t3060*t785) + 2.*t2117*(t221*t3042 + t1701*t3060 + t3024*t32 + t1283*t3240 + t1100*t3377 - 0.02159*t3493 - 1.11344*t3532 + t674 + t3163*t785 + t847));
  p_output1[86]=t2882*t2916*(t2933 + t2957 + t221*t3024 - 1.*t3042*t32 - 1.*t1283*t3662 - 1.*t1100*t3726 + 0.02159*t3760 + 1.11344*t3772 - 1.*t3163*t635 - 1.*t3060*t785) + t1548*t2916*(t2762 + t2768 - 1.*t221*t3042 - 1.*t1701*t3060 - 1.*t3024*t32 - 1.*t1283*t3240 - 1.*t1100*t3377 + 0.02159*t3493 + 1.11344*t3532 - 1.*t3163*t785);
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
  p_output1[121]=0.5*t2164*(2.*t1548*(-0.02159*t1465 + t1140*t4164 + t1322*t4231 - 1.11344*t4314) + 2.*t2117*(-0.02159*t2110 + t1883*t4164 + t1790*t4231 - 1.11344*t4421));
  p_output1[122]=t2882*t2916*(0.02159*t1465 - 1.*t1140*t4164 - 1.*t1322*t4231 + 1.11344*t4314) + t1548*t2916*(0.02159*t2110 - 1.*t1883*t4164 - 1.*t1790*t4231 + 1.11344*t4421);
  p_output1[123]=0;
  p_output1[124]=0;
  p_output1[125]=-1.;
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
  p_output1[137]=1.;
  p_output1[138]=0;
  p_output1[139]=0;
  p_output1[140]=0;
  p_output1[141]=0;
  p_output1[142]=0;
  p_output1[143]=0;
  p_output1[144]=0;
  p_output1[145]=0;
  p_output1[146]=0;
  p_output1[147]=0.5*t4889*(2.*t4827*t4881 + 2.*t4827*(-0.09*t4573 - 0.049*t4576 - 1.*t4576*t4608 - 1.*t4573*t4618 + t4911 + t4916 + t4765*t4924 + t4792*t4931 - 1.11344*(-1.*t4758*t4924 + t4744*t4931) - 0.02159*(t4744*t4924 + t4758*t4931)));
  p_output1[148]=0;
  p_output1[149]=0;
  p_output1[150]=0;
  p_output1[151]=0;
  p_output1[152]=0;
  p_output1[153]=0;
  p_output1[154]=0;
  p_output1[155]=0;
  p_output1[156]=0.5*t4889*(2.*t4881*(t4667 + t4730 + t4573*t4963 + t4576*t4977 + t4845*t4980 + t4719*t4994 + t4765*t5013 + t4792*t5017 - 1.11344*(-1.*t4758*t5013 + t4744*t5017) - 0.02159*(t4744*t5013 + t4758*t5017)) + 2.*t4827*(t4911 + t4916 - 1.*t4576*t4963 + t4573*t4977 + t4719*t4980 + t4659*t4994 + t4765*t5068 + t4792*t5070 - 1.11344*(-1.*t4758*t5068 + t4744*t5070) - 0.02159*(t4744*t5068 + t4758*t5070)));
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
  p_output1[192]=0.5*t4889*(2.*t4827*(-1.11344*(-1.*t4742*t4744 - 1.*t4758*t4789) - 0.02159*t4802 + t4789*t5093 + t4742*t5098) + 2.*t4881*(-1.11344*(-1.*t4744*t4855 - 1.*t4758*t4859) - 0.02159*t4877 + t4859*t5093 + t4855*t5098));
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
  p_output1[264]=0;
  p_output1[265]=0;
  p_output1[266]=0;
  p_output1[267]=0;
  p_output1[268]=0;
  p_output1[269]=0;
  p_output1[270]=0;
  p_output1[271]=0;
  p_output1[272]=0;
  p_output1[273]=0;
  p_output1[274]=0;
  p_output1[275]=0;
  p_output1[276]=0;
  p_output1[277]=0;
  p_output1[278]=0;
  p_output1[279]=0;
  p_output1[280]=0;
  p_output1[281]=0;
  p_output1[282]=0;
  p_output1[283]=0;
  p_output1[284]=0;
  p_output1[285]=0;
  p_output1[286]=0;
  p_output1[287]=0;
  p_output1[288]=0;
  p_output1[289]=0;
  p_output1[290]=0;
  p_output1[291]=0;
  p_output1[292]=0;
  p_output1[293]=0;
  p_output1[294]=0;
  p_output1[295]=0;
  p_output1[296]=0;
  p_output1[297]=0;
  p_output1[298]=0;
  p_output1[299]=0;
  p_output1[300]=0;
  p_output1[301]=0;
  p_output1[302]=0;
  p_output1[303]=0;
  p_output1[304]=0;
  p_output1[305]=0;
  p_output1[306]=0;
  p_output1[307]=0;
  p_output1[308]=0;
  p_output1[309]=0;
  p_output1[310]=0;
  p_output1[311]=0;
  p_output1[312]=0;
  p_output1[313]=0;
  p_output1[314]=0;
  p_output1[315]=0;
  p_output1[316]=0;
  p_output1[317]=0;
  p_output1[318]=0;
  p_output1[319]=0;
  p_output1[320]=0;
  p_output1[321]=0;
  p_output1[322]=0;
  p_output1[323]=0;
  p_output1[324]=0;
  p_output1[325]=0;
  p_output1[326]=0;
  p_output1[327]=0;
  p_output1[328]=0;
  p_output1[329]=0;
  p_output1[330]=0;
  p_output1[331]=0;
  p_output1[332]=0;
  p_output1[333]=0;
  p_output1[334]=0;
  p_output1[335]=0;
  p_output1[336]=0;
  p_output1[337]=0;
  p_output1[338]=0;
  p_output1[339]=0;
  p_output1[340]=0;
  p_output1[341]=0;
  p_output1[342]=0;
  p_output1[343]=0;
  p_output1[344]=0;
  p_output1[345]=0;
  p_output1[346]=0;
  p_output1[347]=0;
  p_output1[348]=0;
  p_output1[349]=0;
  p_output1[350]=0;
  p_output1[351]=0;
  p_output1[352]=0;
  p_output1[353]=0;
  p_output1[354]=0;
  p_output1[355]=0;
  p_output1[356]=0;
  p_output1[357]=0;
  p_output1[358]=0;
  p_output1[359]=0;
  p_output1[360]=0;
  p_output1[361]=0;
  p_output1[362]=0;
  p_output1[363]=0;
  p_output1[364]=0;
  p_output1[365]=0;
  p_output1[366]=0;
  p_output1[367]=0;
  p_output1[368]=0;
  p_output1[369]=0;
  p_output1[370]=0;
  p_output1[371]=0;
  p_output1[372]=0;
  p_output1[373]=0;
  p_output1[374]=0;
  p_output1[375]=0;
  p_output1[376]=0;
  p_output1[377]=0;
  p_output1[378]=0;
  p_output1[379]=0;
  p_output1[380]=0;
  p_output1[381]=0;
  p_output1[382]=0;
  p_output1[383]=0;
  p_output1[384]=0;
  p_output1[385]=0;
  p_output1[386]=0;
  p_output1[387]=0;
  p_output1[388]=0;
  p_output1[389]=0;
  p_output1[390]=0;
  p_output1[391]=0;
  p_output1[392]=0;
  p_output1[393]=0;
  p_output1[394]=0;
  p_output1[395]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 9, (mwSize) 44, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#endif // MATLAB_MEX_FILE

namespace SymFunction
{

void Dya_RightStanceActual_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




