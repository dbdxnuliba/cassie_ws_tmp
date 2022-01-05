/*
 * Automatically Generated from Mathematica.
 * Thu 23 Dec 2021 17:03:14 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "dp_pelvis_LeftStance.hh"
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
  double t1263;
  double t174;
  double t1342;
  double t1363;
  double t1472;
  double t1191;
  double t2565;
  double t2629;
  double t2576;
  double t2638;
  double t2677;
  double t2717;
  double t2925;
  double t2556;
  double t2948;
  double t2660;
  double t2755;
  double t3466;
  double t3471;
  double t3481;
  double t2928;
  double t2967;
  double t2993;
  double t3025;
  double t3034;
  double t3055;
  double t3072;
  double t3098;
  double t3472;
  double t3482;
  double t3487;
  double t3554;
  double t3489;
  double t3589;
  double t3495;
  double t3497;
  double t3193;
  double t3209;
  double t2627;
  double t2694;
  double t3559;
  double t3479;
  double t3591;
  double t3605;
  double t3606;
  double t3490;
  double t3609;
  double t3610;
  double t3621;
  double t3622;
  double t2559;
  double t2562;
  double t3518;
  double t3536;
  double t3541;
  double t3639;
  double t3585;
  double t3586;
  double t3587;
  double t3640;
  double t2879;
  double t2931;
  double t3120;
  double t3126;
  double t3723;
  double t3724;
  double t3727;
  double t3754;
  double t3757;
  double t3761;
  double t3764;
  double t3779;
  double t3790;
  double t3793;
  double t3796;
  double t3799;
  double t3802;
  double t3808;
  double t3818;
  double t3821;
  double t3824;
  double t3725;
  double t3730;
  double t3755;
  double t3759;
  double t3762;
  double t3770;
  double t3848;
  double t3782;
  double t3791;
  double t3794;
  double t3797;
  double t3859;
  double t3800;
  double t3803;
  double t3720;
  double t3836;
  double t3838;
  double t3740;
  double t3840;
  double t3842;
  double t3844;
  double t3846;
  double t3851;
  double t3853;
  double t3855;
  double t3857;
  double t3862;
  double t3867;
  double t3689;
  double t3692;
  double t3693;
  double t3696;
  double t3697;
  double t3698;
  double t3699;
  double t3700;
  double t3701;
  double t3702;
  double t3703;
  double t3704;
  double t3705;
  double t3710;
  double t3721;
  double t3752;
  double t3813;
  double t3819;
  double t3822;
  double t3825;
  double t3849;
  double t3860;
  double t3923;
  double t3760;
  double t3928;
  double t3792;
  double t3932;
  double t3804;
  double t3940;
  double t3843;
  double t3944;
  double t3854;
  double t3949;
  double t3871;
  double t3503;
  double t3885;
  double t3891;
  double t3897;
  double t3906;
  double t3910;
  double t3914;
  double t3922;
  double t3756;
  double t3927;
  double t3789;
  double t3931;
  double t3801;
  double t3939;
  double t3841;
  double t3943;
  double t3852;
  double t3948;
  double t3863;
  double t3641;
  double t3960;
  double t3884;
  double t3961;
  double t3890;
  double t3962;
  double t3896;
  double t3963;
  double t3905;
  double t3964;
  double t3909;
  double t3965;
  double t3913;
  double t3921;
  double t3753;
  double t3937;
  double t3938;
  double t3850;
  double t3861;
  double t3667;
  double t3668;
  double t3878;
  double t3880;
  double t3975;
  double t3976;
  double t3888;
  double t3889;
  double t3977;
  double t3894;
  double t3895;
  double t3899;
  double t3978;
  double t3903;
  double t3904;
  double t3979;
  double t3980;
  double t3763;
  double t3773;
  double t3929;
  double t3930;
  double t3935;
  double t3820;
  double t3835;
  double t3845;
  double t3847;
  double t3945;
  double t3946;
  double t3947;
  double t3515;
  double t3544;
  double t3572;
  double t3577;
  double t3607;
  double t3608;
  double t3611;
  double t3874;
  double t3876;
  double t3877;
  double t3990;
  double t3881;
  double t3886;
  double t3887;
  double t3907;
  double t3908;
  double t3875;
  double t3879;
  double t3882;
  double t3883;
  double t3892;
  double t3893;
  double t3898;
  double t3900;
  double t3901;
  double t3902;
  double t3911;
  double t3912;
  double t3920;
  double t3924;
  double t3925;
  double t3926;
  double t3933;
  double t3934;
  double t3936;
  double t3941;
  double t3942;
  double t3950;
  double t3951;
  double t3952;
  double t3953;
  double t3719;
  double t3722;
  double t3726;
  double t3739;
  double t3795;
  double t3798;
  double t3817;
  double t3823;
  double t3837;
  double t3839;
  double t3856;
  double t3858;
  double t3872;
  double t3915;
  double t3919;
  double t3954;
  double t3955;
  double t3957;
  double t3959;
  double t3966;
  double t3967;
  double t3968;
  double t3972;
  double t3974;
  double t3981;
  double t3982;
  double t3983;
  double t3987;
  double t3989;
  double t3991;
  double t3992;
  double t3993;
  double t3994;
  double t3995;
  double t3999;
  double t4001;
  double t4002;
  double t4003;
  double t4004;
  double t4005;
  double t4006;
  double t4007;
  double t4008;
  double t4009;
  double t4010;
  double t4014;
  double t4016;
  double t4017;
  double t4018;
  t1263 = Cos(var1[5]);
  t174 = Cos(var1[3]);
  t1342 = Sin(var1[3]);
  t1363 = Sin(var1[4]);
  t1472 = Sin(var1[5]);
  t1191 = Cos(var1[4]);
  t2565 = var1[9] + var1[8];
  t2629 = var1[9] + var1[11] + var1[8];
  t2576 = Cos(t2565);
  t2638 = Cos(t2629);
  t2677 = Sin(t2565);
  t2717 = Sin(t2629);
  t2925 = Cos(var1[6]);
  t2556 = Sin(var1[6]);
  t2948 = Sin(var1[7]);
  t2660 = 40800.*t2638;
  t2755 = 4000.*t2717;
  t3466 = -1.*var1[7];
  t3471 = var1[9] + var1[11] + t3466 + var1[8];
  t3481 = var1[9] + var1[11] + var1[7] + var1[8];
  t2928 = Cos(var1[7]);
  t2967 = 6741.*t2576;
  t2993 = -4000.*t2638;
  t3025 = Sin(var1[8]);
  t3034 = 12000.*t3025;
  t3055 = 49544.*t2677;
  t3072 = 40800.*t2717;
  t3098 = t2967 + t2993 + t3034 + t3055 + t3072;
  t3472 = Cos(t3471);
  t3482 = Cos(t3481);
  t3487 = 40800.*t3482;
  t3554 = var1[9] + t3466 + var1[8];
  t3489 = Sin(t3471);
  t3589 = var1[9] + var1[7] + var1[8];
  t3495 = Sin(t3481);
  t3497 = 4000.*t3495;
  t3193 = 4000.*t2638;
  t3209 = -40800.*t2717;
  t2627 = 49544.*t2576;
  t2694 = -6741.*t2677;
  t3559 = Cos(t3554);
  t3479 = 40800.*t3472;
  t3591 = Cos(t3589);
  t3605 = 49544.*t3591;
  t3606 = Sin(t3554);
  t3490 = 4000.*t3489;
  t3609 = Sin(t3589);
  t3610 = -6741.*t3609;
  t3621 = -6741.*t2576;
  t3622 = -49544.*t2677;
  t2559 = Cos(var1[8]);
  t2562 = 12000.*t2559;
  t3518 = -1.*var1[8];
  t3536 = var1[7] + t3518;
  t3541 = Cos(t3536);
  t3639 = 49544.*t3559;
  t3585 = var1[7] + var1[8];
  t3586 = Cos(t3585);
  t3587 = 12000.*t3586;
  t3640 = -6741.*t3606;
  t2879 = 9000. + t2562 + t2627 + t2660 + t2694 + t2755;
  t2931 = 450.*t2928;
  t3120 = -1.*t2948*t3098;
  t3126 = t2931 + t3120;
  t3723 = -1.*var1[6];
  t3724 = var1[9] + t3723 + var1[8];
  t3727 = var1[9] + var1[11] + t3723 + var1[8];
  t3754 = var1[9] + var1[6] + var1[8];
  t3757 = var1[9] + var1[11] + var1[6] + var1[8];
  t3761 = var1[9] + t3723 + t3466 + var1[8];
  t3764 = var1[9] + var1[11] + t3723 + t3466 + var1[8];
  t3779 = var1[9] + var1[6] + t3466 + var1[8];
  t3790 = var1[9] + var1[11] + var1[6] + t3466 + var1[8];
  t3793 = var1[9] + t3723 + var1[7] + var1[8];
  t3796 = var1[9] + var1[11] + t3723 + var1[7] + var1[8];
  t3799 = var1[9] + var1[6] + var1[7] + var1[8];
  t3802 = var1[9] + var1[11] + var1[6] + var1[7] + var1[8];
  t3808 = var1[6] + t3466;
  t3818 = var1[6] + var1[7];
  t3821 = var1[6] + t3466 + t3518;
  t3824 = var1[6] + var1[7] + t3518;
  t3725 = Cos(t3724);
  t3730 = Cos(t3727);
  t3755 = Cos(t3754);
  t3759 = Cos(t3757);
  t3762 = Cos(t3761);
  t3770 = Cos(t3764);
  t3848 = var1[6] + t3466 + var1[8];
  t3782 = Cos(t3779);
  t3791 = Cos(t3790);
  t3794 = Cos(t3793);
  t3797 = Cos(t3796);
  t3859 = var1[6] + var1[7] + var1[8];
  t3800 = Cos(t3799);
  t3803 = Cos(t3802);
  t3720 = var1[6] + t3518;
  t3836 = Sin(t3724);
  t3838 = Sin(t3727);
  t3740 = var1[6] + var1[8];
  t3840 = Sin(t3754);
  t3842 = Sin(t3757);
  t3844 = Sin(t3761);
  t3846 = Sin(t3764);
  t3851 = Sin(t3779);
  t3853 = Sin(t3790);
  t3855 = Sin(t3793);
  t3857 = Sin(t3796);
  t3862 = Sin(t3799);
  t3867 = Sin(t3802);
  t3689 = 6741.*t3559;
  t3692 = -4000.*t3472;
  t3693 = 6741.*t3591;
  t3696 = -4000.*t3482;
  t3697 = 900.*t2948;
  t3698 = Sin(t3536);
  t3699 = -12000.*t3698;
  t3700 = 49544.*t3606;
  t3701 = 40800.*t3489;
  t3702 = Sin(t3585);
  t3703 = 12000.*t3702;
  t3704 = 49544.*t3609;
  t3705 = 40800.*t3495;
  t3710 = t3689 + t3692 + t3693 + t3696 + t3697 + t3699 + t3700 + t3701 + t3703 + t3704 + t3705;
  t3721 = Cos(t3720);
  t3752 = Cos(t3740);
  t3813 = Sin(t3808);
  t3819 = Sin(t3818);
  t3822 = Sin(t3821);
  t3825 = Sin(t3824);
  t3849 = Sin(t3848);
  t3860 = Sin(t3859);
  t3923 = 81600.*t3730;
  t3760 = -81600.*t3759;
  t3928 = -4000.*t3770;
  t3792 = -4000.*t3791;
  t3932 = 4000.*t3797;
  t3804 = 4000.*t3803;
  t3940 = 8000.*t3838;
  t3843 = -8000.*t3842;
  t3944 = 40800.*t3846;
  t3854 = 40800.*t3853;
  t3949 = -40800.*t3857;
  t3871 = -40800.*t3867;
  t3503 = t3479 + t3487 + t3490 + t3497;
  t3885 = 8000.*t3759;
  t3891 = -40800.*t3791;
  t3897 = 40800.*t3803;
  t3906 = -81600.*t3842;
  t3910 = -4000.*t3853;
  t3914 = 4000.*t3867;
  t3922 = 99088.*t3725;
  t3756 = -99088.*t3755;
  t3927 = 6741.*t3762;
  t3789 = 6741.*t3782;
  t3931 = -6741.*t3794;
  t3801 = -6741.*t3800;
  t3939 = -13482.*t3836;
  t3841 = 13482.*t3840;
  t3943 = 49544.*t3844;
  t3852 = 49544.*t3851;
  t3948 = -49544.*t3855;
  t3863 = -49544.*t3862;
  t3641 = t3639 + t3479 + t3605 + t3487 + t3640 + t3490 + t3610 + t3497;
  t3960 = 8000.*t3730;
  t3884 = -13482.*t3755;
  t3961 = 40800.*t3770;
  t3890 = -49544.*t3782;
  t3962 = -40800.*t3797;
  t3896 = 49544.*t3800;
  t3963 = -81600.*t3838;
  t3905 = -99088.*t3840;
  t3964 = 4000.*t3846;
  t3909 = 6741.*t3851;
  t3965 = -4000.*t3857;
  t3913 = -6741.*t3862;
  t3921 = 24000.*t3721;
  t3753 = -24000.*t3752;
  t3937 = 12000.*t3822;
  t3938 = -12000.*t3825;
  t3850 = 12000.*t3849;
  t3861 = -12000.*t3860;
  t3667 = 12000.*t3541;
  t3668 = t3667 + t3639 + t3479 + t3587 + t3605 + t3487 + t3640 + t3490 + t3610 + t3497;
  t3878 = Cos(t3821);
  t3880 = Cos(t3824);
  t3975 = -13482.*t3725;
  t3976 = 49544.*t3762;
  t3888 = Cos(t3848);
  t3889 = -12000.*t3888;
  t3977 = -49544.*t3794;
  t3894 = Cos(t3859);
  t3895 = 12000.*t3894;
  t3899 = Sin(t3720);
  t3978 = -99088.*t3836;
  t3903 = Sin(t3740);
  t3904 = -24000.*t3903;
  t3979 = -6741.*t3844;
  t3980 = 6741.*t3855;
  t3763 = -6741.*t3762;
  t3773 = 4000.*t3770;
  t3929 = -6741.*t3782;
  t3930 = 4000.*t3791;
  t3935 = 900.*t3813;
  t3820 = -900.*t3819;
  t3835 = 12000.*t3825;
  t3845 = -49544.*t3844;
  t3847 = -40800.*t3846;
  t3945 = -12000.*t3849;
  t3946 = -49544.*t3851;
  t3947 = -40800.*t3853;
  t3515 = 900.*t2928;
  t3544 = -12000.*t3541;
  t3572 = -49544.*t3559;
  t3577 = -40800.*t3472;
  t3607 = 6741.*t3606;
  t3608 = -4000.*t3489;
  t3611 = t3515 + t3544 + t3572 + t3577 + t3587 + t3605 + t3487 + t3607 + t3608 + t3610 + t3497;
  t3874 = Cos(t3808);
  t3876 = Cos(t3818);
  t3877 = 900.*t3876;
  t3990 = -12000.*t3878;
  t3881 = -12000.*t3880;
  t3886 = -49544.*t3762;
  t3887 = -40800.*t3770;
  t3907 = 6741.*t3844;
  t3908 = -4000.*t3846;
  t3875 = 900.*t3874;
  t3879 = 12000.*t3878;
  t3882 = 13482.*t3725;
  t3883 = -8000.*t3730;
  t3892 = 49544.*t3794;
  t3893 = 40800.*t3797;
  t3898 = -36000.*t2556;
  t3900 = -24000.*t3899;
  t3901 = 99088.*t3836;
  t3902 = 81600.*t3838;
  t3911 = -6741.*t3855;
  t3912 = 4000.*t3857;
  t3920 = 36000.*t2925;
  t3924 = 24000.*t3752;
  t3925 = 99088.*t3755;
  t3926 = 81600.*t3759;
  t3933 = 6741.*t3800;
  t3934 = -4000.*t3803;
  t3936 = 900.*t3819;
  t3941 = -13482.*t3840;
  t3942 = 8000.*t3842;
  t3950 = 12000.*t3860;
  t3951 = 49544.*t3862;
  t3952 = 40800.*t3867;
  t3953 = t3920 + t3921 + t3922 + t3923 + t3924 + t3925 + t3926 + t3927 + t3928 + t3929 + t3930 + t3931 + t3932 + t3933 + t3934 + t3935 + t3936 + t3937 + t3938 + t3939 + t3940 + t3941 + t3942 + t3943 + t3944 + t3945 + t3946 + t3947 + t3948 + t3949 + t3950 + t3951 + t3952;
  t3719 = -36000.*t2925;
  t3722 = -24000.*t3721;
  t3726 = -99088.*t3725;
  t3739 = -81600.*t3730;
  t3795 = 6741.*t3794;
  t3798 = -4000.*t3797;
  t3817 = -900.*t3813;
  t3823 = -12000.*t3822;
  t3837 = 13482.*t3836;
  t3839 = -8000.*t3838;
  t3856 = 49544.*t3855;
  t3858 = 40800.*t3857;
  t3872 = t3719 + t3722 + t3726 + t3739 + t3753 + t3756 + t3760 + t3763 + t3773 + t3789 + t3792 + t3795 + t3798 + t3801 + t3804 + t3817 + t3820 + t3823 + t3835 + t3837 + t3839 + t3841 + t3843 + t3845 + t3847 + t3850 + t3852 + t3854 + t3856 + t3858 + t3861 + t3863 + t3871;
  t3915 = t3875 + t3877 + t3879 + t3881 + t3882 + t3883 + t3884 + t3885 + t3886 + t3887 + t3889 + t3890 + t3891 + t3892 + t3893 + t3895 + t3896 + t3897 + t3898 + t3900 + t3901 + t3902 + t3904 + t3905 + t3906 + t3907 + t3908 + t3909 + t3910 + t3911 + t3912 + t3913 + t3914;
  t3919 = 2.*t1191*t3710;
  t3954 = -1.*t1363*t3953;
  t3955 = t3919 + t3954;
  t3957 = t3923 + t3760 + t3928 + t3792 + t3932 + t3804 + t3940 + t3843 + t3944 + t3854 + t3949 + t3871;
  t3959 = 2.*t1363*t3503;
  t3966 = t3960 + t3885 + t3961 + t3891 + t3962 + t3897 + t3963 + t3906 + t3964 + t3910 + t3965 + t3914;
  t3967 = t1191*t3966;
  t3968 = t3959 + t3967;
  t3972 = t3922 + t3923 + t3756 + t3760 + t3927 + t3928 + t3789 + t3792 + t3931 + t3932 + t3801 + t3804 + t3939 + t3940 + t3841 + t3843 + t3943 + t3944 + t3852 + t3854 + t3948 + t3949 + t3863 + t3871;
  t3974 = 2.*t1363*t3641;
  t3981 = t3975 + t3960 + t3884 + t3885 + t3976 + t3961 + t3890 + t3891 + t3977 + t3962 + t3896 + t3897 + t3978 + t3963 + t3905 + t3906 + t3979 + t3964 + t3909 + t3910 + t3980 + t3965 + t3913 + t3914;
  t3982 = t1191*t3981;
  t3983 = t3974 + t3982;
  t3987 = t3921 + t3922 + t3923 + t3753 + t3756 + t3760 + t3927 + t3928 + t3789 + t3792 + t3931 + t3932 + t3801 + t3804 + t3937 + t3938 + t3939 + t3940 + t3841 + t3843 + t3943 + t3944 + t3850 + t3852 + t3854 + t3948 + t3949 + t3861 + t3863 + t3871;
  t3989 = 2.*t1363*t3668;
  t3991 = 12000.*t3880;
  t3992 = 24000.*t3899;
  t3993 = t3990 + t3991 + t3975 + t3960 + t3884 + t3885 + t3976 + t3961 + t3889 + t3890 + t3891 + t3977 + t3962 + t3895 + t3896 + t3897 + t3992 + t3978 + t3963 + t3904 + t3905 + t3906 + t3979 + t3964 + t3909 + t3910 + t3980 + t3965 + t3913 + t3914;
  t3994 = t1191*t3993;
  t3995 = t3989 + t3994;
  t3999 = t3763 + t3773 + t3929 + t3930 + t3931 + t3932 + t3801 + t3804 + t3935 + t3820 + t3937 + t3835 + t3845 + t3847 + t3945 + t3946 + t3947 + t3948 + t3949 + t3861 + t3863 + t3871;
  t4001 = 2.*t1363*t3611;
  t4002 = -900.*t3874;
  t4003 = 12000.*t3888;
  t4004 = 49544.*t3782;
  t4005 = 40800.*t3791;
  t4006 = -6741.*t3851;
  t4007 = 4000.*t3853;
  t4008 = t4002 + t3877 + t3990 + t3881 + t3886 + t3887 + t4003 + t4004 + t4005 + t3977 + t3962 + t3895 + t3896 + t3897 + t3907 + t3908 + t4006 + t4007 + t3980 + t3965 + t3913 + t3914;
  t4009 = t1191*t4008;
  t4010 = t4001 + t4009;
  t4014 = -54000. + t3875 + t3877 + t3879 + t3881 + t3882 + t3883 + t3884 + t3885 + t3886 + t3887 + t3889 + t3890 + t3891 + t3892 + t3893 + t3895 + t3896 + t3897 + t3898 + t3900 + t3901 + t3902 + t3904 + t3905 + t3906 + t3907 + t3908 + t3909 + t3910 + t3911 + t3912 + t3913 + t3914;
  t4016 = 2.*t1363*t3710;
  t4017 = t1191*t3953;
  t4018 = t4016 + t4017;
  p_output1[0]=(-1.*t1263*t1342*t1363 - 1.*t1472*t174)*var2[3] + t1191*t1263*t174*var2[4] + (-1.*t1263*t1342 - 1.*t1363*t1472*t174)*var2[5];
  p_output1[1]=(-1.*t1342*t1363*t1472 + t1263*t174)*var2[3] + t1191*t1472*t174*var2[4] + (-1.*t1342*t1472 + t1263*t1363*t174)*var2[5];
  p_output1[2]=var2[7];
  p_output1[3]=5.e-6*(2.*t1191*(t2879*t2925 + t2556*t3126) + t1363*t3710)*var2[4] + 1.e-5*t1363*(-1.*t2556*t2879 + t2925*t3126)*var2[6] + 5.e-6*(2.*t1363*t2556*(-450.*t2948 - 1.*t2928*t3098) - 1.*t1191*t3611)*var2[7] + 5.e-6*(2.*t1363*(-1.*t2556*(t2562 + t2627 + t2660 + t2694 + t2755)*t2948 + t2925*(-12000.*t3025 + t3193 + t3209 + t3621 + t3622)) - 1.*t1191*t3668)*var2[8] + 5.e-6*(2.*t1363*(-1.*t2556*(t2627 + t2660 + t2694 + t2755)*t2948 + t2925*(t3193 + t3209 + t3621 + t3622)) - 1.*t1191*t3641)*var2[9] + 5.e-6*(2.*t1363*(-1.*t2556*(t2660 + t2755)*t2948 + t2925*(t3193 + t3209)) - 1.*t1191*t3503)*var2[11];
  p_output1[4]=2.5e-6*(-1.*t1342*t4014 - 1.*t174*t4018)*var2[3] - 2.5e-6*t1342*t3955*var2[4] + 2.5e-6*(t174*t3872 - 1.*t1191*t1342*t3915)*var2[6] + 2.5e-6*(t174*t3999 - 1.*t1342*t4010)*var2[7] + 2.5e-6*(t174*t3987 - 1.*t1342*t3995)*var2[8] + 2.5e-6*(t174*t3972 - 1.*t1342*t3983)*var2[9] + 2.5e-6*(t174*t3957 - 1.*t1342*t3968)*var2[11];
  p_output1[5]=2.5e-6*(t174*t4014 - 1.*t1342*t4018)*var2[3] + 2.5e-6*t174*t3955*var2[4] + 2.5e-6*(t1342*t3872 + t1191*t174*t3915)*var2[6] + 2.5e-6*(t1342*t3999 + t174*t4010)*var2[7] + 2.5e-6*(t1342*t3987 + t174*t3995)*var2[8] + 2.5e-6*(t1342*t3972 + t174*t3983)*var2[9] + 2.5e-6*(t1342*t3957 + t174*t3968)*var2[11];
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

void dp_pelvis_LeftStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}




