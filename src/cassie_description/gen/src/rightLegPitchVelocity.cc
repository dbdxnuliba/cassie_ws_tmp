/*
 * Automatically Generated from Mathematica.
 * Sun 7 Nov 2021 14:28:03 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "rightLegPitchVelocity.hh"
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
  double t28;
  double t306;
  double t76;
  double t84;
  double t166;
  double t207;
  double t323;
  double t479;
  double t507;
  double t511;
  double t632;
  double t445;
  double t1315;
  double t1508;
  double t1546;
  double t1650;
  double t1663;
  double t1679;
  double t1752;
  double t2211;
  double t2226;
  double t1891;
  double t1925;
  double t1980;
  double t2115;
  double t2187;
  double t2195;
  double t2243;
  double t2278;
  double t2293;
  double t2398;
  double t2469;
  double t2472;
  double t2599;
  double t3046;
  double t3051;
  double t3105;
  double t3164;
  double t3209;
  double t3238;
  double t3362;
  double t3411;
  double t3479;
  double t3590;
  double t3628;
  double t3638;
  double t3656;
  double t591;
  double t739;
  double t797;
  double t3868;
  double t3898;
  double t361;
  double t379;
  double t410;
  double t4006;
  double t4018;
  double t4043;
  double t206;
  double t229;
  double t268;
  double t1262;
  double t1301;
  double t1302;
  double t1731;
  double t1773;
  double t1874;
  double t3897;
  double t3912;
  double t3924;
  double t4173;
  double t4214;
  double t4220;
  double t2014;
  double t2015;
  double t2107;
  double t2318;
  double t2414;
  double t2416;
  double t4271;
  double t4284;
  double t4303;
  double t4315;
  double t4319;
  double t4368;
  double t2985;
  double t2987;
  double t2991;
  double t3265;
  double t3367;
  double t3374;
  double t4406;
  double t4432;
  double t4483;
  double t4489;
  double t4540;
  double t4568;
  double t3612;
  double t3613;
  double t3621;
  double t4660;
  double t4682;
  double t4694;
  double t4723;
  double t4750;
  double t4753;
  double t4903;
  double t4904;
  double t4920;
  double t4942;
  double t4949;
  double t4958;
  double t5003;
  double t5009;
  double t5032;
  double t5103;
  double t5106;
  double t5119;
  double t5132;
  double t5137;
  double t5158;
  double t5186;
  double t5198;
  double t5220;
  double t5231;
  double t5237;
  double t5245;
  double t5261;
  double t5274;
  double t5291;
  double t5335;
  double t5340;
  double t5342;
  double t997;
  double t1215;
  double t1246;
  double t3733;
  double t3735;
  double t3746;
  double t3775;
  double t3784;
  double t3793;
  double t5810;
  double t5817;
  double t5821;
  double t5831;
  double t5846;
  double t5847;
  double t5880;
  double t5885;
  double t5888;
  double t5895;
  double t5896;
  double t5902;
  double t5924;
  double t5939;
  double t5950;
  double t5959;
  double t5962;
  double t5963;
  double t4930;
  double t4941;
  double t4986;
  double t4996;
  double t4998;
  double t5033;
  double t5037;
  double t5064;
  double t5081;
  double t5092;
  double t5125;
  double t5162;
  double t5225;
  double t5254;
  double t5315;
  double t5372;
  double t5388;
  double t5395;
  double t5398;
  double t5429;
  double t5447;
  double t5455;
  double t5478;
  double t5484;
  double t5494;
  double t5516;
  double t5550;
  double t5552;
  double t5558;
  double t5568;
  double t5570;
  double t5581;
  double t5582;
  double t5601;
  double t5602;
  double t5636;
  double t5677;
  double t5688;
  double t5702;
  double t5704;
  double t5739;
  double t5742;
  double t5746;
  double t5753;
  double t5759;
  double t6041;
  double t6043;
  double t6044;
  double t6084;
  double t6089;
  double t6090;
  double t6104;
  double t6105;
  double t6110;
  double t6116;
  double t6118;
  double t6121;
  double t6124;
  double t6125;
  double t6126;
  double t6136;
  double t6137;
  double t6138;
  double t6150;
  double t6151;
  double t6163;
  double t29;
  double t280;
  double t356;
  double t443;
  double t813;
  double t1247;
  double t1547;
  double t1998;
  double t2205;
  double t2705;
  double t3109;
  double t3593;
  double t3711;
  double t3763;
  double t3842;
  double t3858;
  double t6258;
  double t6262;
  double t6263;
  double t6267;
  double t6268;
  double t6269;
  double t6273;
  double t6282;
  double t6286;
  double t6297;
  double t6304;
  double t6312;
  double t6241;
  double t6244;
  double t6231;
  double t6232;
  double t6237;
  double t6377;
  double t6378;
  double t6380;
  double t6382;
  double t6385;
  double t6389;
  double t6392;
  double t6398;
  double t6426;
  double t6436;
  double t6454;
  double t6468;
  double t6549;
  double t6552;
  double t6558;
  double t6563;
  double t6565;
  double t6568;
  double t6570;
  double t6572;
  double t6575;
  double t6577;
  double t6578;
  double t6591;
  double t6594;
  double t6597;
  double t6523;
  double t6529;
  double t6533;
  double t6534;
  double t6537;
  double t6626;
  double t6628;
  double t6630;
  double t6633;
  double t6634;
  double t6644;
  double t6652;
  double t6670;
  double t6673;
  double t6675;
  double t6677;
  double t6689;
  double t6697;
  double t6702;
  double t6743;
  double t6755;
  double t6762;
  double t6773;
  double t6779;
  double t6869;
  double t6870;
  double t6878;
  double t6879;
  double t6881;
  double t6882;
  double t6884;
  double t6839;
  double t6840;
  double t6841;
  double t6843;
  double t6850;
  double t6864;
  double t6865;
  double t6866;
  double t6874;
  double t6876;
  double t6926;
  double t6933;
  double t6936;
  double t6938;
  double t6940;
  double t6942;
  double t6943;
  double t6976;
  double t6977;
  double t6978;
  double t6986;
  double t6987;
  double t6988;
  double t6991;
  double t6992;
  double t6994;
  double t6996;
  double t6997;
  double t6998;
  double t7000;
  double t7002;
  double t7003;
  double t7006;
  double t7007;
  double t7010;
  double t7013;
  double t7014;
  double t7018;
  double t7045;
  double t7046;
  double t7047;
  double t7049;
  double t7050;
  double t7053;
  double t7055;
  double t7056;
  double t7057;
  double t7059;
  double t7060;
  double t7061;
  double t7063;
  double t7064;
  double t7065;
  double t7068;
  double t7069;
  double t7070;
  double t7074;
  double t7075;
  double t7076;
  t28 = Cos(var1[4]);
  t306 = Sin(var1[14]);
  t76 = Cos(var1[15]);
  t84 = -1.*t76;
  t166 = 1. + t84;
  t207 = Sin(var1[15]);
  t323 = Sin(var1[4]);
  t479 = Cos(var1[16]);
  t507 = -1.*t479;
  t511 = 1. + t507;
  t632 = Sin(var1[16]);
  t445 = Cos(var1[14]);
  t1315 = t76*t28;
  t1508 = t306*t207*t323;
  t1546 = t1315 + t1508;
  t1650 = Cos(var1[17]);
  t1663 = -1.*t1650;
  t1679 = 1. + t1663;
  t1752 = Sin(var1[17]);
  t2211 = -1.*var1[17];
  t2226 = 0.226893 + t2211;
  t1891 = t445*t632*t323;
  t1925 = t479*t1546;
  t1980 = t1891 + t1925;
  t2115 = t445*t479*t323;
  t2187 = -1.*t632*t1546;
  t2195 = t2115 + t2187;
  t2243 = Cos(t2226);
  t2278 = -1.*t2243;
  t2293 = 1. + t2278;
  t2398 = Sin(t2226);
  t2469 = -1.*t1752*t1980;
  t2472 = t1650*t2195;
  t2599 = t2469 + t2472;
  t3046 = t1650*t1980;
  t3051 = t1752*t2195;
  t3105 = t3046 + t3051;
  t3164 = Cos(var1[21]);
  t3209 = -1.*t3164;
  t3238 = 1. + t3209;
  t3362 = Sin(var1[21]);
  t3411 = t2398*t2599;
  t3479 = t2243*t3105;
  t3590 = t3411 + t3479;
  t3628 = t2243*t2599;
  t3638 = -1.*t2398*t3105;
  t3656 = t3628 + t3638;
  t591 = -0.09*t511;
  t739 = 0.049*t632;
  t797 = t591 + t739;
  t3868 = Cos(var1[3]);
  t3898 = Sin(var1[3]);
  t361 = -0.135*t166;
  t379 = 0.049*t207;
  t410 = t361 + t379;
  t4006 = t445*t3868;
  t4018 = -1.*t28*t306*t3898;
  t4043 = t4006 + t4018;
  t206 = -0.049*t166;
  t229 = -0.135*t207;
  t268 = t206 + t229;
  t1262 = -0.049*t511;
  t1301 = -0.09*t632;
  t1302 = t1262 + t1301;
  t1731 = -0.049*t1679;
  t1773 = -0.21*t1752;
  t1874 = t1731 + t1773;
  t3897 = -1.*t3868*t306;
  t3912 = -1.*t445*t28*t3898;
  t3924 = t3897 + t3912;
  t4173 = t207*t4043;
  t4214 = t76*t3898*t323;
  t4220 = t4173 + t4214;
  t2014 = -0.21*t1679;
  t2015 = 0.049*t1752;
  t2107 = t2014 + t2015;
  t2318 = -0.70544*t2293;
  t2414 = -0.01841*t2398;
  t2416 = t2318 + t2414;
  t4271 = t632*t3924;
  t4284 = t479*t4220;
  t4303 = t4271 + t4284;
  t4315 = t479*t3924;
  t4319 = -1.*t632*t4220;
  t4368 = t4315 + t4319;
  t2985 = 0.01841*t2293;
  t2987 = -0.70544*t2398;
  t2991 = t2985 + t2987;
  t3265 = -0.02159*t3238;
  t3367 = -1.11344*t3362;
  t3374 = t3265 + t3367;
  t4406 = -1.*t1752*t4303;
  t4432 = t1650*t4368;
  t4483 = t4406 + t4432;
  t4489 = t1650*t4303;
  t4540 = t1752*t4368;
  t4568 = t4489 + t4540;
  t3612 = -1.11344*t3238;
  t3613 = 0.02159*t3362;
  t3621 = t3612 + t3613;
  t4660 = t2398*t4483;
  t4682 = t2243*t4568;
  t4694 = t4660 + t4682;
  t4723 = t2243*t4483;
  t4750 = -1.*t2398*t4568;
  t4753 = t4723 + t4750;
  t4903 = t3868*t28*t306;
  t4904 = t445*t3898;
  t4920 = t4903 + t4904;
  t4942 = t445*t3868*t28;
  t4949 = -1.*t306*t3898;
  t4958 = t4942 + t4949;
  t5003 = t207*t4920;
  t5009 = -1.*t76*t3868*t323;
  t5032 = t5003 + t5009;
  t5103 = t632*t4958;
  t5106 = t479*t5032;
  t5119 = t5103 + t5106;
  t5132 = t479*t4958;
  t5137 = -1.*t632*t5032;
  t5158 = t5132 + t5137;
  t5186 = -1.*t1752*t5119;
  t5198 = t1650*t5158;
  t5220 = t5186 + t5198;
  t5231 = t1650*t5119;
  t5237 = t1752*t5158;
  t5245 = t5231 + t5237;
  t5261 = t2398*t5220;
  t5274 = t2243*t5245;
  t5291 = t5261 + t5274;
  t5335 = t2243*t5220;
  t5340 = -1.*t2398*t5245;
  t5342 = t5335 + t5340;
  t997 = -1.*t28*t207;
  t1215 = t76*t306*t323;
  t1246 = t997 + t1215;
  t3733 = -1.*t3362*t3590;
  t3735 = t3164*t3656;
  t3746 = t3733 + t3735;
  t3775 = t3164*t3590;
  t3784 = t3362*t3656;
  t3793 = t3775 + t3784;
  t5810 = t445*t479*t207*t323;
  t5817 = -1.*t306*t632*t323;
  t5821 = t5810 + t5817;
  t5831 = -1.*t479*t306*t323;
  t5846 = -1.*t445*t207*t632*t323;
  t5847 = t5831 + t5846;
  t5880 = -1.*t1752*t5821;
  t5885 = t1650*t5847;
  t5888 = t5880 + t5885;
  t5895 = t1650*t5821;
  t5896 = t1752*t5847;
  t5902 = t5895 + t5896;
  t5924 = t2398*t5888;
  t5939 = t2243*t5902;
  t5950 = t5924 + t5939;
  t5959 = t2243*t5888;
  t5962 = -1.*t2398*t5902;
  t5963 = t5959 + t5962;
  t4930 = -0.135*t4920;
  t4941 = -1.*t410*t4920;
  t4986 = -1.*t797*t4958;
  t4996 = 0.049*t3868*t323;
  t4998 = t3868*t268*t323;
  t5033 = -1.*t1302*t5032;
  t5037 = t76*t4920;
  t5064 = t3868*t207*t323;
  t5081 = t5037 + t5064;
  t5092 = 0.1305*t5081;
  t5125 = -1.*t1874*t5119;
  t5162 = -1.*t2107*t5158;
  t5225 = -1.*t2416*t5220;
  t5254 = -1.*t2991*t5245;
  t5315 = -1.*t3374*t5291;
  t5372 = -1.*t3621*t5342;
  t5388 = -1.*t3362*t5291;
  t5395 = t3164*t5342;
  t5398 = t5388 + t5395;
  t5429 = 1.11344*t5398;
  t5447 = t3164*t5291;
  t5455 = t3362*t5342;
  t5478 = t5447 + t5455;
  t5484 = 0.02159*t5478;
  t5494 = t4930 + t4941 + t4986 + t4996 + t4998 + t5033 + t5092 + t5125 + t5162 + t5225 + t5254 + t5315 + t5372 + t5429 + t5484;
  t5516 = Power(t5494,2);
  t5550 = 0.049*t28;
  t5552 = t28*t268;
  t5558 = 0.135*t306*t323;
  t5568 = t306*t410*t323;
  t5570 = t445*t797*t323;
  t5581 = -0.1305*t1246;
  t5582 = t1302*t1546;
  t5601 = t1874*t1980;
  t5602 = t2107*t2195;
  t5636 = t2416*t2599;
  t5677 = t2991*t3105;
  t5688 = t3374*t3590;
  t5702 = t3621*t3656;
  t5704 = -1.11344*t3746;
  t5739 = -0.02159*t3793;
  t5742 = t5550 + t5552 + t5558 + t5568 + t5570 + t5581 + t5582 + t5601 + t5602 + t5636 + t5677 + t5688 + t5702 + t5704 + t5739;
  t5746 = Power(t5742,2);
  t5753 = t5516 + t5746;
  t5759 = 1/t5753;
  t6041 = -1.*t3868*t28*t306;
  t6043 = -1.*t445*t3898;
  t6044 = t6041 + t6043;
  t6084 = t632*t6044;
  t6089 = t479*t207*t4958;
  t6090 = t6084 + t6089;
  t6104 = t479*t6044;
  t6105 = -1.*t207*t632*t4958;
  t6110 = t6104 + t6105;
  t6116 = -1.*t1752*t6090;
  t6118 = t1650*t6110;
  t6121 = t6116 + t6118;
  t6124 = t1650*t6090;
  t6125 = t1752*t6110;
  t6126 = t6124 + t6125;
  t6136 = t2398*t6121;
  t6137 = t2243*t6126;
  t6138 = t6136 + t6137;
  t6150 = t2243*t6121;
  t6151 = -1.*t2398*t6126;
  t6163 = t6150 + t6151;
  t29 = -0.049*t28;
  t280 = -1.*t28*t268;
  t356 = -0.135*t306*t323;
  t443 = -1.*t306*t410*t323;
  t813 = -1.*t445*t797*t323;
  t1247 = 0.1305*t1246;
  t1547 = -1.*t1302*t1546;
  t1998 = -1.*t1874*t1980;
  t2205 = -1.*t2107*t2195;
  t2705 = -1.*t2416*t2599;
  t3109 = -1.*t2991*t3105;
  t3593 = -1.*t3374*t3590;
  t3711 = -1.*t3621*t3656;
  t3763 = 1.11344*t3746;
  t3842 = 0.02159*t3793;
  t3858 = t29 + t280 + t356 + t443 + t813 + t1247 + t1547 + t1998 + t2205 + t2705 + t3109 + t3593 + t3711 + t3763 + t3842;
  t6258 = -1.*t1650*t632*t1246;
  t6262 = -1.*t479*t1752*t1246;
  t6263 = t6258 + t6262;
  t6267 = t479*t1650*t1246;
  t6268 = -1.*t632*t1752*t1246;
  t6269 = t6267 + t6268;
  t6273 = t2398*t6263;
  t6282 = t2243*t6269;
  t6286 = t6273 + t6282;
  t6297 = t2243*t6263;
  t6304 = -1.*t2398*t6269;
  t6312 = t6297 + t6304;
  t6241 = 0.049*t76;
  t6244 = t6241 + t229;
  t6231 = -0.135*t76;
  t6232 = -0.049*t207;
  t6237 = t6231 + t6232;
  t6377 = -1.*t1650*t632*t5081;
  t6378 = -1.*t479*t1752*t5081;
  t6380 = t6377 + t6378;
  t6382 = t479*t1650*t5081;
  t6385 = -1.*t632*t1752*t5081;
  t6389 = t6382 + t6385;
  t6392 = t2398*t6380;
  t6398 = t2243*t6389;
  t6426 = t6392 + t6398;
  t6436 = t2243*t6380;
  t6454 = -1.*t2398*t6389;
  t6468 = t6436 + t6454;
  t6549 = -1.*t445*t632*t323;
  t6552 = -1.*t479*t1546;
  t6558 = t6549 + t6552;
  t6563 = t1752*t6558;
  t6565 = t6563 + t2472;
  t6568 = t1650*t6558;
  t6570 = -1.*t1752*t2195;
  t6572 = t6568 + t6570;
  t6575 = -1.*t2398*t6565;
  t6577 = t2243*t6572;
  t6578 = t6575 + t6577;
  t6591 = t2243*t6565;
  t6594 = t2398*t6572;
  t6597 = t6591 + t6594;
  t6523 = 0.049*t479;
  t6529 = t6523 + t1301;
  t6533 = -0.09*t479;
  t6534 = -0.049*t632;
  t6537 = t6533 + t6534;
  t6626 = -1.*t632*t4958;
  t6628 = -1.*t479*t5032;
  t6630 = t6626 + t6628;
  t6633 = t1752*t6630;
  t6634 = t6633 + t5198;
  t6644 = t1650*t6630;
  t6652 = -1.*t1752*t5158;
  t6670 = t6644 + t6652;
  t6673 = -1.*t2398*t6634;
  t6675 = t2243*t6670;
  t6677 = t6673 + t6675;
  t6689 = t2243*t6634;
  t6697 = t2398*t6670;
  t6702 = t6689 + t6697;
  t6743 = -1.11344*t3164;
  t6755 = -0.02159*t3362;
  t6762 = t6743 + t6755;
  t6773 = 0.02159*t3164;
  t6779 = t6773 + t3367;
  t6869 = -1.*t1650*t5119;
  t6870 = t6869 + t6652;
  t6878 = t2243*t6870;
  t6879 = t6878 + t5274;
  t6881 = t2398*t6870;
  t6882 = t2398*t5245;
  t6884 = t6881 + t6882;
  t6839 = -0.21*t1650;
  t6840 = -0.049*t1752;
  t6841 = t6839 + t6840;
  t6843 = 0.049*t1650;
  t6850 = t6843 + t1773;
  t6864 = 0.01841*t2243;
  t6865 = 0.70544*t2398;
  t6866 = t6864 + t6865;
  t6874 = 0.70544*t2243;
  t6876 = t6874 + t2414;
  t6926 = -1.*t1650*t1980;
  t6933 = t6926 + t6570;
  t6936 = t2243*t6933;
  t6938 = t6936 + t3479;
  t6940 = t2398*t6933;
  t6942 = t2398*t3105;
  t6943 = t6940 + t6942;
  t6976 = t28*t306*t207;
  t6977 = -1.*t76*t323;
  t6978 = t6976 + t6977;
  t6986 = t445*t28*t632;
  t6987 = t479*t6978;
  t6988 = t6986 + t6987;
  t6991 = t445*t479*t28;
  t6992 = -1.*t632*t6978;
  t6994 = t6991 + t6992;
  t6996 = -1.*t1752*t6988;
  t6997 = t1650*t6994;
  t6998 = t6996 + t6997;
  t7000 = t1650*t6988;
  t7002 = t1752*t6994;
  t7003 = t7000 + t7002;
  t7006 = t2398*t6998;
  t7007 = t2243*t7003;
  t7010 = t7006 + t7007;
  t7013 = t2243*t6998;
  t7014 = -1.*t2398*t7003;
  t7018 = t7013 + t7014;
  t7045 = -1.*t76*t3868*t28;
  t7046 = -1.*t3868*t306*t207*t323;
  t7047 = t7045 + t7046;
  t7049 = -1.*t445*t3868*t632*t323;
  t7050 = t479*t7047;
  t7053 = t7049 + t7050;
  t7055 = -1.*t445*t479*t3868*t323;
  t7056 = -1.*t632*t7047;
  t7057 = t7055 + t7056;
  t7059 = -1.*t1752*t7053;
  t7060 = t1650*t7057;
  t7061 = t7059 + t7060;
  t7063 = t1650*t7053;
  t7064 = t1752*t7057;
  t7065 = t7063 + t7064;
  t7068 = t2398*t7061;
  t7069 = t2243*t7065;
  t7070 = t7068 + t7069;
  t7074 = t2243*t7061;
  t7075 = -1.*t2398*t7065;
  t7076 = t7074 + t7075;
  p_output1[0]=t3858*t5759*(-0.049*t323*t3898 - 1.*t268*t323*t3898 - 0.135*t4043 - 1.*t4043*t410 - 1.*t1302*t4220 - 1.*t1874*t4303 - 1.*t2107*t4368 - 1.*t2416*t4483 - 1.*t2991*t4568 - 1.*t3374*t4694 - 1.*t3621*t4753 + 1.11344*(-1.*t3362*t4694 + t3164*t4753) + 0.02159*(t3164*t4694 + t3362*t4753) + 0.1305*(-1.*t207*t323*t3898 + t4043*t76) - 1.*t3924*t797)*var2[3] + (t5494*t5759*(0.135*t28*t306 - 0.049*t323 - 1.*t268*t323 + t28*t306*t410 + t1302*t6978 + t1874*t6988 + t2107*t6994 + t2416*t6998 + t2991*t7003 + t3374*t7010 + t3621*t7018 - 1.11344*(-1.*t3362*t7010 + t3164*t7018) - 0.02159*(t3164*t7010 + t3362*t7018) - 0.1305*(t207*t323 + t28*t306*t76) + t28*t445*t797) + t3858*t5759*(0.049*t28*t3868 + t268*t28*t3868 + 0.135*t306*t323*t3868 + t306*t323*t3868*t410 - 1.*t1302*t7047 - 1.*t1874*t7053 - 1.*t2107*t7057 - 1.*t2416*t7061 - 1.*t2991*t7065 - 1.*t3374*t7070 - 1.*t3621*t7076 + 1.11344*(-1.*t3362*t7070 + t3164*t7076) + 0.02159*(t3164*t7070 + t3362*t7076) + 0.1305*(t207*t28*t3868 - 1.*t306*t323*t3868*t76) + t323*t3868*t445*t797))*var2[4] + (t5494*t5759*(0.135*t323*t445 + t1302*t207*t323*t445 + t323*t410*t445 + t1874*t5821 + t2107*t5847 + t2416*t5888 + t2991*t5902 + t3374*t5950 + t3621*t5963 - 1.11344*(-1.*t3362*t5950 + t3164*t5963) - 0.02159*(t3164*t5950 + t3362*t5963) - 0.1305*t323*t445*t76 - 1.*t306*t323*t797) + t3858*t5759*(-0.135*t4958 - 1.*t1302*t207*t4958 - 1.*t410*t4958 - 1.*t1874*t6090 - 1.*t2107*t6110 - 1.*t2416*t6121 - 1.*t2991*t6126 - 1.*t3374*t6138 - 1.*t3621*t6163 + 1.11344*(-1.*t3362*t6138 + t3164*t6163) + 0.02159*(t3164*t6138 + t3362*t6163) + 0.1305*t4958*t76 - 1.*t6044*t797))*var2[14] + (t5494*t5759*(t1246*t1302 + t1246*t1874*t479 + t28*t6237 + t306*t323*t6244 + t2416*t6263 + t2991*t6269 + t3374*t6286 + t3621*t6312 - 1.11344*(-1.*t3362*t6286 + t3164*t6312) - 0.02159*(t3164*t6286 + t3362*t6312) - 1.*t1246*t2107*t632 - 0.1305*(-1.*t207*t306*t323 - 1.*t28*t76)) + t3858*t5759*(-1.*t1302*t5081 - 1.*t1874*t479*t5081 + t323*t3868*t6237 - 1.*t4920*t6244 + t2107*t5081*t632 - 1.*t2416*t6380 - 1.*t2991*t6389 - 1.*t3374*t6426 - 1.*t3621*t6468 + 1.11344*(-1.*t3362*t6426 + t3164*t6468) + 0.02159*(t3164*t6426 + t3362*t6468) + 0.1305*(-1.*t207*t4920 + t323*t3868*t76)))*var2[15] + (t5494*t5759*(t1874*t2195 + t323*t445*t6529 + t1546*t6537 + t2107*t6558 + t2991*t6565 + t2416*t6572 + t3621*t6578 + t3374*t6597 - 0.02159*(t3362*t6578 + t3164*t6597) - 1.11344*(t3164*t6578 - 1.*t3362*t6597)) + t3858*t5759*(-1.*t1874*t5158 - 1.*t4958*t6529 - 1.*t5032*t6537 - 1.*t2107*t6630 - 1.*t2991*t6634 - 1.*t2416*t6670 - 1.*t3621*t6677 - 1.*t3374*t6702 + 0.02159*(t3362*t6677 + t3164*t6702) + 1.11344*(t3164*t6677 - 1.*t3362*t6702)))*var2[16] + (t3858*t5759*(-1.*t2991*t5220 - 1.*t5119*t6841 - 1.*t5158*t6850 - 1.*t5220*t6866 - 1.*t2416*t6870 - 1.*t5245*t6876 - 1.*t3621*t6879 - 1.*t3374*t6884 + 0.02159*(t3362*t6879 + t3164*t6884) + 1.11344*(t3164*t6879 - 1.*t3362*t6884)) + t5494*t5759*(t2599*t2991 + t1980*t6841 + t2195*t6850 + t2599*t6866 + t3105*t6876 + t2416*t6933 + t3621*t6938 + t3374*t6943 - 0.02159*(t3362*t6938 + t3164*t6943) - 1.11344*(t3164*t6938 - 1.*t3362*t6943)))*var2[17] + (t5494*t5759*(-1.11344*(-1.*t3164*t3590 - 1.*t3362*t3656) - 0.02159*t3746 + t3590*t6762 + t3656*t6779) + t3858*t5759*(1.11344*(-1.*t3164*t5291 - 1.*t3362*t5342) + 0.02159*t5398 - 1.*t5291*t6762 - 1.*t5342*t6779))*var2[21];
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

void rightLegPitchVelocity_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}




