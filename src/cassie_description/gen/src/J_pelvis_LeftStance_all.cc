/*
 * Automatically Generated from Mathematica.
 * Thu 23 Dec 2021 17:03:15 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "J_pelvis_LeftStance_all.hh"
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
  double t2922;
  double t1740;
  double t2179;
  double t2245;
  double t3130;
  double t4055;
  double t4062;
  double t4124;
  double t4125;
  double t4128;
  double t4133;
  double t4138;
  double t4141;
  double t4150;
  double t4181;
  double t4184;
  double t4187;
  double t4191;
  double t4202;
  double t4205;
  double t4242;
  double t4245;
  double t4248;
  double t4251;
  double t4210;
  double t4126;
  double t4129;
  double t4217;
  double t4136;
  double t4139;
  double t4148;
  double t4162;
  double t4182;
  double t4185;
  double t4188;
  double t4192;
  double t4203;
  double t4206;
  double t4056;
  double t4059;
  double t4063;
  double t4094;
  double t4213;
  double t4215;
  double t4220;
  double t4222;
  double t4224;
  double t4226;
  double t4178;
  double t4228;
  double t4230;
  double t4232;
  double t4234;
  double t4195;
  double t4236;
  double t4238;
  double t4057;
  double t4058;
  double t4060;
  double t4061;
  double t4064;
  double t4093;
  double t4095;
  double t4108;
  double t4127;
  double t4130;
  double t4137;
  double t4140;
  double t4149;
  double t4177;
  double t4179;
  double t4180;
  double t4183;
  double t4186;
  double t4189;
  double t4193;
  double t4200;
  double t4201;
  double t4204;
  double t4207;
  double t4208;
  double t4209;
  double t4211;
  double t4212;
  double t4214;
  double t4216;
  double t4218;
  double t4219;
  double t4221;
  double t4223;
  double t4225;
  double t4227;
  double t4229;
  double t4231;
  double t4233;
  double t4235;
  double t4237;
  double t4239;
  double t4240;
  double t4243;
  double t4244;
  double t4246;
  double t4247;
  double t4249;
  double t4250;
  double t4252;
  double t4253;
  double t4254;
  double t4255;
  double t4256;
  double t4257;
  double t4258;
  double t4259;
  double t4260;
  double t4261;
  double t4262;
  double t4263;
  double t4264;
  double t4265;
  double t4266;
  double t4267;
  double t4268;
  double t4269;
  double t4270;
  double t4271;
  double t4272;
  double t4273;
  double t4274;
  double t4275;
  double t4276;
  double t4277;
  double t4278;
  double t4279;
  double t4280;
  double t4281;
  double t4282;
  double t4283;
  double t4284;
  double t4285;
  double t4286;
  double t4287;
  double t4288;
  double t4289;
  double t4290;
  double t4291;
  double t4292;
  double t4293;
  double t4294;
  double t4295;
  double t4296;
  double t4297;
  double t4298;
  double t4299;
  double t4300;
  double t4301;
  double t4302;
  double t4303;
  double t4304;
  double t4305;
  double t4306;
  double t4307;
  double t4308;
  double t4309;
  double t4310;
  double t4311;
  double t4312;
  double t4313;
  double t4314;
  double t4315;
  double t4316;
  double t4317;
  double t4329;
  double t4332;
  double t4330;
  double t4333;
  double t4335;
  double t4337;
  double t4358;
  double t4359;
  double t4360;
  double t4327;
  double t4328;
  double t4331;
  double t4334;
  double t4336;
  double t4338;
  double t4339;
  double t4341;
  double t4342;
  double t4343;
  double t4344;
  double t4345;
  double t4346;
  double t4347;
  double t4348;
  double t4349;
  double t4350;
  double t4351;
  double t4373;
  double t4374;
  double t4375;
  double t4376;
  double t4377;
  double t4378;
  double t4379;
  double t4380;
  double t4381;
  double t4382;
  double t4383;
  double t4384;
  double t4385;
  double t4386;
  double t4387;
  double t4388;
  double t4389;
  double t4390;
  double t4391;
  double t4392;
  double t4393;
  double t4394;
  double t4395;
  double t4396;
  double t4397;
  double t4398;
  double t4399;
  double t4400;
  double t4401;
  double t4402;
  double t4403;
  double t4404;
  double t4405;
  double t4406;
  double t4408;
  double t4420;
  double t4421;
  double t4422;
  double t4423;
  double t4424;
  double t4425;
  double t4426;
  double t4427;
  double t4428;
  double t4429;
  double t4430;
  double t4431;
  double t4432;
  double t4433;
  double t4437;
  double t4439;
  double t4440;
  double t4441;
  double t4442;
  double t4443;
  double t4444;
  double t4445;
  double t4446;
  double t4447;
  double t4448;
  double t4449;
  double t4450;
  double t4451;
  double t4452;
  double t4453;
  double t4472;
  double t4473;
  double t4474;
  double t4475;
  double t4476;
  double t4477;
  double t4481;
  double t4483;
  double t4484;
  double t4485;
  double t4486;
  double t4487;
  double t4488;
  double t4489;
  double t4490;
  double t4491;
  double t4492;
  double t4493;
  double t4494;
  double t4495;
  double t4496;
  double t4461;
  double t4462;
  double t4464;
  double t4465;
  double t4510;
  double t4514;
  double t4516;
  double t4517;
  double t4518;
  double t4519;
  double t4533;
  double t4537;
  double t4539;
  double t4540;
  double t4541;
  double t4542;
  t2922 = Cos(var1[3]);
  t1740 = Cos(var1[5]);
  t2179 = Sin(var1[3]);
  t2245 = Sin(var1[4]);
  t3130 = Sin(var1[5]);
  t4055 = -1.*var1[7];
  t4062 = -1.*var1[8];
  t4124 = -1.*var1[6];
  t4125 = var1[9] + t4124 + var1[8];
  t4128 = var1[9] + var1[11] + t4124 + var1[8];
  t4133 = var1[9] + var1[6] + var1[8];
  t4138 = var1[9] + var1[11] + var1[6] + var1[8];
  t4141 = var1[9] + t4124 + t4055 + var1[8];
  t4150 = var1[9] + var1[11] + t4124 + t4055 + var1[8];
  t4181 = var1[9] + var1[6] + t4055 + var1[8];
  t4184 = var1[9] + var1[11] + var1[6] + t4055 + var1[8];
  t4187 = var1[9] + t4124 + var1[7] + var1[8];
  t4191 = var1[9] + var1[11] + t4124 + var1[7] + var1[8];
  t4202 = var1[9] + var1[6] + var1[7] + var1[8];
  t4205 = var1[9] + var1[11] + var1[6] + var1[7] + var1[8];
  t4242 = var1[9] + t4055 + var1[8];
  t4245 = var1[9] + var1[11] + t4055 + var1[8];
  t4248 = var1[9] + var1[7] + var1[8];
  t4251 = var1[9] + var1[11] + var1[7] + var1[8];
  t4210 = var1[6] + t4062;
  t4126 = Cos(t4125);
  t4129 = Cos(t4128);
  t4217 = var1[6] + var1[8];
  t4136 = Cos(t4133);
  t4139 = Cos(t4138);
  t4148 = Cos(t4141);
  t4162 = Cos(t4150);
  t4182 = Cos(t4181);
  t4185 = Cos(t4184);
  t4188 = Cos(t4187);
  t4192 = Cos(t4191);
  t4203 = Cos(t4202);
  t4206 = Cos(t4205);
  t4056 = var1[6] + t4055;
  t4059 = var1[6] + var1[7];
  t4063 = var1[6] + t4055 + t4062;
  t4094 = var1[6] + var1[7] + t4062;
  t4213 = Sin(t4125);
  t4215 = Sin(t4128);
  t4220 = Sin(t4133);
  t4222 = Sin(t4138);
  t4224 = Sin(t4141);
  t4226 = Sin(t4150);
  t4178 = var1[6] + t4055 + var1[8];
  t4228 = Sin(t4181);
  t4230 = Sin(t4184);
  t4232 = Sin(t4187);
  t4234 = Sin(t4191);
  t4195 = var1[6] + var1[7] + var1[8];
  t4236 = Sin(t4202);
  t4238 = Sin(t4205);
  t4057 = Cos(t4056);
  t4058 = 900.*t4057;
  t4060 = Cos(t4059);
  t4061 = 900.*t4060;
  t4064 = Cos(t4063);
  t4093 = 12000.*t4064;
  t4095 = Cos(t4094);
  t4108 = -12000.*t4095;
  t4127 = 13482.*t4126;
  t4130 = -8000.*t4129;
  t4137 = -13482.*t4136;
  t4140 = 8000.*t4139;
  t4149 = -49544.*t4148;
  t4177 = -40800.*t4162;
  t4179 = Cos(t4178);
  t4180 = -12000.*t4179;
  t4183 = -49544.*t4182;
  t4186 = -40800.*t4185;
  t4189 = 49544.*t4188;
  t4193 = 40800.*t4192;
  t4200 = Cos(t4195);
  t4201 = 12000.*t4200;
  t4204 = 49544.*t4203;
  t4207 = 40800.*t4206;
  t4208 = Sin(var1[6]);
  t4209 = -36000.*t4208;
  t4211 = Sin(t4210);
  t4212 = -24000.*t4211;
  t4214 = 99088.*t4213;
  t4216 = 81600.*t4215;
  t4218 = Sin(t4217);
  t4219 = -24000.*t4218;
  t4221 = -99088.*t4220;
  t4223 = -81600.*t4222;
  t4225 = 6741.*t4224;
  t4227 = -4000.*t4226;
  t4229 = 6741.*t4228;
  t4231 = -4000.*t4230;
  t4233 = -6741.*t4232;
  t4235 = 4000.*t4234;
  t4237 = -6741.*t4236;
  t4239 = 4000.*t4238;
  t4240 = -54000. + t4058 + t4061 + t4093 + t4108 + t4127 + t4130 + t4137 + t4140 + t4149 + t4177 + t4180 + t4183 + t4186 + t4189 + t4193 + t4201 + t4204 + t4207 + t4209 + t4212 + t4214 + t4216 + t4219 + t4221 + t4223 + t4225 + t4227 + t4229 + t4231 + t4233 + t4235 + t4237 + t4239;
  t4243 = Cos(t4242);
  t4244 = 6741.*t4243;
  t4246 = Cos(t4245);
  t4247 = -4000.*t4246;
  t4249 = Cos(t4248);
  t4250 = 6741.*t4249;
  t4252 = Cos(t4251);
  t4253 = -4000.*t4252;
  t4254 = Sin(var1[7]);
  t4255 = 900.*t4254;
  t4256 = var1[7] + t4062;
  t4257 = Sin(t4256);
  t4258 = -12000.*t4257;
  t4259 = Sin(t4242);
  t4260 = 49544.*t4259;
  t4261 = Sin(t4245);
  t4262 = 40800.*t4261;
  t4263 = var1[7] + var1[8];
  t4264 = Sin(t4263);
  t4265 = 12000.*t4264;
  t4266 = Sin(t4248);
  t4267 = 49544.*t4266;
  t4268 = Sin(t4251);
  t4269 = 40800.*t4268;
  t4270 = t4244 + t4247 + t4250 + t4253 + t4255 + t4258 + t4260 + t4262 + t4265 + t4267 + t4269;
  t4271 = 2.*t2245*t4270;
  t4272 = Cos(var1[4]);
  t4273 = Cos(var1[6]);
  t4274 = 36000.*t4273;
  t4275 = Cos(t4210);
  t4276 = 24000.*t4275;
  t4277 = 99088.*t4126;
  t4278 = 81600.*t4129;
  t4279 = Cos(t4217);
  t4280 = 24000.*t4279;
  t4281 = 99088.*t4136;
  t4282 = 81600.*t4139;
  t4283 = 6741.*t4148;
  t4284 = -4000.*t4162;
  t4285 = -6741.*t4182;
  t4286 = 4000.*t4185;
  t4287 = -6741.*t4188;
  t4288 = 4000.*t4192;
  t4289 = 6741.*t4203;
  t4290 = -4000.*t4206;
  t4291 = Sin(t4056);
  t4292 = 900.*t4291;
  t4293 = Sin(t4059);
  t4294 = 900.*t4293;
  t4295 = Sin(t4063);
  t4296 = 12000.*t4295;
  t4297 = Sin(t4094);
  t4298 = -12000.*t4297;
  t4299 = -13482.*t4213;
  t4300 = 8000.*t4215;
  t4301 = -13482.*t4220;
  t4302 = 8000.*t4222;
  t4303 = 49544.*t4224;
  t4304 = 40800.*t4226;
  t4305 = Sin(t4178);
  t4306 = -12000.*t4305;
  t4307 = -49544.*t4228;
  t4308 = -40800.*t4230;
  t4309 = -49544.*t4232;
  t4310 = -40800.*t4234;
  t4311 = Sin(t4195);
  t4312 = 12000.*t4311;
  t4313 = 49544.*t4236;
  t4314 = 40800.*t4238;
  t4315 = t4274 + t4276 + t4277 + t4278 + t4280 + t4281 + t4282 + t4283 + t4284 + t4285 + t4286 + t4287 + t4288 + t4289 + t4290 + t4292 + t4294 + t4296 + t4298 + t4299 + t4300 + t4301 + t4302 + t4303 + t4304 + t4306 + t4307 + t4308 + t4309 + t4310 + t4312 + t4313 + t4314;
  t4316 = t4272*t4315;
  t4317 = t4271 + t4316;
  t4329 = var1[9] + var1[8];
  t4332 = var1[9] + var1[11] + var1[8];
  t4330 = Cos(t4329);
  t4333 = Cos(t4332);
  t4335 = Sin(t4329);
  t4337 = Sin(t4332);
  t4358 = 2.*t4272*t4270;
  t4359 = -1.*t2245*t4315;
  t4360 = t4358 + t4359;
  t4327 = Cos(var1[8]);
  t4328 = 12000.*t4327;
  t4331 = 49544.*t4330;
  t4334 = 40800.*t4333;
  t4336 = -6741.*t4335;
  t4338 = 4000.*t4337;
  t4339 = 9000. + t4328 + t4331 + t4334 + t4336 + t4338;
  t4341 = Cos(var1[7]);
  t4342 = 450.*t4341;
  t4343 = 6741.*t4330;
  t4344 = -4000.*t4333;
  t4345 = Sin(var1[8]);
  t4346 = 12000.*t4345;
  t4347 = 49544.*t4335;
  t4348 = 40800.*t4337;
  t4349 = t4343 + t4344 + t4346 + t4347 + t4348;
  t4350 = -1.*t4254*t4349;
  t4351 = t4342 + t4350;
  t4373 = -36000.*t4273;
  t4374 = -24000.*t4275;
  t4375 = -99088.*t4126;
  t4376 = -81600.*t4129;
  t4377 = -24000.*t4279;
  t4378 = -99088.*t4136;
  t4379 = -81600.*t4139;
  t4380 = -6741.*t4148;
  t4381 = 4000.*t4162;
  t4382 = 6741.*t4182;
  t4383 = -4000.*t4185;
  t4384 = 6741.*t4188;
  t4385 = -4000.*t4192;
  t4386 = -6741.*t4203;
  t4387 = 4000.*t4206;
  t4388 = -900.*t4291;
  t4389 = -900.*t4293;
  t4390 = -12000.*t4295;
  t4391 = 12000.*t4297;
  t4392 = 13482.*t4213;
  t4393 = -8000.*t4215;
  t4394 = 13482.*t4220;
  t4395 = -8000.*t4222;
  t4396 = -49544.*t4224;
  t4397 = -40800.*t4226;
  t4398 = 12000.*t4305;
  t4399 = 49544.*t4228;
  t4400 = 40800.*t4230;
  t4401 = 49544.*t4232;
  t4402 = 40800.*t4234;
  t4403 = -12000.*t4311;
  t4404 = -49544.*t4236;
  t4405 = -40800.*t4238;
  t4406 = t4373 + t4374 + t4375 + t4376 + t4377 + t4378 + t4379 + t4380 + t4381 + t4382 + t4383 + t4384 + t4385 + t4386 + t4387 + t4388 + t4389 + t4390 + t4391 + t4392 + t4393 + t4394 + t4395 + t4396 + t4397 + t4398 + t4399 + t4400 + t4401 + t4402 + t4403 + t4404 + t4405;
  t4408 = t4058 + t4061 + t4093 + t4108 + t4127 + t4130 + t4137 + t4140 + t4149 + t4177 + t4180 + t4183 + t4186 + t4189 + t4193 + t4201 + t4204 + t4207 + t4209 + t4212 + t4214 + t4216 + t4219 + t4221 + t4223 + t4225 + t4227 + t4229 + t4231 + t4233 + t4235 + t4237 + t4239;
  t4420 = 900.*t4341;
  t4421 = Cos(t4256);
  t4422 = -12000.*t4421;
  t4423 = -49544.*t4243;
  t4424 = -40800.*t4246;
  t4425 = Cos(t4263);
  t4426 = 12000.*t4425;
  t4427 = 49544.*t4249;
  t4428 = 40800.*t4252;
  t4429 = 6741.*t4259;
  t4430 = -4000.*t4261;
  t4431 = -6741.*t4266;
  t4432 = 4000.*t4268;
  t4433 = t4420 + t4422 + t4423 + t4424 + t4426 + t4427 + t4428 + t4429 + t4430 + t4431 + t4432;
  t4437 = t4380 + t4381 + t4285 + t4286 + t4287 + t4288 + t4386 + t4387 + t4292 + t4389 + t4296 + t4391 + t4396 + t4397 + t4306 + t4307 + t4308 + t4309 + t4310 + t4403 + t4404 + t4405;
  t4439 = 2.*t2245*t4433;
  t4440 = -900.*t4057;
  t4441 = -12000.*t4064;
  t4442 = 12000.*t4179;
  t4443 = 49544.*t4182;
  t4444 = 40800.*t4185;
  t4445 = -49544.*t4188;
  t4446 = -40800.*t4192;
  t4447 = -6741.*t4228;
  t4448 = 4000.*t4230;
  t4449 = 6741.*t4232;
  t4450 = -4000.*t4234;
  t4451 = t4440 + t4061 + t4441 + t4108 + t4149 + t4177 + t4442 + t4443 + t4444 + t4445 + t4446 + t4201 + t4204 + t4207 + t4225 + t4227 + t4447 + t4448 + t4449 + t4450 + t4237 + t4239;
  t4452 = t4272*t4451;
  t4453 = t4439 + t4452;
  t4472 = 12000.*t4421;
  t4473 = 49544.*t4243;
  t4474 = 40800.*t4246;
  t4475 = -6741.*t4259;
  t4476 = 4000.*t4261;
  t4477 = t4472 + t4473 + t4474 + t4426 + t4427 + t4428 + t4475 + t4476 + t4431 + t4432;
  t4481 = t4276 + t4277 + t4278 + t4377 + t4378 + t4379 + t4283 + t4284 + t4382 + t4383 + t4287 + t4288 + t4386 + t4387 + t4296 + t4298 + t4299 + t4300 + t4394 + t4395 + t4303 + t4304 + t4398 + t4399 + t4400 + t4309 + t4310 + t4403 + t4404 + t4405;
  t4483 = 2.*t2245*t4477;
  t4484 = 12000.*t4095;
  t4485 = -13482.*t4126;
  t4486 = 8000.*t4129;
  t4487 = 49544.*t4148;
  t4488 = 40800.*t4162;
  t4489 = 24000.*t4211;
  t4490 = -99088.*t4213;
  t4491 = -81600.*t4215;
  t4492 = -6741.*t4224;
  t4493 = 4000.*t4226;
  t4494 = t4441 + t4484 + t4485 + t4486 + t4137 + t4140 + t4487 + t4488 + t4180 + t4183 + t4186 + t4445 + t4446 + t4201 + t4204 + t4207 + t4489 + t4490 + t4491 + t4219 + t4221 + t4223 + t4492 + t4493 + t4229 + t4231 + t4449 + t4450 + t4237 + t4239;
  t4495 = t4272*t4494;
  t4496 = t4483 + t4495;
  t4461 = -6741.*t4330;
  t4462 = 4000.*t4333;
  t4464 = -49544.*t4335;
  t4465 = -40800.*t4337;
  t4510 = t4473 + t4474 + t4427 + t4428 + t4475 + t4476 + t4431 + t4432;
  t4514 = t4277 + t4278 + t4378 + t4379 + t4283 + t4284 + t4382 + t4383 + t4287 + t4288 + t4386 + t4387 + t4299 + t4300 + t4394 + t4395 + t4303 + t4304 + t4399 + t4400 + t4309 + t4310 + t4404 + t4405;
  t4516 = 2.*t2245*t4510;
  t4517 = t4485 + t4486 + t4137 + t4140 + t4487 + t4488 + t4183 + t4186 + t4445 + t4446 + t4204 + t4207 + t4490 + t4491 + t4221 + t4223 + t4492 + t4493 + t4229 + t4231 + t4449 + t4450 + t4237 + t4239;
  t4518 = t4272*t4517;
  t4519 = t4516 + t4518;
  t4533 = t4474 + t4428 + t4476 + t4432;
  t4537 = t4278 + t4379 + t4284 + t4383 + t4288 + t4387 + t4300 + t4395 + t4304 + t4400 + t4310 + t4405;
  t4539 = 2.*t2245*t4533;
  t4540 = t4486 + t4140 + t4488 + t4186 + t4446 + t4207 + t4491 + t4223 + t4493 + t4231 + t4450 + t4239;
  t4541 = t4272*t4540;
  t4542 = t4539 + t4541;
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
  p_output1[18]=-1.*t1740*t2179*t2245 - 1.*t2922*t3130;
  p_output1[19]=t1740*t2922 - 1.*t2179*t2245*t3130;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=2.5e-6*(-1.*t2179*t4240 - 1.*t2922*t4317);
  p_output1[23]=2.5e-6*(t2922*t4240 - 1.*t2179*t4317);
  p_output1[24]=t1740*t2922*t4272;
  p_output1[25]=t2922*t3130*t4272;
  p_output1[26]=0;
  p_output1[27]=5.e-6*(t2245*t4270 + 2.*t4272*(t4273*t4339 + t4208*t4351));
  p_output1[28]=-2.5e-6*t2179*t4360;
  p_output1[29]=2.5e-6*t2922*t4360;
  p_output1[30]=-1.*t1740*t2179 - 1.*t2245*t2922*t3130;
  p_output1[31]=t1740*t2245*t2922 - 1.*t2179*t3130;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=1.e-5*t2245*(-1.*t4208*t4339 + t4273*t4351);
  p_output1[40]=2.5e-6*(t2922*t4406 - 1.*t2179*t4272*t4408);
  p_output1[41]=2.5e-6*(t2179*t4406 + t2922*t4272*t4408);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=1.;
  p_output1[45]=5.e-6*(2.*t2245*t4208*(-450.*t4254 - 1.*t4341*t4349) - 1.*t4272*t4433);
  p_output1[46]=2.5e-6*(t2922*t4437 - 1.*t2179*t4453);
  p_output1[47]=2.5e-6*(t2179*t4437 + t2922*t4453);
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=5.e-6*(2.*t2245*(-1.*t4208*t4254*(t4328 + t4331 + t4334 + t4336 + t4338) + t4273*(-12000.*t4345 + t4461 + t4462 + t4464 + t4465)) - 1.*t4272*t4477);
  p_output1[52]=2.5e-6*(t2922*t4481 - 1.*t2179*t4496);
  p_output1[53]=2.5e-6*(t2179*t4481 + t2922*t4496);
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=5.e-6*(2.*t2245*(-1.*t4208*t4254*(t4331 + t4334 + t4336 + t4338) + t4273*(t4461 + t4462 + t4464 + t4465)) - 1.*t4272*t4510);
  p_output1[58]=2.5e-6*(t2922*t4514 - 1.*t2179*t4519);
  p_output1[59]=2.5e-6*(t2179*t4514 + t2922*t4519);
  p_output1[60]=0;
  p_output1[61]=0;
  p_output1[62]=0;
  p_output1[63]=0;
  p_output1[64]=0;
  p_output1[65]=0;
  p_output1[66]=0;
  p_output1[67]=0;
  p_output1[68]=0;
  p_output1[69]=5.e-6*(2.*t2245*(-1.*t4208*t4254*(t4334 + t4338) + t4273*(t4462 + t4465)) - 1.*t4272*t4533);
  p_output1[70]=2.5e-6*(t2922*t4537 - 1.*t2179*t4542);
  p_output1[71]=2.5e-6*(t2179*t4537 + t2922*t4542);
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
  p_output1[87]=0;
  p_output1[88]=0;
  p_output1[89]=0;
  p_output1[90]=0;
  p_output1[91]=0;
  p_output1[92]=0;
  p_output1[93]=0;
  p_output1[94]=0;
  p_output1[95]=0;
  p_output1[96]=0;
  p_output1[97]=0;
  p_output1[98]=0;
  p_output1[99]=0;
  p_output1[100]=0;
  p_output1[101]=0;
  p_output1[102]=0;
  p_output1[103]=0;
  p_output1[104]=0;
  p_output1[105]=0;
  p_output1[106]=0;
  p_output1[107]=0;
  p_output1[108]=0;
  p_output1[109]=0;
  p_output1[110]=0;
  p_output1[111]=0;
  p_output1[112]=0;
  p_output1[113]=0;
  p_output1[114]=0;
  p_output1[115]=0;
  p_output1[116]=0;
  p_output1[117]=0;
  p_output1[118]=0;
  p_output1[119]=0;
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

void J_pelvis_LeftStance_all_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




