%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% J_pelvis_rightFoot_all
% 
% This file is automatically converted to matlab format from C code.
% Source symbolic expressions exported from FROST:
% 	 https://github.com/ayonga/frost-dev
% 
% Author: Jenna Reher (jreher@caltech.edu)
% Automatically generated on: December 23, 2021 T 04:09
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
function out = J_pelvis_rightFoot_all(var1)

  out = zeros(6, 22);

  p_output1 = zeros(132,1);


  t47 = cos(var1(4));
  t38 = cos(var1(6));
  t41 = sin(var1(4));
  t42 = sin(var1(5));
  t49 = sin(var1(6));
  t76 = cos(var1(5));
  t78 = sin(var1(15));
  t83 = cos(var1(15));
  t250 = -1.*t47*t76*t78;
  t263 = -1.*t83*t41;
  t272 = t250 + t263;
  t299 = cos(var1(16));
  t300 = -1.*t299;
  t303 = 1. + t300;
  t305 = sin(var1(16));
  t309 = cos(var1(17));
  t310 = -1.*t309;
  t311 = 1. + t310;
  t313 = sin(var1(17));
  t328 = -1.*t83*t47*t76;
  t331 = t78*t41;
  t336 = t328 + t331;
  t382 = t305*t272;
  t383 = t299*t47*t42;
  t384 = t382 + t383;
  t390 = cos(var1(18));
  t399 = -1.*t390;
  t408 = 1. + t399;
  t411 = sin(var1(18));
  t427 = t313*t336;
  t431 = t309*t384;
  t435 = t427 + t431;
  t453 = t309*t336;
  t454 = -1.*t313*t384;
  t455 = t453 + t454;
  t458 = cos(var1(20));
  t459 = -1.*t458;
  t461 = 1. + t459;
  t470 = sin(var1(20));
  t480 = -1.*t411*t435;
  t481 = t390*t455;
  t482 = t480 + t481;
  t497 = t390*t435;
  t506 = t411*t455;
  t511 = t497 + t506;
  t515 = cos(var1(22));
  t516 = -1.*t515;
  t517 = 1. + t516;
  t519 = sin(var1(22));
  t522 = t470*t482;
  t523 = t458*t511;
  t527 = t522 + t523;
  t538 = t458*t482;
  t545 = -1.*t470*t511;
  t547 = t538 + t545;
  t174 = cos(var1(7));
  t578 = sin(var1(7));
  t103 = -1.*t83;
  t129 = 1. + t103;
  t200 = -1.*t174;
  t206 = 1. + t200;
  t312 = -0.09*t311;
  t323 = 0.049*t313;
  t327 = t312 + t323;
  t304 = -0.135*t303;
  t306 = 0.049*t305;
  t307 = t304 + t306;
  t610 = t83*t47;
  t614 = -1.*t76*t78*t41;
  t621 = t610 + t614;
  t353 = -0.049*t303;
  t357 = -0.135*t305;
  t367 = t353 + t357;
  t378 = -0.049*t311;
  t379 = -0.09*t313;
  t381 = t378 + t379;
  t410 = -0.049*t408;
  t412 = -0.21*t411;
  t417 = t410 + t412;
  t593 = -1.*t47*t78;
  t600 = -1.*t83*t76*t41;
  t603 = t593 + t600;
  t629 = t305*t621;
  t630 = t299*t41*t42;
  t631 = t629 + t630;
  t447 = -0.21*t408;
  t449 = 0.049*t411;
  t451 = t447 + t449;
  t462 = -0.70544*t461;
  t475 = -0.01841*t470;
  t479 = t462 + t475;
  t651 = t313*t603;
  t656 = t309*t631;
  t663 = t651 + t656;
  t671 = t309*t603;
  t677 = -1.*t313*t631;
  t681 = t671 + t677;
  t484 = 0.01841*t461;
  t487 = -0.70544*t470;
  t491 = t484 + t487;
  t518 = -0.02159*t517;
  t520 = -1.11344*t519;
  t521 = t518 + t520;
  t683 = -1.*t411*t663;
  t684 = t390*t681;
  t687 = t683 + t684;
  t694 = t390*t663;
  t695 = t411*t681;
  t697 = t694 + t695;
  t533 = -1.11344*t517;
  t534 = 0.02159*t519;
  t537 = t533 + t534;
  t700 = t470*t687;
  t701 = t458*t697;
  t707 = t700 + t701;
  t719 = t458*t687;
  t725 = -1.*t470*t697;
  t730 = t719 + t725;
  t794 = t76*t78*t305;
  t795 = -1.*t299*t42;
  t797 = t794 + t795;
  t817 = t83*t76*t313;
  t823 = t309*t797;
  t826 = t817 + t823;
  t834 = t83*t309*t76;
  t835 = -1.*t313*t797;
  t838 = t834 + t835;
  t843 = -1.*t411*t826;
  t846 = t390*t838;
  t847 = t843 + t846;
  t850 = t390*t826;
  t851 = t411*t838;
  t854 = t850 + t851;
  t862 = t470*t847;
  t865 = t458*t854;
  t868 = t862 + t865;
  t877 = t458*t847;
  t880 = -1.*t470*t854;
  t883 = t877 + t880;
  t928 = t299*t76*t41;
  t929 = t78*t305*t41*t42;
  t930 = t928 + t929;
  t941 = t83*t313*t41*t42;
  t950 = t309*t930;
  t952 = t941 + t950;
  t958 = t83*t309*t41*t42;
  t960 = -1.*t313*t930;
  t961 = t958 + t960;
  t964 = -1.*t411*t952;
  t965 = t390*t961;
  t966 = t964 + t965;
  t977 = t390*t952;
  t980 = t411*t961;
  t981 = t977 + t980;
  t983 = t470*t966;
  t984 = t458*t981;
  t985 = t983 + t984;
  t987 = t458*t966;
  t988 = -1.*t470*t981;
  t989 = t987 + t988;
  t1018 = -1.*t299*t47*t76;
  t1019 = -1.*t47*t78*t305*t42;
  t1020 = t1018 + t1019;
  t1022 = -1.*t83*t47*t313*t42;
  t1023 = t309*t1020;
  t1024 = t1022 + t1023;
  t1026 = -1.*t83*t309*t47*t42;
  t1027 = -1.*t313*t1020;
  t1028 = t1026 + t1027;
  t1030 = -1.*t411*t1024;
  t1031 = t390*t1028;
  t1032 = t1030 + t1031;
  t1034 = t390*t1024;
  t1035 = t411*t1028;
  t1036 = t1034 + t1035;
  t1038 = t470*t1032;
  t1039 = t458*t1036;
  t1040 = t1038 + t1039;
  t1042 = t458*t1032;
  t1043 = -1.*t470*t1036;
  t1044 = t1042 + t1043;
  t1083 = t83*t309*t305*t42;
  t1084 = -1.*t78*t313*t42;
  t1085 = t1083 + t1084;
  t1087 = -1.*t309*t78*t42;
  t1088 = -1.*t83*t305*t313*t42;
  t1089 = t1087 + t1088;
  t1091 = -1.*t411*t1085;
  t1092 = t390*t1089;
  t1093 = t1091 + t1092;
  t1095 = t390*t1085;
  t1096 = t411*t1089;
  t1097 = t1095 + t1096;
  t1099 = t470*t1093;
  t1100 = t458*t1097;
  t1101 = t1099 + t1100;
  t1103 = t458*t1093;
  t1104 = -1.*t470*t1097;
  t1105 = t1103 + t1104;
  t1123 = -1.*t83*t47;
  t1124 = t76*t78*t41;
  t1125 = t1123 + t1124;
  t1127 = -1.*t305*t313*t603;
  t1128 = t309*t1125;
  t1129 = t1127 + t1128;
  t1131 = t309*t305*t603;
  t1132 = t313*t1125;
  t1133 = t1131 + t1132;
  t1135 = t411*t1129;
  t1136 = t390*t1133;
  t1137 = t1135 + t1136;
  t1139 = t390*t1129;
  t1140 = -1.*t411*t1133;
  t1141 = t1139 + t1140;
  t1143 = -1.*t470*t1137;
  t1144 = t458*t1141;
  t1145 = t1143 + t1144;
  t1147 = t458*t1137;
  t1148 = t470*t1141;
  t1149 = t1147 + t1148;
  t1164 = t83*t47*t76;
  t1165 = -1.*t78*t41;
  t1166 = t1164 + t1165;
  t1171 = t313*t272;
  t1172 = t309*t305*t1166;
  t1173 = t1171 + t1172;
  t1175 = t309*t272;
  t1176 = -1.*t305*t313*t1166;
  t1177 = t1175 + t1176;
  t1179 = -1.*t411*t1173;
  t1180 = t390*t1177;
  t1181 = t1179 + t1180;
  t1183 = t390*t1173;
  t1184 = t411*t1177;
  t1185 = t1183 + t1184;
  t1187 = t470*t1181;
  t1188 = t458*t1185;
  t1189 = t1187 + t1188;
  t1191 = t458*t1181;
  t1192 = -1.*t470*t1185;
  t1193 = t1191 + t1192;
  t1212 = -1.*t76*t305;
  t1213 = t299*t78*t42;
  t1214 = t1212 + t1213;
  t1222 = -1.*t390*t313*t1214;
  t1223 = -1.*t309*t411*t1214;
  t1224 = t1222 + t1223;
  t1226 = t309*t390*t1214;
  t1227 = -1.*t313*t411*t1214;
  t1228 = t1226 + t1227;
  t1230 = t470*t1224;
  t1231 = t458*t1228;
  t1232 = t1230 + t1231;
  t1234 = t458*t1224;
  t1235 = -1.*t470*t1228;
  t1236 = t1234 + t1235;
  t1209 = 0.049*t299;
  t1210 = t1209 + t357;
  t1205 = -0.135*t299;
  t1206 = -0.049*t305;
  t1207 = t1205 + t1206;
  t633 = t299*t621;
  t634 = -1.*t305*t41*t42;
  t635 = t633 + t634;
  t1257 = -1.*t390*t313*t635;
  t1258 = -1.*t309*t411*t635;
  t1259 = t1257 + t1258;
  t1261 = t309*t390*t635;
  t1262 = -1.*t313*t411*t635;
  t1263 = t1261 + t1262;
  t1265 = t470*t1259;
  t1266 = t458*t1263;
  t1267 = t1265 + t1266;
  t1269 = t458*t1259;
  t1270 = -1.*t470*t1263;
  t1271 = t1269 + t1270;
  t1283 = t47*t76*t78;
  t1284 = t83*t41;
  t1285 = t1283 + t1284;
  t1291 = t299*t1285;
  t1292 = t47*t305*t42;
  t1293 = t1291 + t1292;
  t1297 = -1.*t390*t313*t1293;
  t1298 = -1.*t309*t411*t1293;
  t1299 = t1297 + t1298;
  t1301 = t309*t390*t1293;
  t1302 = -1.*t313*t411*t1293;
  t1303 = t1301 + t1302;
  t1305 = t470*t1299;
  t1306 = t458*t1303;
  t1307 = t1305 + t1306;
  t1309 = t458*t1299;
  t1310 = -1.*t470*t1303;
  t1311 = t1309 + t1310;
  t1329 = t299*t76;
  t1330 = t78*t305*t42;
  t1331 = t1329 + t1330;
  t1333 = -1.*t83*t313*t42;
  t1334 = -1.*t309*t1331;
  t1335 = t1333 + t1334;
  t1337 = t83*t309*t42;
  t1338 = -1.*t313*t1331;
  t1339 = t1337 + t1338;
  t1341 = t411*t1335;
  t1342 = t390*t1339;
  t1343 = t1341 + t1342;
  t1345 = t390*t1335;
  t1346 = -1.*t411*t1339;
  t1347 = t1345 + t1346;
  t1349 = -1.*t470*t1343;
  t1350 = t458*t1347;
  t1351 = t1349 + t1350;
  t1353 = t458*t1343;
  t1354 = t470*t1347;
  t1355 = t1353 + t1354;
  t1323 = 0.049*t309;
  t1324 = t1323 + t379;
  t1326 = -0.09*t309;
  t1327 = -0.049*t313;
  t1328 = t1326 + t1327;
  t1369 = -1.*t313*t603;
  t1370 = -1.*t309*t631;
  t1371 = t1369 + t1370;
  t1374 = t411*t1371;
  t1375 = t1374 + t684;
  t1377 = t390*t1371;
  t1378 = -1.*t411*t681;
  t1379 = t1377 + t1378;
  t1381 = -1.*t470*t1375;
  t1382 = t458*t1379;
  t1383 = t1381 + t1382;
  t1385 = t458*t1375;
  t1386 = t470*t1379;
  t1387 = t1385 + t1386;
  t1400 = t305*t1285;
  t1401 = -1.*t299*t47*t42;
  t1402 = t1400 + t1401;
  t1404 = -1.*t313*t1166;
  t1405 = -1.*t309*t1402;
  t1406 = t1404 + t1405;
  t1408 = t309*t1166;
  t1409 = -1.*t313*t1402;
  t1410 = t1408 + t1409;
  t1412 = t411*t1406;
  t1413 = t390*t1410;
  t1414 = t1412 + t1413;
  t1416 = t390*t1406;
  t1417 = -1.*t411*t1410;
  t1418 = t1416 + t1417;
  t1420 = -1.*t470*t1414;
  t1421 = t458*t1418;
  t1422 = t1420 + t1421;
  t1424 = t458*t1414;
  t1425 = t470*t1418;
  t1426 = t1424 + t1425;
  t1441 = t83*t313*t42;
  t1442 = t309*t1331;
  t1443 = t1441 + t1442;
  t1448 = -1.*t411*t1443;
  t1449 = t1448 + t1342;
  t1451 = -1.*t390*t1443;
  t1452 = t1451 + t1346;
  t1454 = -1.*t470*t1449;
  t1455 = t458*t1452;
  t1456 = t1454 + t1455;
  t1458 = t458*t1449;
  t1459 = t470*t1452;
  t1460 = t1458 + t1459;
  t1438 = -0.21*t390;
  t1439 = -0.049*t411;
  t1440 = t1438 + t1439;
  t1445 = 0.049*t390;
  t1446 = t1445 + t412;
  t1475 = -1.*t390*t663;
  t1476 = t1475 + t1378;
  t1478 = -1.*t470*t687;
  t1479 = t458*t1476;
  t1480 = t1478 + t1479;
  t1482 = t470*t1476;
  t1483 = t719 + t1482;
  t1495 = t313*t1166;
  t1496 = t309*t1402;
  t1497 = t1495 + t1496;
  t1500 = -1.*t411*t1497;
  t1501 = t1500 + t1413;
  t1503 = -1.*t390*t1497;
  t1504 = t1503 + t1417;
  t1506 = -1.*t470*t1501;
  t1507 = t458*t1504;
  t1508 = t1506 + t1507;
  t1510 = t458*t1501;
  t1511 = t470*t1504;
  t1512 = t1510 + t1511;
  t1530 = t390*t1443;
  t1531 = t411*t1339;
  t1532 = t1530 + t1531;
  t1534 = -1.*t458*t1532;
  t1535 = t1454 + t1534;
  t1537 = -1.*t470*t1532;
  t1538 = t1458 + t1537;
  t1524 = -0.01841*t458;
  t1525 = t1524 + t487;
  t1527 = -0.70544*t458;
  t1528 = 0.01841*t470;
  t1529 = t1527 + t1528;
  t1552 = -1.*t458*t697;
  t1553 = t1478 + t1552;
  t741 = t515*t730;
  t1566 = t390*t1497;
  t1567 = t411*t1410;
  t1568 = t1566 + t1567;
  t1570 = -1.*t458*t1568;
  t1571 = t1506 + t1570;
  t1573 = -1.*t470*t1568;
  t1574 = t1510 + t1573;
  t1589 = t470*t1449;
  t1590 = t458*t1532;
  t1591 = t1589 + t1590;
  t1541 = t515*t1538;
  t1545 = -1.*t519*t1538;
  t1586 = -1.11344*t515;
  t1587 = -0.02159*t519;
  t1588 = t1586 + t1587;
  t1593 = 0.02159*t515;
  t1594 = t1593 + t520;
  t740 = -1.*t519*t707;
  t742 = t740 + t741;
  t1560 = -1.*t519*t730;
  t1612 = t470*t1501;
  t1613 = t458*t1568;
  t1614 = t1612 + t1613;
  t1577 = t515*t1574;
  t1581 = -1.*t519*t1574;
  p_output1(19)=-1.*t38*t41*t42 - 1.*t47*t49;
  p_output1(20)=t38*t47 - 1.*t41*t42*t49;
  p_output1(23)=0.5*(-0.135*t272 - 2.*t272*t307 - 2.*t327*t336 - 2.*t381*t384 - 0.135*t129*t41 - 0.135*t206*t41 - 2.*t417*t435 - 2.*t451*t455 - 0.098*t42*t47 - 2.*t367*t42*t47 + 0.261*(t272*t299 - 1.*t305*t42*t47) - 2.*t479*t482 - 2.*t491*t511 - 2.*t521*t527 - 2.*t537*t547 + 2.22688*(-1.*t519*t527 + t515*t547) + 0.04318*(t515*t527 + t519*t547) + 0.135*t47*t578*t76 + 0.135*(-1.*t174*t41 - 1.*t47*t578*t76) + 0.135*t47*t76*t78);
  p_output1(24)=0.5*(-0.098*t41*t42 - 2.*t367*t41*t42 + 0.135*t129*t47 + 0.135*t206*t47 - 2.*t327*t603 - 0.135*t621 - 2.*t307*t621 - 2.*t381*t631 + 0.261*t635 - 2.*t417*t663 - 2.*t451*t681 - 2.*t479*t687 - 2.*t491*t697 - 2.*t521*t707 - 2.*t537*t730 + 0.04318*(t515*t707 + t519*t730) + 2.22688*t742 + 0.135*t41*t578*t76 + 0.135*(t174*t47 - 1.*t41*t578*t76) + 0.135*t41*t76*t78);
  p_output1(25)=t38*t47*t76;
  p_output1(26)=t47*t49*t76;
  p_output1(28)=0.5*(0.098*t42 + 2.*t367*t42 - 0.27*t76*t78 - 2.*t307*t76*t78 + 0.261*(t305*t42 + t299*t76*t78) - 2.*t381*t797 - 2.*t417*t826 - 2.*t327*t76*t83 - 2.*t451*t838 - 2.*t479*t847 - 2.*t491*t854 - 2.*t521*t868 - 2.*t537*t883 + 2.22688*(-1.*t519*t868 + t515*t883) + 0.04318*(t515*t868 + t519*t883));
  p_output1(29)=0.5*(-0.098*t41*t76 - 2.*t367*t41*t76 - 0.27*t41*t42*t78 - 2.*t307*t41*t42*t78 + 0.261*(-1.*t305*t41*t76 + t299*t41*t42*t78) - 2.*t327*t41*t42*t83 - 2.*t381*t930 - 2.*t417*t952 - 2.*t451*t961 - 2.*t479*t966 - 2.*t491*t981 - 2.*t521*t985 - 2.*t537*t989 + 2.22688*(-1.*t519*t985 + t515*t989) + 0.04318*(t515*t985 + t519*t989));
  p_output1(30)=0.5*(-2.*t1020*t381 - 2.*t1024*t417 - 2.*t1028*t451 - 2.*t1032*t479 - 2.*t1036*t491 + 2.22688*(t1044*t515 - 1.*t1040*t519) + 0.04318*(t1040*t515 + t1044*t519) - 2.*t1040*t521 - 2.*t1044*t537 + 0.098*t47*t76 + 2.*t367*t47*t76 + 0.27*t42*t47*t78 + 2.*t307*t42*t47*t78 + 0.261*(t305*t47*t76 - 1.*t299*t42*t47*t78) + 2.*t327*t42*t47*t83);
  p_output1(31)=-1.*t38*t41 - 1.*t42*t47*t49;
  p_output1(32)=t38*t42*t47 - 1.*t41*t49;
  p_output1(41)=0.5*(0.135*t47*t578 + 0.135*t174*t41*t76 + 0.135*(-1.*t47*t578 - 1.*t174*t41*t76));
  p_output1(42)=0.5*(0.135*t41*t578 - 0.135*t174*t47*t76 + 0.135*(-1.*t41*t578 + t174*t47*t76));
  p_output1(88)=0.5*(-2.*t1085*t417 - 2.*t1089*t451 - 2.*t1093*t479 - 2.*t1097*t491 + 2.22688*(t1105*t515 - 1.*t1101*t519) + 0.04318*(t1101*t515 + t1105*t519) - 2.*t1101*t521 - 2.*t1105*t537 + 2.*t327*t42*t78 - 0.27*t42*t83 + 0.261*t299*t42*t83 - 2.*t307*t42*t83 - 2.*t305*t381*t42*t83);
  p_output1(89)=0.5*(-2.*t1125*t327 - 2.*t1133*t417 - 2.*t1129*t451 - 2.*t1141*t479 - 2.*t1137*t491 + 0.04318*(t1149*t515 + t1145*t519) + 2.22688*(t1145*t515 - 1.*t1149*t519) - 2.*t1149*t521 - 2.*t1145*t537 - 0.135*t603 + 0.261*t299*t603 - 2.*t307*t603 - 2.*t305*t381*t603 + 0.135*t47*t78 + 0.135*t41*t76*t83);
  p_output1(90)=0.5*(-0.135*t1166 + 0.261*t1166*t299 - 2.*t1166*t307 - 2.*t272*t327 - 2.*t1166*t305*t381 - 2.*t1173*t417 - 2.*t1177*t451 - 2.*t1181*t479 - 2.*t1185*t491 + 2.22688*(t1193*t515 - 1.*t1189*t519) + 0.04318*(t1189*t515 + t1193*t519) - 2.*t1189*t521 - 2.*t1193*t537 + 0.135*t41*t78 - 0.135*t47*t76*t83);
  p_output1(93)=1.;
  p_output1(94)=0.5*(-2.*t1214*t381 - 2.*t1214*t309*t417 + 2.*t1214*t313*t451 - 2.*t1224*t479 - 2.*t1228*t491 + 2.22688*(t1236*t515 - 1.*t1232*t519) + 0.04318*(t1232*t515 + t1236*t519) - 2.*t1232*t521 - 2.*t1236*t537 - 2.*t1207*t76 - 2.*t1210*t42*t78 + 0.261*(-1.*t299*t76 - 1.*t305*t42*t78));
  p_output1(95)=0.5*(-2.*t1207*t41*t42 - 2.*t1259*t479 - 2.*t1263*t491 + 2.22688*(t1271*t515 - 1.*t1267*t519) + 0.04318*(t1267*t515 + t1271*t519) - 2.*t1267*t521 - 2.*t1271*t537 - 2.*t1210*t621 + 0.261*(-1.*t299*t41*t42 - 1.*t305*t621) - 2.*t381*t635 - 2.*t309*t417*t635 + 2.*t313*t451*t635);
  p_output1(96)=0.5*(-2.*t1210*t1285 - 2.*t1293*t381 + 0.261*(-1.*t1285*t305 + t383) - 2.*t1293*t309*t417 + 2.*t1293*t313*t451 + 2.*t1207*t42*t47 - 2.*t1299*t479 - 2.*t1303*t491 + 2.22688*(t1311*t515 - 1.*t1307*t519) + 0.04318*(t1307*t515 + t1311*t519) - 2.*t1307*t521 - 2.*t1311*t537);
  p_output1(100)=0.5*(-2.*t1328*t1331 - 2.*t1339*t417 - 2.*t1335*t451 - 2.*t1347*t479 - 2.*t1343*t491 + 0.04318*(t1355*t515 + t1351*t519) + 2.22688*(t1351*t515 - 1.*t1355*t519) - 2.*t1355*t521 - 2.*t1351*t537 - 2.*t1324*t42*t83);
  p_output1(101)=0.5*(-2.*t1371*t451 - 2.*t1379*t479 - 2.*t1375*t491 + 0.04318*(t1387*t515 + t1383*t519) + 2.22688*(t1383*t515 - 1.*t1387*t519) - 2.*t1387*t521 - 2.*t1383*t537 - 2.*t1324*t603 - 2.*t1328*t631 - 2.*t417*t681);
  p_output1(102)=0.5*(-2.*t1166*t1324 - 2.*t1328*t1402 - 2.*t1410*t417 - 2.*t1406*t451 - 2.*t1418*t479 - 2.*t1414*t491 + 0.04318*(t1426*t515 + t1422*t519) + 2.22688*(t1422*t515 - 1.*t1426*t519) - 2.*t1426*t521 - 2.*t1422*t537);
  p_output1(106)=0.5*(-2.*t1440*t1443 - 2.*t1339*t1446 - 2.*t1452*t479 - 2.*t1449*t491 + 0.04318*(t1460*t515 + t1456*t519) + 2.22688*(t1456*t515 - 1.*t1460*t519) - 2.*t1460*t521 - 2.*t1456*t537);
  p_output1(107)=0.5*(-2.*t1476*t479 + 0.04318*(t1483*t515 + t1480*t519) + 2.22688*(t1480*t515 - 1.*t1483*t519) - 2.*t1483*t521 - 2.*t1480*t537 - 2.*t1440*t663 - 2.*t1446*t681 - 2.*t491*t687);
  p_output1(108)=0.5*(-2.*t1410*t1446 - 2.*t1440*t1497 - 2.*t1504*t479 - 2.*t1501*t491 + 0.04318*(t1512*t515 + t1508*t519) + 2.22688*(t1508*t515 - 1.*t1512*t519) - 2.*t1512*t521 - 2.*t1508*t537);
  p_output1(118)=0.5*(-2.*t1449*t1525 - 2.*t1529*t1532 + 2.22688*(t1545 + t1535*t515) + 0.04318*(t1541 + t1535*t519) - 2.*t1538*t521 - 2.*t1535*t537);
  p_output1(119)=0.5*(2.22688*(t1560 + t1553*t515) - 2.*t1553*t537 - 2.*t1525*t687 - 2.*t1529*t697 - 2.*t521*t730 + 0.04318*(t1553*t519 + t741));
  p_output1(120)=0.5*(-2.*t1501*t1525 - 2.*t1529*t1568 + 2.22688*(t1581 + t1571*t515) + 0.04318*(t1577 + t1571*t519) - 2.*t1574*t521 - 2.*t1571*t537);
  p_output1(130)=0.5*(-2.*t1588*t1591 - 2.*t1538*t1594 + 2.22688*(t1545 - 1.*t1591*t515) + 0.04318*(t1541 - 1.*t1591*t519));
  p_output1(131)=0.5*(-2.*t1588*t707 + 2.22688*(t1560 - 1.*t515*t707) - 2.*t1594*t730 + 0.04318*t742);
  p_output1(132)=0.5*(-2.*t1574*t1594 - 2.*t1588*t1614 + 2.22688*(t1581 - 1.*t1614*t515) + 0.04318*(t1577 - 1.*t1614*t519));
  out = reshape(p_output1, 6, 22);
end