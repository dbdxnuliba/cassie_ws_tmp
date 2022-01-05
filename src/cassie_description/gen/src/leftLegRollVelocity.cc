/*
 * Automatically Generated from Mathematica.
 * Sun 7 Nov 2021 14:28:05 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "leftLegRollVelocity.hh"
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
  double t159;
  double t260;
  double t341;
  double t842;
  double t853;
  double t865;
  double t880;
  double t969;
  double t1001;
  double t1012;
  double t240;
  double t1259;
  double t1277;
  double t1314;
  double t1091;
  double t1093;
  double t1104;
  double t1105;
  double t1146;
  double t1514;
  double t1625;
  double t1627;
  double t1658;
  double t1664;
  double t1668;
  double t1677;
  double t1693;
  double t1699;
  double t1710;
  double t1736;
  double t1745;
  double t1749;
  double t1774;
  double t1778;
  double t1785;
  double t1810;
  double t1838;
  double t1855;
  double t1856;
  double t1891;
  double t1894;
  double t1898;
  double t1996;
  double t1997;
  double t2004;
  double t2034;
  double t2035;
  double t1016;
  double t1474;
  double t1502;
  double t1508;
  double t1515;
  double t1524;
  double t1125;
  double t1171;
  double t1202;
  double t2071;
  double t2076;
  double t2078;
  double t2083;
  double t2091;
  double t2115;
  double t1531;
  double t1554;
  double t1568;
  double t1676;
  double t1678;
  double t1687;
  double t2137;
  double t2139;
  double t2141;
  double t2226;
  double t2237;
  double t2239;
  double t1718;
  double t1722;
  double t1735;
  double t1802;
  double t1829;
  double t1835;
  double t2288;
  double t2319;
  double t2368;
  double t2687;
  double t2727;
  double t2728;
  double t1879;
  double t1881;
  double t1882;
  double t2764;
  double t2781;
  double t2785;
  double t2879;
  double t2975;
  double t2976;
  double t1990;
  double t2033;
  double t2036;
  double t2038;
  double t2039;
  double t2046;
  double t2047;
  double t2051;
  double t2052;
  double t2055;
  double t2057;
  double t2063;
  double t2070;
  double t2082;
  double t2131;
  double t2132;
  double t2134;
  double t2136;
  double t2177;
  double t2281;
  double t2472;
  double t2753;
  double t2825;
  double t2983;
  double t3005;
  double t3006;
  double t3015;
  double t3022;
  double t3031;
  double t3046;
  double t3049;
  double t3051;
  double t3075;
  double t3220;
  double t3255;
  double t3259;
  double t3314;
  double t3357;
  double t3411;
  double t3565;
  double t3603;
  double t3622;
  double t3691;
  double t3718;
  double t3720;
  double t3775;
  double t3784;
  double t3789;
  double t3848;
  double t3853;
  double t3856;
  double t4004;
  double t4006;
  double t4044;
  double t4130;
  double t4133;
  double t4147;
  double t284;
  double t567;
  double t783;
  double t1013;
  double t1019;
  double t4401;
  double t4432;
  double t4436;
  double t4488;
  double t4489;
  double t4540;
  double t4585;
  double t4609;
  double t4644;
  double t4660;
  double t4666;
  double t4682;
  double t4159;
  double t4171;
  double t4173;
  double t4202;
  double t4214;
  double t4235;
  double t3077;
  double t3098;
  double t3101;
  double t3129;
  double t3154;
  double t3202;
  double t3304;
  double t3479;
  double t3628;
  double t3735;
  double t3809;
  double t3863;
  double t4123;
  double t4153;
  double t4201;
  double t4254;
  double t4259;
  double t4261;
  double t4265;
  double t4266;
  double t5132;
  double t5144;
  double t5171;
  double t5196;
  double t5198;
  double t5231;
  double t5255;
  double t5257;
  double t5261;
  double t5283;
  double t5294;
  double t5304;
  double t5389;
  double t5395;
  double t5408;
  double t5447;
  double t5451;
  double t5455;
  double t5516;
  double t5524;
  double t5537;
  double t5677;
  double t5688;
  double t5702;
  double t5742;
  double t5745;
  double t5746;
  double t5757;
  double t5761;
  double t5769;
  double t5782;
  double t5787;
  double t5789;
  double t5794;
  double t5810;
  double t5828;
  double t5833;
  double t5863;
  double t5864;
  double t5875;
  double t5885;
  double t5889;
  double t4788;
  double t4796;
  double t4798;
  double t4806;
  double t4826;
  double t4836;
  double t4838;
  double t4844;
  double t4863;
  double t4865;
  double t4871;
  double t4891;
  double t4892;
  double t4903;
  double t4904;
  double t4942;
  double t6045;
  double t6059;
  double t6064;
  double t6080;
  double t6083;
  double t6084;
  double t6089;
  double t6099;
  double t6104;
  double t6115;
  double t6118;
  double t6122;
  double t6124;
  double t6125;
  double t6128;
  double t6137;
  double t6139;
  double t6150;
  double t6179;
  double t6184;
  double t6186;
  double t6251;
  double t6253;
  double t6254;
  double t6267;
  double t6270;
  double t6273;
  double t6289;
  double t6297;
  double t6314;
  double t6319;
  double t6320;
  double t6322;
  double t6329;
  double t6330;
  double t6331;
  double t6334;
  double t6345;
  double t6351;
  double t6357;
  double t6359;
  double t6367;
  double t6485;
  double t6492;
  double t6493;
  double t6512;
  double t6513;
  double t6521;
  double t6524;
  double t6532;
  double t6560;
  double t6562;
  double t6563;
  double t6568;
  double t6574;
  double t6577;
  double t6436;
  double t6445;
  double t6476;
  double t6477;
  double t6482;
  double t6617;
  double t6618;
  double t6621;
  double t6624;
  double t6625;
  double t6632;
  double t6633;
  double t6637;
  double t6661;
  double t6671;
  double t6675;
  double t6685;
  double t6689;
  double t6696;
  double t6741;
  double t6742;
  double t6764;
  double t6780;
  double t6781;
  double t4315;
  double t6881;
  double t6882;
  double t6889;
  double t6896;
  double t6899;
  double t6908;
  double t6911;
  double t6915;
  double t6918;
  double t6919;
  double t6921;
  double t6924;
  double t6925;
  double t6927;
  double t6934;
  double t6935;
  double t6936;
  double t6939;
  double t6940;
  double t6942;
  double t6945;
  double t6946;
  double t6947;
  double t6997;
  double t6999;
  double t7007;
  double t7011;
  double t7020;
  double t7021;
  double t7022;
  double t6975;
  double t6976;
  double t6979;
  double t6982;
  double t6983;
  double t6987;
  double t6990;
  double t6991;
  double t7002;
  double t7005;
  double t7040;
  double t7041;
  double t7048;
  double t7050;
  double t7058;
  double t7060;
  double t7062;
  t159 = Sin(var1[3]);
  t260 = Cos(var1[7]);
  t341 = Sin(var1[7]);
  t842 = Cos(var1[3]);
  t853 = Cos(var1[6]);
  t865 = t842*t853;
  t880 = Cos(var1[4]);
  t969 = Sin(var1[6]);
  t1001 = -1.*t880*t159*t969;
  t1012 = t865 + t1001;
  t240 = Sin(var1[4]);
  t1259 = t260*t1012;
  t1277 = -1.*t159*t240*t341;
  t1314 = t1259 + t1277;
  t1091 = Cos(var1[8]);
  t1093 = Cos(var1[9]);
  t1104 = -1.*t1093;
  t1105 = 1. + t1104;
  t1146 = Sin(var1[9]);
  t1514 = Sin(var1[8]);
  t1625 = -1.*var1[9];
  t1627 = 0.226893 + t1625;
  t1658 = Cos(t1627);
  t1664 = -1.*t1658;
  t1668 = 1. + t1664;
  t1677 = Sin(t1627);
  t1693 = -1.*t1091*t1146*t1314;
  t1699 = -1.*t1093*t1314*t1514;
  t1710 = t1693 + t1699;
  t1736 = t1093*t1091*t1314;
  t1745 = -1.*t1146*t1314*t1514;
  t1749 = t1736 + t1745;
  t1774 = Cos(var1[13]);
  t1778 = -1.*t1774;
  t1785 = 1. + t1778;
  t1810 = Sin(var1[13]);
  t1838 = t1677*t1710;
  t1855 = t1658*t1749;
  t1856 = t1838 + t1855;
  t1891 = t1658*t1710;
  t1894 = -1.*t1677*t1749;
  t1898 = t1891 + t1894;
  t1996 = t853*t159;
  t1997 = t842*t880*t969;
  t2004 = t1996 + t1997;
  t2034 = -1.*t260;
  t2035 = 1. + t2034;
  t1016 = 0.135*t341;
  t1474 = -1.*t1091;
  t1502 = 1. + t1474;
  t1508 = -0.049*t1502;
  t1515 = -0.09*t1514;
  t1524 = t1508 + t1515;
  t1125 = -0.049*t1105;
  t1171 = -0.21*t1146;
  t1202 = t1125 + t1171;
  t2071 = -1.*t842*t260*t240;
  t2076 = t2004*t341;
  t2078 = t2071 + t2076;
  t2083 = t842*t880*t853;
  t2091 = -1.*t159*t969;
  t2115 = t2083 + t2091;
  t1531 = -0.21*t1105;
  t1554 = 0.049*t1146;
  t1568 = t1531 + t1554;
  t1676 = -0.70544*t1668;
  t1678 = -0.01841*t1677;
  t1687 = t1676 + t1678;
  t2137 = t1091*t2078;
  t2139 = t2115*t1514;
  t2141 = t2137 + t2139;
  t2226 = t1091*t2115;
  t2237 = -1.*t2078*t1514;
  t2239 = t2226 + t2237;
  t1718 = 0.01841*t1668;
  t1722 = -0.70544*t1677;
  t1735 = t1718 + t1722;
  t1802 = -0.02159*t1785;
  t1829 = -1.11344*t1810;
  t1835 = t1802 + t1829;
  t2288 = -1.*t1146*t2141;
  t2319 = t1093*t2239;
  t2368 = t2288 + t2319;
  t2687 = t1093*t2141;
  t2727 = t1146*t2239;
  t2728 = t2687 + t2727;
  t1879 = -1.11344*t1785;
  t1881 = 0.02159*t1810;
  t1882 = t1879 + t1881;
  t2764 = t1677*t2368;
  t2781 = t1658*t2728;
  t2785 = t2764 + t2781;
  t2879 = t1658*t2368;
  t2975 = -1.*t1677*t2728;
  t2976 = t2879 + t2975;
  t1990 = 0.049*t842*t240;
  t2033 = 0.135*t2004;
  t2036 = 0.135*t2035;
  t2038 = 0.049*t341;
  t2039 = t2036 + t2038;
  t2046 = -1.*t2004*t2039;
  t2047 = -0.049*t2035;
  t2051 = t2047 + t1016;
  t2052 = t842*t240*t2051;
  t2055 = t260*t2004;
  t2057 = t842*t240*t341;
  t2063 = t2055 + t2057;
  t2070 = -0.1305*t2063;
  t2082 = -1.*t2078*t1524;
  t2131 = -0.09*t1502;
  t2132 = 0.049*t1514;
  t2134 = t2131 + t2132;
  t2136 = -1.*t2115*t2134;
  t2177 = -1.*t1202*t2141;
  t2281 = -1.*t1568*t2239;
  t2472 = -1.*t1687*t2368;
  t2753 = -1.*t1735*t2728;
  t2825 = -1.*t1835*t2785;
  t2983 = -1.*t1882*t2976;
  t3005 = -1.*t1810*t2785;
  t3006 = t1774*t2976;
  t3015 = t3005 + t3006;
  t3022 = 1.11344*t3015;
  t3031 = t1774*t2785;
  t3046 = t1810*t2976;
  t3049 = t3031 + t3046;
  t3051 = 0.02159*t3049;
  t3075 = t1990 + t2033 + t2046 + t2052 + t2070 + t2082 + t2136 + t2177 + t2281 + t2472 + t2753 + t2825 + t2983 + t3022 + t3051;
  t3220 = t260*t159*t240;
  t3255 = t1012*t341;
  t3259 = t3220 + t3255;
  t3314 = -1.*t880*t853*t159;
  t3357 = -1.*t842*t969;
  t3411 = t3314 + t3357;
  t3565 = t1091*t3259;
  t3603 = t3411*t1514;
  t3622 = t3565 + t3603;
  t3691 = t1091*t3411;
  t3718 = -1.*t3259*t1514;
  t3720 = t3691 + t3718;
  t3775 = -1.*t1146*t3622;
  t3784 = t1093*t3720;
  t3789 = t3775 + t3784;
  t3848 = t1093*t3622;
  t3853 = t1146*t3720;
  t3856 = t3848 + t3853;
  t4004 = t1677*t3789;
  t4006 = t1658*t3856;
  t4044 = t4004 + t4006;
  t4130 = t1658*t3789;
  t4133 = -1.*t1677*t3856;
  t4147 = t4130 + t4133;
  t284 = 0.135*t260;
  t567 = -0.049*t341;
  t783 = t284 + t567;
  t1013 = 0.049*t260;
  t1019 = t1013 + t1016;
  t4401 = -1.*t1091*t1146*t2063;
  t4432 = -1.*t1093*t2063*t1514;
  t4436 = t4401 + t4432;
  t4488 = t1093*t1091*t2063;
  t4489 = -1.*t1146*t2063*t1514;
  t4540 = t4488 + t4489;
  t4585 = t1677*t4436;
  t4609 = t1658*t4540;
  t4644 = t4585 + t4609;
  t4660 = t1658*t4436;
  t4666 = -1.*t1677*t4540;
  t4682 = t4660 + t4666;
  t4159 = -1.*t1810*t4044;
  t4171 = t1774*t4147;
  t4173 = t4159 + t4171;
  t4202 = t1774*t4044;
  t4214 = t1810*t4147;
  t4235 = t4202 + t4214;
  t3077 = Power(t3075,2);
  t3098 = 0.049*t159*t240;
  t3101 = -0.135*t1012;
  t3129 = t1012*t2039;
  t3154 = t159*t240*t2051;
  t3202 = 0.1305*t1314;
  t3304 = t3259*t1524;
  t3479 = t3411*t2134;
  t3628 = t1202*t3622;
  t3735 = t1568*t3720;
  t3809 = t1687*t3789;
  t3863 = t1735*t3856;
  t4123 = t1835*t4044;
  t4153 = t1882*t4147;
  t4201 = -1.11344*t4173;
  t4254 = -0.02159*t4235;
  t4259 = t3098 + t3101 + t3129 + t3154 + t3202 + t3304 + t3479 + t3628 + t3735 + t3809 + t3863 + t4123 + t4153 + t4201 + t4254;
  t4261 = Power(t4259,2);
  t4265 = t3077 + t4261;
  t4266 = 1/t4265;
  t5132 = -1.*t842*t853;
  t5144 = t880*t159*t969;
  t5171 = t5132 + t5144;
  t5196 = t1091*t3411*t341;
  t5198 = t5171*t1514;
  t5231 = t5196 + t5198;
  t5255 = t1091*t5171;
  t5257 = -1.*t3411*t341*t1514;
  t5261 = t5255 + t5257;
  t5283 = -1.*t1146*t5231;
  t5294 = t1093*t5261;
  t5304 = t5283 + t5294;
  t5389 = t1093*t5231;
  t5395 = t1146*t5261;
  t5408 = t5389 + t5395;
  t5447 = t1677*t5304;
  t5451 = t1658*t5408;
  t5455 = t5447 + t5451;
  t5516 = t1658*t5304;
  t5524 = -1.*t1677*t5408;
  t5537 = t5516 + t5524;
  t5677 = -1.*t853*t159;
  t5688 = -1.*t842*t880*t969;
  t5702 = t5677 + t5688;
  t5742 = t1091*t2115*t341;
  t5745 = t5702*t1514;
  t5746 = t5742 + t5745;
  t5757 = t1091*t5702;
  t5761 = -1.*t2115*t341*t1514;
  t5769 = t5757 + t5761;
  t5782 = -1.*t1146*t5746;
  t5787 = t1093*t5769;
  t5789 = t5782 + t5787;
  t5794 = t1093*t5746;
  t5810 = t1146*t5769;
  t5828 = t5794 + t5810;
  t5833 = t1677*t5789;
  t5863 = t1658*t5828;
  t5864 = t5833 + t5863;
  t5875 = t1658*t5789;
  t5885 = -1.*t1677*t5828;
  t5889 = t5875 + t5885;
  t4788 = -0.049*t159*t240;
  t4796 = 0.135*t1012;
  t4798 = -1.*t1012*t2039;
  t4806 = -1.*t159*t240*t2051;
  t4826 = -0.1305*t1314;
  t4836 = -1.*t3259*t1524;
  t4838 = -1.*t3411*t2134;
  t4844 = -1.*t1202*t3622;
  t4863 = -1.*t1568*t3720;
  t4865 = -1.*t1687*t3789;
  t4871 = -1.*t1735*t3856;
  t4891 = -1.*t1835*t4044;
  t4892 = -1.*t1882*t4147;
  t4903 = 1.11344*t4173;
  t4904 = 0.02159*t4235;
  t4942 = t4788 + t4796 + t4798 + t4806 + t4826 + t4836 + t4838 + t4844 + t4863 + t4865 + t4871 + t4891 + t4892 + t4903 + t4904;
  t6045 = t880*t260*t159;
  t6059 = t159*t240*t969*t341;
  t6064 = t6045 + t6059;
  t6080 = t1091*t6064;
  t6083 = t853*t159*t240*t1514;
  t6084 = t6080 + t6083;
  t6089 = t853*t1091*t159*t240;
  t6099 = -1.*t6064*t1514;
  t6104 = t6089 + t6099;
  t6115 = -1.*t1146*t6084;
  t6118 = t1093*t6104;
  t6122 = t6115 + t6118;
  t6124 = t1093*t6084;
  t6125 = t1146*t6104;
  t6128 = t6124 + t6125;
  t6137 = t1677*t6122;
  t6139 = t1658*t6128;
  t6150 = t6137 + t6139;
  t6179 = t1658*t6122;
  t6184 = -1.*t1677*t6128;
  t6186 = t6179 + t6184;
  t6251 = -1.*t842*t880*t260;
  t6253 = -1.*t842*t240*t969*t341;
  t6254 = t6251 + t6253;
  t6267 = t1091*t6254;
  t6270 = -1.*t842*t853*t240*t1514;
  t6273 = t6267 + t6270;
  t6289 = -1.*t842*t853*t1091*t240;
  t6297 = -1.*t6254*t1514;
  t6314 = t6289 + t6297;
  t6319 = -1.*t1146*t6273;
  t6320 = t1093*t6314;
  t6322 = t6319 + t6320;
  t6329 = t1093*t6273;
  t6330 = t1146*t6314;
  t6331 = t6329 + t6330;
  t6334 = t1677*t6322;
  t6345 = t1658*t6331;
  t6351 = t6334 + t6345;
  t6357 = t1658*t6322;
  t6359 = -1.*t1677*t6331;
  t6367 = t6357 + t6359;
  t6485 = -1.*t1091*t3259;
  t6492 = -1.*t3411*t1514;
  t6493 = t6485 + t6492;
  t6512 = t1146*t6493;
  t6513 = t6512 + t3784;
  t6521 = t1093*t6493;
  t6524 = -1.*t1146*t3720;
  t6532 = t6521 + t6524;
  t6560 = -1.*t1677*t6513;
  t6562 = t1658*t6532;
  t6563 = t6560 + t6562;
  t6568 = t1658*t6513;
  t6574 = t1677*t6532;
  t6577 = t6568 + t6574;
  t6436 = 0.049*t1091;
  t6445 = t6436 + t1515;
  t6476 = -0.09*t1091;
  t6477 = -0.049*t1514;
  t6482 = t6476 + t6477;
  t6617 = -1.*t1091*t2078;
  t6618 = -1.*t2115*t1514;
  t6621 = t6617 + t6618;
  t6624 = t1146*t6621;
  t6625 = t6624 + t2319;
  t6632 = t1093*t6621;
  t6633 = -1.*t1146*t2239;
  t6637 = t6632 + t6633;
  t6661 = -1.*t1677*t6625;
  t6671 = t1658*t6637;
  t6675 = t6661 + t6671;
  t6685 = t1658*t6625;
  t6689 = t1677*t6637;
  t6696 = t6685 + t6689;
  t6741 = -1.11344*t1774;
  t6742 = -0.02159*t1810;
  t6764 = t6741 + t6742;
  t6780 = 0.02159*t1774;
  t6781 = t6780 + t1829;
  t4315 = t842*t260*t240;
  t6881 = t5702*t341;
  t6882 = t4315 + t6881;
  t6889 = -1.*t842*t880*t853;
  t6896 = t159*t969;
  t6899 = t6889 + t6896;
  t6908 = t1091*t6882;
  t6911 = t6899*t1514;
  t6915 = t6908 + t6911;
  t6918 = t1091*t6899;
  t6919 = -1.*t6882*t1514;
  t6921 = t6918 + t6919;
  t6924 = -1.*t1146*t6915;
  t6925 = t1093*t6921;
  t6927 = t6924 + t6925;
  t6934 = t1093*t6915;
  t6935 = t1146*t6921;
  t6936 = t6934 + t6935;
  t6939 = t1677*t6927;
  t6940 = t1658*t6936;
  t6942 = t6939 + t6940;
  t6945 = t1658*t6927;
  t6946 = -1.*t1677*t6936;
  t6947 = t6945 + t6946;
  t6997 = -1.*t1093*t2141;
  t6999 = t6997 + t6633;
  t7007 = t1658*t6999;
  t7011 = t7007 + t2781;
  t7020 = t1677*t6999;
  t7021 = t1677*t2728;
  t7022 = t7020 + t7021;
  t6975 = -0.21*t1093;
  t6976 = -0.049*t1146;
  t6979 = t6975 + t6976;
  t6982 = 0.049*t1093;
  t6983 = t6982 + t1171;
  t6987 = 0.01841*t1658;
  t6990 = 0.70544*t1677;
  t6991 = t6987 + t6990;
  t7002 = 0.70544*t1658;
  t7005 = t7002 + t1678;
  t7040 = -1.*t1093*t3622;
  t7041 = t7040 + t6524;
  t7048 = t1658*t7041;
  t7050 = t7048 + t4006;
  t7058 = t1677*t7041;
  t7060 = t1677*t3856;
  t7062 = t7058 + t7060;
  p_output1[0]=(t4266*Power(t4942,2) + t3075*t4266*(t1990 + t2052 - 0.135*t5702 + t2039*t5702 + t1524*t6882 + t2134*t6899 + t1202*t6915 + t1568*t6921 + t1687*t6927 + t1735*t6936 + t1835*t6942 + t1882*t6947 - 1.11344*(-1.*t1810*t6942 + t1774*t6947) - 0.02159*(t1774*t6942 + t1810*t6947) + 0.1305*(t260*t5702 - 1.*t240*t341*t842)))*var2[3] + (t3075*t4266*(t1524*t6064 + t1202*t6084 + t1568*t6104 + t1687*t6122 + t1735*t6128 + t1835*t6150 + t1882*t6186 - 1.11344*(-1.*t1810*t6150 + t1774*t6186) - 0.02159*(t1774*t6150 + t1810*t6186) + t159*t2134*t240*t853 + 0.049*t159*t880 + t159*t2051*t880 - 0.135*t159*t240*t969 + t159*t2039*t240*t969 + 0.1305*(-1.*t159*t341*t880 + t159*t240*t260*t969)) + t4266*t4942*(-1.*t1524*t6254 - 1.*t1202*t6273 - 1.*t1568*t6314 - 1.*t1687*t6322 - 1.*t1735*t6331 - 1.*t1835*t6351 - 1.*t1882*t6367 + 1.11344*(-1.*t1810*t6351 + t1774*t6367) + 0.02159*(t1774*t6351 + t1810*t6367) + t2134*t240*t842*t853 + 0.049*t842*t880 + t2051*t842*t880 - 0.135*t240*t842*t969 + t2039*t240*t842*t969 - 0.1305*(t341*t842*t880 - 1.*t240*t260*t842*t969)))*var2[4] + (t3075*t4266*(-0.135*t3411 + t2039*t3411 + 0.1305*t260*t3411 + t1524*t341*t3411 + t2134*t5171 + t1202*t5231 + t1568*t5261 + t1687*t5304 + t1735*t5408 + t1835*t5455 + t1882*t5537 - 1.11344*(-1.*t1810*t5455 + t1774*t5537) - 0.02159*(t1774*t5455 + t1810*t5537)) + t4266*t4942*(0.135*t2115 - 1.*t2039*t2115 - 0.1305*t2115*t260 - 1.*t1524*t2115*t341 - 1.*t2134*t5702 - 1.*t1202*t5746 - 1.*t1568*t5769 - 1.*t1687*t5789 - 1.*t1735*t5828 - 1.*t1835*t5864 - 1.*t1882*t5889 + 1.11344*(-1.*t1810*t5864 + t1774*t5889) + 0.02159*(t1774*t5864 + t1810*t5889)))*var2[6] + (t3075*t4266*(t1012*t1019 + t1091*t1202*t1314 + t1314*t1524 - 1.*t1314*t1514*t1568 + t1687*t1710 + t1735*t1749 + t1835*t1856 + t1882*t1898 - 1.11344*(-1.*t1810*t1856 + t1774*t1898) - 0.02159*(t1774*t1856 + t1810*t1898) + 0.1305*(-1.*t159*t240*t260 - 1.*t1012*t341) + t159*t240*t783) + t4266*t4942*(-1.*t1019*t2004 - 1.*t1091*t1202*t2063 - 1.*t1524*t2063 + t1514*t1568*t2063 - 0.1305*(-1.*t2004*t341 + t4315) - 1.*t1687*t4436 - 1.*t1735*t4540 - 1.*t1835*t4644 - 1.*t1882*t4682 + 1.11344*(-1.*t1810*t4644 + t1774*t4682) + 0.02159*(t1774*t4644 + t1810*t4682) + t240*t783*t842))*var2[7] + (t3075*t4266*(t1202*t3720 + t3411*t6445 + t3259*t6482 + t1568*t6493 + t1735*t6513 + t1687*t6532 + t1882*t6563 + t1835*t6577 - 0.02159*(t1810*t6563 + t1774*t6577) - 1.11344*(t1774*t6563 - 1.*t1810*t6577)) + t4266*t4942*(-1.*t1202*t2239 - 1.*t2115*t6445 - 1.*t2078*t6482 - 1.*t1568*t6621 - 1.*t1735*t6625 - 1.*t1687*t6637 - 1.*t1882*t6675 - 1.*t1835*t6696 + 0.02159*(t1810*t6675 + t1774*t6696) + 1.11344*(t1774*t6675 - 1.*t1810*t6696)))*var2[8] + (t4266*t4942*(-1.*t1735*t2368 - 1.*t2141*t6979 - 1.*t2239*t6983 - 1.*t2368*t6991 - 1.*t1687*t6999 - 1.*t2728*t7005 - 1.*t1882*t7011 - 1.*t1835*t7022 + 0.02159*(t1810*t7011 + t1774*t7022) + 1.11344*(t1774*t7011 - 1.*t1810*t7022)) + t3075*t4266*(t1735*t3789 + t3622*t6979 + t3720*t6983 + t3789*t6991 + t3856*t7005 + t1687*t7041 + t1882*t7050 + t1835*t7062 - 0.02159*(t1810*t7050 + t1774*t7062) - 1.11344*(t1774*t7050 - 1.*t1810*t7062)))*var2[9] + (t4266*t4942*(1.11344*(-1.*t1774*t2785 - 1.*t1810*t2976) + 0.02159*t3015 - 1.*t2785*t6764 - 1.*t2976*t6781) + t3075*t4266*(-1.11344*(-1.*t1774*t4044 - 1.*t1810*t4147) - 0.02159*t4173 + t4044*t6764 + t4147*t6781))*var2[13];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#endif // MATLAB_MEX_FILE

namespace SymFunction
{

void leftLegRollVelocity_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}




