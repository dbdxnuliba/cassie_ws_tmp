%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% yaStandCOM_new
% 
% This file is automatically converted to matlab format from C code.
% Source symbolic expressions exported from FROST:
% 	 https://github.com/ayonga/frost-dev
% 
% Author: Jenna Reher (jreher@caltech.edu)
% Automatically generated on: September 07, 2021 T 10:22
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
function out = yaStandCOM_new(var1)

  out = zeros(6, 1);

  p_output1 = zeros(6,1);


  t5 = cos(var1(5));
  t72 = sin(var1(6));
  t19 = cos(var1(16));
  t20 = -1.*t19;
  t21 = 1. + t20;
  t23 = sin(var1(16));
  t48 = sin(var1(15));
  t50 = sin(var1(5));
  t54 = cos(var1(15));
  t17 = cos(var1(6));
  t147 = t48*t50;
  t149 = -1.*t54*t5*t72;
  t150 = t147 + t149;
  t154 = cos(var1(17));
  t156 = -1.*t154;
  t157 = 1. + t156;
  t173 = sin(var1(17));
  t212 = t54*t50;
  t223 = t5*t48*t72;
  t228 = t212 + t223;
  t281 = t19*t5*t17;
  t283 = t23*t150;
  t297 = t281 + t283;
  t319 = cos(var1(18));
  t323 = -1.*t319;
  t331 = 1. + t323;
  t343 = sin(var1(18));
  t349 = t173*t228;
  t362 = t154*t297;
  t363 = t349 + t362;
  t412 = t154*t228;
  t414 = -1.*t173*t297;
  t419 = t412 + t414;
  t449 = cos(var1(19));
  t457 = -1.*t449;
  t474 = 1. + t457;
  t482 = sin(var1(19));
  t492 = -1.*t343*t363;
  t496 = t319*t419;
  t497 = t492 + t496;
  t518 = t319*t363;
  t519 = t343*t419;
  t526 = t518 + t519;
  t535 = cos(var1(20));
  t539 = -1.*t535;
  t552 = 1. + t539;
  t559 = sin(var1(20));
  t580 = t482*t497;
  t582 = t449*t526;
  t592 = t580 + t582;
  t608 = t449*t497;
  t613 = -1.*t482*t526;
  t619 = t608 + t613;
  t624 = cos(var1(22));
  t625 = -1.*t624;
  t629 = 1. + t625;
  t632 = sin(var1(22));
  t649 = -1.*t559*t592;
  t650 = t535*t619;
  t652 = t649 + t650;
  t665 = t535*t592;
  t671 = t559*t619;
  t678 = t665 + t671;
  t78 = cos(var1(7));
  t713 = sin(var1(7));
  t739 = cos(var1(8));
  t740 = -1.*t739;
  t741 = 1. + t740;
  t747 = sin(var1(8));
  t724 = -1.*t5*t78*t72;
  t737 = t50*t713;
  t738 = t724 + t737;
  t800 = cos(var1(9));
  t802 = -1.*t800;
  t805 = 1. + t802;
  t820 = sin(var1(9));
  t789 = t5*t17*t739;
  t794 = t738*t747;
  t798 = t789 + t794;
  t828 = t78*t50;
  t829 = t5*t72*t713;
  t831 = t828 + t829;
  t861 = cos(var1(10));
  t863 = -1.*t861;
  t864 = 1. + t863;
  t878 = sin(var1(10));
  t891 = t800*t798;
  t899 = t831*t820;
  t900 = t891 + t899;
  t916 = t800*t831;
  t920 = -1.*t798*t820;
  t924 = t916 + t920;
  t928 = cos(var1(11));
  t930 = -1.*t928;
  t931 = 1. + t930;
  t933 = sin(var1(11));
  t947 = -1.*t878*t900;
  t949 = t861*t924;
  t952 = t947 + t949;
  t988 = t861*t900;
  t989 = t878*t924;
  t991 = t988 + t989;
  t993 = cos(var1(12));
  t995 = -1.*t993;
  t997 = 1. + t995;
  t1002 = sin(var1(12));
  t1014 = t933*t952;
  t1016 = t928*t991;
  t1019 = t1014 + t1016;
  t1033 = t928*t952;
  t1034 = -1.*t933*t991;
  t1036 = t1033 + t1034;
  t1039 = cos(var1(14));
  t1042 = -1.*t1039;
  t1045 = 1. + t1042;
  t1052 = sin(var1(14));
  t1058 = -1.*t1002*t1019;
  t1062 = t993*t1036;
  t1069 = t1058 + t1062;
  t1077 = t993*t1019;
  t1080 = t1002*t1036;
  t1082 = t1077 + t1080;
  t57 = -1.*t54;
  t71 = 1. + t57;
  t22 = -0.049*t21;
  t25 = -0.135*t23;
  t29 = t22 + t25;
  t1154 = 0.135*t48*t50;
  t1155 = 0.135*t71*t5*t72;
  t126 = -0.135*t21;
  t141 = 0.049*t23;
  t143 = t126 + t141;
  t250 = -1.*t5*t17*t23;
  t254 = t19*t150;
  t255 = t250 + t254;
  t1166 = t5*t17*t29;
  t1167 = t143*t150;
  t161 = -0.09*t157;
  t195 = 0.049*t173;
  t204 = t161 + t195;
  t261 = -0.049*t157;
  t276 = -0.09*t173;
  t280 = t261 + t276;
  t1186 = t204*t228;
  t1190 = t280*t297;
  t336 = -0.049*t331;
  t344 = -0.21*t343;
  t347 = t336 + t344;
  t396 = -0.21*t331;
  t400 = 0.049*t343;
  t405 = t396 + t400;
  t1207 = t347*t363;
  t1214 = t405*t419;
  t478 = -0.27068*t474;
  t490 = 0.00159*t482;
  t491 = t478 + t490;
  t501 = -0.00159*t474;
  t508 = -0.27068*t482;
  t510 = t501 + t508;
  t1232 = t491*t497;
  t1233 = t510*t526;
  t557 = 0.01841*t552;
  t574 = -0.70544*t559;
  t576 = t557 + t574;
  t603 = -0.70544*t552;
  t606 = -0.01841*t559;
  t607 = t603 + t606;
  t1284 = cos(var1(21));
  t1290 = -1.*t1284;
  t1299 = 1. + t1290;
  t1307 = sin(var1(21));
  t1255 = t576*t592;
  t1256 = t607*t619;
  t1316 = 0.005481192614*t1299;
  t1303 = 0.07769774964800001*t1299;
  t1342 = -0.0004284921280000001*t1299;
  t1370 = 0.005498*t1307;
  t1384 = 0.996943*t1307;
  t1350 = -0.077936*t1307;
  t1441 = 0.0004284921280000001*t1299;
  t1346 = -0.996943*t1307;
  t1494 = -0.005481192614*t1299;
  t1319 = 0.077936*t1307;
  t1421 = -0.07769774964800001*t1299;
  t1309 = -0.005498*t1307;
  t631 = -1.11344*t629;
  t637 = 0.02159*t632;
  t641 = t631 + t637;
  t657 = -0.02159*t629;
  t658 = -1.11344*t632;
  t661 = t657 + t658;
  t681 = t632*t652;
  t689 = t624*t678;
  t692 = t681 + t689;
  t706 = t624*t652;
  t708 = -1.*t632*t678;
  t709 = t706 + t708;
  t1148 = -0.0233*t5*t17;
  t80 = -1.*t78;
  t88 = 1. + t80;
  t1614 = -0.135*t5*t88*t72;
  t1616 = -0.135*t50*t713;
  t746 = 0.135*t741;
  t749 = 0.049*t747;
  t750 = t746 + t749;
  t760 = -0.049*t741;
  t769 = 0.135*t747;
  t774 = t760 + t769;
  t779 = t739*t738;
  t785 = -1.*t5*t17*t747;
  t786 = t779 + t785;
  t1631 = t738*t750;
  t1634 = t5*t17*t774;
  t813 = -0.049*t805;
  t822 = -0.09*t820;
  t825 = t813 + t822;
  t832 = -0.09*t805;
  t843 = 0.049*t820;
  t852 = t832 + t843;
  t1644 = t798*t825;
  t1651 = t831*t852;
  t874 = -0.049*t864;
  t884 = -0.21*t878;
  t889 = t874 + t884;
  t905 = -0.21*t864;
  t907 = 0.049*t878;
  t913 = t905 + t907;
  t1686 = t889*t900;
  t1689 = t913*t924;
  t932 = -0.27068*t931;
  t943 = 0.00159*t933;
  t944 = t932 + t943;
  t974 = -0.00159*t931;
  t981 = -0.27068*t933;
  t986 = t974 + t981;
  t1706 = t944*t952;
  t1707 = t986*t991;
  t998 = 0.01841*t997;
  t1006 = -0.70544*t1002;
  t1012 = t998 + t1006;
  t1024 = -0.70544*t997;
  t1026 = -0.01841*t1002;
  t1027 = t1024 + t1026;
  t1734 = cos(var1(13));
  t1735 = -1.*t1734;
  t1738 = 1. + t1735;
  t1747 = sin(var1(13));
  t1723 = t1012*t1019;
  t1724 = t1027*t1036;
  t1746 = -0.005481192614*t1738;
  t1754 = -0.07769774964800001*t1738;
  t1770 = -0.0004284921280000001*t1738;
  t1827 = -0.005498*t1747;
  t1842 = 0.996943*t1747;
  t1802 = 0.077936*t1747;
  t1872 = 0.0004284921280000001*t1738;
  t1781 = -0.996943*t1747;
  t1893 = 0.005481192614*t1738;
  t1750 = -0.077936*t1747;
  t1867 = 0.07769774964800001*t1738;
  t1756 = 0.005498*t1747;
  t1046 = -1.11344*t1045;
  t1055 = 0.02159*t1052;
  t1057 = t1046 + t1055;
  t1071 = -0.02159*t1045;
  t1073 = -1.11344*t1052;
  t1076 = t1071 + t1073;
  t1084 = t1052*t1069;
  t1085 = t1039*t1082;
  t1087 = t1084 + t1085;
  t1091 = t1039*t1069;
  t1092 = -1.*t1052*t1082;
  t1094 = t1091 + t1092;
  t1985 = sin(var1(4));
  t1991 = cos(var1(4));
  t1998 = t1991*t17;
  t2000 = -1.*t1985*t50*t72;
  t2002 = t1998 + t2000;
  t1990 = t17*t1985*t50;
  t1992 = t1991*t72;
  t1994 = t1990 + t1992;
  t2016 = -1.*t5*t48*t1985;
  t2017 = t54*t2002;
  t2022 = t2016 + t2017;
  t2035 = -1.*t54*t5*t1985;
  t2036 = -1.*t48*t2002;
  t2039 = t2035 + t2036;
  t2062 = t19*t1994;
  t2070 = t23*t2022;
  t2071 = t2062 + t2070;
  t2075 = t173*t2039;
  t2077 = t154*t2071;
  t2079 = t2075 + t2077;
  t2085 = t154*t2039;
  t2086 = -1.*t173*t2071;
  t2098 = t2085 + t2086;
  t2128 = -1.*t343*t2079;
  t2134 = t319*t2098;
  t2142 = t2128 + t2134;
  t2153 = t319*t2079;
  t2154 = t343*t2098;
  t2155 = t2153 + t2154;
  t2164 = t482*t2142;
  t2171 = t449*t2155;
  t2174 = t2164 + t2171;
  t2176 = t449*t2142;
  t2184 = -1.*t482*t2155;
  t2187 = t2176 + t2184;
  t2195 = -1.*t559*t2174;
  t2197 = t535*t2187;
  t2203 = t2195 + t2197;
  t2221 = t535*t2174;
  t2231 = t559*t2187;
  t2233 = t2221 + t2231;
  t2287 = t78*t2002;
  t2288 = -1.*t5*t1985*t713;
  t2294 = t2287 + t2288;
  t2309 = t739*t1994;
  t2311 = t2294*t747;
  t2314 = t2309 + t2311;
  t2321 = -1.*t5*t78*t1985;
  t2322 = -1.*t2002*t713;
  t2326 = t2321 + t2322;
  t2328 = t800*t2314;
  t2330 = t2326*t820;
  t2341 = t2328 + t2330;
  t2343 = t800*t2326;
  t2344 = -1.*t2314*t820;
  t2345 = t2343 + t2344;
  t2355 = -1.*t878*t2341;
  t2357 = t861*t2345;
  t2363 = t2355 + t2357;
  t2373 = t861*t2341;
  t2375 = t878*t2345;
  t2378 = t2373 + t2375;
  t2381 = t933*t2363;
  t2387 = t928*t2378;
  t2389 = t2381 + t2387;
  t2392 = t928*t2363;
  t2397 = -1.*t933*t2378;
  t2398 = t2392 + t2397;
  t2403 = -1.*t1002*t2389;
  t2404 = t993*t2398;
  t2405 = t2403 + t2404;
  t2409 = t993*t2389;
  t2416 = t1002*t2398;
  t2420 = t2409 + t2416;
  t2470 = -0.135*t5*t48*t1985;
  t2475 = -0.135*t71*t2002;
  t2050 = -1.*t23*t1994;
  t2054 = t19*t2022;
  t2055 = t2050 + t2054;
  t2491 = t29*t1994;
  t2496 = t143*t2022;
  t2554 = t204*t2039;
  t2558 = t280*t2071;
  t2579 = t347*t2079;
  t2584 = t405*t2098;
  t2624 = t491*t2142;
  t2625 = t510*t2155;
  t1279 = 2.1934241414728571e-7*var1(21);
  t1302 = -0.000033783761634830594*t1299;
  t1312 = t1303 + t1309;
  t1315 = -0.021877537552*t1312;
  t1321 = t1316 + t1319;
  t1325 = -0.6934341012630001*t1321;
  t1331 = t1279 + t1302 + t1315 + t1325;
  t2644 = t576*t2174;
  t2646 = t607*t2187;
  t1335 = -1.2096424700126054e-9*var1(21);
  t1338 = -0.6934128581485427*t1299;
  t1347 = t1342 + t1346;
  t1349 = -0.021877537552*t1347;
  t1355 = t1316 + t1350;
  t1357 = -0.005534467322*t1355;
  t1359 = t1335 + t1338 + t1349 + t1357;
  t1362 = -1.7147089040178687e-8*var1(21);
  t1369 = -0.021744644052735636*t1299;
  t1374 = t1303 + t1370;
  t1375 = -0.005534467322*t1374;
  t1397 = t1342 + t1384;
  t1400 = -0.6934341012630001*t1397;
  t1405 = t1362 + t1369 + t1375 + t1400;
  t1427 = t1421 + t1370;
  t1442 = t1441 + t1384;
  t1471 = -0.993925573253*t1299;
  t1475 = 1. + t1471;
  t1495 = t1494 + t1350;
  t1497 = -0.999969365345*t1299;
  t1499 = 1. + t1497;
  t1506 = t1441 + t1346;
  t1525 = -0.006104248100000001*t1299;
  t1531 = 1. + t1525;
  t1541 = t1494 + t1319;
  t1544 = t1421 + t1309;
  t2249 = t632*t2203;
  t2250 = t624*t2233;
  t2263 = t2249 + t2250;
  t2270 = t624*t2203;
  t2272 = -1.*t632*t2233;
  t2273 = t2270 + t2272;
  t2473 = -0.0233*t1994;
  t2737 = 0.135*t88*t2002;
  t2741 = 0.135*t5*t1985*t713;
  t2298 = t739*t2294;
  t2301 = -1.*t1994*t747;
  t2303 = t2298 + t2301;
  t2752 = t2294*t750;
  t2759 = t1994*t774;
  t2773 = t2314*t825;
  t2775 = t2326*t852;
  t2791 = t889*t2341;
  t2794 = t913*t2345;
  t2806 = t944*t2363;
  t2807 = t986*t2378;
  t1733 = -2.1934241414728571e-7*var1(13);
  t1740 = 0.000033783761634830594*t1738;
  t1752 = t1746 + t1750;
  t1753 = -0.6934341012630001*t1752;
  t1757 = t1754 + t1756;
  t1759 = -0.021877537552*t1757;
  t1762 = t1733 + t1740 + t1753 + t1759;
  t2814 = t1012*t2389;
  t2815 = t1027*t2398;
  t1765 = -1.2096424700126054e-9*var1(13);
  t1767 = -0.6934128581485427*t1738;
  t1786 = t1770 + t1781;
  t1788 = -0.021877537552*t1786;
  t1804 = t1746 + t1802;
  t1812 = 0.005534467322*t1804;
  t1816 = t1765 + t1767 + t1788 + t1812;
  t1824 = -1.7147089040178687e-8*var1(13);
  t1826 = -0.021744644052735636*t1738;
  t1829 = t1754 + t1827;
  t1838 = 0.005534467322*t1829;
  t1843 = t1770 + t1842;
  t1845 = -0.6934341012630001*t1843;
  t1855 = t1824 + t1826 + t1838 + t1845;
  t1868 = t1867 + t1827;
  t1874 = t1872 + t1842;
  t1881 = -0.993925573253*t1738;
  t1882 = 1. + t1881;
  t1897 = t1893 + t1802;
  t1900 = -0.999969365345*t1738;
  t1903 = 1. + t1900;
  t1907 = t1872 + t1781;
  t1921 = -0.006104248100000001*t1738;
  t1922 = 1. + t1921;
  t1930 = t1893 + t1750;
  t1941 = t1867 + t1756;
  t2429 = t1052*t2405;
  t2430 = t1039*t2420;
  t2434 = t2429 + t2430;
  t2438 = t1039*t2405;
  t2439 = -1.*t1052*t2420;
  t2440 = t2438 + t2439;
  t2919 = t17*t1985;
  t2921 = t1991*t50*t72;
  t2922 = t2919 + t2921;
  t2902 = -1.*t1991*t17*t50;
  t2904 = t1985*t72;
  t2905 = t2902 + t2904;
  t2931 = t1991*t5*t48;
  t2937 = t54*t2922;
  t2941 = t2931 + t2937;
  t2957 = t54*t1991*t5;
  t2959 = -1.*t48*t2922;
  t2965 = t2957 + t2959;
  t2979 = t19*t2905;
  t2982 = t23*t2941;
  t2987 = t2979 + t2982;
  t3012 = t173*t2965;
  t3013 = t154*t2987;
  t3016 = t3012 + t3013;
  t3019 = t154*t2965;
  t3028 = -1.*t173*t2987;
  t3030 = t3019 + t3028;
  t3034 = -1.*t343*t3016;
  t3037 = t319*t3030;
  t3038 = t3034 + t3037;
  t3043 = t319*t3016;
  t3044 = t343*t3030;
  t3045 = t3043 + t3044;
  t3049 = t482*t3038;
  t3050 = t449*t3045;
  t3054 = t3049 + t3050;
  t3063 = t449*t3038;
  t3064 = -1.*t482*t3045;
  t3071 = t3063 + t3064;
  t3074 = -1.*t559*t3054;
  t3077 = t535*t3071;
  t3078 = t3074 + t3077;
  t3080 = t535*t3054;
  t3082 = t559*t3071;
  t3090 = t3080 + t3082;
  t3121 = t78*t2922;
  t3126 = t1991*t5*t713;
  t3127 = t3121 + t3126;
  t3138 = t739*t2905;
  t3139 = t3127*t747;
  t3141 = t3138 + t3139;
  t3148 = t1991*t5*t78;
  t3152 = -1.*t2922*t713;
  t3153 = t3148 + t3152;
  t3155 = t800*t3141;
  t3157 = t3153*t820;
  t3158 = t3155 + t3157;
  t3161 = t800*t3153;
  t3162 = -1.*t3141*t820;
  t3163 = t3161 + t3162;
  t3168 = -1.*t878*t3158;
  t3169 = t861*t3163;
  t3170 = t3168 + t3169;
  t3173 = t861*t3158;
  t3174 = t878*t3163;
  t3176 = t3173 + t3174;
  t3179 = t933*t3170;
  t3180 = t928*t3176;
  t3181 = t3179 + t3180;
  t3192 = t928*t3170;
  t3193 = -1.*t933*t3176;
  t3194 = t3192 + t3193;
  t3197 = -1.*t1002*t3181;
  t3203 = t993*t3194;
  t3205 = t3197 + t3203;
  t3211 = t993*t3181;
  t3212 = t1002*t3194;
  t3216 = t3211 + t3212;
  t3282 = 0.135*t1991*t5*t48;
  t3288 = -0.135*t71*t2922;
  t2972 = -1.*t23*t2905;
  t2974 = t19*t2941;
  t2975 = t2972 + t2974;
  t3303 = t29*t2905;
  t3304 = t143*t2941;
  t3317 = t204*t2965;
  t3321 = t280*t2987;
  t3342 = t347*t3016;
  t3344 = t405*t3030;
  t3367 = t491*t3038;
  t3368 = t510*t3045;
  t3389 = t576*t3054;
  t3390 = t607*t3071;
  t3097 = t632*t3078;
  t3098 = t624*t3090;
  t3103 = t3097 + t3098;
  t3112 = t624*t3078;
  t3114 = -1.*t632*t3090;
  t3115 = t3112 + t3114;
  t3287 = -0.0233*t2905;
  t3471 = 0.135*t88*t2922;
  t3476 = -0.135*t1991*t5*t713;
  t3132 = t739*t3127;
  t3133 = -1.*t2905*t747;
  t3135 = t3132 + t3133;
  t3487 = t3127*t750;
  t3488 = t2905*t774;
  t3498 = t3141*t825;
  t3499 = t3153*t852;
  t3523 = t889*t3158;
  t3524 = t913*t3163;
  t3538 = t944*t3170;
  t3539 = t986*t3176;
  t3551 = t1012*t3181;
  t3554 = t1027*t3194;
  t3221 = t1052*t3205;
  t3228 = t1039*t3216;
  t3232 = t3221 + t3228;
  t3237 = t1039*t3205;
  t3238 = -1.*t1052*t3216;
  t3248 = t3237 + t3238;
  p_output1(1)=0.5*(-1.*t1012*t1019 - 1.*t1027*t1036 - 1.*t1057*t1069 - 1.*t1076*t1082 - 0.0306*t1087 + 1.13106*t1094 - 1.*t143*t150 - 1.*t204*t228 + 0.1305*t255 - 1.*t280*t297 - 1.*t347*t363 - 1.*t405*t419 - 1.*t491*t497 - 1.*t17*t29*t5 - 0.135*t48*t50 - 1.*t510*t526 - 1.*t576*t592 - 1.*t607*t619 - 1.*t641*t652 - 1.*t661*t678 - 0.0306*t692 + 1.13106*t709 + 0.135*t50*t713 - 0.135*t5*t71*t72 - 1.*t738*t750 - 1.*t17*t5*t774 - 0.1305*t786 - 1.*t798*t825 - 1.*t831*t852 + 0.135*t5*t72*t88 - 1.*t889*t900 - 1.*t913*t924 - 1.*t944*t952 - 1.*t986*t991 - 2.*var1(1)) + 0.0288377642750394*(1.965608*(t1148 + t1154 + t1155 - 0.1351*t150 + 0.01793*t228 + var1(1)) + 1.316608*(t1154 + t1155 + t1166 + t1167 - 0.0343*t228 - 0.135*t255 - 0.049*t297 + var1(1)) + 5.79228*(t1154 + t1155 + t1166 + t1167 + t1186 + t1190 - 0.17081*t255 - 0.04895*t363 - 0.14946*t419 + var1(1)) + 1.03008*(t1154 + t1155 + t1166 + t1167 + t1186 + t1190 + t1207 + t1214 - 0.132168*t255 - 0.255862*t497 - 0.007761*t526 + var1(1)) + 0.763*(t1154 + t1155 + t1166 + t1167 + t1186 + t1190 + t1207 + t1214 + t1232 + t1233 - 0.130288*t255 - 0.000421*t592 - 0.45406*t619 + var1(1)) + 1.03*(t1154 + t1155 + t1166 + t1167 + t1186 + t1190 + t1207 + t1214 + t1232 + t1233 + t1255 + t1256 - 0.127241*t255 - 0.826587*t652 - 0.004179*t678 + var1(1)) + 0.126*(t1154 + t1155 + t1166 + t1167 + t1186 + t1190 + t1207 + t1214 + t1232 + t1233 + t1255 + t1256 + t1331*t255 + t1359*t652 + t1405*t678 + 0.01889*(t1427*t255 + t1442*t652 + t1475*t678) - 0.617968*(t1495*t255 + t1499*t652 + t1506*t678) - 0.126739*(t1531*t255 + t1541*t652 + t1544*t678) + var1(1)) + 0.1498*(t1154 + t1155 + t1166 + t1167 + t1186 + t1190 + t1207 + t1214 + t1232 + t1233 + t1255 + t1256 - 0.13064*t255 + t641*t652 + t661*t678 + 0.00589*t692 - 1.11818*t709 + var1(1)) + 10.33*(0.05066*t17*t5 + 0.02841*t50 - 0.000346*t5*t72 + var1(1)) + 1.03*(-0.826587*t1069 - 0.004179*t1082 + t1614 + t1616 + t1631 + t1634 + t1644 + t1651 + t1686 + t1689 + t1706 + t1707 + t1723 + t1724 + 0.127241*t786 + var1(1)) + 0.763*(-0.000421*t1019 - 0.45406*t1036 + t1614 + t1616 + t1631 + t1634 + t1644 + t1651 + t1686 + t1689 + t1706 + t1707 + 0.130288*t786 + var1(1)) + 0.1498*(t1057*t1069 + t1076*t1082 + 0.00589*t1087 - 1.11818*t1094 + t1614 + t1616 + t1631 + t1634 + t1644 + t1651 + t1686 + t1689 + t1706 + t1707 + t1723 + t1724 + 0.13064*t786 + var1(1)) + 0.126*(t1614 + t1616 + t1631 + t1634 + t1644 + t1651 + t1686 + t1689 + t1706 + t1707 + t1723 + t1724 + t1069*t1816 + t1082*t1855 + t1762*t786 + 0.01889*(t1069*t1874 + t1082*t1882 + t1868*t786) - 0.617968*(t1069*t1903 + t1082*t1907 + t1897*t786) + 0.126739*(t1069*t1930 + t1082*t1941 + t1922*t786) + var1(1)) + 1.316608*(t1614 + t1616 + t1631 + t1634 + 0.135*t786 - 0.049*t798 - 0.0343*t831 + var1(1)) + 1.965608*(t1148 + t1614 + t1616 + 0.1351*t738 + 0.01793*t831 + var1(1)) + 5.79228*(t1614 + t1616 + t1631 + t1634 + t1644 + t1651 + 0.17081*t786 - 0.04895*t900 - 0.14946*t924 + var1(1)) + 1.03008*(t1614 + t1616 + t1631 + t1634 + t1644 + t1651 + t1686 + t1689 + 0.132168*t786 - 0.255862*t952 - 0.007761*t991 + var1(1)));
  p_output1(2)=0.5*(-1.*t143*t2022 - 1.*t2039*t204 + 0.1305*t2055 - 0.0306*t2263 + 1.13106*t2273 - 0.1305*t2303 - 1.*t1012*t2389 - 1.*t1027*t2398 - 1.*t1057*t2405 - 1.*t1076*t2420 - 0.0306*t2434 + 1.13106*t2440 - 1.*t2071*t280 - 1.*t1994*t29 - 1.*t2079*t347 - 1.*t2098*t405 - 1.*t2142*t491 + 0.135*t1985*t48*t5 - 1.*t2155*t510 - 1.*t2174*t576 - 1.*t2187*t607 - 1.*t2203*t641 - 1.*t2233*t661 + 0.135*t2002*t71 - 0.135*t1985*t5*t713 - 1.*t2294*t750 - 1.*t1994*t774 - 1.*t2314*t825 - 1.*t2326*t852 - 0.135*t2002*t88 - 1.*t2341*t889 - 1.*t2345*t913 - 1.*t2363*t944 - 1.*t2378*t986 - 2.*var1(2)) + 0.0288377642750394*(1.965608*(-0.1351*t2022 + 0.01793*t2039 + t2470 + t2473 + t2475 + var1(2)) + 1.316608*(-0.0343*t2039 - 0.135*t2055 - 0.049*t2071 + t2470 + t2475 + t2491 + t2496 + var1(2)) + 5.79228*(-0.17081*t2055 - 0.04895*t2079 - 0.14946*t2098 + t2470 + t2475 + t2491 + t2496 + t2554 + t2558 + var1(2)) + 1.03008*(-0.132168*t2055 - 0.255862*t2142 - 0.007761*t2155 + t2470 + t2475 + t2491 + t2496 + t2554 + t2558 + t2579 + t2584 + var1(2)) + 0.763*(-0.130288*t2055 - 0.000421*t2174 - 0.45406*t2187 + t2470 + t2475 + t2491 + t2496 + t2554 + t2558 + t2579 + t2584 + t2624 + t2625 + var1(2)) + 1.03*(-0.127241*t2055 - 0.826587*t2203 - 0.004179*t2233 + t2470 + t2475 + t2491 + t2496 + t2554 + t2558 + t2579 + t2584 + t2624 + t2625 + t2644 + t2646 + var1(2)) + 0.126*(t1331*t2055 + t1359*t2203 + t1405*t2233 + 0.01889*(t1427*t2055 + t1442*t2203 + t1475*t2233) - 0.617968*(t1495*t2055 + t1499*t2203 + t1506*t2233) - 0.126739*(t1531*t2055 + t1541*t2203 + t1544*t2233) + t2470 + t2475 + t2491 + t2496 + t2554 + t2558 + t2579 + t2584 + t2624 + t2625 + t2644 + t2646 + var1(2)) + 1.965608*(0.1351*t2294 + 0.01793*t2326 + t2473 + t2737 + t2741 + var1(2)) + 1.316608*(0.135*t2303 - 0.049*t2314 - 0.0343*t2326 + t2737 + t2741 + t2752 + t2759 + var1(2)) + 5.79228*(0.17081*t2303 - 0.04895*t2341 - 0.14946*t2345 + t2737 + t2741 + t2752 + t2759 + t2773 + t2775 + var1(2)) + 1.03008*(0.132168*t2303 - 0.255862*t2363 - 0.007761*t2378 + t2737 + t2741 + t2752 + t2759 + t2773 + t2775 + t2791 + t2794 + var1(2)) + 0.763*(0.130288*t2303 - 0.000421*t2389 - 0.45406*t2398 + t2737 + t2741 + t2752 + t2759 + t2773 + t2775 + t2791 + t2794 + t2806 + t2807 + var1(2)) + 1.03*(0.127241*t2303 - 0.826587*t2405 - 0.004179*t2420 + t2737 + t2741 + t2752 + t2759 + t2773 + t2775 + t2791 + t2794 + t2806 + t2807 + t2814 + t2815 + var1(2)) + 0.126*(t1762*t2303 + t1816*t2405 + t1855*t2420 + 0.01889*(t1868*t2303 + t1874*t2405 + t1882*t2420) - 0.617968*(t1897*t2303 + t1903*t2405 + t1907*t2420) + 0.126739*(t1922*t2303 + t1930*t2405 + t1941*t2420) + t2737 + t2741 + t2752 + t2759 + t2773 + t2775 + t2791 + t2794 + t2806 + t2807 + t2814 + t2815 + var1(2)) + 0.1498*(0.13064*t2303 + t1057*t2405 + t1076*t2420 + 0.00589*t2434 - 1.11818*t2440 + t2737 + t2741 + t2752 + t2759 + t2773 + t2775 + t2791 + t2794 + t2806 + t2807 + t2814 + t2815 + var1(2)) + 10.33*(0.05066*t1994 + 0.000346*t2002 - 0.02841*t1985*t5 + var1(2)) + 0.1498*(-0.13064*t2055 + 0.00589*t2263 - 1.11818*t2273 + t2470 + t2475 + t2491 + t2496 + t2554 + t2558 + t2579 + t2584 + t2624 + t2625 + t2644 + t2646 + t2203*t641 + t2233*t661 + var1(2)));
  p_output1(3)=0.5*(-1.*t29*t2905 - 1.*t143*t2941 - 1.*t204*t2965 + 0.1305*t2975 - 1.*t280*t2987 - 0.0306*t3103 + 1.13106*t3115 - 0.1305*t3135 - 1.*t1012*t3181 - 1.*t1027*t3194 - 1.*t1057*t3205 - 1.*t1076*t3216 - 0.0306*t3232 + 1.13106*t3248 - 1.*t3016*t347 - 1.*t3030*t405 - 1.*t3038*t491 - 0.135*t1991*t48*t5 - 1.*t3045*t510 - 1.*t3054*t576 - 1.*t3071*t607 - 1.*t3078*t641 - 1.*t3090*t661 + 0.135*t2922*t71 + 0.135*t1991*t5*t713 - 1.*t3127*t750 - 1.*t2905*t774 - 1.*t3141*t825 - 1.*t3153*t852 - 0.135*t2922*t88 - 1.*t3158*t889 - 1.*t3163*t913 - 1.*t3170*t944 - 1.*t3176*t986 - 2.*var1(3)) + 0.0288377642750394*(1.965608*(-0.1351*t2941 + 0.01793*t2965 + t3282 + t3287 + t3288 + var1(3)) + 1.316608*(-0.0343*t2965 - 0.135*t2975 - 0.049*t2987 + t3282 + t3288 + t3303 + t3304 + var1(3)) + 5.79228*(-0.17081*t2975 - 0.04895*t3016 - 0.14946*t3030 + t3282 + t3288 + t3303 + t3304 + t3317 + t3321 + var1(3)) + 1.03008*(-0.132168*t2975 - 0.255862*t3038 - 0.007761*t3045 + t3282 + t3288 + t3303 + t3304 + t3317 + t3321 + t3342 + t3344 + var1(3)) + 0.763*(-0.130288*t2975 - 0.000421*t3054 - 0.45406*t3071 + t3282 + t3288 + t3303 + t3304 + t3317 + t3321 + t3342 + t3344 + t3367 + t3368 + var1(3)) + 1.03*(-0.127241*t2975 - 0.826587*t3078 - 0.004179*t3090 + t3282 + t3288 + t3303 + t3304 + t3317 + t3321 + t3342 + t3344 + t3367 + t3368 + t3389 + t3390 + var1(3)) + 0.126*(t1331*t2975 + t1359*t3078 + t1405*t3090 + 0.01889*(t1427*t2975 + t1442*t3078 + t1475*t3090) - 0.617968*(t1495*t2975 + t1499*t3078 + t1506*t3090) - 0.126739*(t1531*t2975 + t1541*t3078 + t1544*t3090) + t3282 + t3288 + t3303 + t3304 + t3317 + t3321 + t3342 + t3344 + t3367 + t3368 + t3389 + t3390 + var1(3)) + 1.965608*(0.1351*t3127 + 0.01793*t3153 + t3287 + t3471 + t3476 + var1(3)) + 1.316608*(0.135*t3135 - 0.049*t3141 - 0.0343*t3153 + t3471 + t3476 + t3487 + t3488 + var1(3)) + 5.79228*(0.17081*t3135 - 0.04895*t3158 - 0.14946*t3163 + t3471 + t3476 + t3487 + t3488 + t3498 + t3499 + var1(3)) + 1.03008*(0.132168*t3135 - 0.255862*t3170 - 0.007761*t3176 + t3471 + t3476 + t3487 + t3488 + t3498 + t3499 + t3523 + t3524 + var1(3)) + 0.763*(0.130288*t3135 - 0.000421*t3181 - 0.45406*t3194 + t3471 + t3476 + t3487 + t3488 + t3498 + t3499 + t3523 + t3524 + t3538 + t3539 + var1(3)) + 1.03*(0.127241*t3135 - 0.826587*t3205 - 0.004179*t3216 + t3471 + t3476 + t3487 + t3488 + t3498 + t3499 + t3523 + t3524 + t3538 + t3539 + t3551 + t3554 + var1(3)) + 0.126*(t1762*t3135 + t1816*t3205 + t1855*t3216 + 0.01889*(t1868*t3135 + t1874*t3205 + t1882*t3216) - 0.617968*(t1897*t3135 + t1903*t3205 + t1907*t3216) + 0.126739*(t1922*t3135 + t1930*t3205 + t1941*t3216) + t3471 + t3476 + t3487 + t3488 + t3498 + t3499 + t3523 + t3524 + t3538 + t3539 + t3551 + t3554 + var1(3)) + 0.1498*(0.13064*t3135 + t1057*t3205 + t1076*t3216 + 0.00589*t3232 - 1.11818*t3248 + t3471 + t3476 + t3487 + t3488 + t3498 + t3499 + t3523 + t3524 + t3538 + t3539 + t3551 + t3554 + var1(3)) + 10.33*(0.05066*t2905 + 0.000346*t2922 + 0.02841*t1991*t5 + var1(3)) + 0.1498*(-0.13064*t2975 + 0.00589*t3103 - 1.11818*t3115 + t3282 + t3288 + t3303 + t3304 + t3317 + t3321 + t3342 + t3344 + t3367 + t3368 + t3389 + t3390 + t3078*t641 + t3090*t661 + var1(3)));
  p_output1(4)=var1(4);
  p_output1(5)=var1(5);
  p_output1(6)=var1(6);
  out = reshape(p_output1, 6, 1);
end