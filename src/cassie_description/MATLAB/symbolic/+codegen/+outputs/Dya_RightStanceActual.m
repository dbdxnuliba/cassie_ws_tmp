%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Dya_RightStanceActual
% 
% This file is automatically converted to matlab format from C code.
% Source symbolic expressions exported from FROST:
% 	 https://github.com/ayonga/frost-dev
% 
% Author: Jenna Reher (jreher@caltech.edu)
% Automatically generated on: November 07, 2021 T 02:27
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
function out = Dya_RightStanceActual(var1)

  out = zeros(9, 44);

  p_output1 = zeros(396,1);


  t32 = cos(var1(9));
  t103 = cos(var1(10));
  t111 = -1.*t103;
  t118 = 1. + t111;
  t153 = sin(var1(10));
  t221 = sin(var1(9));
  t337 = -1.*var1(10);
  t339 = 0.226893 + t337;
  t340 = cos(t339);
  t382 = -1.*t340;
  t406 = 1. + t382;
  t420 = sin(t339);
  t605 = -1.*t32*t153;
  t623 = -1.*t103*t221;
  t635 = t605 + t623;
  t693 = t103*t32;
  t737 = -1.*t153*t221;
  t785 = t693 + t737;
  t852 = cos(var1(14));
  t911 = -1.*t852;
  t983 = 1. + t911;
  t1067 = sin(var1(14));
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
  t2814 = power(t2810,2);
  t2893 = power(t2882,2);
  t2896 = t2814 + t2893;
  t2916 = 1/t2896;
  t1556 = power(t1548,2);
  t2128 = power(t2117,2);
  t2135 = 0.00002025 + t1556 + t2128;
  t2164 = 1/sqrt(t2135);
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
  t4573 = cos(var1(17));
  t4576 = sin(var1(17));
  t4580 = cos(var1(18));
  t4588 = -1.*t4580;
  t4590 = 1. + t4588;
  t4597 = sin(var1(18));
  t4623 = -1.*var1(18);
  t4626 = 0.226893 + t4623;
  t4627 = cos(t4626);
  t4628 = -1.*t4627;
  t4631 = 1. + t4628;
  t4645 = sin(t4626);
  t4654 = -1.*t4580*t4576;
  t4656 = -1.*t4573*t4597;
  t4659 = t4654 + t4656;
  t4703 = t4573*t4580;
  t4710 = -1.*t4576*t4597;
  t4719 = t4703 + t4710;
  t4744 = cos(var1(22));
  t4746 = -1.*t4744;
  t4748 = 1. + t4746;
  t4758 = sin(var1(22));
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
  t4831 = power(t4827,2);
  t4882 = power(t4881,2);
  t4888 = 0.00002025 + t4831 + t4882;
  t4889 = 1/sqrt(t4888);
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
  p_output1(28)=1.;
  p_output1(38)=1.;
  p_output1(61)=1.;
  p_output1(71)=1.;
  p_output1(77)=0.5*t2164*(2.*t1548*t2117 + 2.*t1548*(t2213 + t2223 + t2279 + t2356 + t2401 + t2449 + t1283*t2479 + t1100*t2544 - 0.02159*t2565 - 1.11344*t2650));
  p_output1(78)=t1548*t2810*t2916 + t2882*t2916*(t1574 + t1581 + t1587 + t1590 - 1.*t1283*t2479 - 1.*t1100*t2544 + 0.02159*t2565 + 1.11344*t2650 + t2933 + t2957);
  p_output1(86)=0.5*t2164*(2.*t1548*(t2401 + t2449 - 1.*t221*t3024 + t3042*t32 + t1283*t3662 + t1100*t3726 - 0.02159*t3760 - 1.11344*t3772 + t3163*t635 + t3060*t785) + 2.*t2117*(t221*t3042 + t1701*t3060 + t3024*t32 + t1283*t3240 + t1100*t3377 - 0.02159*t3493 - 1.11344*t3532 + t674 + t3163*t785 + t847));
  p_output1(87)=t2882*t2916*(t2933 + t2957 + t221*t3024 - 1.*t3042*t32 - 1.*t1283*t3662 - 1.*t1100*t3726 + 0.02159*t3760 + 1.11344*t3772 - 1.*t3163*t635 - 1.*t3060*t785) + t1548*t2916*(t2762 + t2768 - 1.*t221*t3042 - 1.*t1701*t3060 - 1.*t3024*t32 - 1.*t1283*t3240 - 1.*t1100*t3377 + 0.02159*t3493 + 1.11344*t3532 - 1.*t3163*t785);
  p_output1(122)=0.5*t2164*(2.*t1548*(-0.02159*t1465 + t1140*t4164 + t1322*t4231 - 1.11344*t4314) + 2.*t2117*(-0.02159*t2110 + t1883*t4164 + t1790*t4231 - 1.11344*t4421));
  p_output1(123)=t2882*t2916*(0.02159*t1465 - 1.*t1140*t4164 - 1.*t1322*t4231 + 1.11344*t4314) + t1548*t2916*(0.02159*t2110 - 1.*t1883*t4164 - 1.*t1790*t4231 + 1.11344*t4421);
  p_output1(126)=-1.;
  p_output1(138)=1.;
  p_output1(148)=0.5*t4889*(2.*t4827*t4881 + 2.*t4827*(-0.09*t4573 - 0.049*t4576 - 1.*t4576*t4608 - 1.*t4573*t4618 + t4911 + t4916 + t4765*t4924 + t4792*t4931 - 1.11344*(-1.*t4758*t4924 + t4744*t4931) - 0.02159*(t4744*t4924 + t4758*t4931)));
  p_output1(157)=0.5*t4889*(2.*t4881*(t4667 + t4730 + t4573*t4963 + t4576*t4977 + t4845*t4980 + t4719*t4994 + t4765*t5013 + t4792*t5017 - 1.11344*(-1.*t4758*t5013 + t4744*t5017) - 0.02159*(t4744*t5013 + t4758*t5017)) + 2.*t4827*(t4911 + t4916 - 1.*t4576*t4963 + t4573*t4977 + t4719*t4980 + t4659*t4994 + t4765*t5068 + t4792*t5070 - 1.11344*(-1.*t4758*t5068 + t4744*t5070) - 0.02159*(t4744*t5068 + t4758*t5070)));
  p_output1(193)=0.5*t4889*(2.*t4827*(-1.11344*(-1.*t4742*t4744 - 1.*t4758*t4789) - 0.02159*t4802 + t4789*t5093 + t4742*t5098) + 2.*t4881*(-1.11344*(-1.*t4744*t4855 - 1.*t4758*t4859) - 0.02159*t4877 + t4859*t5093 + t4855*t5098));
  out = reshape(p_output1, 9, 44);
end