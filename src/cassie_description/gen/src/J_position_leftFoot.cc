/*
 * Automatically Generated from Mathematica.
 * Sun 7 Nov 2021 14:25:58 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "J_position_leftFoot.hh"
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
  double t321;
  double t795;
  double t802;
  double t803;
  double t806;
  double t1236;
  double t1283;
  double t1334;
  double t1464;
  double t938;
  double t1158;
  double t1215;
  double t1539;
  double t1580;
  double t1581;
  double t1583;
  double t1605;
  double t1575;
  double t1576;
  double t1578;
  double t1635;
  double t1647;
  double t1663;
  double t1721;
  double t1722;
  double t1723;
  double t1726;
  double t1748;
  double t1755;
  double t1783;
  double t1814;
  double t1818;
  double t1839;
  double t1889;
  double t1899;
  double t1904;
  double t1913;
  double t1931;
  double t1932;
  double t1936;
  double t1945;
  double t1946;
  double t1947;
  double t1950;
  double t1951;
  double t1955;
  double t1961;
  double t1978;
  double t1981;
  double t1990;
  double t2017;
  double t2023;
  double t2027;
  double t2037;
  double t2041;
  double t2042;
  double t2044;
  double t2055;
  double t2056;
  double t2062;
  double t2092;
  double t2107;
  double t2112;
  double t337;
  double t718;
  double t1387;
  double t1516;
  double t1523;
  double t1545;
  double t1549;
  double t1550;
  double t2167;
  double t2172;
  double t2180;
  double t1596;
  double t1613;
  double t1619;
  double t1690;
  double t1713;
  double t1718;
  double t1724;
  double t1732;
  double t1737;
  double t2204;
  double t2205;
  double t2206;
  double t2208;
  double t2210;
  double t2211;
  double t1804;
  double t1810;
  double t1812;
  double t1909;
  double t1924;
  double t1929;
  double t2214;
  double t2215;
  double t2216;
  double t2218;
  double t2223;
  double t2225;
  double t1941;
  double t1943;
  double t1944;
  double t1960;
  double t1967;
  double t1972;
  double t2228;
  double t2229;
  double t2231;
  double t2233;
  double t2235;
  double t2237;
  double t1994;
  double t2003;
  double t2011;
  double t2043;
  double t2045;
  double t2053;
  double t2239;
  double t2241;
  double t2242;
  double t2246;
  double t2247;
  double t2254;
  double t2075;
  double t2080;
  double t2085;
  double t2256;
  double t2257;
  double t2258;
  double t2268;
  double t2275;
  double t2281;
  double t2369;
  double t2375;
  double t2380;
  double t2398;
  double t2402;
  double t2403;
  double t2410;
  double t2416;
  double t2423;
  double t2430;
  double t2435;
  double t2441;
  double t2453;
  double t2461;
  double t2462;
  double t2473;
  double t2474;
  double t2475;
  double t2477;
  double t2478;
  double t2480;
  double t2483;
  double t2486;
  double t2487;
  double t2490;
  double t2496;
  double t2500;
  double t2527;
  double t2528;
  double t2534;
  double t2542;
  double t2548;
  double t2553;
  double t2568;
  double t2574;
  double t2581;
  double t2583;
  double t2585;
  double t2588;
  double t2599;
  double t2606;
  double t2613;
  double t2626;
  double t2635;
  double t2637;
  double t2641;
  double t2642;
  double t2645;
  double t2657;
  double t2662;
  double t2668;
  double t2680;
  double t2681;
  double t2682;
  double t2718;
  double t2719;
  double t2720;
  double t2724;
  double t2725;
  double t2726;
  double t2729;
  double t2732;
  double t2733;
  double t2736;
  double t2737;
  double t2738;
  double t2742;
  double t2743;
  double t2749;
  double t2764;
  double t2768;
  double t2776;
  double t2789;
  double t2798;
  double t2801;
  double t2806;
  double t2809;
  double t2813;
  double t2827;
  double t2832;
  double t2837;
  double t2874;
  double t2875;
  double t2876;
  double t2880;
  double t2882;
  double t2884;
  double t2886;
  double t2887;
  double t2888;
  double t2890;
  double t2894;
  double t2895;
  double t2897;
  double t2898;
  double t2900;
  double t2903;
  double t2904;
  double t2905;
  double t2909;
  double t2910;
  double t2911;
  double t2915;
  double t2916;
  double t2920;
  double t2976;
  double t2980;
  double t2985;
  double t2991;
  double t2996;
  double t2997;
  double t2999;
  double t3000;
  double t3001;
  double t3004;
  double t3005;
  double t3006;
  double t3008;
  double t3009;
  double t3010;
  double t3014;
  double t3015;
  double t3016;
  double t3018;
  double t3019;
  double t3021;
  double t3025;
  double t3026;
  double t3027;
  double t3029;
  double t3031;
  double t3034;
  double t3074;
  double t3075;
  double t3076;
  double t3090;
  double t3097;
  double t3098;
  double t3101;
  double t3103;
  double t3105;
  double t3108;
  double t3109;
  double t3110;
  double t3116;
  double t3117;
  double t3119;
  double t3121;
  double t3123;
  double t3124;
  double t3127;
  double t3128;
  double t3130;
  double t3133;
  double t3134;
  double t3135;
  double t3137;
  double t3138;
  double t3139;
  double t3162;
  double t3163;
  double t3165;
  double t3176;
  double t3177;
  double t3178;
  double t3181;
  double t3182;
  double t3185;
  double t3187;
  double t3191;
  double t3192;
  double t3196;
  double t3198;
  double t3199;
  double t3202;
  double t3203;
  double t3204;
  double t3207;
  double t3211;
  double t3212;
  double t3153;
  double t3154;
  double t3155;
  double t3157;
  double t3158;
  double t2195;
  double t2198;
  double t2201;
  double t3244;
  double t3245;
  double t3246;
  double t3248;
  double t3249;
  double t3251;
  double t3253;
  double t3254;
  double t3255;
  double t3257;
  double t3258;
  double t3259;
  double t3262;
  double t3263;
  double t3264;
  double t3266;
  double t3267;
  double t3268;
  double t3286;
  double t3287;
  double t3288;
  double t3292;
  double t3296;
  double t3297;
  double t3312;
  double t3313;
  double t3316;
  double t3321;
  double t3324;
  double t3325;
  double t3328;
  double t3331;
  double t3333;
  double t3338;
  double t3339;
  double t3342;
  double t3344;
  double t3345;
  double t3346;
  double t3348;
  double t3349;
  double t3351;
  double t3366;
  double t3367;
  double t3368;
  double t3374;
  double t3375;
  double t3376;
  double t3381;
  double t3382;
  double t3383;
  double t3386;
  double t3392;
  double t3393;
  double t3396;
  double t3399;
  double t3402;
  double t3406;
  double t3407;
  double t3408;
  double t3410;
  double t3411;
  double t3413;
  double t3416;
  double t3417;
  double t3418;
  double t3420;
  double t3423;
  double t3424;
  double t3363;
  double t3364;
  double t3369;
  double t3371;
  double t3372;
  double t3447;
  double t3448;
  double t3449;
  double t3452;
  double t3454;
  double t3460;
  double t3461;
  double t3462;
  double t3466;
  double t3467;
  double t3468;
  double t3471;
  double t3476;
  double t3477;
  double t3479;
  double t3480;
  double t3481;
  double t3486;
  double t3487;
  double t3492;
  double t3508;
  double t3510;
  double t3512;
  double t3516;
  double t3517;
  double t3518;
  double t3520;
  double t3521;
  double t3523;
  double t3526;
  double t3527;
  double t3529;
  double t3531;
  double t3532;
  double t3533;
  double t3538;
  double t3540;
  double t3541;
  double t3543;
  double t3545;
  double t3547;
  double t3549;
  double t3550;
  double t3551;
  double t3554;
  double t3555;
  double t3557;
  double t3574;
  double t3576;
  double t3577;
  double t3583;
  double t3584;
  double t3587;
  double t3590;
  double t3593;
  double t3595;
  double t3601;
  double t3603;
  double t3605;
  double t3609;
  double t3613;
  double t3614;
  double t3616;
  double t3619;
  double t3620;
  double t3621;
  double t3571;
  double t3572;
  double t3573;
  double t3580;
  double t3581;
  double t3641;
  double t3642;
  double t3644;
  double t3645;
  double t3647;
  double t3649;
  double t3650;
  double t3652;
  double t3654;
  double t3655;
  double t3659;
  double t3661;
  double t3663;
  double t3675;
  double t3677;
  double t3678;
  double t3683;
  double t3685;
  double t3689;
  double t3691;
  double t3694;
  double t3695;
  double t3697;
  double t3700;
  double t3701;
  double t3702;
  double t3704;
  double t3705;
  double t3707;
  double t3710;
  double t3711;
  double t3712;
  double t3735;
  double t3737;
  double t3738;
  double t3742;
  double t3743;
  double t3745;
  double t3746;
  double t3748;
  double t3750;
  double t3751;
  double t3753;
  double t3754;
  double t3755;
  double t3728;
  double t3729;
  double t3731;
  double t3733;
  double t3734;
  double t3770;
  double t3771;
  double t3775;
  double t3776;
  double t3778;
  double t3779;
  double t3780;
  double t3796;
  double t3797;
  double t3798;
  double t3800;
  double t3801;
  double t3804;
  double t3805;
  double t3810;
  double t3811;
  double t3812;
  double t3815;
  double t3816;
  double t3817;
  double t3838;
  double t3839;
  double t3840;
  double t3850;
  double t3852;
  double t3854;
  double t3855;
  double t3830;
  double t3834;
  double t3836;
  double t3847;
  double t3848;
  double t3878;
  double t3879;
  double t2322;
  double t3891;
  double t3892;
  double t3893;
  double t3897;
  double t3898;
  double t3901;
  double t3903;
  double t3858;
  double t3922;
  double t3923;
  double t3924;
  double t3864;
  double t3915;
  double t3917;
  double t3919;
  double t3920;
  double t3921;
  double t3881;
  double t2328;
  double t2336;
  double t3905;
  double t3945;
  double t3946;
  double t3947;
  double t3910;
  t321 = Cos(var1[6]);
  t795 = Sin(var1[3]);
  t802 = Cos(var1[3]);
  t803 = Cos(var1[4]);
  t806 = Sin(var1[6]);
  t1236 = Cos(var1[7]);
  t1283 = -1.*t1236;
  t1334 = 1. + t1283;
  t1464 = Sin(var1[7]);
  t938 = -1.*t321*t795;
  t1158 = -1.*t802*t803*t806;
  t1215 = t938 + t1158;
  t1539 = Sin(var1[4]);
  t1580 = Cos(var1[8]);
  t1581 = -1.*t1580;
  t1583 = 1. + t1581;
  t1605 = Sin(var1[8]);
  t1575 = t802*t1236*t1539;
  t1576 = t1215*t1464;
  t1578 = t1575 + t1576;
  t1635 = -1.*t802*t803*t321;
  t1647 = t795*t806;
  t1663 = t1635 + t1647;
  t1721 = Cos(var1[9]);
  t1722 = -1.*t1721;
  t1723 = 1. + t1722;
  t1726 = Sin(var1[9]);
  t1748 = t1580*t1578;
  t1755 = t1663*t1605;
  t1783 = t1748 + t1755;
  t1814 = t1580*t1663;
  t1818 = -1.*t1578*t1605;
  t1839 = t1814 + t1818;
  t1889 = Cos(var1[10]);
  t1899 = -1.*t1889;
  t1904 = 1. + t1899;
  t1913 = Sin(var1[10]);
  t1931 = -1.*t1726*t1783;
  t1932 = t1721*t1839;
  t1936 = t1931 + t1932;
  t1945 = t1721*t1783;
  t1946 = t1726*t1839;
  t1947 = t1945 + t1946;
  t1950 = Cos(var1[11]);
  t1951 = -1.*t1950;
  t1955 = 1. + t1951;
  t1961 = Sin(var1[11]);
  t1978 = t1913*t1936;
  t1981 = t1889*t1947;
  t1990 = t1978 + t1981;
  t2017 = t1889*t1936;
  t2023 = -1.*t1913*t1947;
  t2027 = t2017 + t2023;
  t2037 = Cos(var1[13]);
  t2041 = -1.*t2037;
  t2042 = 1. + t2041;
  t2044 = Sin(var1[13]);
  t2055 = -1.*t1961*t1990;
  t2056 = t1950*t2027;
  t2062 = t2055 + t2056;
  t2092 = t1950*t1990;
  t2107 = t1961*t2027;
  t2112 = t2092 + t2107;
  t337 = -1.*t321;
  t718 = 1. + t337;
  t1387 = 0.135*t1334;
  t1516 = 0.049*t1464;
  t1523 = t1387 + t1516;
  t1545 = -0.049*t1334;
  t1549 = 0.135*t1464;
  t1550 = t1545 + t1549;
  t2167 = t802*t321;
  t2172 = -1.*t803*t795*t806;
  t2180 = t2167 + t2172;
  t1596 = -0.049*t1583;
  t1613 = -0.09*t1605;
  t1619 = t1596 + t1613;
  t1690 = -0.09*t1583;
  t1713 = 0.049*t1605;
  t1718 = t1690 + t1713;
  t1724 = -0.049*t1723;
  t1732 = -0.21*t1726;
  t1737 = t1724 + t1732;
  t2204 = t1236*t795*t1539;
  t2205 = t2180*t1464;
  t2206 = t2204 + t2205;
  t2208 = -1.*t803*t321*t795;
  t2210 = -1.*t802*t806;
  t2211 = t2208 + t2210;
  t1804 = -0.21*t1723;
  t1810 = 0.049*t1726;
  t1812 = t1804 + t1810;
  t1909 = -0.27068*t1904;
  t1924 = 0.00159*t1913;
  t1929 = t1909 + t1924;
  t2214 = t1580*t2206;
  t2215 = t2211*t1605;
  t2216 = t2214 + t2215;
  t2218 = t1580*t2211;
  t2223 = -1.*t2206*t1605;
  t2225 = t2218 + t2223;
  t1941 = -0.00159*t1904;
  t1943 = -0.27068*t1913;
  t1944 = t1941 + t1943;
  t1960 = 0.01841*t1955;
  t1967 = -0.70544*t1961;
  t1972 = t1960 + t1967;
  t2228 = -1.*t1726*t2216;
  t2229 = t1721*t2225;
  t2231 = t2228 + t2229;
  t2233 = t1721*t2216;
  t2235 = t1726*t2225;
  t2237 = t2233 + t2235;
  t1994 = -0.70544*t1955;
  t2003 = -0.01841*t1961;
  t2011 = t1994 + t2003;
  t2043 = -1.11344*t2042;
  t2045 = 0.02159*t2044;
  t2053 = t2043 + t2045;
  t2239 = t1913*t2231;
  t2241 = t1889*t2237;
  t2242 = t2239 + t2241;
  t2246 = t1889*t2231;
  t2247 = -1.*t1913*t2237;
  t2254 = t2246 + t2247;
  t2075 = -0.02159*t2042;
  t2080 = -1.11344*t2044;
  t2085 = t2075 + t2080;
  t2256 = -1.*t1961*t2242;
  t2257 = t1950*t2254;
  t2258 = t2256 + t2257;
  t2268 = t1950*t2242;
  t2275 = t1961*t2254;
  t2281 = t2268 + t2275;
  t2369 = -1.*t1236*t1539;
  t2375 = t803*t806*t1464;
  t2380 = t2369 + t2375;
  t2398 = t1580*t2380;
  t2402 = t803*t321*t1605;
  t2403 = t2398 + t2402;
  t2410 = t803*t321*t1580;
  t2416 = -1.*t2380*t1605;
  t2423 = t2410 + t2416;
  t2430 = -1.*t1726*t2403;
  t2435 = t1721*t2423;
  t2441 = t2430 + t2435;
  t2453 = t1721*t2403;
  t2461 = t1726*t2423;
  t2462 = t2453 + t2461;
  t2473 = t1913*t2441;
  t2474 = t1889*t2462;
  t2475 = t2473 + t2474;
  t2477 = t1889*t2441;
  t2478 = -1.*t1913*t2462;
  t2480 = t2477 + t2478;
  t2483 = -1.*t1961*t2475;
  t2486 = t1950*t2480;
  t2487 = t2483 + t2486;
  t2490 = t1950*t2475;
  t2496 = t1961*t2480;
  t2500 = t2490 + t2496;
  t2527 = t803*t1236*t795;
  t2528 = t795*t1539*t806*t1464;
  t2534 = t2527 + t2528;
  t2542 = t1580*t2534;
  t2548 = t321*t795*t1539*t1605;
  t2553 = t2542 + t2548;
  t2568 = t321*t1580*t795*t1539;
  t2574 = -1.*t2534*t1605;
  t2581 = t2568 + t2574;
  t2583 = -1.*t1726*t2553;
  t2585 = t1721*t2581;
  t2588 = t2583 + t2585;
  t2599 = t1721*t2553;
  t2606 = t1726*t2581;
  t2613 = t2599 + t2606;
  t2626 = t1913*t2588;
  t2635 = t1889*t2613;
  t2637 = t2626 + t2635;
  t2641 = t1889*t2588;
  t2642 = -1.*t1913*t2613;
  t2645 = t2641 + t2642;
  t2657 = -1.*t1961*t2637;
  t2662 = t1950*t2645;
  t2668 = t2657 + t2662;
  t2680 = t1950*t2637;
  t2681 = t1961*t2645;
  t2682 = t2680 + t2681;
  t2718 = -1.*t802*t803*t1236;
  t2719 = -1.*t802*t1539*t806*t1464;
  t2720 = t2718 + t2719;
  t2724 = t1580*t2720;
  t2725 = -1.*t802*t321*t1539*t1605;
  t2726 = t2724 + t2725;
  t2729 = -1.*t802*t321*t1580*t1539;
  t2732 = -1.*t2720*t1605;
  t2733 = t2729 + t2732;
  t2736 = -1.*t1726*t2726;
  t2737 = t1721*t2733;
  t2738 = t2736 + t2737;
  t2742 = t1721*t2726;
  t2743 = t1726*t2733;
  t2749 = t2742 + t2743;
  t2764 = t1913*t2738;
  t2768 = t1889*t2749;
  t2776 = t2764 + t2768;
  t2789 = t1889*t2738;
  t2798 = -1.*t1913*t2749;
  t2801 = t2789 + t2798;
  t2806 = -1.*t1961*t2776;
  t2809 = t1950*t2801;
  t2813 = t2806 + t2809;
  t2827 = t1950*t2776;
  t2832 = t1961*t2801;
  t2837 = t2827 + t2832;
  t2874 = t321*t1580*t1539*t1464;
  t2875 = -1.*t1539*t806*t1605;
  t2876 = t2874 + t2875;
  t2880 = -1.*t1580*t1539*t806;
  t2882 = -1.*t321*t1539*t1464*t1605;
  t2884 = t2880 + t2882;
  t2886 = -1.*t1726*t2876;
  t2887 = t1721*t2884;
  t2888 = t2886 + t2887;
  t2890 = t1721*t2876;
  t2894 = t1726*t2884;
  t2895 = t2890 + t2894;
  t2897 = t1913*t2888;
  t2898 = t1889*t2895;
  t2900 = t2897 + t2898;
  t2903 = t1889*t2888;
  t2904 = -1.*t1913*t2895;
  t2905 = t2903 + t2904;
  t2909 = -1.*t1961*t2900;
  t2910 = t1950*t2905;
  t2911 = t2909 + t2910;
  t2915 = t1950*t2900;
  t2916 = t1961*t2905;
  t2920 = t2915 + t2916;
  t2976 = -1.*t802*t321;
  t2980 = t803*t795*t806;
  t2985 = t2976 + t2980;
  t2991 = t1580*t2211*t1464;
  t2996 = t2985*t1605;
  t2997 = t2991 + t2996;
  t2999 = t1580*t2985;
  t3000 = -1.*t2211*t1464*t1605;
  t3001 = t2999 + t3000;
  t3004 = -1.*t1726*t2997;
  t3005 = t1721*t3001;
  t3006 = t3004 + t3005;
  t3008 = t1721*t2997;
  t3009 = t1726*t3001;
  t3010 = t3008 + t3009;
  t3014 = t1913*t3006;
  t3015 = t1889*t3010;
  t3016 = t3014 + t3015;
  t3018 = t1889*t3006;
  t3019 = -1.*t1913*t3010;
  t3021 = t3018 + t3019;
  t3025 = -1.*t1961*t3016;
  t3026 = t1950*t3021;
  t3027 = t3025 + t3026;
  t3029 = t1950*t3016;
  t3031 = t1961*t3021;
  t3034 = t3029 + t3031;
  t3074 = t802*t803*t321;
  t3075 = -1.*t795*t806;
  t3076 = t3074 + t3075;
  t3090 = t1580*t3076*t1464;
  t3097 = t1215*t1605;
  t3098 = t3090 + t3097;
  t3101 = t1580*t1215;
  t3103 = -1.*t3076*t1464*t1605;
  t3105 = t3101 + t3103;
  t3108 = -1.*t1726*t3098;
  t3109 = t1721*t3105;
  t3110 = t3108 + t3109;
  t3116 = t1721*t3098;
  t3117 = t1726*t3105;
  t3119 = t3116 + t3117;
  t3121 = t1913*t3110;
  t3123 = t1889*t3119;
  t3124 = t3121 + t3123;
  t3127 = t1889*t3110;
  t3128 = -1.*t1913*t3119;
  t3130 = t3127 + t3128;
  t3133 = -1.*t1961*t3124;
  t3134 = t1950*t3130;
  t3135 = t3133 + t3134;
  t3137 = t1950*t3124;
  t3138 = t1961*t3130;
  t3139 = t3137 + t3138;
  t3162 = t1236*t1539*t806;
  t3163 = -1.*t803*t1464;
  t3165 = t3162 + t3163;
  t3176 = -1.*t1580*t1726*t3165;
  t3177 = -1.*t1721*t3165*t1605;
  t3178 = t3176 + t3177;
  t3181 = t1721*t1580*t3165;
  t3182 = -1.*t1726*t3165*t1605;
  t3185 = t3181 + t3182;
  t3187 = t1913*t3178;
  t3191 = t1889*t3185;
  t3192 = t3187 + t3191;
  t3196 = t1889*t3178;
  t3198 = -1.*t1913*t3185;
  t3199 = t3196 + t3198;
  t3202 = -1.*t1961*t3192;
  t3203 = t1950*t3199;
  t3204 = t3202 + t3203;
  t3207 = t1950*t3192;
  t3211 = t1961*t3199;
  t3212 = t3207 + t3211;
  t3153 = 0.135*t1236;
  t3154 = -0.049*t1464;
  t3155 = t3153 + t3154;
  t3157 = 0.049*t1236;
  t3158 = t3157 + t1549;
  t2195 = t1236*t2180;
  t2198 = -1.*t795*t1539*t1464;
  t2201 = t2195 + t2198;
  t3244 = -1.*t1580*t1726*t2201;
  t3245 = -1.*t1721*t2201*t1605;
  t3246 = t3244 + t3245;
  t3248 = t1721*t1580*t2201;
  t3249 = -1.*t1726*t2201*t1605;
  t3251 = t3248 + t3249;
  t3253 = t1913*t3246;
  t3254 = t1889*t3251;
  t3255 = t3253 + t3254;
  t3257 = t1889*t3246;
  t3258 = -1.*t1913*t3251;
  t3259 = t3257 + t3258;
  t3262 = -1.*t1961*t3255;
  t3263 = t1950*t3259;
  t3264 = t3262 + t3263;
  t3266 = t1950*t3255;
  t3267 = t1961*t3259;
  t3268 = t3266 + t3267;
  t3286 = t321*t795;
  t3287 = t802*t803*t806;
  t3288 = t3286 + t3287;
  t3292 = t1236*t3288;
  t3296 = t802*t1539*t1464;
  t3297 = t3292 + t3296;
  t3312 = -1.*t1580*t1726*t3297;
  t3313 = -1.*t1721*t3297*t1605;
  t3316 = t3312 + t3313;
  t3321 = t1721*t1580*t3297;
  t3324 = -1.*t1726*t3297*t1605;
  t3325 = t3321 + t3324;
  t3328 = t1913*t3316;
  t3331 = t1889*t3325;
  t3333 = t3328 + t3331;
  t3338 = t1889*t3316;
  t3339 = -1.*t1913*t3325;
  t3342 = t3338 + t3339;
  t3344 = -1.*t1961*t3333;
  t3345 = t1950*t3342;
  t3346 = t3344 + t3345;
  t3348 = t1950*t3333;
  t3349 = t1961*t3342;
  t3351 = t3348 + t3349;
  t3366 = t803*t1236;
  t3367 = t1539*t806*t1464;
  t3368 = t3366 + t3367;
  t3374 = -1.*t1580*t3368;
  t3375 = -1.*t321*t1539*t1605;
  t3376 = t3374 + t3375;
  t3381 = t321*t1580*t1539;
  t3382 = -1.*t3368*t1605;
  t3383 = t3381 + t3382;
  t3386 = t1726*t3376;
  t3392 = t1721*t3383;
  t3393 = t3386 + t3392;
  t3396 = t1721*t3376;
  t3399 = -1.*t1726*t3383;
  t3402 = t3396 + t3399;
  t3406 = -1.*t1913*t3393;
  t3407 = t1889*t3402;
  t3408 = t3406 + t3407;
  t3410 = t1889*t3393;
  t3411 = t1913*t3402;
  t3413 = t3410 + t3411;
  t3416 = t1961*t3408;
  t3417 = t1950*t3413;
  t3418 = t3416 + t3417;
  t3420 = t1950*t3408;
  t3423 = -1.*t1961*t3413;
  t3424 = t3420 + t3423;
  t3363 = 0.049*t1580;
  t3364 = t3363 + t1613;
  t3369 = -0.09*t1580;
  t3371 = -0.049*t1605;
  t3372 = t3369 + t3371;
  t3447 = -1.*t1580*t2206;
  t3448 = -1.*t2211*t1605;
  t3449 = t3447 + t3448;
  t3452 = t1726*t3449;
  t3454 = t3452 + t2229;
  t3460 = t1721*t3449;
  t3461 = -1.*t1726*t2225;
  t3462 = t3460 + t3461;
  t3466 = -1.*t1913*t3454;
  t3467 = t1889*t3462;
  t3468 = t3466 + t3467;
  t3471 = t1889*t3454;
  t3476 = t1913*t3462;
  t3477 = t3471 + t3476;
  t3479 = t1961*t3468;
  t3480 = t1950*t3477;
  t3481 = t3479 + t3480;
  t3486 = t1950*t3468;
  t3487 = -1.*t1961*t3477;
  t3492 = t3486 + t3487;
  t3508 = -1.*t802*t1236*t1539;
  t3510 = t3288*t1464;
  t3512 = t3508 + t3510;
  t3516 = -1.*t1580*t3512;
  t3517 = -1.*t3076*t1605;
  t3518 = t3516 + t3517;
  t3520 = t1580*t3076;
  t3521 = -1.*t3512*t1605;
  t3523 = t3520 + t3521;
  t3526 = t1726*t3518;
  t3527 = t1721*t3523;
  t3529 = t3526 + t3527;
  t3531 = t1721*t3518;
  t3532 = -1.*t1726*t3523;
  t3533 = t3531 + t3532;
  t3538 = -1.*t1913*t3529;
  t3540 = t1889*t3533;
  t3541 = t3538 + t3540;
  t3543 = t1889*t3529;
  t3545 = t1913*t3533;
  t3547 = t3543 + t3545;
  t3549 = t1961*t3541;
  t3550 = t1950*t3547;
  t3551 = t3549 + t3550;
  t3554 = t1950*t3541;
  t3555 = -1.*t1961*t3547;
  t3557 = t3554 + t3555;
  t3574 = t1580*t3368;
  t3576 = t321*t1539*t1605;
  t3577 = t3574 + t3576;
  t3583 = -1.*t1726*t3577;
  t3584 = t3583 + t3392;
  t3587 = -1.*t1721*t3577;
  t3590 = t3587 + t3399;
  t3593 = -1.*t1913*t3584;
  t3595 = t1889*t3590;
  t3601 = t3593 + t3595;
  t3603 = t1889*t3584;
  t3605 = t1913*t3590;
  t3609 = t3603 + t3605;
  t3613 = t1961*t3601;
  t3614 = t1950*t3609;
  t3616 = t3613 + t3614;
  t3619 = t1950*t3601;
  t3620 = -1.*t1961*t3609;
  t3621 = t3619 + t3620;
  t3571 = -0.21*t1721;
  t3572 = -0.049*t1726;
  t3573 = t3571 + t3572;
  t3580 = 0.049*t1721;
  t3581 = t3580 + t1732;
  t3641 = -1.*t1721*t2216;
  t3642 = t3641 + t3461;
  t3644 = -1.*t1913*t2231;
  t3645 = t1889*t3642;
  t3647 = t3644 + t3645;
  t3649 = t1913*t3642;
  t3650 = t2246 + t3649;
  t3652 = t1961*t3647;
  t3654 = t1950*t3650;
  t3655 = t3652 + t3654;
  t3659 = t1950*t3647;
  t3661 = -1.*t1961*t3650;
  t3663 = t3659 + t3661;
  t3675 = t1580*t3512;
  t3677 = t3076*t1605;
  t3678 = t3675 + t3677;
  t3683 = -1.*t1726*t3678;
  t3685 = t3683 + t3527;
  t3689 = -1.*t1721*t3678;
  t3691 = t3689 + t3532;
  t3694 = -1.*t1913*t3685;
  t3695 = t1889*t3691;
  t3697 = t3694 + t3695;
  t3700 = t1889*t3685;
  t3701 = t1913*t3691;
  t3702 = t3700 + t3701;
  t3704 = t1961*t3697;
  t3705 = t1950*t3702;
  t3707 = t3704 + t3705;
  t3710 = t1950*t3697;
  t3711 = -1.*t1961*t3702;
  t3712 = t3710 + t3711;
  t3735 = t1721*t3577;
  t3737 = t1726*t3383;
  t3738 = t3735 + t3737;
  t3742 = -1.*t1889*t3738;
  t3743 = t3593 + t3742;
  t3745 = -1.*t1913*t3738;
  t3746 = t3603 + t3745;
  t3748 = t1961*t3743;
  t3750 = t1950*t3746;
  t3751 = t3748 + t3750;
  t3753 = t1950*t3743;
  t3754 = -1.*t1961*t3746;
  t3755 = t3753 + t3754;
  t3728 = 0.00159*t1889;
  t3729 = t3728 + t1943;
  t3731 = -0.27068*t1889;
  t3733 = -0.00159*t1913;
  t3734 = t3731 + t3733;
  t3770 = -1.*t1889*t2237;
  t3771 = t3644 + t3770;
  t3775 = t1961*t3771;
  t3776 = t3775 + t2257;
  t3778 = t1950*t3771;
  t3779 = -1.*t1961*t2254;
  t3780 = t3778 + t3779;
  t3796 = t1721*t3678;
  t3797 = t1726*t3523;
  t3798 = t3796 + t3797;
  t3800 = -1.*t1889*t3798;
  t3801 = t3694 + t3800;
  t3804 = -1.*t1913*t3798;
  t3805 = t3700 + t3804;
  t3810 = t1961*t3801;
  t3811 = t1950*t3805;
  t3812 = t3810 + t3811;
  t3815 = t1950*t3801;
  t3816 = -1.*t1961*t3805;
  t3817 = t3815 + t3816;
  t3838 = t1913*t3584;
  t3839 = t1889*t3738;
  t3840 = t3838 + t3839;
  t3850 = -1.*t1961*t3840;
  t3852 = t3850 + t3750;
  t3854 = -1.*t1950*t3840;
  t3855 = t3854 + t3754;
  t3830 = -0.70544*t1950;
  t3834 = 0.01841*t1961;
  t3836 = t3830 + t3834;
  t3847 = -0.01841*t1950;
  t3848 = t3847 + t1967;
  t3878 = -1.*t1950*t2242;
  t3879 = t3878 + t3779;
  t2322 = t2037*t2258;
  t3891 = t1913*t3685;
  t3892 = t1889*t3798;
  t3893 = t3891 + t3892;
  t3897 = -1.*t1961*t3893;
  t3898 = t3897 + t3811;
  t3901 = -1.*t1950*t3893;
  t3903 = t3901 + t3816;
  t3858 = -1.*t2044*t3852;
  t3922 = t1950*t3840;
  t3923 = t1961*t3746;
  t3924 = t3922 + t3923;
  t3864 = t2037*t3852;
  t3915 = 0.02159*t2037;
  t3917 = t3915 + t2080;
  t3919 = -1.11344*t2037;
  t3920 = -0.02159*t2044;
  t3921 = t3919 + t3920;
  t3881 = -1.*t2044*t2258;
  t2328 = -1.*t2044*t2281;
  t2336 = t2322 + t2328;
  t3905 = -1.*t2044*t3898;
  t3945 = t1950*t3893;
  t3946 = t1961*t3805;
  t3947 = t3945 + t3946;
  t3910 = t2037*t3898;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=0;
  p_output1[10]=t1215*t1523 + t1578*t1619 + t1663*t1718 + t1737*t1783 + t1812*t1839 + t1929*t1936 + t1944*t1947 + t1972*t1990 + t2011*t2027 + t2053*t2062 + t2085*t2112 + 0.0306*(t2044*t2062 + t2037*t2112) - 1.13106*(t2037*t2062 - 1.*t2044*t2112) - 0.135*t718*t795 + t1539*t1550*t802 + 0.1305*(t1215*t1236 - 1.*t1464*t1539*t802) + 0.135*t802*t803*t806;
  p_output1[11]=t1523*t2180 + 0.1305*t2201 + t1619*t2206 + t1718*t2211 + t1737*t2216 + t1812*t2225 + t1929*t2231 + t1944*t2237 + t1972*t2242 + t2011*t2254 + t2053*t2258 + t2085*t2281 + 0.0306*(t2044*t2258 + t2037*t2281) - 1.13106*t2336 + t1539*t1550*t795 + 0.135*t718*t802 + 0.135*t795*t803*t806;
  p_output1[12]=-1.*t1539*t1550 + t1619*t2380 + t1737*t2403 + t1812*t2423 + t1929*t2441 + t1944*t2462 + t1972*t2475 + t2011*t2480 + t2053*t2487 + t2085*t2500 + 0.0306*(t2044*t2487 + t2037*t2500) - 1.13106*(t2037*t2487 - 1.*t2044*t2500) + t1718*t321*t803 - 0.135*t803*t806 + t1523*t803*t806 + 0.1305*(t1464*t1539 + t1236*t803*t806);
  p_output1[13]=t1619*t2534 + t1737*t2553 + t1812*t2581 + t1929*t2588 + t1944*t2613 + t1972*t2637 + t2011*t2645 + t2053*t2668 + t2085*t2682 + 0.0306*(t2044*t2668 + t2037*t2682) - 1.13106*(t2037*t2668 - 1.*t2044*t2682) + t1539*t1718*t321*t795 + t1550*t795*t803 - 0.135*t1539*t795*t806 + t1523*t1539*t795*t806 + 0.1305*(-1.*t1464*t795*t803 + t1236*t1539*t795*t806);
  p_output1[14]=t1619*t2720 + t1737*t2726 + t1812*t2733 + t1929*t2738 + t1944*t2749 + t1972*t2776 + t2011*t2801 + t2053*t2813 + t2085*t2837 + 0.0306*(t2044*t2813 + t2037*t2837) - 1.13106*(t2037*t2813 - 1.*t2044*t2837) - 1.*t1539*t1718*t321*t802 - 1.*t1550*t802*t803 + 0.135*t1539*t802*t806 - 1.*t1523*t1539*t802*t806 + 0.1305*(t1464*t802*t803 - 1.*t1236*t1539*t802*t806);
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t1737*t2876 + t1812*t2884 + t1929*t2888 + t1944*t2895 + t1972*t2900 + t2011*t2905 + t2053*t2911 + t2085*t2920 + 0.0306*(t2044*t2911 + t2037*t2920) - 1.13106*(t2037*t2911 - 1.*t2044*t2920) - 0.135*t1539*t321 + 0.1305*t1236*t1539*t321 + t1523*t1539*t321 + t1464*t1539*t1619*t321 - 1.*t1539*t1718*t806;
  p_output1[19]=0.1305*t1236*t2211 + t1523*t2211 + t1464*t1619*t2211 + t1718*t2985 + t1737*t2997 + t1812*t3001 + t1929*t3006 + t1944*t3010 + t1972*t3016 + t2011*t3021 + t2053*t3027 + t2085*t3034 + 0.0306*(t2044*t3027 + t2037*t3034) - 1.13106*(t2037*t3027 - 1.*t2044*t3034) + 0.135*t321*t795*t803 + 0.135*t802*t806;
  p_output1[20]=t1215*t1718 + 0.1305*t1236*t3076 + t1523*t3076 + t1464*t1619*t3076 + t1737*t3098 + t1812*t3105 + t1929*t3110 + t1944*t3119 + t1972*t3124 + t2011*t3130 + t2053*t3135 + t2085*t3139 + 0.0306*(t2044*t3135 + t2037*t3139) - 1.13106*(t2037*t3135 - 1.*t2044*t3139) - 0.135*t321*t802*t803 + 0.135*t795*t806;
  p_output1[21]=t1619*t3165 + t1580*t1737*t3165 - 1.*t1605*t1812*t3165 + t1929*t3178 + t1944*t3185 + t1972*t3192 + t2011*t3199 + t2053*t3204 + t2085*t3212 + 0.0306*(t2044*t3204 + t2037*t3212) - 1.13106*(t2037*t3204 - 1.*t2044*t3212) + t3155*t803 + t1539*t3158*t806 + 0.1305*(-1.*t1236*t803 - 1.*t1464*t1539*t806);
  p_output1[22]=t1619*t2201 + t1580*t1737*t2201 - 1.*t1605*t1812*t2201 + t2180*t3158 + t1929*t3246 + t1944*t3251 + t1972*t3255 + t2011*t3259 + t2053*t3264 + t2085*t3268 + 0.0306*(t2044*t3264 + t2037*t3268) - 1.13106*(t2037*t3264 - 1.*t2044*t3268) + t1539*t3155*t795 + 0.1305*(-1.*t1464*t2180 - 1.*t1236*t1539*t795);
  p_output1[23]=t3158*t3288 + 0.1305*(t1575 - 1.*t1464*t3288) + t1619*t3297 + t1580*t1737*t3297 - 1.*t1605*t1812*t3297 + t1929*t3316 + t1944*t3325 + t1972*t3333 + t2011*t3342 + t2053*t3346 + t2085*t3351 + 0.0306*(t2044*t3346 + t2037*t3351) - 1.13106*(t2037*t3346 - 1.*t2044*t3351) - 1.*t1539*t3155*t802;
  p_output1[24]=t1539*t321*t3364 + t3368*t3372 + t1812*t3376 + t1737*t3383 + t1944*t3393 + t1929*t3402 + t2011*t3408 + t1972*t3413 + t2085*t3418 + t2053*t3424 - 1.13106*(-1.*t2044*t3418 + t2037*t3424) + 0.0306*(t2037*t3418 + t2044*t3424);
  p_output1[25]=t1737*t2225 + t2211*t3364 + t2206*t3372 + t1812*t3449 + t1944*t3454 + t1929*t3462 + t2011*t3468 + t1972*t3477 + t2085*t3481 + t2053*t3492 - 1.13106*(-1.*t2044*t3481 + t2037*t3492) + 0.0306*(t2037*t3481 + t2044*t3492);
  p_output1[26]=t3076*t3364 + t3372*t3512 + t1812*t3518 + t1737*t3523 + t1944*t3529 + t1929*t3533 + t2011*t3541 + t1972*t3547 + t2085*t3551 + t2053*t3557 - 1.13106*(-1.*t2044*t3551 + t2037*t3557) + 0.0306*(t2037*t3551 + t2044*t3557);
  p_output1[27]=t3573*t3577 + t3383*t3581 + t1944*t3584 + t1929*t3590 + t2011*t3601 + t1972*t3609 + t2085*t3616 + t2053*t3621 - 1.13106*(-1.*t2044*t3616 + t2037*t3621) + 0.0306*(t2037*t3616 + t2044*t3621);
  p_output1[28]=t1944*t2231 + t2216*t3573 + t2225*t3581 + t1929*t3642 + t2011*t3647 + t1972*t3650 + t2085*t3655 + t2053*t3663 - 1.13106*(-1.*t2044*t3655 + t2037*t3663) + 0.0306*(t2037*t3655 + t2044*t3663);
  p_output1[29]=t3523*t3581 + t3573*t3678 + t1944*t3685 + t1929*t3691 + t2011*t3697 + t1972*t3702 + t2085*t3707 + t2053*t3712 - 1.13106*(-1.*t2044*t3707 + t2037*t3712) + 0.0306*(t2037*t3707 + t2044*t3712);
  p_output1[30]=t3584*t3729 + t3734*t3738 + t2011*t3743 + t1972*t3746 + t2085*t3751 + t2053*t3755 - 1.13106*(-1.*t2044*t3751 + t2037*t3755) + 0.0306*(t2037*t3751 + t2044*t3755);
  p_output1[31]=t1972*t2254 + t2231*t3729 + t2237*t3734 + t2011*t3771 + t2085*t3776 + t2053*t3780 - 1.13106*(-1.*t2044*t3776 + t2037*t3780) + 0.0306*(t2037*t3776 + t2044*t3780);
  p_output1[32]=t3685*t3729 + t3734*t3798 + t2011*t3801 + t1972*t3805 + t2085*t3812 + t2053*t3817 - 1.13106*(-1.*t2044*t3812 + t2037*t3817) + 0.0306*(t2037*t3812 + t2044*t3817);
  p_output1[33]=t3836*t3840 + t3746*t3848 + t2085*t3852 + t2053*t3855 - 1.13106*(t2037*t3855 + t3858) + 0.0306*(t2044*t3855 + t3864);
  p_output1[34]=t2085*t2258 + t2242*t3836 + t2254*t3848 + t2053*t3879 + 0.0306*(t2322 + t2044*t3879) - 1.13106*(t2037*t3879 + t3881);
  p_output1[35]=t3805*t3848 + t3836*t3893 + t2085*t3898 + t2053*t3903 - 1.13106*(t2037*t3903 + t3905) + 0.0306*(t2044*t3903 + t3910);
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=t3852*t3917 + t3921*t3924 - 1.13106*(t3858 - 1.*t2037*t3924) + 0.0306*(t3864 - 1.*t2044*t3924);
  p_output1[40]=0.0306*t2336 - 1.13106*(-1.*t2037*t2281 + t3881) + t2258*t3917 + t2281*t3921;
  p_output1[41]=t3898*t3917 + t3921*t3947 - 1.13106*(t3905 - 1.*t2037*t3947) + 0.0306*(t3910 - 1.*t2044*t3947);
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
  p_output1[60]=0;
  p_output1[61]=0;
  p_output1[62]=0;
  p_output1[63]=0;
  p_output1[64]=0;
  p_output1[65]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 22, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#endif // MATLAB_MEX_FILE

namespace SymFunction
{

void J_position_leftFoot_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




