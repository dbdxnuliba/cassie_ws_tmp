%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% p_leftPoint_constraint
% 
% This file is automatically converted to matlab format from C code.
% Source symbolic expressions exported from FROST:
% 	 https://github.com/ayonga/frost-dev
% 
% Author: Jenna Reher (jreher@caltech.edu)
% Automatically generated on: November 07, 2021 T 02:26
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
function out = p_leftPoint_constraint(var1)

  out = zeros(4, 1);

  p_output1 = zeros(4,1);


  t126 = cos(var1(5));
  t159 = cos(var1(7));
  t415 = sin(var1(6));
  t539 = sin(var1(5));
  t541 = sin(var1(7));
  t608 = cos(var1(8));
  t620 = -1.*t608;
  t663 = 1. + t620;
  t761 = sin(var1(8));
  t552 = -1.*t126*t159*t415;
  t572 = t539*t541;
  t580 = t552 + t572;
  t848 = cos(var1(6));
  t959 = cos(var1(9));
  t960 = -1.*t959;
  t965 = 1. + t960;
  t971 = sin(var1(9));
  t931 = t126*t848*t608;
  t934 = t580*t761;
  t951 = t931 + t934;
  t1001 = t159*t539;
  t1005 = t126*t415*t541;
  t1025 = t1001 + t1005;
  t1091 = cos(var1(10));
  t1093 = -1.*t1091;
  t1097 = 1. + t1093;
  t1115 = sin(var1(10));
  t1166 = t959*t951;
  t1184 = t1025*t971;
  t1190 = t1166 + t1184;
  t1209 = t959*t1025;
  t1224 = -1.*t951*t971;
  t1225 = t1209 + t1224;
  t1254 = cos(var1(11));
  t1257 = -1.*t1254;
  t1259 = 1. + t1257;
  t1269 = sin(var1(11));
  t1289 = -1.*t1115*t1190;
  t1290 = t1091*t1225;
  t1305 = t1289 + t1290;
  t1399 = t1091*t1190;
  t1444 = t1115*t1225;
  t1445 = t1399 + t1444;
  t1471 = cos(var1(12));
  t1478 = -1.*t1471;
  t1479 = 1. + t1478;
  t1537 = sin(var1(12));
  t1651 = t1269*t1305;
  t1657 = t1254*t1445;
  t1658 = t1651 + t1657;
  t1695 = t1254*t1305;
  t1696 = -1.*t1269*t1445;
  t1715 = t1695 + t1696;
  t211 = -1.*t159;
  t277 = 1. + t211;
  t1747 = sin(var1(4));
  t1745 = cos(var1(4));
  t1746 = t1745*t848;
  t1749 = -1.*t1747*t539*t415;
  t1756 = t1746 + t1749;
  t720 = 0.135*t663;
  t774 = 0.049*t761;
  t783 = t720 + t774;
  t861 = -0.049*t663;
  t865 = 0.135*t761;
  t872 = t861 + t865;
  t1770 = t159*t1756;
  t1778 = -1.*t126*t1747*t541;
  t1792 = t1770 + t1778;
  t1797 = t848*t1747*t539;
  t1802 = t1745*t415;
  t1805 = t1797 + t1802;
  t969 = -0.049*t965;
  t972 = -0.09*t971;
  t976 = t969 + t972;
  t1037 = -0.09*t965;
  t1065 = 0.049*t971;
  t1085 = t1037 + t1065;
  t1098 = -0.049*t1097;
  t1119 = -0.21*t1115;
  t1165 = t1098 + t1119;
  t1829 = t608*t1805;
  t1831 = t1792*t761;
  t1832 = t1829 + t1831;
  t1838 = -1.*t126*t159*t1747;
  t1840 = -1.*t1756*t541;
  t1849 = t1838 + t1840;
  t1192 = -0.21*t1097;
  t1202 = 0.049*t1115;
  t1206 = t1192 + t1202;
  t1265 = -0.27068*t1259;
  t1276 = 0.00159*t1269;
  t1277 = t1265 + t1276;
  t1855 = t959*t1832;
  t1856 = t1849*t971;
  t1858 = t1855 + t1856;
  t1872 = t959*t1849;
  t1881 = -1.*t1832*t971;
  t1882 = t1872 + t1881;
  t1312 = -0.00159*t1259;
  t1367 = -0.27068*t1269;
  t1396 = t1312 + t1367;
  t1524 = 0.01841*t1479;
  t1622 = -0.70544*t1537;
  t1625 = t1524 + t1622;
  t1898 = -1.*t1115*t1858;
  t1900 = t1091*t1882;
  t1902 = t1898 + t1900;
  t1921 = t1091*t1858;
  t1927 = t1115*t1882;
  t1928 = t1921 + t1927;
  t1676 = -0.70544*t1479;
  t1687 = -0.01841*t1537;
  t1693 = t1676 + t1687;
  t1956 = t1269*t1902;
  t1963 = t1254*t1928;
  t1987 = t1956 + t1963;
  t1996 = t1254*t1902;
  t1997 = -1.*t1269*t1928;
  t2016 = t1996 + t1997;
  t2051 = t848*t1747;
  t2052 = t1745*t539*t415;
  t2057 = t2051 + t2052;
  t2070 = t159*t2057;
  t2071 = t1745*t126*t541;
  t2072 = t2070 + t2071;
  t2078 = -1.*t1745*t848*t539;
  t2083 = t1747*t415;
  t2088 = t2078 + t2083;
  t2104 = t608*t2088;
  t2105 = t2072*t761;
  t2106 = t2104 + t2105;
  t2109 = t1745*t126*t159;
  t2110 = -1.*t2057*t541;
  t2111 = t2109 + t2110;
  t2116 = t959*t2106;
  t2119 = t2111*t971;
  t2120 = t2116 + t2119;
  t2122 = t959*t2111;
  t2123 = -1.*t2106*t971;
  t2125 = t2122 + t2123;
  t2131 = -1.*t1115*t2120;
  t2132 = t1091*t2125;
  t2134 = t2131 + t2132;
  t2136 = t1091*t2120;
  t2137 = t1115*t2125;
  t2139 = t2136 + t2137;
  t2141 = t1269*t2134;
  t2143 = t1254*t2139;
  t2147 = t2141 + t2143;
  t2149 = t1254*t2134;
  t2150 = -1.*t1269*t2139;
  t2151 = t2149 + t2150;
  t2165 = t1471*t2147;
  t2166 = t1537*t2151;
  t2170 = t2165 + t2166;
  t2200 = -1.*t608*t2072;
  t2203 = t2088*t761;
  t2227 = t2200 + t2203;
  t2034 = t1471*t1987;
  t2038 = t1537*t2016;
  t2039 = t2034 + t2038;
  t2230 = power(t2227,2);
  t2232 = power(t2170,2);
  t2238 = t2230 + t2232;
  t2244 = 1/sqrt(t2238);
  t1735 = t1471*t1658;
  t1736 = t1537*t1715;
  t1738 = t1735 + t1736;
  p_output1(1)=t1025*t1085 + t1165*t1190 + t1206*t1225 + t1277*t1305 + t1396*t1445 + t1625*t1658 + t1693*t1715 - 1.11344*(-1.*t1537*t1658 + t1471*t1715) - 0.02159*t1738 - 0.135*t126*t277*t415 - 0.135*t539*t541 + t580*t783 + 0.1305*(t580*t608 - 1.*t126*t761*t848) + t126*t848*t872 + t951*t976 + var1(1);
  p_output1(2)=t1085*t1849 + t1165*t1858 + t1206*t1882 + t1277*t1902 + t1396*t1928 + t1625*t1987 + t1693*t2016 - 1.11344*(-1.*t1537*t1987 + t1471*t2016) - 0.02159*t2039 + 0.135*t1756*t277 + 0.135*t126*t1747*t541 + 0.1305*(t1792*t608 - 1.*t1805*t761) + t1792*t783 + t1805*t872 + t1832*t976 + var1(2);
  p_output1(3)=t1085*t2111 + t1165*t2120 + t1206*t2125 + t1277*t2134 + t1396*t2139 + t1625*t2147 + t1693*t2151 - 1.11344*(-1.*t1537*t2147 + t1471*t2151) - 0.02159*t2170 + 0.135*t2057*t277 - 0.135*t126*t1745*t541 + 0.1305*(t2072*t608 - 1.*t2088*t761) + t2072*t783 + t2088*t872 + t2106*t976 + var1(3);
  p_output1(4)=Arctan(t2039*t2227*t2244 - 1.*t2170*t2244*(-1.*t1792*t608 + t1805*t761),-1.*t1738*t2227*t2244 + t2170*t2244*(-1.*t580*t608 + t126*t761*t848));
  out = reshape(p_output1, 4, 1);
end