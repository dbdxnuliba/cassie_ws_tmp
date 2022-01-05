%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% leftLegPitchVelocity
% 
% This file is automatically converted to matlab format from C code.
% Source symbolic expressions exported from FROST:
% 	 https://github.com/ayonga/frost-dev
% 
% Author: Jenna Reher (jreher@caltech.edu)
% Automatically generated on: November 07, 2021 T 02:28
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
function out = leftLegPitchVelocity(var1,var2)

  out = zeros(1, 1);

  p_output1 = zeros(1,1);


  t262 = sin(var1(5));
  t453 = sin(var1(7));
  t41 = cos(var1(5));
  t650 = cos(var1(8));
  t951 = -1.*t650;
  t1271 = 1. + t951;
  t1397 = sin(var1(8));
  t2409 = cos(var1(9));
  t2423 = -1.*t2409;
  t2456 = 1. + t2423;
  t2530 = sin(var1(9));
  t2187 = t41*t650;
  t2226 = t262*t453*t1397;
  t2397 = t2187 + t2226;
  t2685 = cos(var1(7));
  t2892 = cos(var1(10));
  t2903 = -1.*t2892;
  t2937 = 1. + t2903;
  t2947 = sin(var1(10));
  t3258 = -1.*var1(10);
  t3265 = 0.226893 + t3258;
  t3046 = t2409*t2397;
  t3051 = t2685*t262*t2530;
  t3065 = t3046 + t3051;
  t3164 = t2685*t2409*t262;
  t3191 = -1.*t2397*t2530;
  t3205 = t3164 + t3191;
  t3274 = cos(t3265);
  t3301 = -1.*t3274;
  t3327 = 1. + t3301;
  t3352 = sin(t3265);
  t3457 = -1.*t2947*t3065;
  t3479 = t2892*t3205;
  t3553 = t3457 + t3479;
  t3621 = t2892*t3065;
  t3628 = t2947*t3205;
  t3646 = t3621 + t3628;
  t3690 = cos(var1(14));
  t3728 = -1.*t3690;
  t3750 = 1. + t3728;
  t3820 = sin(var1(14));
  t3898 = t3352*t3553;
  t3912 = t3274*t3646;
  t3922 = t3898 + t3912;
  t4018 = t3274*t3553;
  t4021 = -1.*t3352*t3646;
  t4032 = t4018 + t4021;
  t4189 = sin(var1(4));
  t4216 = cos(var1(4));
  t4220 = t4216*t2685;
  t4226 = -1.*t41*t4189*t453;
  t4232 = t4220 + t4226;
  t1329 = 0.135*t1271;
  t1420 = 0.049*t1397;
  t1519 = t1329 + t1420;
  t1585 = -0.049*t1271;
  t1655 = 0.135*t1397;
  t1724 = t1585 + t1655;
  t2486 = -0.049*t2456;
  t2609 = -0.09*t2530;
  t2616 = t2486 + t2609;
  t2778 = -0.09*t2456;
  t2853 = 0.049*t2530;
  t2855 = t2778 + t2853;
  t2941 = -0.049*t2937;
  t2996 = -0.21*t2947;
  t3029 = t2941 + t2996;
  t4312 = t650*t4189*t262;
  t4315 = t4232*t1397;
  t4320 = t4312 + t4315;
  t4378 = -1.*t41*t2685*t4189;
  t4384 = -1.*t4216*t453;
  t4392 = t4378 + t4384;
  t3139 = -0.21*t2937;
  t3153 = 0.049*t2947;
  t3157 = t3139 + t3153;
  t3347 = -0.70544*t3327;
  t3356 = -0.01841*t3352;
  t3408 = t3347 + t3356;
  t4406 = t2409*t4320;
  t4432 = t4392*t2530;
  t4445 = t4406 + t4432;
  t4489 = t2409*t4392;
  t4496 = -1.*t4320*t2530;
  t4503 = t4489 + t4496;
  t3585 = 0.01841*t3327;
  t3590 = -0.70544*t3352;
  t3604 = t3585 + t3590;
  t3767 = -0.02159*t3750;
  t3859 = -1.11344*t3820;
  t3867 = t3767 + t3859;
  t4560 = -1.*t2947*t4445;
  t4585 = t2892*t4503;
  t4587 = t4560 + t4585;
  t4682 = t2892*t4445;
  t4701 = t2947*t4503;
  t4747 = t4682 + t4701;
  t3947 = -1.11344*t3750;
  t3992 = 0.02159*t3820;
  t4010 = t3947 + t3992;
  t4753 = t3352*t4587;
  t4796 = t3274*t4747;
  t4803 = t4753 + t4796;
  t4836 = t3274*t4587;
  t4851 = -1.*t3352*t4747;
  t4857 = t4836 + t4851;
  t2107 = t650*t262*t453;
  t2130 = -1.*t41*t1397;
  t2138 = t2107 + t2130;
  t4043 = -1.*t3820*t3922;
  t4044 = t3690*t4032;
  t4072 = t4043 + t4044;
  t4171 = t3690*t3922;
  t4173 = t3820*t4032;
  t4175 = t4171 + t4173;
  t5274 = t2685*t4189;
  t5291 = t4216*t41*t453;
  t5292 = t5274 + t5291;
  t5367 = -1.*t4216*t650*t262;
  t5372 = t5292*t1397;
  t5381 = t5367 + t5372;
  t5388 = t4216*t41*t2685;
  t5391 = -1.*t4189*t453;
  t5392 = t5388 + t5391;
  t5395 = t2409*t5381;
  t5398 = t5392*t2530;
  t5402 = t5395 + t5398;
  t5484 = t2409*t5392;
  t5539 = -1.*t5381*t2530;
  t5541 = t5484 + t5539;
  t5562 = -1.*t2947*t5402;
  t5570 = t2892*t5541;
  t5575 = t5562 + t5570;
  t5581 = t2892*t5402;
  t5582 = t2947*t5541;
  t5584 = t5581 + t5582;
  t5601 = t3352*t5575;
  t5602 = t3274*t5584;
  t5611 = t5601 + t5602;
  t5636 = t3274*t5575;
  t5640 = -1.*t3352*t5584;
  t5654 = t5636 + t5640;
  t5335 = t650*t5292;
  t5342 = t4216*t262*t1397;
  t5350 = t5335 + t5342;
  t5839 = -1.*t2409*t2947*t5350;
  t5842 = -1.*t2892*t5350*t2530;
  t5844 = t5839 + t5842;
  t5847 = t2892*t2409*t5350;
  t5850 = -1.*t2947*t5350*t2530;
  t5854 = t5847 + t5850;
  t5885 = t3352*t5844;
  t5888 = t3274*t5854;
  t5892 = t5885 + t5888;
  t5896 = t3274*t5844;
  t5900 = -1.*t3352*t5854;
  t5915 = t5896 + t5900;
  t56 = -0.049*t41;
  t608 = 0.135*t262*t453;
  t1575 = -1.*t262*t453*t1519;
  t1976 = -1.*t41*t1724;
  t2166 = -0.1305*t2138;
  t2663 = -1.*t2397*t2616;
  t2873 = -1.*t2685*t262*t2855;
  t3127 = -1.*t3029*t3065;
  t3231 = -1.*t3157*t3205;
  t3572 = -1.*t3408*t3553;
  t3682 = -1.*t3604*t3646;
  t3944 = -1.*t3867*t3922;
  t4040 = -1.*t4010*t4032;
  t4158 = 1.11344*t4072;
  t4181 = 0.02159*t4175;
  t4187 = t56 + t608 + t1575 + t1976 + t2166 + t2663 + t2873 + t3127 + t3231 + t3572 + t3682 + t3944 + t4040 + t4158 + t4181;
  t5010 = 0.049*t41;
  t5014 = -0.135*t262*t453;
  t5064 = t262*t453*t1519;
  t5081 = t41*t1724;
  t5089 = 0.1305*t2138;
  t5092 = t2397*t2616;
  t5106 = t2685*t262*t2855;
  t5125 = t3029*t3065;
  t5137 = t3157*t3205;
  t5158 = t3408*t3553;
  t5162 = t3604*t3646;
  t5186 = t3867*t3922;
  t5198 = t4010*t4032;
  t5213 = -1.11344*t4072;
  t5234 = -0.02159*t4175;
  t5254 = t5010 + t5014 + t5064 + t5081 + t5089 + t5092 + t5106 + t5125 + t5137 + t5158 + t5162 + t5186 + t5198 + t5213 + t5234;
  t5261 = power(t5254,2);
  t5264 = 0.049*t4216*t262;
  t5298 = 0.135*t5292;
  t5300 = -1.*t5292*t1519;
  t5315 = t4216*t262*t1724;
  t5366 = -0.1305*t5350;
  t5384 = -1.*t5381*t2616;
  t5393 = -1.*t5392*t2855;
  t5440 = -1.*t3029*t5402;
  t5551 = -1.*t3157*t5541;
  t5580 = -1.*t3408*t5575;
  t5587 = -1.*t3604*t5584;
  t5621 = -1.*t3867*t5611;
  t5675 = -1.*t4010*t5654;
  t5682 = -1.*t3820*t5611;
  t5688 = t3690*t5654;
  t5689 = t5682 + t5688;
  t5695 = 1.11344*t5689;
  t5702 = t3690*t5611;
  t5704 = t3820*t5654;
  t5711 = t5702 + t5704;
  t5722 = 0.02159*t5711;
  t5734 = t5264 + t5298 + t5300 + t5315 + t5366 + t5384 + t5393 + t5440 + t5551 + t5580 + t5587 + t5621 + t5675 + t5695 + t5722;
  t5739 = power(t5734,2);
  t5746 = t5261 + t5739;
  t5748 = 1/t5746;
  t5762 = 0.135*t650;
  t5764 = -0.049*t1397;
  t5776 = t5762 + t5764;
  t5780 = 0.049*t650;
  t5788 = t5780 + t1655;
  t6046 = -1.*t2409*t2947*t2138;
  t6053 = -1.*t2892*t2138*t2530;
  t6058 = t6046 + t6053;
  t6064 = t2892*t2409*t2138;
  t6069 = -1.*t2947*t2138*t2530;
  t6075 = t6064 + t6069;
  t6083 = t3352*t6058;
  t6090 = t3274*t6075;
  t6092 = t6083 + t6090;
  t6105 = t3274*t6058;
  t6107 = -1.*t3352*t6075;
  t6108 = t6105 + t6107;
  t6168 = -1.*t2685*t4189;
  t6175 = -1.*t4216*t41*t453;
  t6178 = t6168 + t6175;
  t6186 = t2409*t5392*t1397;
  t6187 = t6178*t2530;
  t6189 = t6186 + t6187;
  t6192 = t2409*t6178;
  t6195 = -1.*t5392*t1397*t2530;
  t6196 = t6192 + t6195;
  t6198 = -1.*t2947*t6189;
  t6206 = t2892*t6196;
  t6208 = t6198 + t6206;
  t6219 = t2892*t6189;
  t6222 = t2947*t6196;
  t6224 = t6219 + t6222;
  t6229 = t3352*t6208;
  t6232 = t3274*t6224;
  t6236 = t6229 + t6232;
  t6238 = t3274*t6208;
  t6239 = -1.*t3352*t6224;
  t6240 = t6238 + t6239;
  t6270 = t2685*t2409*t262*t1397;
  t6271 = -1.*t262*t453*t2530;
  t6272 = t6270 + t6271;
  t6274 = -1.*t2409*t262*t453;
  t6275 = -1.*t2685*t262*t1397*t2530;
  t6280 = t6274 + t6275;
  t6287 = -1.*t2947*t6272;
  t6289 = t2892*t6280;
  t6302 = t6287 + t6289;
  t6312 = t2892*t6272;
  t6314 = t2947*t6280;
  t6317 = t6312 + t6314;
  t6319 = t3352*t6302;
  t6320 = t3274*t6317;
  t6321 = t6319 + t6320;
  t6325 = t3274*t6302;
  t6326 = -1.*t3352*t6317;
  t6328 = t6325 + t6326;
  t6400 = -1.*t4216*t41*t650;
  t6404 = -1.*t4216*t262*t453*t1397;
  t6422 = t6400 + t6404;
  t6436 = t2409*t6422;
  t6446 = -1.*t4216*t2685*t262*t2530;
  t6450 = t6436 + t6446;
  t6455 = -1.*t4216*t2685*t2409*t262;
  t6471 = -1.*t6422*t2530;
  t6472 = t6455 + t6471;
  t6475 = -1.*t2947*t6450;
  t6477 = t2892*t6472;
  t6481 = t6475 + t6477;
  t6483 = t2892*t6450;
  t6485 = t2947*t6472;
  t6487 = t6483 + t6485;
  t6493 = t3352*t6481;
  t6495 = t3274*t6487;
  t6498 = t6493 + t6495;
  t6513 = t3274*t6481;
  t6516 = -1.*t3352*t6487;
  t6517 = t6513 + t6516;
  t6571 = -1.*t650*t262;
  t6572 = t41*t453*t1397;
  t6573 = t6571 + t6572;
  t6577 = t2409*t6573;
  t6578 = t41*t2685*t2530;
  t6579 = t6577 + t6578;
  t6591 = t41*t2685*t2409;
  t6592 = -1.*t6573*t2530;
  t6593 = t6591 + t6592;
  t6595 = -1.*t2947*t6579;
  t6597 = t2892*t6593;
  t6598 = t6595 + t6597;
  t6601 = t2892*t6579;
  t6602 = t2947*t6593;
  t6603 = t6601 + t6602;
  t6607 = t3352*t6598;
  t6612 = t3274*t6603;
  t6614 = t6607 + t6612;
  t6618 = t3274*t6598;
  t6619 = -1.*t3352*t6603;
  t6620 = t6618 + t6619;
  t6658 = -1.*t2409*t5381;
  t6659 = -1.*t5392*t2530;
  t6669 = t6658 + t6659;
  t6677 = t2947*t6669;
  t6686 = t6677 + t5570;
  t6697 = t2892*t6669;
  t6700 = -1.*t2947*t5541;
  t6701 = t6697 + t6700;
  t6707 = -1.*t3352*t6686;
  t6710 = t3274*t6701;
  t6711 = t6707 + t6710;
  t6715 = t3274*t6686;
  t6716 = t3352*t6701;
  t6721 = t6715 + t6716;
  t6640 = 0.049*t2409;
  t6643 = t6640 + t2609;
  t6645 = -0.09*t2409;
  t6648 = -0.049*t2530;
  t6651 = t6645 + t6648;
  t6771 = -1.*t2409*t2397;
  t6772 = -1.*t2685*t262*t2530;
  t6776 = t6771 + t6772;
  t6781 = t2947*t6776;
  t6783 = t6781 + t3479;
  t6785 = t2892*t6776;
  t6786 = -1.*t2947*t3205;
  t6787 = t6785 + t6786;
  t6789 = -1.*t3352*t6783;
  t6790 = t3274*t6787;
  t6791 = t6789 + t6790;
  t6794 = t3274*t6783;
  t6795 = t3352*t6787;
  t6811 = t6794 + t6795;
  t6844 = -1.11344*t3690;
  t6847 = -0.02159*t3820;
  t6848 = t6844 + t6847;
  t6853 = 0.02159*t3690;
  t6855 = t6853 + t3859;
  t6909 = -1.*t2892*t3065;
  t6910 = t6909 + t6786;
  t6916 = t3274*t6910;
  t6917 = t6916 + t3912;
  t6919 = t3352*t6910;
  t6921 = t3352*t3646;
  t6922 = t6919 + t6921;
  t6893 = -0.21*t2892;
  t6894 = -0.049*t2947;
  t6895 = t6893 + t6894;
  t6897 = 0.049*t2892;
  t6898 = t6897 + t2996;
  t6901 = 0.01841*t3274;
  t6902 = 0.70544*t3352;
  t6904 = t6901 + t6902;
  t6912 = 0.70544*t3274;
  t6914 = t6912 + t3356;
  t6949 = -1.*t2892*t5402;
  t6950 = t6949 + t6700;
  t6953 = t3274*t6950;
  t6956 = t6953 + t5602;
  t6958 = t3352*t6950;
  t6959 = t3352*t5584;
  t6961 = t6958 + t6959;
  p_output1(1)=t4187*t5748*(-0.049*t262*t4189 - 1.*t1724*t262*t4189 + 0.135*t4232 - 1.*t1519*t4232 - 1.*t2616*t4320 - 1.*t2855*t4392 - 1.*t3029*t4445 - 1.*t3157*t4503 - 1.*t3408*t4587 - 1.*t3604*t4747 - 1.*t3867*t4803 - 1.*t4010*t4857 + 1.11344*(-1.*t3820*t4803 + t3690*t4857) + 0.02159*(t3690*t4803 + t3820*t4857) - 0.1305*(-1.*t1397*t262*t4189 + t4232*t650))*var2(4) + (t4187*t5748*(t262*t2685*t2855*t4216 + 0.049*t41*t4216 + t1724*t41*t4216 - 0.135*t262*t4216*t453 + t1519*t262*t4216*t453 - 1.*t2616*t6422 - 1.*t3029*t6450 - 1.*t3157*t6472 - 1.*t3408*t6481 - 1.*t3604*t6487 - 1.*t3867*t6498 - 0.1305*(t1397*t41*t4216 - 1.*t262*t4216*t453*t650) - 1.*t4010*t6517 + 1.11344*(-1.*t3820*t6498 + t3690*t6517) + 0.02159*(t3690*t6498 + t3820*t6517)) + t5734*t5748*(-0.049*t262 - 1.*t1724*t262 + t2685*t2855*t41 - 0.135*t41*t453 + t1519*t41*t453 + 0.1305*(t1397*t262 + t41*t453*t650) + t2616*t6573 + t3029*t6579 + t3157*t6593 + t3408*t6598 + t3604*t6603 + t3867*t6614 + t4010*t6620 - 1.11344*(-1.*t3820*t6614 + t3690*t6620) - 0.02159*(t3690*t6614 + t3820*t6620)))*var2(5) + (t5734*t5748*(-0.135*t262*t2685 + t1519*t262*t2685 + t1397*t2616*t262*t2685 - 1.*t262*t2855*t453 + t3029*t6272 + t3157*t6280 + t3408*t6302 + t3604*t6317 + t3867*t6321 + t4010*t6328 - 1.11344*(-1.*t3820*t6321 + t3690*t6328) - 0.02159*(t3690*t6321 + t3820*t6328) + 0.1305*t262*t2685*t650) + t4187*t5748*(0.135*t5392 - 1.*t1519*t5392 - 1.*t1397*t2616*t5392 - 1.*t2855*t6178 - 1.*t3029*t6189 - 1.*t3157*t6196 - 1.*t3408*t6208 - 1.*t3604*t6224 - 1.*t3867*t6236 - 1.*t4010*t6240 + 1.11344*(-1.*t3820*t6236 + t3690*t6240) + 0.02159*(t3690*t6236 + t3820*t6240) - 0.1305*t5392*t650))*var2(7) + (t5734*t5748*(t2138*t2616 + t2138*t2409*t3029 - 1.*t2138*t2530*t3157 + t41*t5776 + t262*t453*t5788 + t3408*t6058 + t3604*t6075 + t3867*t6092 + t4010*t6108 - 1.11344*(-1.*t3820*t6092 + t3690*t6108) - 0.02159*(t3690*t6092 + t3820*t6108) + 0.1305*(-1.*t1397*t262*t453 - 1.*t41*t650)) + t4187*t5748*(-1.*t2616*t5350 - 1.*t2409*t3029*t5350 + t2530*t3157*t5350 + t262*t4216*t5776 - 1.*t5292*t5788 - 1.*t3408*t5844 - 1.*t3604*t5854 - 1.*t3867*t5892 - 1.*t4010*t5915 + 1.11344*(-1.*t3820*t5892 + t3690*t5915) + 0.02159*(t3690*t5892 + t3820*t5915) - 0.1305*(-1.*t1397*t5292 + t262*t4216*t650)))*var2(8) + (t4187*t5748*(-1.*t3029*t5541 - 1.*t5392*t6643 - 1.*t5381*t6651 - 1.*t3157*t6669 - 1.*t3604*t6686 - 1.*t3408*t6701 - 1.*t4010*t6711 - 1.*t3867*t6721 + 0.02159*(t3820*t6711 + t3690*t6721) + 1.11344*(t3690*t6711 - 1.*t3820*t6721)) + t5734*t5748*(t3029*t3205 + t262*t2685*t6643 + t2397*t6651 + t3157*t6776 + t3604*t6783 + t3408*t6787 + t4010*t6791 + t3867*t6811 - 0.02159*(t3820*t6791 + t3690*t6811) - 1.11344*(t3690*t6791 - 1.*t3820*t6811)))*var2(9) + (t5734*t5748*(t3553*t3604 + t3065*t6895 + t3205*t6898 + t3553*t6904 + t3408*t6910 + t3646*t6914 + t4010*t6917 + t3867*t6922 - 0.02159*(t3820*t6917 + t3690*t6922) - 1.11344*(t3690*t6917 - 1.*t3820*t6922)) + t4187*t5748*(-1.*t3604*t5575 - 1.*t5402*t6895 - 1.*t5541*t6898 - 1.*t5575*t6904 - 1.*t5584*t6914 - 1.*t3408*t6950 - 1.*t4010*t6956 - 1.*t3867*t6961 + 0.02159*(t3820*t6956 + t3690*t6961) + 1.11344*(t3690*t6956 - 1.*t3820*t6961)))*var2(10) + (t5734*t5748*(-1.11344*(-1.*t3690*t3922 - 1.*t3820*t4032) - 0.02159*t4072 + t3922*t6848 + t4032*t6855) + t4187*t5748*(1.11344*(-1.*t3690*t5611 - 1.*t3820*t5654) + 0.02159*t5689 - 1.*t5611*t6848 - 1.*t5654*t6855))*var2(14);
  out = reshape(p_output1, 1, 1);
end