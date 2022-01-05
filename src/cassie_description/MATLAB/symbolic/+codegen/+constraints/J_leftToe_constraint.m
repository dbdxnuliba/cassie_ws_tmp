%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% J_leftToe_constraint
% 
% This file is automatically converted to matlab format from C code.
% Source symbolic expressions exported from FROST:
% 	 https://github.com/ayonga/frost-dev
% 
% Author: Jenna Reher (jreher@caltech.edu)
% Automatically generated on: November 07, 2021 T 02:27
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
function out = J_leftToe_constraint(var1)

  out = zeros(3, 22);

  p_output1 = zeros(66,1);


  t988 = cos(var1(4));
  t580 = cos(var1(7));
  t819 = cos(var1(6));
  t898 = sin(var1(4));
  t981 = -1.*t819*t898;
  t1449 = sin(var1(5));
  t1715 = sin(var1(6));
  t1823 = -1.*t988*t1449*t1715;
  t1954 = t981 + t1823;
  t2151 = cos(var1(5));
  t2424 = sin(var1(7));
  t6206 = cos(var1(8));
  t7386 = -1.*t6206;
  t9501 = 1. + t7386;
  t10116 = sin(var1(8));
  t3336 = t580*t1954;
  t3506 = -1.*t988*t2151*t2424;
  t4596 = t3336 + t3506;
  t10735 = t988*t819*t1449;
  t10751 = -1.*t898*t1715;
  t10757 = t10735 + t10751;
  t12031 = cos(var1(9));
  t12188 = -1.*t12031;
  t12740 = 1. + t12188;
  t12811 = sin(var1(9));
  t11991 = t6206*t10757;
  t11999 = t4596*t10116;
  t12019 = t11991 + t11999;
  t13618 = -1.*t988*t2151*t580;
  t13681 = -1.*t1954*t2424;
  t13811 = t13618 + t13681;
  t13947 = cos(var1(10));
  t14100 = -1.*t13947;
  t14127 = 1. + t14100;
  t14403 = sin(var1(10));
  t14436 = t12031*t12019;
  t14442 = t13811*t12811;
  t14445 = t14436 + t14442;
  t14481 = t12031*t13811;
  t14489 = -1.*t12019*t12811;
  t14496 = t14481 + t14489;
  t14504 = cos(var1(11));
  t14521 = -1.*t14504;
  t14533 = 1. + t14521;
  t14634 = sin(var1(11));
  t14721 = -1.*t14403*t14445;
  t14782 = t13947*t14496;
  t14792 = t14721 + t14782;
  t15116 = t13947*t14445;
  t15149 = t14403*t14496;
  t15151 = t15116 + t15149;
  t15182 = cos(var1(12));
  t15193 = -1.*t15182;
  t15198 = 1. + t15193;
  t15288 = sin(var1(12));
  t15472 = t14634*t14792;
  t15474 = t14504*t15151;
  t15477 = t15472 + t15474;
  t15513 = t14504*t14792;
  t15597 = -1.*t14634*t15151;
  t15630 = t15513 + t15597;
  t15681 = cos(var1(14));
  t15690 = -1.*t15681;
  t15694 = 1. + t15690;
  t15706 = sin(var1(14));
  t15714 = -1.*t15288*t15477;
  t15718 = t15182*t15630;
  t15722 = t15714 + t15718;
  t15959 = t15182*t15477;
  t15967 = t15288*t15630;
  t15975 = t15959 + t15967;
  t608 = -1.*t580;
  t647 = 1. + t608;
  t731 = 0.135*t647;
  t778 = 0. + t731;
  t2609 = -0.135*t2424;
  t3235 = 0. + t2609;
  t16079 = t988*t819;
  t16080 = -1.*t898*t1449*t1715;
  t16088 = t16079 + t16080;
  t10013 = 0.135*t9501;
  t10388 = 0.049*t10116;
  t10392 = 0. + t10013 + t10388;
  t10777 = -0.049*t9501;
  t10942 = 0.135*t10116;
  t10982 = 0. + t10777 + t10942;
  t16156 = t580*t16088;
  t16178 = -1.*t2151*t898*t2424;
  t16190 = t16156 + t16178;
  t16201 = t819*t898*t1449;
  t16202 = t988*t1715;
  t16203 = t16201 + t16202;
  t12810 = -0.049*t12740;
  t13472 = -0.09*t12811;
  t13480 = 0. + t12810 + t13472;
  t13839 = -0.09*t12740;
  t13842 = 0.049*t12811;
  t13844 = 0. + t13839 + t13842;
  t14351 = -0.049*t14127;
  t14429 = -0.21*t14403;
  t14432 = 0. + t14351 + t14429;
  t16211 = t6206*t16203;
  t16214 = t16190*t10116;
  t16270 = t16211 + t16214;
  t16273 = -1.*t2151*t580*t898;
  t16275 = -1.*t16088*t2424;
  t16308 = t16273 + t16275;
  t14450 = -0.21*t14127;
  t14467 = 0.049*t14403;
  t14477 = 0. + t14450 + t14467;
  t14535 = -0.27068*t14533;
  t14648 = 0.00159*t14634;
  t14688 = 0. + t14535 + t14648;
  t16324 = t12031*t16270;
  t16332 = t16308*t12811;
  t16336 = t16324 + t16332;
  t16338 = t12031*t16308;
  t16339 = -1.*t16270*t12811;
  t16398 = t16338 + t16339;
  t14887 = -0.00159*t14533;
  t14895 = -0.27068*t14634;
  t15053 = 0. + t14887 + t14895;
  t15283 = 0.01841*t15198;
  t15442 = -0.70544*t15288;
  t15471 = 0. + t15283 + t15442;
  t16460 = -1.*t14403*t16336;
  t16542 = t13947*t16398;
  t16551 = t16460 + t16542;
  t16615 = t13947*t16336;
  t16701 = t14403*t16398;
  t16726 = t16615 + t16701;
  t15509 = -0.70544*t15198;
  t15510 = -0.01841*t15288;
  t15511 = 0. + t15509 + t15510;
  t15702 = -1.11344*t15694;
  t15711 = 0.02159*t15706;
  t15713 = 0. + t15702 + t15711;
  t16757 = t14634*t16551;
  t16783 = t14504*t16726;
  t16795 = t16757 + t16783;
  t16804 = t14504*t16551;
  t16813 = -1.*t14634*t16726;
  t16820 = t16804 + t16813;
  t15821 = -0.02159*t15694;
  t15834 = -1.11344*t15706;
  t15926 = 0. + t15821 + t15834;
  t16824 = -1.*t15288*t16795;
  t16842 = t15182*t16820;
  t16854 = t16824 + t16842;
  t16873 = t15182*t16795;
  t16885 = t15288*t16820;
  t16900 = t16873 + t16885;
  t16948 = t580*t1449*t1715;
  t16949 = t2151*t2424;
  t16953 = t16948 + t16949;
  t17033 = -1.*t819*t6206*t1449;
  t17037 = t16953*t10116;
  t17088 = t17033 + t17037;
  t17121 = t2151*t580;
  t17122 = -1.*t1449*t1715*t2424;
  t17124 = t17121 + t17122;
  t17132 = t12031*t17088;
  t17161 = t17124*t12811;
  t17191 = t17132 + t17161;
  t17215 = t12031*t17124;
  t17222 = -1.*t17088*t12811;
  t17242 = t17215 + t17222;
  t17280 = -1.*t14403*t17191;
  t17287 = t13947*t17242;
  t17297 = t17280 + t17287;
  t17342 = t13947*t17191;
  t17366 = t14403*t17242;
  t17373 = t17342 + t17366;
  t17382 = t14634*t17297;
  t17386 = t14504*t17373;
  t17389 = t17382 + t17386;
  t17397 = t14504*t17297;
  t17398 = -1.*t14634*t17373;
  t17399 = t17397 + t17398;
  t17402 = -1.*t15288*t17389;
  t17405 = t15182*t17399;
  t17407 = t17402 + t17405;
  t17422 = t15182*t17389;
  t17423 = t15288*t17399;
  t17426 = t17422 + t17423;
  t17478 = -1.*t2151*t580*t898*t1715;
  t17481 = t898*t1449*t2424;
  t17488 = t17478 + t17481;
  t17519 = t2151*t819*t6206*t898;
  t17523 = t17488*t10116;
  t17526 = t17519 + t17523;
  t17538 = t580*t898*t1449;
  t17543 = t2151*t898*t1715*t2424;
  t17544 = t17538 + t17543;
  t17549 = t12031*t17526;
  t17553 = t17544*t12811;
  t17556 = t17549 + t17553;
  t17617 = t12031*t17544;
  t17631 = -1.*t17526*t12811;
  t17635 = t17617 + t17631;
  t17641 = -1.*t14403*t17556;
  t17642 = t13947*t17635;
  t17643 = t17641 + t17642;
  t17648 = t13947*t17556;
  t17649 = t14403*t17635;
  t17650 = t17648 + t17649;
  t17690 = t14634*t17643;
  t17708 = t14504*t17650;
  t17719 = t17690 + t17708;
  t17721 = t14504*t17643;
  t17723 = -1.*t14634*t17650;
  t17728 = t17721 + t17723;
  t17774 = -1.*t15288*t17719;
  t17786 = t15182*t17728;
  t17797 = t17774 + t17786;
  t17813 = t15182*t17719;
  t17817 = t15288*t17728;
  t17858 = t17813 + t17817;
  t17939 = t988*t2151*t580*t1715;
  t17940 = -1.*t988*t1449*t2424;
  t17941 = t17939 + t17940;
  t17976 = -1.*t988*t2151*t819*t6206;
  t17984 = t17941*t10116;
  t17985 = t17976 + t17984;
  t17988 = -1.*t988*t580*t1449;
  t17989 = -1.*t988*t2151*t1715*t2424;
  t17990 = t17988 + t17989;
  t17993 = t12031*t17985;
  t17994 = t17990*t12811;
  t17996 = t17993 + t17994;
  t17998 = t12031*t17990;
  t18001 = -1.*t17985*t12811;
  t18002 = t17998 + t18001;
  t18009 = -1.*t14403*t17996;
  t18010 = t13947*t18002;
  t18017 = t18009 + t18010;
  t18022 = t13947*t17996;
  t18023 = t14403*t18002;
  t18027 = t18022 + t18023;
  t18037 = t14634*t18017;
  t18040 = t14504*t18027;
  t18062 = t18037 + t18040;
  t18064 = t14504*t18017;
  t18065 = -1.*t14634*t18027;
  t18066 = t18064 + t18065;
  t18089 = -1.*t15288*t18062;
  t18099 = t15182*t18066;
  t18101 = t18089 + t18099;
  t18104 = t15182*t18062;
  t18105 = t15288*t18066;
  t18111 = t18104 + t18105;
  t18182 = -1.*t2151*t6206*t1715;
  t18209 = -1.*t2151*t819*t580*t10116;
  t18214 = t18182 + t18209;
  t18226 = t12031*t18214;
  t18230 = t2151*t819*t2424*t12811;
  t18232 = t18226 + t18230;
  t18237 = t2151*t819*t12031*t2424;
  t18238 = -1.*t18214*t12811;
  t18239 = t18237 + t18238;
  t18243 = -1.*t14403*t18232;
  t18244 = t13947*t18239;
  t18245 = t18243 + t18244;
  t18247 = t13947*t18232;
  t18248 = t14403*t18239;
  t18249 = t18247 + t18248;
  t18251 = t14634*t18245;
  t18253 = t14504*t18249;
  t18254 = t18251 + t18253;
  t18268 = t14504*t18245;
  t18269 = -1.*t14634*t18249;
  t18282 = t18268 + t18269;
  t18285 = -1.*t15288*t18254;
  t18290 = t15182*t18282;
  t18292 = t18285 + t18290;
  t18294 = t15182*t18254;
  t18296 = t15288*t18282;
  t18297 = t18294 + t18296;
  t18316 = -1.*t819*t898*t1449;
  t18317 = -1.*t988*t1715;
  t18319 = t18316 + t18317;
  t18336 = t6206*t16088;
  t18337 = t580*t18319*t10116;
  t18338 = t18336 + t18337;
  t18342 = t12031*t18338;
  t18356 = -1.*t18319*t2424*t12811;
  t18369 = t18342 + t18356;
  t18372 = -1.*t12031*t18319*t2424;
  t18373 = -1.*t18338*t12811;
  t18377 = t18372 + t18373;
  t18379 = -1.*t14403*t18369;
  t18381 = t13947*t18377;
  t18382 = t18379 + t18381;
  t18385 = t13947*t18369;
  t18386 = t14403*t18377;
  t18389 = t18385 + t18386;
  t18391 = t14634*t18382;
  t18397 = t14504*t18389;
  t18398 = t18391 + t18397;
  t18403 = t14504*t18382;
  t18404 = -1.*t14634*t18389;
  t18405 = t18403 + t18404;
  t18408 = -1.*t15288*t18398;
  t18410 = t15182*t18405;
  t18411 = t18408 + t18410;
  t18428 = t15182*t18398;
  t18429 = t15288*t18405;
  t18433 = t18428 + t18429;
  t18466 = t819*t898;
  t18470 = t988*t1449*t1715;
  t18471 = t18466 + t18470;
  t18497 = t6206*t18471;
  t18498 = t580*t10757*t10116;
  t18499 = t18497 + t18498;
  t18520 = t12031*t18499;
  t18522 = -1.*t10757*t2424*t12811;
  t18523 = t18520 + t18522;
  t18526 = -1.*t12031*t10757*t2424;
  t18527 = -1.*t18499*t12811;
  t18534 = t18526 + t18527;
  t18537 = -1.*t14403*t18523;
  t18538 = t13947*t18534;
  t18539 = t18537 + t18538;
  t18542 = t13947*t18523;
  t18543 = t14403*t18534;
  t18545 = t18542 + t18543;
  t18547 = t14634*t18539;
  t18552 = t14504*t18545;
  t18553 = t18547 + t18552;
  t18555 = t14504*t18539;
  t18556 = -1.*t14634*t18545;
  t18557 = t18555 + t18556;
  t18560 = -1.*t15288*t18553;
  t18561 = t15182*t18557;
  t18562 = t18560 + t18561;
  t18565 = t15182*t18553;
  t18566 = t15288*t18557;
  t18567 = t18565 + t18566;
  t18615 = t580*t1449;
  t18616 = t2151*t1715*t2424;
  t18617 = t18615 + t18616;
  t18627 = t2151*t580*t1715;
  t18628 = -1.*t1449*t2424;
  t18630 = t18627 + t18628;
  t18634 = t12031*t18617*t10116;
  t18636 = t18630*t12811;
  t18638 = t18634 + t18636;
  t18640 = t12031*t18630;
  t18641 = -1.*t18617*t10116*t12811;
  t18643 = t18640 + t18641;
  t18646 = -1.*t14403*t18638;
  t18649 = t13947*t18643;
  t18651 = t18646 + t18649;
  t18653 = t13947*t18638;
  t18655 = t14403*t18643;
  t18658 = t18653 + t18655;
  t18664 = t14634*t18651;
  t18669 = t14504*t18658;
  t18670 = t18664 + t18669;
  t18676 = t14504*t18651;
  t18677 = -1.*t14634*t18658;
  t18685 = t18676 + t18677;
  t18692 = -1.*t15288*t18670;
  t18696 = t15182*t18685;
  t18702 = t18692 + t18696;
  t18704 = t15182*t18670;
  t18706 = t15288*t18685;
  t18708 = t18704 + t18706;
  t18747 = -1.*t580*t16088;
  t18749 = t2151*t898*t2424;
  t18751 = t18747 + t18749;
  t18753 = t12031*t16308*t10116;
  t18755 = t18751*t12811;
  t18761 = t18753 + t18755;
  t18766 = t12031*t18751;
  t18767 = -1.*t16308*t10116*t12811;
  t18768 = t18766 + t18767;
  t18772 = -1.*t14403*t18761;
  t18773 = t13947*t18768;
  t18774 = t18772 + t18773;
  t18781 = t13947*t18761;
  t18784 = t14403*t18768;
  t18785 = t18781 + t18784;
  t18788 = t14634*t18774;
  t18790 = t14504*t18785;
  t18791 = t18788 + t18790;
  t18795 = t14504*t18774;
  t18800 = -1.*t14634*t18785;
  t18801 = t18795 + t18800;
  t18807 = -1.*t15288*t18791;
  t18808 = t15182*t18801;
  t18810 = t18807 + t18808;
  t18813 = t15182*t18791;
  t18814 = t15288*t18801;
  t18816 = t18813 + t18814;
  t18843 = t988*t2151*t580;
  t18844 = -1.*t18471*t2424;
  t18848 = t18843 + t18844;
  t18853 = -1.*t580*t18471;
  t18859 = t18853 + t3506;
  t18864 = t12031*t18848*t10116;
  t18865 = t18859*t12811;
  t18866 = t18864 + t18865;
  t18870 = t12031*t18859;
  t18871 = -1.*t18848*t10116*t12811;
  t18875 = t18870 + t18871;
  t18879 = -1.*t14403*t18866;
  t18880 = t13947*t18875;
  t18881 = t18879 + t18880;
  t18884 = t13947*t18866;
  t18885 = t14403*t18875;
  t18886 = t18884 + t18885;
  t18893 = t14634*t18881;
  t18894 = t14504*t18886;
  t18895 = t18893 + t18894;
  t18900 = t14504*t18881;
  t18903 = -1.*t14634*t18886;
  t18905 = t18900 + t18903;
  t18907 = -1.*t15288*t18895;
  t18909 = t15182*t18905;
  t18911 = t18907 + t18909;
  t18913 = t15182*t18895;
  t18915 = t15288*t18905;
  t18916 = t18913 + t18915;
  t18941 = -1.*t2151*t580*t1715;
  t18942 = t1449*t2424;
  t18944 = t18941 + t18942;
  t18953 = t6206*t18944;
  t18954 = -1.*t2151*t819*t10116;
  t18955 = t18953 + t18954;
  t18966 = -1.*t12031*t14403*t18955;
  t18969 = -1.*t13947*t18955*t12811;
  t18971 = t18966 + t18969;
  t18974 = t13947*t12031*t18955;
  t18975 = -1.*t14403*t18955*t12811;
  t18976 = t18974 + t18975;
  t18980 = t14634*t18971;
  t18981 = t14504*t18976;
  t18982 = t18980 + t18981;
  t18986 = t14504*t18971;
  t18988 = -1.*t14634*t18976;
  t18989 = t18986 + t18988;
  t18992 = -1.*t15288*t18982;
  t18995 = t15182*t18989;
  t18996 = t18992 + t18995;
  t18999 = t15182*t18982;
  t19000 = t15288*t18989;
  t19001 = t18999 + t19000;
  t18936 = 0.135*t6206;
  t18937 = -0.049*t10116;
  t18938 = t18936 + t18937;
  t18945 = 0.049*t6206;
  t18947 = t18945 + t10942;
  t16205 = t6206*t16190;
  t16206 = -1.*t16203*t10116;
  t16207 = t16205 + t16206;
  t19035 = -1.*t12031*t14403*t16207;
  t19036 = -1.*t13947*t16207*t12811;
  t19038 = t19035 + t19036;
  t19041 = t13947*t12031*t16207;
  t19042 = -1.*t14403*t16207*t12811;
  t19043 = t19041 + t19042;
  t19046 = t14634*t19038;
  t19047 = t14504*t19043;
  t19048 = t19046 + t19047;
  t19050 = t14504*t19038;
  t19051 = -1.*t14634*t19043;
  t19052 = t19050 + t19051;
  t19055 = -1.*t15288*t19048;
  t19056 = t15182*t19052;
  t19057 = t19055 + t19056;
  t19060 = t15182*t19048;
  t19062 = t15288*t19052;
  t19063 = t19060 + t19062;
  t19089 = t580*t18471;
  t19090 = t988*t2151*t2424;
  t19092 = t19089 + t19090;
  t19082 = -1.*t988*t819*t1449;
  t19084 = t898*t1715;
  t19087 = t19082 + t19084;
  t19095 = t6206*t19092;
  t19096 = -1.*t19087*t10116;
  t19098 = t19095 + t19096;
  t19114 = -1.*t12031*t14403*t19098;
  t19116 = -1.*t13947*t19098*t12811;
  t19118 = t19114 + t19116;
  t19120 = t13947*t12031*t19098;
  t19124 = -1.*t14403*t19098*t12811;
  t19125 = t19120 + t19124;
  t19128 = t14634*t19118;
  t19129 = t14504*t19125;
  t19133 = t19128 + t19129;
  t19135 = t14504*t19118;
  t19136 = -1.*t14634*t19125;
  t19139 = t19135 + t19136;
  t19142 = -1.*t15288*t19133;
  t19144 = t15182*t19139;
  t19147 = t19142 + t19144;
  t19150 = t15182*t19133;
  t19152 = t15288*t19139;
  t19153 = t19150 + t19152;
  t19178 = t2151*t819*t6206;
  t19180 = t18944*t10116;
  t19182 = t19178 + t19180;
  t19189 = -1.*t12031*t19182;
  t19190 = -1.*t18617*t12811;
  t19192 = t19189 + t19190;
  t19196 = t12031*t18617;
  t19197 = -1.*t19182*t12811;
  t19198 = t19196 + t19197;
  t19202 = t14403*t19192;
  t19203 = t13947*t19198;
  t19204 = t19202 + t19203;
  t19207 = t13947*t19192;
  t19209 = -1.*t14403*t19198;
  t19210 = t19207 + t19209;
  t19215 = -1.*t14634*t19204;
  t19217 = t14504*t19210;
  t19220 = t19215 + t19217;
  t19223 = t14504*t19204;
  t19225 = t14634*t19210;
  t19226 = t19223 + t19225;
  t19231 = t15288*t19220;
  t19233 = t15182*t19226;
  t19234 = t19231 + t19233;
  t19239 = t15182*t19220;
  t19242 = -1.*t15288*t19226;
  t19245 = t19239 + t19242;
  t19172 = 0.049*t12031;
  t19175 = t19172 + t13472;
  t19183 = -0.09*t12031;
  t19184 = -0.049*t12811;
  t19186 = t19183 + t19184;
  t19266 = -1.*t12031*t16270;
  t19267 = -1.*t16308*t12811;
  t19268 = t19266 + t19267;
  t19272 = t14403*t19268;
  t19274 = t19272 + t16542;
  t19277 = t13947*t19268;
  t19279 = -1.*t14403*t16398;
  t19281 = t19277 + t19279;
  t19287 = -1.*t14634*t19274;
  t19290 = t14504*t19281;
  t19292 = t19287 + t19290;
  t19296 = t14504*t19274;
  t19297 = t14634*t19281;
  t19299 = t19296 + t19297;
  t19302 = t15288*t19292;
  t19303 = t15182*t19299;
  t19304 = t19302 + t19303;
  t19309 = t15182*t19292;
  t19310 = -1.*t15288*t19299;
  t19311 = t19309 + t19310;
  t19338 = t6206*t19087;
  t19341 = t19092*t10116;
  t19343 = t19338 + t19341;
  t19345 = -1.*t12031*t19343;
  t19346 = -1.*t18848*t12811;
  t19349 = t19345 + t19346;
  t19352 = t12031*t18848;
  t19355 = -1.*t19343*t12811;
  t19358 = t19352 + t19355;
  t19361 = t14403*t19349;
  t19363 = t13947*t19358;
  t19364 = t19361 + t19363;
  t19367 = t13947*t19349;
  t19370 = -1.*t14403*t19358;
  t19371 = t19367 + t19370;
  t19375 = -1.*t14634*t19364;
  t19376 = t14504*t19371;
  t19377 = t19375 + t19376;
  t19381 = t14504*t19364;
  t19382 = t14634*t19371;
  t19385 = t19381 + t19382;
  t19388 = t15288*t19377;
  t19389 = t15182*t19385;
  t19390 = t19388 + t19389;
  t19393 = t15182*t19377;
  t19396 = -1.*t15288*t19385;
  t19400 = t19393 + t19396;
  t19422 = t12031*t19182;
  t19423 = t18617*t12811;
  t19425 = t19422 + t19423;
  t19433 = -1.*t14403*t19425;
  t19434 = t19433 + t19203;
  t19437 = -1.*t13947*t19425;
  t19439 = t19437 + t19209;
  t19441 = -1.*t14634*t19434;
  t19443 = t14504*t19439;
  t19445 = t19441 + t19443;
  t19448 = t14504*t19434;
  t19450 = t14634*t19439;
  t19451 = t19448 + t19450;
  t19453 = t15288*t19445;
  t19454 = t15182*t19451;
  t19457 = t19453 + t19454;
  t19461 = t15182*t19445;
  t19464 = -1.*t15288*t19451;
  t19468 = t19461 + t19464;
  t19416 = -0.21*t13947;
  t19419 = -0.049*t14403;
  t19421 = t19416 + t19419;
  t19429 = 0.049*t13947;
  t19430 = t19429 + t14429;
  t19510 = -1.*t13947*t16336;
  t19511 = t19510 + t19279;
  t19513 = -1.*t14634*t16551;
  t19515 = t14504*t19511;
  t19517 = t19513 + t19515;
  t19519 = t14634*t19511;
  t19522 = t16804 + t19519;
  t19524 = t15288*t19517;
  t19526 = t15182*t19522;
  t19527 = t19524 + t19526;
  t19535 = t15182*t19517;
  t19536 = -1.*t15288*t19522;
  t19537 = t19535 + t19536;
  t19556 = t12031*t19343;
  t19557 = t18848*t12811;
  t19558 = t19556 + t19557;
  t19561 = -1.*t14403*t19558;
  t19565 = t19561 + t19363;
  t19569 = -1.*t13947*t19558;
  t19570 = t19569 + t19370;
  t19581 = -1.*t14634*t19565;
  t19582 = t14504*t19570;
  t19583 = t19581 + t19582;
  t19586 = t14504*t19565;
  t19587 = t14634*t19570;
  t19589 = t19586 + t19587;
  t19592 = t15288*t19583;
  t19593 = t15182*t19589;
  t19595 = t19592 + t19593;
  t19603 = t15182*t19583;
  t19604 = -1.*t15288*t19589;
  t19606 = t19603 + t19604;
  t19639 = t13947*t19425;
  t19644 = t14403*t19198;
  t19646 = t19639 + t19644;
  t19648 = -1.*t14504*t19646;
  t19650 = t19441 + t19648;
  t19658 = -1.*t14634*t19646;
  t19659 = t19448 + t19658;
  t19661 = t15288*t19650;
  t19662 = t15182*t19659;
  t19665 = t19661 + t19662;
  t19667 = t15182*t19650;
  t19668 = -1.*t15288*t19659;
  t19669 = t19667 + t19668;
  t19625 = 0.00159*t14504;
  t19626 = t19625 + t14895;
  t19636 = -0.27068*t14504;
  t19637 = -0.00159*t14634;
  t19638 = t19636 + t19637;
  t19702 = -1.*t14504*t16726;
  t19703 = t19513 + t19702;
  t19713 = t15288*t19703;
  t19714 = t19713 + t16842;
  t19717 = t15182*t19703;
  t19720 = -1.*t15288*t16820;
  t19721 = t19717 + t19720;
  t19749 = t13947*t19558;
  t19751 = t14403*t19358;
  t19753 = t19749 + t19751;
  t19755 = -1.*t14504*t19753;
  t19757 = t19581 + t19755;
  t19765 = -1.*t14634*t19753;
  t19766 = t19586 + t19765;
  t19768 = t15288*t19757;
  t19769 = t15182*t19766;
  t19770 = t19768 + t19769;
  t19773 = t15182*t19757;
  t19774 = -1.*t15288*t19766;
  t19775 = t19773 + t19774;
  t19812 = t14634*t19434;
  t19813 = t14504*t19646;
  t19815 = t19812 + t19813;
  t19825 = -1.*t15288*t19815;
  t19826 = t19825 + t19662;
  t19829 = -1.*t15182*t19815;
  t19830 = t19829 + t19668;
  t19805 = -0.70544*t15182;
  t19808 = 0.01841*t15288;
  t19811 = t19805 + t19808;
  t19818 = -0.01841*t15182;
  t19820 = t19818 + t15442;
  t19864 = -1.*t15182*t16795;
  t19865 = t19864 + t19720;
  t16920 = t15681*t16854;
  t19889 = t14634*t19565;
  t19890 = t14504*t19753;
  t19891 = t19889 + t19890;
  t19894 = -1.*t15288*t19891;
  t19897 = t19894 + t19769;
  t19900 = -1.*t15182*t19891;
  t19901 = t19900 + t19774;
  t19839 = -1.*t15706*t19826;
  t19928 = t15182*t19815;
  t19931 = t15288*t19659;
  t19937 = t19928 + t19931;
  t19846 = t15681*t19826;
  t19921 = 0.02159*t15681;
  t19923 = t19921 + t15834;
  t19925 = -1.11344*t15681;
  t19926 = -0.02159*t15706;
  t19927 = t19925 + t19926;
  t19869 = -1.*t15706*t16854;
  t16921 = -1.*t15706*t16900;
  t16922 = t16920 + t16921;
  t19903 = -1.*t15706*t19897;
  t19977 = t15182*t19891;
  t19979 = t15288*t19766;
  t19980 = t19977 + t19979;
  t19911 = t15681*t19897;
  p_output1(1)=1.;
  p_output1(5)=1.;
  p_output1(9)=1.;
  p_output1(11)=t10757*t10982 + t12019*t13480 + t13811*t13844 + t14432*t14445 + t14477*t14496 + t14688*t14792 + t15053*t15151 + t15471*t15477 + t15511*t15630 + t15713*t15722 + t15926*t15975 + 0.075595*(t15706*t15722 + t15681*t15975) - 1.077437*(t15681*t15722 - 1.*t15706*t15975) + t10392*t4596 + 0.1305*(-1.*t10116*t10757 + t4596*t6206) + t1954*t778 - 1.*t2151*t3235*t988;
  p_output1(12)=t10392*t16190 + t10982*t16203 + 0.1305*t16207 + t13480*t16270 + t13844*t16308 + t14432*t16336 + t14477*t16398 + t14688*t16551 + t15053*t16726 + t15471*t16795 + t15511*t16820 + t15713*t16854 + t15926*t16900 + 0.075595*(t15706*t16854 + t15681*t16900) - 1.077437*t16922 + t16088*t778 - 1.*t2151*t3235*t898;
  p_output1(13)=t10392*t16953 + t13480*t17088 + t13844*t17124 + t14432*t17191 + t14477*t17242 + t14688*t17297 + t15053*t17373 + t15471*t17389 + t15511*t17399 + t15713*t17407 + t15926*t17426 + 0.075595*(t15706*t17407 + t15681*t17426) - 1.077437*(t15681*t17407 - 1.*t15706*t17426) + t2151*t3235 + t1449*t1715*t778 - 1.*t10982*t1449*t819 + 0.1305*(t16953*t6206 + t10116*t1449*t819);
  p_output1(14)=t10392*t17488 + t13480*t17526 + t13844*t17544 + t14432*t17556 + t14477*t17635 + t14688*t17643 + t15053*t17650 + t15471*t17719 + t15511*t17728 + t15713*t17797 + t15926*t17858 + 0.075595*(t15706*t17797 + t15681*t17858) - 1.077437*(t15681*t17797 - 1.*t15706*t17858) + t1449*t3235*t898 - 1.*t1715*t2151*t778*t898 + t10982*t2151*t819*t898 + 0.1305*(t17488*t6206 - 1.*t10116*t2151*t819*t898);
  p_output1(15)=t10392*t17941 + t13480*t17985 + t13844*t17990 + t14432*t17996 + t14477*t18002 + t14688*t18017 + t15053*t18027 + t15471*t18062 + t15511*t18066 + t15713*t18101 + t15926*t18111 + 0.075595*(t15706*t18101 + t15681*t18111) - 1.077437*(t15681*t18101 - 1.*t15706*t18111) - 1.*t1449*t3235*t988 + t1715*t2151*t778*t988 - 1.*t10982*t2151*t819*t988 + 0.1305*(t17941*t6206 + t10116*t2151*t819*t988);
  p_output1(16)=t13480*t18214 + t14432*t18232 + t14477*t18239 + t14688*t18245 + t15053*t18249 + t15471*t18254 + t15511*t18282 + t15713*t18292 + t15926*t18297 + 0.075595*(t15706*t18292 + t15681*t18297) - 1.077437*(t15681*t18292 - 1.*t15706*t18297) - 1.*t10982*t1715*t2151 + t13844*t2151*t2424*t819 - 1.*t10392*t2151*t580*t819 - 1.*t2151*t778*t819 + 0.1305*(t10116*t1715*t2151 - 1.*t2151*t580*t6206*t819);
  p_output1(17)=t10982*t16088 + t13480*t18338 + t14432*t18369 + t14477*t18377 + t14688*t18382 + t15053*t18389 + t15471*t18398 + t15511*t18405 + t15713*t18411 + t15926*t18433 + 0.075595*(t15706*t18411 + t15681*t18433) - 1.077437*(t15681*t18411 - 1.*t15706*t18433) - 1.*t13844*t18319*t2424 + t10392*t18319*t580 + 0.1305*(-1.*t10116*t16088 + t18319*t580*t6206) + t18319*t778;
  p_output1(18)=t10982*t18471 + t13480*t18499 + t14432*t18523 + t14477*t18534 + t14688*t18539 + t15053*t18545 + t15471*t18553 + t15511*t18557 + t15713*t18562 + t15926*t18567 + 0.075595*(t15706*t18562 + t15681*t18567) - 1.077437*(t15681*t18562 - 1.*t15706*t18567) - 1.*t10757*t13844*t2424 + t10392*t10757*t580 + 0.1305*(-1.*t10116*t18471 + t10757*t580*t6206) + t10757*t778;
  p_output1(19)=t10392*t18617 + t10116*t13480*t18617 + t13844*t18630 + t14432*t18638 + t14477*t18643 + t14688*t18651 + t15053*t18658 + t15471*t18670 + t15511*t18685 + t15713*t18702 + t15926*t18708 + 0.075595*(t15706*t18702 + t15681*t18708) - 1.077437*(t15681*t18702 - 1.*t15706*t18708) - 0.135*t1715*t2151*t2424 - 0.135*t1449*t580 + 0.1305*t18617*t6206;
  p_output1(20)=t10392*t16308 + t10116*t13480*t16308 + t13844*t18751 + t14432*t18761 + t14477*t18768 + t14688*t18774 + t15053*t18785 + t15471*t18791 + t15511*t18801 + t15713*t18810 + t15926*t18816 + 0.075595*(t15706*t18810 + t15681*t18816) - 1.077437*(t15681*t18810 - 1.*t15706*t18816) + 0.135*t16088*t2424 + 0.1305*t16308*t6206 + 0.135*t2151*t580*t898;
  p_output1(21)=t10392*t18848 + t10116*t13480*t18848 + t13844*t18859 + t14432*t18866 + t14477*t18875 + t14688*t18881 + t15053*t18886 + t15471*t18895 + t15511*t18905 + t15713*t18911 + t15926*t18916 + 0.075595*(t15706*t18911 + t15681*t18916) - 1.077437*(t15681*t18911 - 1.*t15706*t18916) + 0.135*t18471*t2424 + 0.1305*t18848*t6206 - 0.135*t2151*t580*t988;
  p_output1(22)=t18944*t18947 + t13480*t18955 + t12031*t14432*t18955 - 1.*t12811*t14477*t18955 + t14688*t18971 + t15053*t18976 + t15471*t18982 + t15511*t18989 + t15713*t18996 + t15926*t19001 + 0.075595*(t15706*t18996 + t15681*t19001) - 1.077437*(t15681*t18996 - 1.*t15706*t19001) + t18938*t2151*t819 + 0.1305*(-1.*t10116*t18944 - 1.*t2151*t6206*t819);
  p_output1(23)=t13480*t16207 + t12031*t14432*t16207 - 1.*t12811*t14477*t16207 + t16203*t18938 + t16190*t18947 + t14688*t19038 + t15053*t19043 + t15471*t19048 + t15511*t19052 + t15713*t19057 + t15926*t19063 + 0.075595*(t15706*t19057 + t15681*t19063) - 1.077437*(t15681*t19057 - 1.*t15706*t19063) + 0.1305*(-1.*t10116*t16190 - 1.*t16203*t6206);
  p_output1(24)=t18938*t19087 + t18947*t19092 + t13480*t19098 + t12031*t14432*t19098 - 1.*t12811*t14477*t19098 + t14688*t19118 + t15053*t19125 + t15471*t19133 + t15511*t19139 + t15713*t19147 + t15926*t19153 + 0.075595*(t15706*t19147 + t15681*t19153) - 1.077437*(t15681*t19147 - 1.*t15706*t19153) + 0.1305*(-1.*t10116*t19092 - 1.*t19087*t6206);
  p_output1(25)=t18617*t19175 + t19182*t19186 + t14477*t19192 + t14432*t19198 + t15053*t19204 + t14688*t19210 + t15511*t19220 + t15471*t19226 + t15926*t19234 + t15713*t19245 - 1.077437*(-1.*t15706*t19234 + t15681*t19245) + 0.075595*(t15681*t19234 + t15706*t19245);
  p_output1(26)=t14432*t16398 + t16308*t19175 + t16270*t19186 + t14477*t19268 + t15053*t19274 + t14688*t19281 + t15511*t19292 + t15471*t19299 + t15926*t19304 + t15713*t19311 - 1.077437*(-1.*t15706*t19304 + t15681*t19311) + 0.075595*(t15681*t19304 + t15706*t19311);
  p_output1(27)=t18848*t19175 + t19186*t19343 + t14477*t19349 + t14432*t19358 + t15053*t19364 + t14688*t19371 + t15511*t19377 + t15471*t19385 + t15926*t19390 + t15713*t19400 - 1.077437*(-1.*t15706*t19390 + t15681*t19400) + 0.075595*(t15681*t19390 + t15706*t19400);
  p_output1(28)=t19421*t19425 + t19198*t19430 + t15053*t19434 + t14688*t19439 + t15511*t19445 + t15471*t19451 + t15926*t19457 + t15713*t19468 - 1.077437*(-1.*t15706*t19457 + t15681*t19468) + 0.075595*(t15681*t19457 + t15706*t19468);
  p_output1(29)=t15053*t16551 + t16336*t19421 + t16398*t19430 + t14688*t19511 + t15511*t19517 + t15471*t19522 + t15926*t19527 + t15713*t19537 - 1.077437*(-1.*t15706*t19527 + t15681*t19537) + 0.075595*(t15681*t19527 + t15706*t19537);
  p_output1(30)=t19358*t19430 + t19421*t19558 + t15053*t19565 + t14688*t19570 + t15511*t19583 + t15471*t19589 + t15926*t19595 + t15713*t19606 - 1.077437*(-1.*t15706*t19595 + t15681*t19606) + 0.075595*(t15681*t19595 + t15706*t19606);
  p_output1(31)=t19434*t19626 + t19638*t19646 + t15511*t19650 + t15471*t19659 + t15926*t19665 + t15713*t19669 - 1.077437*(-1.*t15706*t19665 + t15681*t19669) + 0.075595*(t15681*t19665 + t15706*t19669);
  p_output1(32)=t15471*t16820 + t16551*t19626 + t16726*t19638 + t15511*t19703 + t15926*t19714 + t15713*t19721 - 1.077437*(-1.*t15706*t19714 + t15681*t19721) + 0.075595*(t15681*t19714 + t15706*t19721);
  p_output1(33)=t19565*t19626 + t19638*t19753 + t15511*t19757 + t15471*t19766 + t15926*t19770 + t15713*t19775 - 1.077437*(-1.*t15706*t19770 + t15681*t19775) + 0.075595*(t15681*t19770 + t15706*t19775);
  p_output1(34)=t19811*t19815 + t19659*t19820 + t15926*t19826 + t15713*t19830 - 1.077437*(t15681*t19830 + t19839) + 0.075595*(t15706*t19830 + t19846);
  p_output1(35)=t15926*t16854 + t16795*t19811 + t16820*t19820 + t15713*t19865 + 0.075595*(t16920 + t15706*t19865) - 1.077437*(t15681*t19865 + t19869);
  p_output1(36)=t19766*t19820 + t19811*t19891 + t15926*t19897 + t15713*t19901 - 1.077437*(t15681*t19901 + t19903) + 0.075595*(t15706*t19901 + t19911);
  p_output1(40)=t19826*t19923 + t19927*t19937 - 1.077437*(t19839 - 1.*t15681*t19937) + 0.075595*(t19846 - 1.*t15706*t19937);
  p_output1(41)=0.075595*t16922 - 1.077437*(-1.*t15681*t16900 + t19869) + t16854*t19923 + t16900*t19927;
  p_output1(42)=t19897*t19923 + t19927*t19980 - 1.077437*(t19903 - 1.*t15681*t19980) + 0.075595*(t19911 - 1.*t15706*t19980);
  out = reshape(p_output1, 3, 22);
end