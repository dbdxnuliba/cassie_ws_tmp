/*
 * Automatically Generated from Mathematica.
 * Thu 23 Dec 2021 17:03:09 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "J_pelvis_RightStance_all.hh"
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
static void output1(double *p_output1,const double *var1)
{
  double t129;
  double t25;
  double t47;
  double t55;
  double t178;
  double t377;
  double t382;
  double t470;
  double t525;
  double t546;
  double t697;
  double t549;
  double t554;
  double t570;
  double t579;
  double t655;
  double t684;
  double t699;
  double t712;
  double t731;
  double t737;
  double t748;
  double t767;
  double t352;
  double t771;
  double t856;
  double t362;
  double t852;
  double t858;
  double t862;
  double t864;
  double t902;
  double t908;
  double t911;
  double t931;
  double t934;
  double t378;
  double t386;
  double t969;
  double t398;
  double t977;
  double t420;
  double t850;
  double t1007;
  double t1011;
  double t1025;
  double t1026;
  double t1028;
  double t1008;
  double t1014;
  double t1015;
  double t851;
  double t854;
  double t860;
  double t863;
  double t871;
  double t874;
  double t900;
  double t904;
  double t906;
  double t907;
  double t909;
  double t910;
  double t912;
  double t913;
  double t928;
  double t929;
  double t930;
  double t932;
  double t933;
  double t935;
  double t936;
  double t938;
  double t941;
  double t943;
  double t945;
  double t946;
  double t948;
  double t951;
  double t953;
  double t955;
  double t957;
  double t959;
  double t961;
  double t963;
  double t964;
  double t965;
  double t340;
  double t1064;
  double t1078;
  double t1081;
  double t1089;
  double t1092;
  double t1105;
  double t1108;
  double t1111;
  double t1114;
  double t1117;
  double t1120;
  double t1123;
  double t1126;
  double t1129;
  double t1132;
  double t1135;
  double t1138;
  double t775;
  double t788;
  double t550;
  double t564;
  double t573;
  double t636;
  double t658;
  double t687;
  double t700;
  double t715;
  double t733;
  double t740;
  double t754;
  double t768;
  double t526;
  double t531;
  double t540;
  double t543;
  double t796;
  double t808;
  double t812;
  double t816;
  double t819;
  double t822;
  double t825;
  double t829;
  double t833;
  double t837;
  double t841;
  double t845;
  double t376;
  double t379;
  double t394;
  double t417;
  double t443;
  double t450;
  double t887;
  double t889;
  double t891;
  double t892;
  double t893;
  double t1246;
  double t1247;
  double t1248;
  double t1249;
  double t1250;
  double t1251;
  double t1252;
  double t1253;
  double t1254;
  double t1255;
  double t1256;
  double t1257;
  double t1258;
  double t1259;
  double t1260;
  double t1261;
  double t1262;
  double t1118;
  double t1119;
  double t1121;
  double t1122;
  double t1124;
  double t1127;
  double t1130;
  double t1133;
  double t1136;
  double t1137;
  double t1139;
  double t1140;
  double t1157;
  double t1158;
  double t1159;
  double t1160;
  double t1161;
  double t1162;
  double t1163;
  double t1164;
  double t1165;
  double t1167;
  double t1168;
  double t1170;
  double t1172;
  double t1174;
  double t1175;
  double t1177;
  double t1179;
  double t1181;
  double t1182;
  double t1183;
  double t1184;
  double t1185;
  double t1186;
  double t1187;
  double t1188;
  double t1189;
  double t1190;
  double t527;
  double t534;
  double t541;
  double t544;
  double t780;
  double t793;
  double t1197;
  double t1198;
  double t1199;
  double t1200;
  double t1201;
  double t1202;
  double t1203;
  double t1204;
  double t1205;
  double t1206;
  double t1207;
  double t1208;
  double t1209;
  double t1210;
  double t1211;
  double t1212;
  double t1213;
  double t480;
  double t487;
  double t1214;
  double t1215;
  double t1216;
  double t1217;
  double t1218;
  double t1219;
  double t1220;
  double t1221;
  double t1222;
  double t1223;
  double t1224;
  double t1225;
  double t1226;
  double t1227;
  double t1228;
  double t1229;
  double t1230;
  double t1231;
  double t1232;
  double t1233;
  double t1340;
  double t1341;
  double t970;
  double t971;
  double t972;
  double t982;
  double t983;
  double t984;
  double t989;
  double t990;
  double t991;
  double t992;
  double t993;
  double t998;
  double t1003;
  double t1022;
  double t1023;
  double t1079;
  double t1082;
  double t1090;
  double t1093;
  double t1106;
  double t1109;
  double t1112;
  double t1115;
  double t1065;
  double t1072;
  double t1075;
  double t1141;
  double t1143;
  double t1145;
  double t1147;
  double t1095;
  double t1099;
  double t1102;
  double t1149;
  double t1151;
  double t1153;
  double t1155;
  double t528;
  double t1297;
  double t542;
  double t1299;
  double t565;
  double t1302;
  double t665;
  double t1305;
  double t718;
  double t1308;
  double t766;
  double t1311;
  double t810;
  double t1317;
  double t820;
  double t1320;
  double t831;
  double t1323;
  double t843;
  double t1326;
  double t1334;
  double t1336;
  double t1337;
  double t877;
  double t894;
  double t895;
  double t897;
  double t1068;
  double t1073;
  double t1076;
  double t1097;
  double t1098;
  double t1100;
  double t1101;
  double t1103;
  double t1104;
  double t1107;
  double t1110;
  double t1113;
  double t1116;
  double t1150;
  double t1152;
  double t1154;
  double t1156;
  double t1041;
  double t1056;
  double t1057;
  double t538;
  double t1298;
  double t553;
  double t577;
  double t1303;
  double t1304;
  double t705;
  double t734;
  double t1309;
  double t1310;
  double t787;
  double t1314;
  double t806;
  double t814;
  double t1318;
  double t1319;
  double t827;
  double t835;
  double t1324;
  double t1325;
  double t1439;
  double t1441;
  double t1444;
  double t1446;
  double t1448;
  double t1424;
  double t1425;
  double t1429;
  double t1430;
  double t1431;
  double t1353;
  double t1354;
  double t1355;
  double t1356;
  double t1357;
  double t1358;
  double t1359;
  double t1511;
  double t1074;
  double t1462;
  double t1080;
  double t1464;
  double t1091;
  double t1466;
  double t1125;
  double t1128;
  double t1277;
  double t1278;
  double t1142;
  double t1468;
  double t1146;
  double t1470;
  double t1169;
  double t1171;
  double t1173;
  double t1283;
  double t1284;
  double t1285;
  double t1480;
  double t1481;
  double t1482;
  double t1483;
  double t1489;
  double t1490;
  double t1491;
  double t1492;
  double t1494;
  double t1495;
  double t1496;
  double t1497;
  double t1504;
  double t1505;
  double t1507;
  double t1508;
  double t1550;
  double t1551;
  double t1552;
  double t1553;
  double t1554;
  double t1517;
  double t1519;
  double t1521;
  double t1523;
  double t1562;
  double t1529;
  double t1530;
  double t1531;
  double t1532;
  double t1533;
  double t1534;
  double t1536;
  double t1537;
  double t1591;
  double t1568;
  double t1570;
  double t1610;
  double t1611;
  double t1612;
  double t1606;
  double t1607;
  double t1608;
  double t1599;
  t129 = Cos(var1[3]);
  t25 = Cos(var1[5]);
  t47 = Sin(var1[3]);
  t55 = Sin(var1[4]);
  t178 = Sin(var1[5]);
  t377 = var1[16] + var1[17];
  t382 = var1[16] + var1[17] + var1[19];
  t470 = -1.*var1[15];
  t525 = -1.*var1[16];
  t546 = -1.*var1[17];
  t697 = -1.*var1[19];
  t549 = var1[14] + t525 + t546;
  t554 = var1[14] + t470 + t525 + t546;
  t570 = var1[14] + var1[15] + t525 + t546;
  t579 = var1[14] + var1[16] + var1[17];
  t655 = var1[14] + t470 + var1[16] + var1[17];
  t684 = var1[14] + var1[15] + var1[16] + var1[17];
  t699 = var1[14] + t525 + t546 + t697;
  t712 = var1[14] + t470 + t525 + t546 + t697;
  t731 = var1[14] + var1[15] + t525 + t546 + t697;
  t737 = var1[14] + var1[16] + var1[17] + var1[19];
  t748 = var1[14] + t470 + var1[16] + var1[17] + var1[19];
  t767 = var1[14] + var1[15] + var1[16] + var1[17] + var1[19];
  t352 = Cos(var1[4]);
  t771 = Sin(var1[14]);
  t856 = var1[17] + var1[19];
  t362 = Cos(var1[16]);
  t852 = Cos(var1[17]);
  t858 = Cos(t856);
  t862 = Sin(var1[17]);
  t864 = Sin(t856);
  t902 = -1.*var1[4];
  t908 = var1[16] + var1[17] + t902;
  t911 = var1[16] + var1[17] + var1[19] + t902;
  t931 = var1[16] + var1[17] + var1[4];
  t934 = var1[16] + var1[17] + var1[19] + var1[4];
  t378 = Cos(t377);
  t386 = Cos(t382);
  t969 = var1[16] + t546;
  t398 = Sin(t377);
  t977 = var1[16] + t546 + t697;
  t420 = Sin(t382);
  t850 = Sin(var1[15]);
  t1007 = Cos(var1[19]);
  t1011 = Sin(var1[19]);
  t1025 = 10200.*t1007;
  t1026 = 1000.*t1011;
  t1028 = 12386. + t1025 + t1026;
  t1008 = -4000.*t1007;
  t1014 = 40800.*t1011;
  t1015 = 6741. + t1008 + t1014;
  t851 = Sin(var1[16]);
  t854 = 49544.*t852;
  t860 = 40800.*t858;
  t863 = -6741.*t862;
  t871 = 4000.*t864;
  t874 = 12000. + t854 + t860 + t863 + t871;
  t900 = Cos(var1[15]);
  t904 = var1[16] + t902;
  t906 = Cos(t904);
  t907 = -12000.*t906;
  t909 = Cos(t908);
  t910 = -49544.*t909;
  t912 = Cos(t911);
  t913 = -40800.*t912;
  t928 = var1[16] + var1[4];
  t929 = Cos(t928);
  t930 = 12000.*t929;
  t932 = Cos(t931);
  t933 = 49544.*t932;
  t935 = Cos(t934);
  t936 = 40800.*t935;
  t938 = var1[14] + t902;
  t941 = Sin(t938);
  t943 = 450.*t941;
  t945 = Sin(t908);
  t946 = 6741.*t945;
  t948 = Sin(t911);
  t951 = -4000.*t948;
  t953 = var1[14] + var1[4];
  t955 = Sin(t953);
  t957 = 450.*t955;
  t959 = Sin(t931);
  t961 = -6741.*t959;
  t963 = Sin(t934);
  t964 = 4000.*t963;
  t965 = t907 + t910 + t913 + t930 + t933 + t936 + t943 + t946 + t951 + t957 + t961 + t964;
  t340 = Cos(var1[14]);
  t1064 = -1.*var1[3];
  t1078 = var1[15] + t525 + t546 + t1064;
  t1081 = var1[15] + var1[16] + var1[17] + t1064;
  t1089 = var1[15] + t525 + t546 + t697 + t1064;
  t1092 = var1[15] + var1[16] + var1[17] + var1[19] + t1064;
  t1105 = var1[15] + t525 + t546 + var1[3];
  t1108 = var1[15] + var1[16] + var1[17] + var1[3];
  t1111 = var1[15] + t525 + t546 + t697 + var1[3];
  t1114 = var1[15] + var1[16] + var1[17] + var1[19] + var1[3];
  t1117 = var1[16] + var1[17] + t1064 + t902;
  t1120 = var1[16] + var1[17] + var1[19] + t1064 + t902;
  t1123 = var1[16] + var1[17] + var1[3] + t902;
  t1126 = var1[16] + var1[17] + var1[19] + var1[3] + t902;
  t1129 = var1[16] + var1[17] + t1064 + var1[4];
  t1132 = var1[16] + var1[17] + var1[19] + t1064 + var1[4];
  t1135 = var1[16] + var1[17] + var1[3] + var1[4];
  t1138 = var1[16] + var1[17] + var1[19] + var1[3] + var1[4];
  t775 = var1[14] + t525;
  t788 = var1[14] + var1[16];
  t550 = Cos(t549);
  t564 = Cos(t554);
  t573 = Cos(t570);
  t636 = Cos(t579);
  t658 = Cos(t655);
  t687 = Cos(t684);
  t700 = Cos(t699);
  t715 = Cos(t712);
  t733 = Cos(t731);
  t740 = Cos(t737);
  t754 = Cos(t748);
  t768 = Cos(t767);
  t526 = var1[14] + t470 + t525;
  t531 = var1[14] + var1[15] + t525;
  t540 = var1[14] + t470 + var1[16];
  t543 = var1[14] + var1[15] + var1[16];
  t796 = Sin(t549);
  t808 = Sin(t554);
  t812 = Sin(t570);
  t816 = Sin(t579);
  t819 = Sin(t655);
  t822 = Sin(t684);
  t825 = Sin(t699);
  t829 = Sin(t712);
  t833 = Sin(t731);
  t837 = Sin(t737);
  t841 = Sin(t748);
  t845 = Sin(t767);
  t376 = 12000.*t362;
  t379 = 49544.*t378;
  t394 = 40800.*t386;
  t417 = -6741.*t398;
  t443 = 4000.*t420;
  t450 = 9000. + t376 + t379 + t394 + t417 + t443;
  t887 = 6741.*t852;
  t889 = -4000.*t858;
  t891 = 49544.*t862;
  t892 = 40800.*t864;
  t893 = t887 + t889 + t891 + t892;
  t1246 = Cos(t938);
  t1247 = -450.*t1246;
  t1248 = -6741.*t909;
  t1249 = 4000.*t912;
  t1250 = Cos(t953);
  t1251 = 450.*t1250;
  t1252 = -6741.*t932;
  t1253 = 4000.*t935;
  t1254 = Sin(t904);
  t1255 = -12000.*t1254;
  t1256 = -49544.*t945;
  t1257 = -40800.*t948;
  t1258 = Sin(t928);
  t1259 = -12000.*t1258;
  t1260 = -49544.*t959;
  t1261 = -40800.*t963;
  t1262 = t1247 + t1248 + t1249 + t1251 + t1252 + t1253 + t1255 + t1256 + t1257 + t1259 + t1260 + t1261;
  t1118 = Cos(t1117);
  t1119 = 6741.*t1118;
  t1121 = Cos(t1120);
  t1122 = -4000.*t1121;
  t1124 = Cos(t1123);
  t1127 = Cos(t1126);
  t1130 = Cos(t1129);
  t1133 = Cos(t1132);
  t1136 = Cos(t1135);
  t1137 = -6741.*t1136;
  t1139 = Cos(t1138);
  t1140 = 4000.*t1139;
  t1157 = var1[16] + t1064 + t902;
  t1158 = Sin(t1157);
  t1159 = 12000.*t1158;
  t1160 = Sin(t1117);
  t1161 = 49544.*t1160;
  t1162 = Sin(t1120);
  t1163 = 40800.*t1162;
  t1164 = var1[3] + t902;
  t1165 = Sin(t1164);
  t1167 = var1[16] + var1[3] + t902;
  t1168 = Sin(t1167);
  t1170 = Sin(t1123);
  t1172 = Sin(t1126);
  t1174 = var1[16] + t1064 + var1[4];
  t1175 = Sin(t1174);
  t1177 = Sin(t1129);
  t1179 = Sin(t1132);
  t1181 = var1[3] + var1[4];
  t1182 = Sin(t1181);
  t1183 = -18000.*t1182;
  t1184 = var1[16] + var1[3] + var1[4];
  t1185 = Sin(t1184);
  t1186 = -12000.*t1185;
  t1187 = Sin(t1135);
  t1188 = -49544.*t1187;
  t1189 = Sin(t1138);
  t1190 = -40800.*t1189;
  t527 = Cos(t526);
  t534 = Cos(t531);
  t541 = Cos(t540);
  t544 = Cos(t543);
  t780 = Sin(t775);
  t793 = Sin(t788);
  t1197 = 36000.*t340;
  t1198 = Cos(t775);
  t1199 = 24000.*t1198;
  t1200 = Cos(t788);
  t1201 = 24000.*t1200;
  t1202 = 99088.*t550;
  t1203 = -6741.*t564;
  t1204 = 6741.*t573;
  t1205 = 99088.*t636;
  t1206 = -6741.*t658;
  t1207 = 6741.*t687;
  t1208 = 81600.*t700;
  t1209 = 4000.*t715;
  t1210 = -4000.*t733;
  t1211 = 81600.*t740;
  t1212 = 4000.*t754;
  t1213 = -4000.*t768;
  t480 = var1[14] + t470;
  t487 = var1[14] + var1[15];
  t1214 = Sin(t526);
  t1215 = 12000.*t1214;
  t1216 = Sin(t531);
  t1217 = -12000.*t1216;
  t1218 = Sin(t540);
  t1219 = -12000.*t1218;
  t1220 = Sin(t543);
  t1221 = 12000.*t1220;
  t1222 = 13482.*t796;
  t1223 = 49544.*t808;
  t1224 = -49544.*t812;
  t1225 = -13482.*t816;
  t1226 = -49544.*t819;
  t1227 = 49544.*t822;
  t1228 = -8000.*t825;
  t1229 = 40800.*t829;
  t1230 = -40800.*t833;
  t1231 = 8000.*t837;
  t1232 = -40800.*t841;
  t1233 = 40800.*t845;
  t1340 = 450.*t1246;
  t1341 = t1340 + t1251;
  t970 = Cos(t969);
  t971 = 49544.*t970;
  t972 = -49544.*t378;
  t982 = Cos(t977);
  t983 = 40800.*t982;
  t984 = -40800.*t386;
  t989 = Sin(t969);
  t990 = 6741.*t989;
  t991 = 6741.*t398;
  t992 = Sin(t977);
  t993 = -4000.*t992;
  t998 = -4000.*t420;
  t1003 = -18000. + t971 + t972 + t983 + t984 + t990 + t991 + t993 + t998;
  t1022 = t862*t1015;
  t1023 = -12000. + t1022;
  t1079 = Cos(t1078);
  t1082 = Cos(t1081);
  t1090 = Cos(t1089);
  t1093 = Cos(t1092);
  t1106 = Cos(t1105);
  t1109 = Cos(t1108);
  t1112 = Cos(t1111);
  t1115 = Cos(t1114);
  t1065 = var1[15] + t1064;
  t1072 = var1[15] + t525 + t1064;
  t1075 = var1[15] + var1[16] + t1064;
  t1141 = Sin(t1078);
  t1143 = Sin(t1081);
  t1145 = Sin(t1089);
  t1147 = Sin(t1092);
  t1095 = var1[15] + var1[3];
  t1099 = var1[15] + t525 + var1[3];
  t1102 = var1[15] + var1[16] + var1[3];
  t1149 = Sin(t1105);
  t1151 = Sin(t1108);
  t1153 = Sin(t1111);
  t1155 = Sin(t1114);
  t528 = -12000.*t527;
  t1297 = -12000.*t534;
  t542 = 12000.*t541;
  t1299 = 12000.*t544;
  t565 = -49544.*t564;
  t1302 = -49544.*t573;
  t665 = 49544.*t658;
  t1305 = 49544.*t687;
  t718 = -40800.*t715;
  t1308 = -40800.*t733;
  t766 = 40800.*t754;
  t1311 = 40800.*t768;
  t810 = -6741.*t808;
  t1317 = -6741.*t812;
  t820 = -6741.*t819;
  t1320 = -6741.*t822;
  t831 = 4000.*t829;
  t1323 = 4000.*t833;
  t843 = 4000.*t841;
  t1326 = 4000.*t845;
  t1334 = Sin(t480);
  t1336 = Sin(t487);
  t1337 = -900.*t1336;
  t877 = t352*t771*t851*t874;
  t894 = t362*t352*t771*t893;
  t895 = 450.*t55;
  t897 = t877 + t894 + t895;
  t1068 = Cos(t1065);
  t1073 = Cos(t1072);
  t1076 = Cos(t1075);
  t1097 = Cos(t1095);
  t1098 = -900.*t1097;
  t1100 = Cos(t1099);
  t1101 = -12000.*t1100;
  t1103 = Cos(t1102);
  t1104 = 12000.*t1103;
  t1107 = -49544.*t1106;
  t1110 = 49544.*t1109;
  t1113 = -40800.*t1112;
  t1116 = 40800.*t1115;
  t1150 = -6741.*t1149;
  t1152 = -6741.*t1151;
  t1154 = 4000.*t1153;
  t1156 = 4000.*t1155;
  t1041 = -1.*t352*t771*t851*t874;
  t1056 = -450.*t55;
  t1057 = t1041 + t1056;
  t538 = 12000.*t534;
  t1298 = -12000.*t541;
  t553 = -13482.*t550;
  t577 = 49544.*t573;
  t1303 = -13482.*t636;
  t1304 = -49544.*t658;
  t705 = 8000.*t700;
  t734 = 40800.*t733;
  t1309 = 8000.*t740;
  t1310 = -40800.*t754;
  t787 = 24000.*t780;
  t1314 = -24000.*t793;
  t806 = 99088.*t796;
  t814 = 6741.*t812;
  t1318 = -99088.*t816;
  t1319 = 6741.*t819;
  t827 = 81600.*t825;
  t835 = -4000.*t833;
  t1324 = -81600.*t837;
  t1325 = -4000.*t841;
  t1439 = 6741.*t564;
  t1441 = -4000.*t715;
  t1444 = -12000.*t1214;
  t1446 = -49544.*t808;
  t1448 = -40800.*t829;
  t1424 = 6741.*t909;
  t1425 = -4000.*t912;
  t1429 = 12000.*t1254;
  t1430 = 49544.*t945;
  t1431 = 40800.*t948;
  t1353 = 4.*t129*t352*t850*t862*t1028;
  t1354 = -1.*t1023*t47;
  t1355 = t129*t352*t850*t1015;
  t1356 = 4.*t1028*t47;
  t1357 = t1355 + t1356;
  t1358 = t852*t1357;
  t1359 = t1353 + t1354 + t1358;
  t1511 = t1424 + t1425 + t1252 + t1253 + t1429 + t1430 + t1431 + t1259 + t1260 + t1261;
  t1074 = -12000.*t1073;
  t1462 = -12000.*t1076;
  t1080 = -49544.*t1079;
  t1464 = -49544.*t1082;
  t1091 = -40800.*t1090;
  t1466 = -40800.*t1093;
  t1125 = -6741.*t1124;
  t1128 = 4000.*t1127;
  t1277 = -6741.*t1130;
  t1278 = 4000.*t1133;
  t1142 = -6741.*t1141;
  t1468 = 6741.*t1143;
  t1146 = 4000.*t1145;
  t1470 = -4000.*t1147;
  t1169 = -12000.*t1168;
  t1171 = -49544.*t1170;
  t1173 = -40800.*t1172;
  t1283 = -12000.*t1175;
  t1284 = -49544.*t1177;
  t1285 = -40800.*t1179;
  t1480 = 49544.*t909;
  t1481 = 40800.*t912;
  t1482 = -6741.*t945;
  t1483 = 4000.*t948;
  t1489 = -99088.*t550;
  t1490 = -6741.*t573;
  t1491 = -81600.*t700;
  t1492 = 4000.*t733;
  t1494 = -13482.*t796;
  t1495 = 49544.*t812;
  t1496 = 8000.*t825;
  t1497 = 40800.*t833;
  t1504 = -6741.*t378;
  t1505 = 4000.*t386;
  t1507 = -49544.*t398;
  t1508 = -40800.*t420;
  t1550 = -6741.*t852;
  t1551 = 4000.*t858;
  t1552 = -49544.*t862;
  t1553 = -40800.*t864;
  t1554 = t1550 + t1551 + t1552 + t1553;
  t1517 = 6741.*t378;
  t1519 = -4000.*t386;
  t1521 = 49544.*t398;
  t1523 = 40800.*t420;
  t1562 = t1424 + t1425 + t1252 + t1253 + t1430 + t1431 + t1260 + t1261;
  t1529 = 49544.*t1106;
  t1530 = 40800.*t1112;
  t1531 = -6741.*t1118;
  t1532 = 4000.*t1121;
  t1533 = 6741.*t1149;
  t1534 = -4000.*t1153;
  t1536 = -49544.*t1160;
  t1537 = -40800.*t1162;
  t1591 = t1551 + t1553;
  t1568 = 4000.*t982;
  t1570 = 40800.*t992;
  t1610 = 40800.*t1007;
  t1611 = 4000.*t1011;
  t1612 = t1610 + t1611;
  t1606 = 1000.*t1007;
  t1607 = -10200.*t1011;
  t1608 = t1606 + t1607;
  t1599 = t1425 + t1253 + t1431 + t1261;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=-1.*t129*t178 - 1.*t25*t47*t55;
  p_output1[19]=t129*t25 - 1.*t178*t47*t55;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=2.5e-6*(-4.*t129*t340*t352*t450 + 4.*t129*t850*t897 + 2.*t129*t900*t965 + t47*(-54000. + t528 + t538 + t542 - 12000.*t544 + t553 + t565 + t577 + 13482.*t636 + t665 - 49544.*t687 + t705 + t718 + t734 - 8000.*t740 + t766 - 40800.*t768 + 36000.*t771 + t787 + 24000.*t793 + t806 + t810 + t814 + 99088.*t816 + t820 + 6741.*t822 + t827 + t831 + t835 + 81600.*t837 + t843 - 4000.*t845 + 900.*Cos(t480) + 900.*Cos(t487)));
  p_output1[23]=2.5e-6*((-900.*t1068 + t1074 + 12000.*t1076 + t1080 + 49544.*t1082 + t1091 + 40800.*t1093 + t1098 + t1101 + t1104 + t1107 + t1110 + t1113 + t1116 + t1119 + t1122 + t1125 + t1128 + 6741.*t1130 - 4000.*t1133 + t1137 + t1140 + t1142 - 6741.*t1143 + t1146 + 4000.*t1147 + t1150 + t1152 + t1154 + t1156 + t1159 + t1161 + t1163 - 18000.*t1165 + t1169 + t1171 + t1173 + 12000.*t1175 + 49544.*t1177 + 40800.*t1179 + t1183 + t1186 + t1188 + t1190)*t340 + 2.*t129*(27000. + t1003*t771) - 4.*t1057*t47*t850 - 4.*t362*t771*(-1.*t1023*t129 + (4.*t1028*t129 - 1.*t1015*t352*t47*t850)*t852 - 4.*t1028*t352*t47*t850*t862) + 2.*t47*t900*t965);
  p_output1[24]=t129*t25*t352;
  p_output1[25]=t129*t178*t352;
  p_output1[26]=0;
  p_output1[27]=2.5e-6*((t1197 + t1199 + t1201 + t1202 + t1203 + t1204 + t1205 + t1206 + t1207 + t1208 + t1209 + t1210 + t1211 + t1212 + t1213 + t1215 + t1217 + t1219 + t1221 + t1222 + t1223 + t1224 + t1225 + t1226 + t1227 + t1228 + t1229 + t1230 + t1231 + t1232 + t1233)*t352 - 1800.*t55*t850 - 2.*t900*t965);
  p_output1[28]=2.5e-6*(4.*t340*t450*t47*t55 + 4.*t47*t850*(450.*t352 - 1.*t55*t771*t851*t874 - 1.*t362*t55*t771*t893) + 2.*t1262*t47*t900);
  p_output1[29]=2.5e-6*((t1119 + t1122 + 6741.*t1124 - 4000.*t1127 + t1137 + t1140 + t1159 + t1161 + t1163 + 18000.*t1165 + 12000.*t1168 + 49544.*t1170 + 40800.*t1172 + t1183 + t1186 + t1188 + t1190 + t1277 + t1278 + t1283 + t1284 + t1285)*t340 - 4.*t362*t771*(-1.*t1015*t129*t55*t850*t852 - 4.*t1028*t129*t55*t850*t862) + 4.*t129*t850*(-450.*t352 + t55*t771*t851*t874) - 2.*t1262*t129*t900);
  p_output1[30]=-1.*t25*t47 - 1.*t129*t178*t55;
  p_output1[31]=-1.*t178*t47 + t129*t25*t55;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
  p_output1[60]=0;
  p_output1[61]=0;
  p_output1[62]=0;
  p_output1[63]=0;
  p_output1[64]=0;
  p_output1[65]=0;
  p_output1[66]=0;
  p_output1[67]=0;
  p_output1[68]=0;
  p_output1[69]=0;
  p_output1[70]=0;
  p_output1[71]=0;
  p_output1[72]=0;
  p_output1[73]=0;
  p_output1[74]=0;
  p_output1[75]=0;
  p_output1[76]=0;
  p_output1[77]=0;
  p_output1[78]=0;
  p_output1[79]=0;
  p_output1[80]=0;
  p_output1[81]=0;
  p_output1[82]=0;
  p_output1[83]=0;
  p_output1[84]=0;
  p_output1[85]=0;
  p_output1[86]=0;
  p_output1[87]=2.5e-6*(t55*(t1297 + t1298 + t1299 + t1302 + t1303 + t1304 + t1305 + t1308 + t1309 + t1310 + t1311 + t1314 + t1317 + t1318 + t1319 + t1320 + t1323 + t1324 + t1325 + t1326 + 12000.*t527 + 13482.*t550 + 49544.*t564 - 8000.*t700 + 40800.*t715 - 36000.*t771 - 24000.*t780 - 99088.*t796 + 6741.*t808 - 81600.*t825 - 4000.*t829) - 2.*t900*(-450.*t941 + t957));
  p_output1[88]=2.5e-6*(-1.*t129*(t1197 + t1199 + t1201 + t1202 + t1203 + t1204 + t1205 + t1206 + t1207 + t1208 + t1209 + t1210 + t1211 + t1212 + t1213 + t1215 + t1217 + t1219 + t1221 + t1222 + t1223 + t1224 + t1225 + t1226 + t1227 + t1228 + t1229 + t1230 + t1231 + t1232 + t1233 - 900.*t1334 + t1337) + 4.*t352*t450*t47*t771 + 4.*t47*t850*(t340*t352*t851*t874 + t340*t352*t362*t893) + 2.*t1341*t47*t900);
  p_output1[89]=2.5e-6*(-4.*t1359*t340*t362 + 2.*t1003*t340*t47 - 4.*t129*t340*t352*t850*t851*t874 - 2.*t129*t1341*t900 - 1.*t771*(-6741.*t1079 - 6741.*t1082 + 4000.*t1090 + 4000.*t1093 + 6741.*t1106 + 6741.*t1109 - 4000.*t1112 - 4000.*t1115 + 49544.*t1118 + 40800.*t1121 + 49544.*t1124 + 40800.*t1127 + 49544.*t1130 + 40800.*t1133 + 49544.*t1136 + 40800.*t1139 + 49544.*t1141 - 49544.*t1143 + 40800.*t1145 - 40800.*t1147 - 49544.*t1149 + 49544.*t1151 - 40800.*t1153 + 40800.*t1155 - 6741.*t1160 + 4000.*t1162 - 6741.*t1170 + 4000.*t1172 - 6741.*t1177 + 4000.*t1179 - 6741.*t1187 + 4000.*t1189 + 12000.*Cos(t1157) + 18000.*Cos(t1164) + 12000.*Cos(t1167) + 12000.*Cos(t1174) + 18000.*Cos(t1181) + 12000.*Cos(t1184) + 900.*Sin(t1065) + 12000.*Sin(t1072) - 12000.*Sin(t1075) - 900.*Sin(t1095) - 12000.*Sin(t1099) + 12000.*Sin(t1102)));
  p_output1[90]=0;
  p_output1[91]=0;
  p_output1[92]=1.;
  p_output1[93]=2.5e-6*(t55*(t1297 + t1299 + t1302 + t1305 + t1308 + t1311 + t1317 + t1320 + t1323 + t1326 + t528 + t542 + t565 + t665 + t718 + t766 + t810 + t820 + t831 + t843) + 1800.*t352*t900 + 2.*t850*(-450.*t1250 + 12000.*t1258 + t1340 + t1424 + t1425 + t1429 + t1430 + t1431 + 6741.*t932 - 4000.*t935 + 49544.*t959 + 40800.*t963));
  p_output1[94]=2.5e-6*(-1.*t129*(t1204 + t1207 + t1210 + t1213 + t1217 + 12000.*t1218 + t1221 + t1224 + t1227 + t1230 + t1233 + 900.*t1334 + t1337 + t1439 + t1441 + t1444 + t1446 + t1448 + 6741.*t658 - 4000.*t754 + 49544.*t819 + 40800.*t841) + 4.*t47*t897*t900 - 2.*t47*t850*t965);
  p_output1[95]=2.5e-6*((900.*t1068 + 12000.*t1073 + 49544.*t1079 + 40800.*t1090 + t1098 + t1101 + t1104 + t1107 + t1110 + t1113 + t1116 + 6741.*t1141 - 4000.*t1145 + t1150 + t1152 + t1154 + t1156 + t1462 + t1464 + t1466 + t1468 + t1470)*t340 + 4.*t1057*t129*t900 - 4.*t362*t771*(t1015*t129*t352*t852*t900 + 4.*t1028*t129*t352*t862*t900) + 2.*t129*t850*t965);
  p_output1[96]=0;
  p_output1[97]=0;
  p_output1[98]=0;
  p_output1[99]=2.5e-6*(t55*(t1298 + t1299 + t1303 + t1304 + t1305 + t1309 + t1310 + t1311 + t1314 + t1318 + t1319 + t1320 + t1324 + t1325 + t1326 + t528 + t538 + t553 + t565 + t577 + t705 + t718 + t734 + t787 + t806 + t810 + t814 + t827 + t831 + t835) - 2.*t900*(t1480 + t1481 + t1482 + t1483 + 12000.*t906 + t930 + t933 + t936 + t961 + t964));
  p_output1[100]=2.5e-6*(-1.*t129*(-24000.*t1198 + t1201 + t1205 + t1206 + t1207 + t1211 + t1212 + t1213 + 12000.*t1216 + t1219 + t1221 + t1225 + t1226 + t1227 + t1231 + t1232 + t1233 + t1439 + t1441 + t1444 + t1446 + t1448 + t1489 + t1490 + t1491 + t1492 + t1494 + t1495 + t1496 + t1497) - 4.*t340*t352*t47*(t1504 + t1505 + t1507 + t1508 - 12000.*t851) + 4.*t47*t850*(t352*t362*t771*t874 - 1.*t352*t771*t851*t893) + 2.*t1511*t47*t900);
  p_output1[101]=2.5e-6*((t1074 + t1080 + t1091 + 12000.*t1100 + t1104 + t1110 + t1116 + t1125 + t1128 + t1137 + t1140 + t1142 + t1146 + t1152 + t1156 - 12000.*t1158 + t1169 + t1171 + t1173 + t1186 + t1188 + t1190 + t1277 + t1278 + t1283 + t1284 + t1285 + t1462 + t1464 + t1466 + t1468 + t1470 + t1529 + t1530 + t1531 + t1532 + t1533 + t1534 + t1536 + t1537)*t340 + 4.*t1359*t771*t851 - 4.*t129*t352*t362*t771*t850*t874 - 2.*t129*t1511*t900 + 2.*t47*t771*(t1517 + t1519 + t1521 + t1523 + 6741.*t970 - 4000.*t982 - 49544.*t989 - 40800.*t992));
  p_output1[102]=0;
  p_output1[103]=0;
  p_output1[104]=0;
  p_output1[105]=2.5e-6*(t55*(t1303 + t1304 + t1305 + t1309 + t1310 + t1311 + t1318 + t1319 + t1320 + t1324 + t1325 + t1326 + t553 + t565 + t577 + t705 + t718 + t734 + t806 + t810 + t814 + t827 + t831 + t835) - 2.*t900*(t1480 + t1481 + t1482 + t1483 + t933 + t936 + t961 + t964));
  p_output1[106]=2.5e-6*(-1.*t129*(t1205 + t1206 + t1207 + t1211 + t1212 + t1213 + t1225 + t1226 + t1227 + t1231 + t1232 + t1233 + t1439 + t1441 + t1446 + t1448 + t1489 + t1490 + t1491 + t1492 + t1494 + t1495 + t1496 + t1497) - 4.*(t1504 + t1505 + t1507 + t1508)*t340*t352*t47 + 4.*t47*t850*(t1554*t352*t771*t851 + t352*t362*t771*(t854 + t860 + t863 + t871)) + 2.*t1562*t47*t900);
  p_output1[107]=2.5e-6*((t1080 + t1091 + t1110 + t1116 + t1125 + t1128 + t1137 + t1140 + t1142 + t1146 + t1152 + t1156 + t1171 + t1173 + t1188 + t1190 + t1277 + t1278 + t1284 + t1285 + t1464 + t1466 + t1468 + t1470 + t1529 + t1530 + t1531 + t1532 + t1533 + t1534 + t1536 + t1537)*t340 - 4.*t129*t1554*t352*t771*t850*t851 - 4.*t362*t771*(-1.*t1015*t47*t852 + 4.*t1028*t129*t352*t850*t852 - 1.*t1357*t862) - 2.*t129*t1562*t900 + 2.*t47*t771*(t1517 + t1519 + t1521 + t1523 + t1568 + t1570 - 6741.*t970 + 49544.*t989));
  p_output1[108]=0;
  p_output1[109]=0;
  p_output1[110]=0;
  p_output1[111]=0;
  p_output1[112]=0;
  p_output1[113]=0;
  p_output1[114]=0;
  p_output1[115]=0;
  p_output1[116]=0;
  p_output1[117]=2.5e-6*(t55*(t1309 + t1310 + t1311 + t1324 + t1325 + t1326 + t705 + t718 + t734 + t827 + t831 + t835) - 2.*t900*(t1481 + t1483 + t936 + t964));
  p_output1[118]=2.5e-6*(-1.*t129*(t1211 + t1212 + t1213 + t1231 + t1232 + t1233 + t1441 + t1448 + t1491 + t1492 + t1496 + t1497) - 4.*(t1505 + t1508)*t340*t352*t47 + 4.*t47*t850*(t1591*t352*t771*t851 + t352*t362*t771*(t860 + t871)) + 2.*t1599*t47*t900);
  p_output1[119]=2.5e-6*((t1091 + t1116 + t1128 + t1140 + t1146 + t1156 + t1173 + t1190 + t1278 + t1285 + t1466 + t1470 + t1530 + t1532 + t1534 + t1537)*t340 + 2.*(t1519 + t1523 + t1568 + t1570)*t47*t771 - 4.*t129*t1591*t352*t771*t850*t851 - 4.*t362*t771*((4.*t1608*t47 + t129*t1612*t352*t850)*t852 - 1.*t1612*t47*t862 + 4.*t129*t1608*t352*t850*t862) - 2.*t129*t1599*t900);
  p_output1[120]=0;
  p_output1[121]=0;
  p_output1[122]=0;
  p_output1[123]=0;
  p_output1[124]=0;
  p_output1[125]=0;
  p_output1[126]=0;
  p_output1[127]=0;
  p_output1[128]=0;
  p_output1[129]=0;
  p_output1[130]=0;
  p_output1[131]=0;
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 6, (mwSize) 22, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#endif // MATLAB_MEX_FILE

namespace SymFunction
{

void J_pelvis_RightStance_all_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




