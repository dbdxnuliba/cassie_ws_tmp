%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% rightLegPitchVelocity
% 
% This file is automatically converted to matlab format from C code.
% Source symbolic expressions exported from FROST:
% 	 https://github.com/ayonga/frost-dev
% 
% Author: Jenna Reher (jreher@caltech.edu)
% Automatically generated on: November 07, 2021 T 02:28
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
function out = rightLegPitchVelocity(var1,var2)

  out = zeros(1, 1);

  p_output1 = zeros(1,1);


  t28 = cos(var1(5));
  t306 = sin(var1(15));
  t76 = cos(var1(16));
  t84 = -1.*t76;
  t166 = 1. + t84;
  t207 = sin(var1(16));
  t323 = sin(var1(5));
  t479 = cos(var1(17));
  t507 = -1.*t479;
  t511 = 1. + t507;
  t632 = sin(var1(17));
  t445 = cos(var1(15));
  t1315 = t76*t28;
  t1508 = t306*t207*t323;
  t1546 = t1315 + t1508;
  t1650 = cos(var1(18));
  t1663 = -1.*t1650;
  t1679 = 1. + t1663;
  t1752 = sin(var1(18));
  t2211 = -1.*var1(18);
  t2226 = 0.226893 + t2211;
  t1891 = t445*t632*t323;
  t1925 = t479*t1546;
  t1980 = t1891 + t1925;
  t2115 = t445*t479*t323;
  t2187 = -1.*t632*t1546;
  t2195 = t2115 + t2187;
  t2243 = cos(t2226);
  t2278 = -1.*t2243;
  t2293 = 1. + t2278;
  t2398 = sin(t2226);
  t2469 = -1.*t1752*t1980;
  t2472 = t1650*t2195;
  t2599 = t2469 + t2472;
  t3046 = t1650*t1980;
  t3051 = t1752*t2195;
  t3105 = t3046 + t3051;
  t3164 = cos(var1(22));
  t3209 = -1.*t3164;
  t3238 = 1. + t3209;
  t3362 = sin(var1(22));
  t3411 = t2398*t2599;
  t3479 = t2243*t3105;
  t3590 = t3411 + t3479;
  t3628 = t2243*t2599;
  t3638 = -1.*t2398*t3105;
  t3656 = t3628 + t3638;
  t591 = -0.09*t511;
  t739 = 0.049*t632;
  t797 = t591 + t739;
  t3868 = cos(var1(4));
  t3898 = sin(var1(4));
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
  t5516 = power(t5494,2);
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
  t5746 = power(t5742,2);
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
  p_output1(1)=t3858*t5759*(-0.049*t323*t3898 - 1.*t268*t323*t3898 - 0.135*t4043 - 1.*t4043*t410 - 1.*t1302*t4220 - 1.*t1874*t4303 - 1.*t2107*t4368 - 1.*t2416*t4483 - 1.*t2991*t4568 - 1.*t3374*t4694 - 1.*t3621*t4753 + 1.11344*(-1.*t3362*t4694 + t3164*t4753) + 0.02159*(t3164*t4694 + t3362*t4753) + 0.1305*(-1.*t207*t323*t3898 + t4043*t76) - 1.*t3924*t797)*var2(4) + (t5494*t5759*(0.135*t28*t306 - 0.049*t323 - 1.*t268*t323 + t28*t306*t410 + t1302*t6978 + t1874*t6988 + t2107*t6994 + t2416*t6998 + t2991*t7003 + t3374*t7010 + t3621*t7018 - 1.11344*(-1.*t3362*t7010 + t3164*t7018) - 0.02159*(t3164*t7010 + t3362*t7018) - 0.1305*(t207*t323 + t28*t306*t76) + t28*t445*t797) + t3858*t5759*(0.049*t28*t3868 + t268*t28*t3868 + 0.135*t306*t323*t3868 + t306*t323*t3868*t410 - 1.*t1302*t7047 - 1.*t1874*t7053 - 1.*t2107*t7057 - 1.*t2416*t7061 - 1.*t2991*t7065 - 1.*t3374*t7070 - 1.*t3621*t7076 + 1.11344*(-1.*t3362*t7070 + t3164*t7076) + 0.02159*(t3164*t7070 + t3362*t7076) + 0.1305*(t207*t28*t3868 - 1.*t306*t323*t3868*t76) + t323*t3868*t445*t797))*var2(5) + (t5494*t5759*(0.135*t323*t445 + t1302*t207*t323*t445 + t323*t410*t445 + t1874*t5821 + t2107*t5847 + t2416*t5888 + t2991*t5902 + t3374*t5950 + t3621*t5963 - 1.11344*(-1.*t3362*t5950 + t3164*t5963) - 0.02159*(t3164*t5950 + t3362*t5963) - 0.1305*t323*t445*t76 - 1.*t306*t323*t797) + t3858*t5759*(-0.135*t4958 - 1.*t1302*t207*t4958 - 1.*t410*t4958 - 1.*t1874*t6090 - 1.*t2107*t6110 - 1.*t2416*t6121 - 1.*t2991*t6126 - 1.*t3374*t6138 - 1.*t3621*t6163 + 1.11344*(-1.*t3362*t6138 + t3164*t6163) + 0.02159*(t3164*t6138 + t3362*t6163) + 0.1305*t4958*t76 - 1.*t6044*t797))*var2(15) + (t5494*t5759*(t1246*t1302 + t1246*t1874*t479 + t28*t6237 + t306*t323*t6244 + t2416*t6263 + t2991*t6269 + t3374*t6286 + t3621*t6312 - 1.11344*(-1.*t3362*t6286 + t3164*t6312) - 0.02159*(t3164*t6286 + t3362*t6312) - 1.*t1246*t2107*t632 - 0.1305*(-1.*t207*t306*t323 - 1.*t28*t76)) + t3858*t5759*(-1.*t1302*t5081 - 1.*t1874*t479*t5081 + t323*t3868*t6237 - 1.*t4920*t6244 + t2107*t5081*t632 - 1.*t2416*t6380 - 1.*t2991*t6389 - 1.*t3374*t6426 - 1.*t3621*t6468 + 1.11344*(-1.*t3362*t6426 + t3164*t6468) + 0.02159*(t3164*t6426 + t3362*t6468) + 0.1305*(-1.*t207*t4920 + t323*t3868*t76)))*var2(16) + (t5494*t5759*(t1874*t2195 + t323*t445*t6529 + t1546*t6537 + t2107*t6558 + t2991*t6565 + t2416*t6572 + t3621*t6578 + t3374*t6597 - 0.02159*(t3362*t6578 + t3164*t6597) - 1.11344*(t3164*t6578 - 1.*t3362*t6597)) + t3858*t5759*(-1.*t1874*t5158 - 1.*t4958*t6529 - 1.*t5032*t6537 - 1.*t2107*t6630 - 1.*t2991*t6634 - 1.*t2416*t6670 - 1.*t3621*t6677 - 1.*t3374*t6702 + 0.02159*(t3362*t6677 + t3164*t6702) + 1.11344*(t3164*t6677 - 1.*t3362*t6702)))*var2(17) + (t3858*t5759*(-1.*t2991*t5220 - 1.*t5119*t6841 - 1.*t5158*t6850 - 1.*t5220*t6866 - 1.*t2416*t6870 - 1.*t5245*t6876 - 1.*t3621*t6879 - 1.*t3374*t6884 + 0.02159*(t3362*t6879 + t3164*t6884) + 1.11344*(t3164*t6879 - 1.*t3362*t6884)) + t5494*t5759*(t2599*t2991 + t1980*t6841 + t2195*t6850 + t2599*t6866 + t3105*t6876 + t2416*t6933 + t3621*t6938 + t3374*t6943 - 0.02159*(t3362*t6938 + t3164*t6943) - 1.11344*(t3164*t6938 - 1.*t3362*t6943)))*var2(18) + (t5494*t5759*(-1.11344*(-1.*t3164*t3590 - 1.*t3362*t3656) - 0.02159*t3746 + t3590*t6762 + t3656*t6779) + t3858*t5759*(1.11344*(-1.*t3164*t5291 - 1.*t3362*t5342) + 0.02159*t5398 - 1.*t5291*t6762 - 1.*t5342*t6779))*var2(22);
  out = reshape(p_output1, 1, 1);
end