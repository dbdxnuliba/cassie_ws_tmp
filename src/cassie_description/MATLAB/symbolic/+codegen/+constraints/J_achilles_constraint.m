%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% J_achilles_constraint
% 
% This file is automatically converted to matlab format from C code.
% Source symbolic expressions exported from FROST:
% 	 https://github.com/ayonga/frost-dev
% 
% Author: Jenna Reher (jreher@caltech.edu)
% Automatically generated on: November 07, 2021 T 02:26
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
function out = J_achilles_constraint(var1)

  out = zeros(2, 22);

  p_output1 = zeros(44,1);


  t58 = sin(var1(10));
  t28 = cos(var1(10));
  t106 = cos(var1(11));
  t112 = -1.*t106;
  t150 = 1. + t112;
  t175 = sin(var1(11));
  t289 = cos(var1(12));
  t301 = -1.*t289;
  t302 = 1. + t301;
  t313 = sin(var1(12));
  t331 = -1.*t28*t106;
  t332 = t58*t175;
  t339 = t331 + t332;
  t255 = -1.*t106*t58;
  t260 = -1.*t28*t175;
  t261 = t255 + t260;
  t354 = cos(var1(13));
  t364 = -1.*t354;
  t366 = 1. + t364;
  t378 = t289*t339;
  t382 = -1.*t261*t313;
  t387 = t378 + t382;
  t404 = sin(var1(13));
  t397 = t289*t261;
  t398 = t339*t313;
  t399 = t397 + t398;
  t405 = -0.996943*t404;
  t496 = -0.0004284921280000001*t366;
  t400 = 0.0004284921280000001*t366;
  t552 = 0.996943*t404;
  t157 = -0.00159*t150;
  t181 = -0.27068*t175;
  t206 = t157 + t181;
  t223 = -0.27068*t150;
  t225 = 0.00159*t175;
  t237 = t223 + t225;
  t306 = 0.01841*t302;
  t320 = -0.70544*t313;
  t326 = t306 + t320;
  t340 = -0.70544*t302;
  t344 = -0.01841*t313;
  t346 = t340 + t344;
  t367 = -0.999969365345*t366;
  t376 = 1. + t367;
  t720 = t28*t106;
  t725 = -1.*t58*t175;
  t730 = t720 + t725;
  t413 = t400 + t405;
  t741 = -1.*t730*t313;
  t745 = t397 + t741;
  t437 = 0.005481192614*t366;
  t450 = -0.077936*t404;
  t452 = t437 + t450;
  t750 = t289*t730;
  t752 = t261*t313;
  t756 = t750 + t752;
  t464 = 0.07769774964800001*t366;
  t465 = 0.005498*t404;
  t466 = t464 + t465;
  t484 = -1.2096424700126054e-9*var1(13);
  t492 = -0.6934128581485427*t366;
  t499 = t496 + t405;
  t500 = -0.021877537552*t499;
  t503 = -0.005481192614*t366;
  t512 = 0.077936*t404;
  t517 = t503 + t512;
  t518 = 0.005534467322*t517;
  t523 = t484 + t492 + t500 + t518;
  t530 = -1.7147089040178687e-8*var1(13);
  t532 = -0.021744644052735636*t366;
  t535 = -0.07769774964800001*t366;
  t536 = -0.005498*t404;
  t538 = t535 + t536;
  t541 = 0.005534467322*t538;
  t553 = t496 + t552;
  t554 = -0.6934341012630001*t553;
  t557 = t530 + t532 + t541 + t554;
  t559 = -0.993925573253*t366;
  t563 = 1. + t559;
  t585 = t400 + t552;
  t659 = -1.*t28;
  t669 = 1. + t659;
  t861 = t106*t58;
  t862 = t28*t175;
  t863 = t861 + t862;
  t868 = -1.*t863*t313;
  t870 = t750 + t868;
  t872 = t289*t863;
  t873 = t730*t313;
  t890 = t872 + t873;
  t699 = 0.21*t58;
  t710 = -1.*t28*t206;
  t716 = t58*t237;
  t736 = -1.*t730*t326;
  t740 = -1.*t261*t346;
  t747 = t376*t745;
  t757 = t756*t413;
  t760 = t747 + t757;
  t762 = 0.588518*t760;
  t769 = t745*t452;
  t783 = t756*t466;
  t801 = t769 + t783;
  t805 = -0.124503*t801;
  t814 = -1.*t745*t523;
  t816 = -1.*t756*t557;
  t820 = t563*t756;
  t822 = t745*t585;
  t823 = t820 + t822;
  t827 = -0.045407*t823;
  t840 = 0.21*t669;
  t842 = -0.049*t58;
  t846 = -1.*t58*t206;
  t853 = -1.*t28*t237;
  t866 = -1.*t863*t326;
  t867 = -1.*t730*t346;
  t871 = t376*t870;
  t895 = t890*t413;
  t900 = t871 + t895;
  t901 = 0.588518*t900;
  t904 = t870*t452;
  t907 = t890*t466;
  t909 = t904 + t907;
  t910 = -0.124503*t909;
  t913 = -1.*t870*t523;
  t914 = -1.*t890*t557;
  t915 = t563*t890;
  t917 = t870*t585;
  t925 = t915 + t917;
  t926 = -0.045407*t925;
  t930 = -0.09 + t840 + t842 + t846 + t853 + t866 + t867 + t901 + t910 + t913 + t914 + t926;
  t945 = 0.00159*t106;
  t949 = t945 + t181;
  t952 = -0.27068*t106;
  t954 = -0.00159*t175;
  t958 = t952 + t954;
  t327 = -1.*t261*t326;
  t349 = -1.*t339*t346;
  t395 = t376*t387;
  t418 = t399*t413;
  t419 = t395 + t418;
  t433 = 0.588518*t419;
  t462 = t387*t452;
  t470 = t399*t466;
  t475 = t462 + t470;
  t481 = -0.124503*t475;
  t527 = -1.*t387*t523;
  t558 = -1.*t399*t557;
  t572 = t563*t399;
  t608 = t387*t585;
  t623 = t572 + t608;
  t624 = -0.045407*t623;
  t684 = 0.049*t669;
  t833 = -0.049 + t684 + t699 + t710 + t716 + t736 + t740 + t762 + t805 + t814 + t816 + t827;
  t995 = -1.*t289*t730;
  t998 = t995 + t382;
  t977 = -0.01841*t289;
  t979 = t977 + t320;
  t984 = -0.70544*t289;
  t986 = 0.01841*t313;
  t988 = t984 + t986;
  t1044 = -1.*t289*t863;
  t1048 = t1044 + t741;
  t1148 = -0.077936*t354;
  t1162 = 0.005481192614*t404;
  t1136 = 0.005498*t354;
  t1172 = 0.07769774964800001*t404;
  t1159 = 0.077936*t354;
  t1149 = -0.005481192614*t404;
  t1171 = -0.005498*t354;
  t1138 = -0.07769774964800001*t404;
  t1204 = -0.0004284921280000001*t404;
  t1224 = 0.996943*t354;
  t1203 = -0.996943*t354;
  t1234 = 0.0004284921280000001*t404;
  t1187 = t1148 + t1162;
  t1189 = t1136 + t1172;
  t1199 = t1159 + t1149;
  t1202 = 0.005534467322*t1199;
  t1206 = t1203 + t1204;
  t1209 = -0.021877537552*t1206;
  t1211 = -0.6934128581485427*t404;
  t1213 = -1.2096424700126054e-9 + t1202 + t1209 + t1211;
  t1221 = t1171 + t1138;
  t1223 = 0.005534467322*t1221;
  t1225 = t1224 + t1204;
  t1226 = -0.6934341012630001*t1225;
  t1227 = -0.021744644052735636*t404;
  t1229 = -1.7147089040178687e-8 + t1223 + t1226 + t1227;
  t1252 = t1203 + t1234;
  t1237 = t1224 + t1234;
  t1293 = sin(var1(18));
  t1291 = cos(var1(18));
  t1296 = cos(var1(19));
  t1297 = -1.*t1296;
  t1299 = 1. + t1297;
  t1301 = sin(var1(19));
  t1322 = cos(var1(20));
  t1326 = -1.*t1322;
  t1328 = 1. + t1326;
  t1333 = sin(var1(20));
  t1352 = -1.*t1291*t1296;
  t1356 = t1293*t1301;
  t1357 = t1352 + t1356;
  t1314 = -1.*t1296*t1293;
  t1315 = -1.*t1291*t1301;
  t1321 = t1314 + t1315;
  t1369 = cos(var1(21));
  t1372 = -1.*t1369;
  t1373 = 1. + t1372;
  t1381 = t1322*t1357;
  t1385 = -1.*t1321*t1333;
  t1386 = t1381 + t1385;
  t1414 = sin(var1(21));
  t1415 = -0.996943*t1414;
  t1402 = t1322*t1321;
  t1405 = t1357*t1333;
  t1407 = t1402 + t1405;
  t1431 = -0.0004284921280000001*t1373;
  t1411 = 0.0004284921280000001*t1373;
  t1477 = 0.996943*t1414;
  t1300 = -0.00159*t1299;
  t1302 = -0.27068*t1301;
  t1304 = t1300 + t1302;
  t1306 = -0.27068*t1299;
  t1310 = 0.00159*t1301;
  t1311 = t1306 + t1310;
  t1331 = 0.01841*t1328;
  t1335 = -0.70544*t1333;
  t1336 = t1331 + t1335;
  t1359 = -0.70544*t1328;
  t1360 = -0.01841*t1333;
  t1361 = t1359 + t1360;
  t1378 = -0.999969365345*t1373;
  t1379 = 1. + t1378;
  t1506 = t1291*t1296;
  t1511 = -1.*t1293*t1301;
  t1512 = t1506 + t1511;
  t1416 = t1411 + t1415;
  t1519 = -1.*t1512*t1333;
  t1520 = t1402 + t1519;
  t1429 = -1.2096424700126054e-9*var1(21);
  t1430 = -0.6934128581485427*t1373;
  t1435 = t1431 + t1415;
  t1439 = -0.021877537552*t1435;
  t1440 = 0.005481192614*t1373;
  t1441 = -0.077936*t1414;
  t1444 = t1440 + t1441;
  t1445 = -0.005534467322*t1444;
  t1447 = t1429 + t1430 + t1439 + t1445;
  t1524 = t1322*t1512;
  t1527 = t1321*t1333;
  t1530 = t1524 + t1527;
  t1449 = -0.07769774964800001*t1373;
  t1450 = -0.005498*t1414;
  t1451 = t1449 + t1450;
  t1455 = -0.005481192614*t1373;
  t1456 = 0.077936*t1414;
  t1457 = t1455 + t1456;
  t1468 = -1.7147089040178687e-8*var1(21);
  t1471 = -0.021744644052735636*t1373;
  t1472 = 0.07769774964800001*t1373;
  t1473 = 0.005498*t1414;
  t1475 = t1472 + t1473;
  t1476 = -0.005534467322*t1475;
  t1478 = t1431 + t1477;
  t1479 = -0.6934341012630001*t1478;
  t1481 = t1468 + t1471 + t1476 + t1479;
  t1485 = -0.993925573253*t1373;
  t1487 = 1. + t1485;
  t1491 = t1411 + t1477;
  t1499 = -1.*t1291;
  t1500 = 1. + t1499;
  t1585 = t1296*t1293;
  t1592 = t1291*t1301;
  t1593 = t1585 + t1592;
  t1607 = -1.*t1593*t1333;
  t1614 = t1524 + t1607;
  t1622 = t1322*t1593;
  t1627 = t1512*t1333;
  t1633 = t1622 + t1627;
  t1503 = 0.21*t1293;
  t1504 = -1.*t1291*t1304;
  t1505 = t1293*t1311;
  t1513 = -1.*t1512*t1336;
  t1515 = -1.*t1321*t1361;
  t1521 = t1379*t1520;
  t1531 = t1530*t1416;
  t1532 = t1521 + t1531;
  t1534 = 0.588518*t1532;
  t1535 = -1.*t1520*t1447;
  t1537 = t1530*t1451;
  t1544 = t1520*t1457;
  t1546 = t1537 + t1544;
  t1547 = 0.124503*t1546;
  t1553 = -1.*t1530*t1481;
  t1554 = t1487*t1530;
  t1555 = t1520*t1491;
  t1557 = t1554 + t1555;
  t1563 = -0.045407*t1557;
  t1569 = 0.21*t1500;
  t1570 = -0.049*t1293;
  t1571 = -1.*t1293*t1304;
  t1584 = -1.*t1291*t1311;
  t1601 = -1.*t1593*t1336;
  t1606 = -1.*t1512*t1361;
  t1615 = t1379*t1614;
  t1638 = t1633*t1416;
  t1640 = t1615 + t1638;
  t1641 = 0.588518*t1640;
  t1642 = -1.*t1614*t1447;
  t1643 = t1633*t1451;
  t1646 = t1614*t1457;
  t1648 = t1643 + t1646;
  t1652 = 0.124503*t1648;
  t1653 = -1.*t1633*t1481;
  t1657 = t1487*t1633;
  t1658 = t1614*t1491;
  t1660 = t1657 + t1658;
  t1661 = -0.045407*t1660;
  t1662 = -0.09 + t1569 + t1570 + t1571 + t1584 + t1601 + t1606 + t1641 + t1642 + t1652 + t1653 + t1661;
  t1671 = 0.00159*t1296;
  t1673 = t1671 + t1302;
  t1678 = -0.27068*t1296;
  t1680 = -0.00159*t1301;
  t1684 = t1678 + t1680;
  t1344 = -1.*t1321*t1336;
  t1364 = -1.*t1357*t1361;
  t1399 = t1379*t1386;
  t1423 = t1407*t1416;
  t1424 = t1399 + t1423;
  t1425 = 0.588518*t1424;
  t1448 = -1.*t1386*t1447;
  t1452 = t1407*t1451;
  t1460 = t1386*t1457;
  t1463 = t1452 + t1460;
  t1465 = 0.124503*t1463;
  t1483 = -1.*t1407*t1481;
  t1488 = t1487*t1407;
  t1492 = t1386*t1491;
  t1493 = t1488 + t1492;
  t1495 = -0.045407*t1493;
  t1501 = 0.049*t1500;
  t1564 = -0.049 + t1501 + t1503 + t1504 + t1505 + t1513 + t1515 + t1534 + t1535 + t1547 + t1553 + t1563;
  t1711 = -1.*t1322*t1512;
  t1712 = t1711 + t1385;
  t1699 = -0.01841*t1322;
  t1700 = t1699 + t1335;
  t1703 = -0.70544*t1322;
  t1705 = 0.01841*t1333;
  t1707 = t1703 + t1705;
  t1760 = -1.*t1322*t1593;
  t1761 = t1760 + t1519;
  t1892 = -0.005498*t1369;
  t1870 = -0.07769774964800001*t1414;
  t1884 = 0.077936*t1369;
  t1879 = -0.005481192614*t1414;
  t1873 = -0.077936*t1369;
  t1886 = 0.005481192614*t1414;
  t1923 = -0.0004284921280000001*t1414;
  t1866 = 0.005498*t1369;
  t1894 = 0.07769774964800001*t1414;
  t1956 = 0.996943*t1369;
  t1922 = -0.996943*t1369;
  t1989 = 0.0004284921280000001*t1414;
  t1907 = t1892 + t1870;
  t1916 = t1884 + t1879;
  t1927 = t1922 + t1923;
  t1928 = -0.021877537552*t1927;
  t1930 = t1873 + t1886;
  t1937 = -0.005534467322*t1930;
  t1940 = -0.6934128581485427*t1414;
  t1949 = -1.2096424700126054e-9 + t1928 + t1937 + t1940;
  t1963 = t1956 + t1923;
  t1969 = -0.6934341012630001*t1963;
  t1970 = t1866 + t1894;
  t1976 = -0.005534467322*t1970;
  t1979 = -0.021744644052735636*t1414;
  t1982 = -1.7147089040178687e-8 + t1969 + t1976 + t1979;
  t2000 = t1922 + t1989;
  t1991 = t1956 + t1989;
  p_output1(19)=2.*(0.21*t28 + t237*t28 + t327 + t349 + t433 + t481 + t527 + t558 + 0.049*t58 + t206*t58 + t624)*t833 + 2.*(-0.049*t28 + t699 + t710 + t716 + t736 + t740 + t762 + t805 + t814 + t816 + t827)*t930;
  p_output1(21)=2.*t833*(t327 + t349 + t433 + t481 + t527 + t558 + t624 + t58*t949 - 1.*t28*t958) + 2.*t930*(t736 + t740 + t762 + t805 + t814 + t816 + t827 - 1.*t28*t949 - 1.*t58*t958);
  p_output1(23)=2.*t930*(-1.*t1048*t523 - 1.*t557*t870 + 0.588518*(t1048*t376 + t413*t870) - 0.124503*(t1048*t452 + t466*t870) - 0.045407*(t1048*t585 + t563*t870) - 1.*t730*t979 - 1.*t863*t988) + 2.*t833*(-1.*t557*t745 - 1.*t261*t979 - 1.*t730*t988 - 1.*t523*t998 + 0.588518*(t413*t745 + t376*t998) - 0.124503*(t466*t745 + t452*t998) - 0.045407*(t563*t745 + t585*t998));
  p_output1(25)=2.*(-1.*t1213*t745 - 1.*t1229*t756 - 0.124503*(t1187*t745 + t1189*t756) + 0.588518*(-0.999969365345*t404*t745 + t1252*t756) - 0.045407*(t1237*t745 - 0.993925573253*t404*t756))*t833 + 2.*(-1.*t1213*t870 - 1.*t1229*t890 - 0.124503*(t1187*t870 + t1189*t890) + 0.588518*(-0.999969365345*t404*t870 + t1252*t890) - 0.045407*(t1237*t870 - 0.993925573253*t404*t890))*t930 + 2.*(2.1934241414728571e-7 + 0.021877537552*(t1136 + t1138) + 0.6934341012630001*(t1148 + t1149) + 0.588518*(t1159 + t1162) - 0.045407*(t1171 + t1172) + 0.0007262134395594695*t404)*(0.09 - 0.124503*(1. - 0.006104248100000001*t366) - 0.000033783761634830594*t366 + 0.6934341012630001*(t450 + t503) + 0.588518*(t437 + t512) + 0.021877537552*(t465 + t535) - 0.045407*(t464 + t536) + 2.1934241414728571e-7*var1(13));
  p_output1(36)=2.*(0.21*t1291 + 0.049*t1293 + t1293*t1304 + t1291*t1311 + t1344 + t1364 + t1425 + t1448 + t1465 + t1483 + t1495)*t1564 + 2.*(-0.049*t1291 + t1503 + t1504 + t1505 + t1513 + t1515 + t1534 + t1535 + t1547 + t1553 + t1563)*t1662;
  p_output1(38)=2.*t1564*(t1344 + t1364 + t1425 + t1448 + t1465 + t1483 + t1495 + t1293*t1673 - 1.*t1291*t1684) + 2.*t1662*(t1513 + t1515 + t1534 + t1535 + t1547 + t1553 + t1563 - 1.*t1291*t1673 - 1.*t1293*t1684);
  p_output1(40)=2.*t1564*(-1.*t1481*t1520 - 1.*t1321*t1700 - 1.*t1512*t1707 - 1.*t1447*t1712 + 0.588518*(t1416*t1520 + t1379*t1712) + 0.124503*(t1451*t1520 + t1457*t1712) - 0.045407*(t1487*t1520 + t1491*t1712)) + 2.*t1662*(-1.*t1481*t1614 - 1.*t1512*t1700 - 1.*t1593*t1707 - 1.*t1447*t1761 + 0.588518*(t1416*t1614 + t1379*t1761) + 0.124503*(t1451*t1614 + t1457*t1761) - 0.045407*(t1487*t1614 + t1491*t1761));
  p_output1(42)=2.*t1564*(0.124503*(t1530*t1907 + t1520*t1916) - 1.*t1520*t1949 - 1.*t1530*t1982 - 0.045407*(-0.993925573253*t1414*t1530 + t1520*t1991) + 0.588518*(-0.999969365345*t1414*t1520 + t1530*t2000)) + 2.*t1662*(0.124503*(t1633*t1907 + t1614*t1916) - 1.*t1614*t1949 - 1.*t1633*t1982 - 0.045407*(-0.993925573253*t1414*t1633 + t1614*t1991) + 0.588518*(-0.999969365345*t1414*t1614 + t1633*t2000)) + 2.*(-2.1934241414728571e-7 - 0.0007262134395594695*t1414 - 0.045407*(t1866 + t1870) + 0.588518*(t1873 + t1879) + 0.6934341012630001*(t1884 + t1886) + 0.021877537552*(t1892 + t1894))*(-0.09 + 0.124503*(1. - 0.006104248100000001*t1373) + 0.000033783761634830594*t1373 + 0.588518*(t1441 + t1455) + 0.6934341012630001*(t1440 + t1456) + 0.021877537552*(t1450 + t1472) - 0.045407*(t1449 + t1473) - 2.1934241414728571e-7*var1(21));
  out = reshape(p_output1, 2, 22);
end