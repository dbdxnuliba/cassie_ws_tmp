%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% p_leftToe
% 
% This file is automatically converted to matlab format from C code.
% Source symbolic expressions exported from FROST:
% 	 https://github.com/ayonga/frost-dev
% 
% Author: Jenna Reher (jreher@caltech.edu)
% Automatically generated on: November 07, 2021 T 02:26
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
function out = p_leftToe(var1)

  out = zeros(3, 1);

  p_output1 = zeros(3,1);


  t1079 = cos(var1(5));
  t1633 = cos(var1(7));
  t3600 = sin(var1(6));
  t4214 = sin(var1(5));
  t4270 = sin(var1(7));
  t4375 = cos(var1(8));
  t4376 = -1.*t4375;
  t4434 = 1. + t4376;
  t4523 = sin(var1(8));
  t4348 = -1.*t1079*t1633*t3600;
  t4367 = t4214*t4270;
  t4374 = t4348 + t4367;
  t4616 = cos(var1(6));
  t4727 = cos(var1(9));
  t4732 = -1.*t4727;
  t4750 = 1. + t4732;
  t4756 = sin(var1(9));
  t4713 = t1079*t4616*t4375;
  t4717 = t4374*t4523;
  t4721 = t4713 + t4717;
  t4785 = t1633*t4214;
  t4791 = t1079*t3600*t4270;
  t4801 = t4785 + t4791;
  t4841 = cos(var1(10));
  t4846 = -1.*t4841;
  t4851 = 1. + t4846;
  t4876 = sin(var1(10));
  t4884 = t4727*t4721;
  t4888 = t4801*t4756;
  t4891 = t4884 + t4888;
  t4936 = t4727*t4801;
  t4945 = -1.*t4721*t4756;
  t4971 = t4936 + t4945;
  t5000 = cos(var1(11));
  t5004 = -1.*t5000;
  t5009 = 1. + t5004;
  t5021 = sin(var1(11));
  t5027 = -1.*t4876*t4891;
  t5028 = t4841*t4971;
  t5029 = t5027 + t5028;
  t5036 = t4841*t4891;
  t5037 = t4876*t4971;
  t5038 = t5036 + t5037;
  t5040 = cos(var1(12));
  t5041 = -1.*t5040;
  t5042 = 1. + t5041;
  t5058 = sin(var1(12));
  t5096 = t5021*t5029;
  t5113 = t5000*t5038;
  t5118 = t5096 + t5113;
  t5169 = t5000*t5029;
  t5171 = -1.*t5021*t5038;
  t5172 = t5169 + t5171;
  t5175 = cos(var1(14));
  t5176 = -1.*t5175;
  t5177 = 1. + t5176;
  t5180 = sin(var1(14));
  t5185 = -1.*t5058*t5118;
  t5186 = t5040*t5172;
  t5187 = t5185 + t5186;
  t5209 = t5040*t5118;
  t5221 = t5058*t5172;
  t5233 = t5209 + t5221;
  t2458 = -1.*t1633;
  t3586 = 1. + t2458;
  t5308 = sin(var1(4));
  t5305 = cos(var1(4));
  t5306 = t5305*t4616;
  t5309 = -1.*t5308*t4214*t3600;
  t5310 = t5306 + t5309;
  t4493 = 0.135*t4434;
  t4543 = 0.049*t4523;
  t4551 = t4493 + t4543;
  t4650 = -0.049*t4434;
  t4692 = 0.135*t4523;
  t4693 = t4650 + t4692;
  t5313 = t1633*t5310;
  t5318 = -1.*t1079*t5308*t4270;
  t5328 = t5313 + t5318;
  t5338 = t4616*t5308*t4214;
  t5342 = t5305*t3600;
  t5348 = t5338 + t5342;
  t4755 = -0.049*t4750;
  t4761 = -0.09*t4756;
  t4768 = t4755 + t4761;
  t4806 = -0.09*t4750;
  t4810 = 0.049*t4756;
  t4818 = t4806 + t4810;
  t4855 = -0.049*t4851;
  t4877 = -0.21*t4876;
  t4878 = t4855 + t4877;
  t5376 = t4375*t5348;
  t5379 = t5328*t4523;
  t5383 = t5376 + t5379;
  t5387 = -1.*t1079*t1633*t5308;
  t5388 = -1.*t5310*t4270;
  t5389 = t5387 + t5388;
  t4924 = -0.21*t4851;
  t4928 = 0.049*t4876;
  t4935 = t4924 + t4928;
  t5015 = -0.27068*t5009;
  t5022 = 0.00159*t5021;
  t5026 = t5015 + t5022;
  t5395 = t4727*t5383;
  t5399 = t5389*t4756;
  t5403 = t5395 + t5399;
  t5422 = t4727*t5389;
  t5426 = -1.*t5383*t4756;
  t5430 = t5422 + t5426;
  t5033 = -0.00159*t5009;
  t5034 = -0.27068*t5021;
  t5035 = t5033 + t5034;
  t5047 = 0.01841*t5042;
  t5076 = -0.70544*t5058;
  t5084 = t5047 + t5076;
  t5438 = -1.*t4876*t5403;
  t5444 = t4841*t5430;
  t5448 = t5438 + t5444;
  t5455 = t4841*t5403;
  t5459 = t4876*t5430;
  t5463 = t5455 + t5459;
  t5156 = -0.70544*t5042;
  t5165 = -0.01841*t5058;
  t5167 = t5156 + t5165;
  t5179 = -1.11344*t5177;
  t5182 = 0.02159*t5180;
  t5183 = t5179 + t5182;
  t5465 = t5021*t5448;
  t5466 = t5000*t5463;
  t5468 = t5465 + t5466;
  t5473 = t5000*t5448;
  t5475 = -1.*t5021*t5463;
  t5476 = t5473 + t5475;
  t5193 = -0.02159*t5177;
  t5198 = -1.11344*t5180;
  t5204 = t5193 + t5198;
  t5489 = -1.*t5058*t5468;
  t5491 = t5040*t5476;
  t5493 = t5489 + t5491;
  t5503 = t5040*t5468;
  t5508 = t5058*t5476;
  t5512 = t5503 + t5508;
  t5536 = t4616*t5308;
  t5537 = t5305*t4214*t3600;
  t5538 = t5536 + t5537;
  t5550 = t1633*t5538;
  t5551 = t5305*t1079*t4270;
  t5552 = t5550 + t5551;
  t5554 = -1.*t5305*t4616*t4214;
  t5555 = t5308*t3600;
  t5556 = t5554 + t5555;
  t5584 = t4375*t5556;
  t5585 = t5552*t4523;
  t5586 = t5584 + t5585;
  t5589 = t5305*t1079*t1633;
  t5590 = -1.*t5538*t4270;
  t5591 = t5589 + t5590;
  t5594 = t4727*t5586;
  t5595 = t5591*t4756;
  t5596 = t5594 + t5595;
  t5600 = t4727*t5591;
  t5601 = -1.*t5586*t4756;
  t5602 = t5600 + t5601;
  t5605 = -1.*t4876*t5596;
  t5606 = t4841*t5602;
  t5608 = t5605 + t5606;
  t5618 = t4841*t5596;
  t5623 = t4876*t5602;
  t5629 = t5618 + t5623;
  t5639 = t5021*t5608;
  t5641 = t5000*t5629;
  t5642 = t5639 + t5641;
  t5644 = t5000*t5608;
  t5645 = -1.*t5021*t5629;
  t5646 = t5644 + t5645;
  t5648 = -1.*t5058*t5642;
  t5649 = t5040*t5646;
  t5654 = t5648 + t5649;
  t5657 = t5040*t5642;
  t5658 = t5058*t5646;
  t5659 = t5657 + t5658;
  p_output1(1)=-0.135*t1079*t3586*t3600 - 0.135*t4214*t4270 + t4374*t4551 + 0.1305*(t4374*t4375 - 1.*t1079*t4523*t4616) + t1079*t4616*t4693 + t4721*t4768 + t4801*t4818 + t4878*t4891 + t4935*t4971 + t5026*t5029 + t5035*t5038 + t5084*t5118 + t5167*t5172 + t5183*t5187 + t5204*t5233 - 0.02159*(t5180*t5187 + t5175*t5233) - 1.11344*(t5175*t5187 - 1.*t5180*t5233) + var1(1);
  p_output1(2)=0.135*t1079*t4270*t5308 + 0.135*t3586*t5310 + t4551*t5328 + t4693*t5348 + 0.1305*(t4375*t5328 - 1.*t4523*t5348) + t4768*t5383 + t4818*t5389 + t4878*t5403 + t4935*t5430 + t5026*t5448 + t5035*t5463 + t5084*t5468 + t5167*t5476 + t5183*t5493 + t5204*t5512 - 0.02159*(t5180*t5493 + t5175*t5512) - 1.11344*(t5175*t5493 - 1.*t5180*t5512) + var1(2);
  p_output1(3)=-0.135*t1079*t4270*t5305 + 0.135*t3586*t5538 + t4551*t5552 + t4693*t5556 + 0.1305*(t4375*t5552 - 1.*t4523*t5556) + t4768*t5586 + t4818*t5591 + t4878*t5596 + t4935*t5602 + t5026*t5608 + t5035*t5629 + t5084*t5642 + t5167*t5646 + t5183*t5654 + t5204*t5659 - 0.02159*(t5180*t5654 + t5175*t5659) - 1.11344*(t5175*t5654 - 1.*t5180*t5659) + var1(3);
  out = reshape(p_output1, 3, 1);
end