/*
 * Automatically Generated from Mathematica.
 * Sat 1 Jan 2022 14:49:01 GMT-08:00
 */

#ifdef MATLAB_MEX_FILE
// No need to include header
#else
#include "J_footPositionRight.hh"
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
  double t39;
  double t163;
  double t249;
  double t275;
  double t276;
  double t277;
  double t279;
  double t283;
  double t300;
  double t304;
  double t308;
  double t316;
  double t288;
  double t292;
  double t296;
  double t320;
  double t321;
  double t322;
  double t342;
  double t343;
  double t344;
  double t346;
  double t330;
  double t334;
  double t338;
  double t350;
  double t351;
  double t352;
  double t375;
  double t376;
  double t377;
  double t379;
  double t383;
  double t384;
  double t385;
  double t363;
  double t367;
  double t371;
  double t180;
  double t213;
  double t220;
  double t256;
  double t267;
  double t278;
  double t280;
  double t281;
  double t284;
  double t285;
  double t286;
  double t312;
  double t317;
  double t318;
  double t323;
  double t324;
  double t325;
  double t419;
  double t420;
  double t445;
  double t449;
  double t453;
  double t454;
  double t345;
  double t347;
  double t348;
  double t356;
  double t357;
  double t358;
  double t461;
  double t465;
  double t469;
  double t471;
  double t472;
  double t473;
  double t378;
  double t380;
  double t381;
  double t386;
  double t387;
  double t388;
  double t479;
  double t480;
  double t481;
  double t475;
  double t476;
  double t477;
  double t516;
  double t517;
  double t518;
  double t520;
  double t523;
  double t527;
  double t535;
  double t536;
  double t537;
  double t531;
  double t532;
  double t533;
  double t577;
  double t580;
  double t583;
  double t586;
  double t587;
  double t588;
  double t597;
  double t598;
  double t599;
  double t591;
  double t592;
  double t593;
  double t561;
  double t562;
  double t563;
  double t625;
  double t626;
  double t633;
  double t637;
  double t638;
  double t639;
  double t645;
  double t646;
  double t647;
  double t641;
  double t642;
  double t643;
  double t667;
  double t668;
  double t669;
  double t671;
  double t672;
  double t673;
  double t675;
  double t676;
  double t677;
  double t679;
  double t680;
  double t681;
  double t661;
  double t662;
  double t663;
  double t697;
  double t698;
  double t699;
  double t701;
  double t702;
  double t704;
  double t705;
  double t706;
  double t708;
  double t709;
  double t710;
  double t712;
  double t713;
  double t714;
  double t692;
  double t693;
  double t727;
  double t728;
  double t729;
  double t732;
  double t733;
  double t734;
  double t736;
  double t737;
  double t739;
  double t740;
  double t741;
  double t743;
  double t744;
  double t745;
  double t670;
  double t674;
  double t678;
  double t682;
  double t683;
  double t684;
  double t685;
  double t686;
  double t687;
  double t688;
  double t689;
  double t690;
  double t756;
  double t757;
  double t759;
  double t760;
  double t761;
  double t767;
  double t768;
  double t770;
  double t771;
  double t773;
  double t774;
  double t775;
  double t787;
  double t788;
  double t789;
  double t791;
  double t792;
  double t794;
  double t795;
  double t797;
  double t798;
  double t799;
  double t801;
  double t802;
  double t803;
  double t817;
  double t818;
  double t819;
  double t824;
  double t825;
  double t827;
  double t828;
  double t814;
  double t815;
  double t820;
  double t821;
  double t822;
  double t489;
  double t842;
  double t843;
  double t854;
  double t855;
  double t856;
  double t858;
  double t859;
  double t861;
  double t862;
  double t830;
  double t876;
  double t877;
  double t878;
  double t835;
  double t873;
  double t874;
  double t879;
  double t880;
  double t881;
  double t492;
  double t496;
  double t849;
  double t864;
  double t898;
  double t899;
  double t900;
  double t869;
  t39 = Sin(var1[7]);
  t163 = Cos(var1[8]);
  t249 = Sin(var1[8]);
  t275 = Cos(var1[9]);
  t276 = -1.*t275;
  t277 = 1. + t276;
  t279 = Sin(var1[9]);
  t283 = Cos(var1[7]);
  t300 = Cos(var1[10]);
  t304 = -1.*t300;
  t308 = 1. + t304;
  t316 = Sin(var1[10]);
  t288 = -1.*t275*t39*t249;
  t292 = -1.*t283*t279;
  t296 = t288 + t292;
  t320 = -1.*t283*t275;
  t321 = t39*t249*t279;
  t322 = t320 + t321;
  t342 = Cos(var1[12]);
  t343 = -1.*t342;
  t344 = 1. + t343;
  t346 = Sin(var1[12]);
  t330 = t300*t296;
  t334 = t322*t316;
  t338 = t330 + t334;
  t350 = t300*t322;
  t351 = -1.*t296*t316;
  t352 = t350 + t351;
  t375 = Cos(var1[13]);
  t376 = -1.*t375;
  t377 = 1. + t376;
  t379 = Sin(var1[13]);
  t383 = t342*t352;
  t384 = -1.*t338*t346;
  t385 = t383 + t384;
  t363 = t342*t338;
  t367 = t352*t346;
  t371 = t363 + t367;
  t180 = -1.*t163;
  t213 = 1. + t180;
  t220 = -0.135*t213;
  t256 = 0.049*t249;
  t267 = t220 + t256;
  t278 = -0.049*t277;
  t280 = -0.09*t279;
  t281 = t278 + t280;
  t284 = -0.09*t277;
  t285 = 0.049*t279;
  t286 = t284 + t285;
  t312 = -0.049*t308;
  t317 = -0.21*t316;
  t318 = t312 + t317;
  t323 = -0.21*t308;
  t324 = 0.049*t316;
  t325 = t323 + t324;
  t419 = t283*t275*t249;
  t420 = -1.*t39*t279;
  t445 = t419 + t420;
  t449 = -1.*t275*t39;
  t453 = -1.*t283*t249*t279;
  t454 = t449 + t453;
  t345 = 0.01841*t344;
  t347 = -0.70544*t346;
  t348 = t345 + t347;
  t356 = -0.70544*t344;
  t357 = -0.01841*t346;
  t358 = t356 + t357;
  t461 = t300*t445;
  t465 = t454*t316;
  t469 = t461 + t465;
  t471 = t300*t454;
  t472 = -1.*t445*t316;
  t473 = t471 + t472;
  t378 = -0.02159*t377;
  t380 = -1.11344*t379;
  t381 = t378 + t380;
  t386 = -1.11344*t377;
  t387 = 0.02159*t379;
  t388 = t386 + t387;
  t479 = t342*t473;
  t480 = -1.*t469*t346;
  t481 = t479 + t480;
  t475 = t342*t469;
  t476 = t473*t346;
  t477 = t475 + t476;
  t516 = -1.*t275*t300*t249;
  t517 = t249*t279*t316;
  t518 = t516 + t517;
  t520 = t300*t249*t279;
  t523 = t275*t249*t316;
  t527 = t520 + t523;
  t535 = t342*t527;
  t536 = -1.*t518*t346;
  t537 = t535 + t536;
  t531 = t342*t518;
  t532 = t527*t346;
  t533 = t531 + t532;
  t577 = t283*t163*t275*t300;
  t580 = -1.*t283*t163*t279*t316;
  t583 = t577 + t580;
  t586 = -1.*t283*t163*t300*t279;
  t587 = -1.*t283*t163*t275*t316;
  t588 = t586 + t587;
  t597 = t342*t588;
  t598 = -1.*t583*t346;
  t599 = t597 + t598;
  t591 = t342*t583;
  t592 = t588*t346;
  t593 = t591 + t592;
  t561 = 0.049*t163;
  t562 = -0.135*t249;
  t563 = t561 + t562;
  t625 = t163*t275*t300*t39;
  t626 = -1.*t163*t39*t279*t316;
  t633 = t625 + t626;
  t637 = -1.*t163*t300*t39*t279;
  t638 = -1.*t163*t275*t39*t316;
  t639 = t637 + t638;
  t645 = t342*t639;
  t646 = -1.*t633*t346;
  t647 = t645 + t646;
  t641 = t342*t633;
  t642 = t639*t346;
  t643 = t641 + t642;
  t667 = -1.*t163*t300*t279;
  t668 = -1.*t163*t275*t316;
  t669 = t667 + t668;
  t671 = -1.*t163*t275*t300;
  t672 = t163*t279*t316;
  t673 = t671 + t672;
  t675 = t342*t669;
  t676 = t673*t346;
  t677 = t675 + t676;
  t679 = t342*t673;
  t680 = -1.*t669*t346;
  t681 = t679 + t680;
  t661 = -0.09*t275;
  t662 = -0.049*t279;
  t663 = t661 + t662;
  t697 = -1.*t283*t275*t249;
  t698 = t39*t279;
  t699 = t697 + t698;
  t701 = t699*t316;
  t702 = t471 + t701;
  t704 = t300*t699;
  t705 = -1.*t454*t316;
  t706 = t704 + t705;
  t708 = t342*t702;
  t709 = t706*t346;
  t710 = t708 + t709;
  t712 = t342*t706;
  t713 = -1.*t702*t346;
  t714 = t712 + t713;
  t692 = 0.049*t275;
  t693 = t692 + t280;
  t727 = t283*t275;
  t728 = -1.*t39*t249*t279;
  t729 = t727 + t728;
  t732 = t300*t729;
  t733 = t296*t316;
  t734 = t732 + t733;
  t736 = -1.*t729*t316;
  t737 = t330 + t736;
  t739 = t342*t734;
  t740 = t737*t346;
  t741 = t739 + t740;
  t743 = t342*t737;
  t744 = -1.*t734*t346;
  t745 = t743 + t744;
  t670 = t669*t348;
  t674 = t673*t358;
  t678 = t677*t381;
  t682 = t681*t388;
  t683 = t375*t677;
  t684 = t681*t379;
  t685 = t683 + t684;
  t686 = 0.0306*t685;
  t687 = t375*t681;
  t688 = -1.*t677*t379;
  t689 = t687 + t688;
  t690 = -1.13106*t689;
  t756 = 0.049*t300;
  t757 = t756 + t317;
  t759 = -0.21*t300;
  t760 = -0.049*t316;
  t761 = t759 + t760;
  t767 = -1.*t300*t445;
  t768 = t767 + t705;
  t770 = t768*t346;
  t771 = t479 + t770;
  t773 = t342*t768;
  t774 = -1.*t473*t346;
  t775 = t773 + t774;
  t787 = t275*t39*t249;
  t788 = t283*t279;
  t789 = t787 + t788;
  t791 = -1.*t789*t316;
  t792 = t732 + t791;
  t794 = -1.*t300*t789;
  t795 = t794 + t736;
  t797 = t342*t792;
  t798 = t795*t346;
  t799 = t797 + t798;
  t801 = t342*t795;
  t802 = -1.*t792*t346;
  t803 = t801 + t802;
  t817 = t163*t275*t300;
  t818 = -1.*t163*t279*t316;
  t819 = t817 + t818;
  t824 = -1.*t819*t346;
  t825 = t675 + t824;
  t827 = -1.*t342*t819;
  t828 = t827 + t680;
  t814 = -0.01841*t342;
  t815 = t814 + t347;
  t820 = -0.70544*t342;
  t821 = 0.01841*t346;
  t822 = t820 + t821;
  t489 = t375*t481;
  t842 = -1.*t342*t469;
  t843 = t842 + t774;
  t854 = t300*t789;
  t855 = t729*t316;
  t856 = t854 + t855;
  t858 = -1.*t856*t346;
  t859 = t797 + t858;
  t861 = -1.*t342*t856;
  t862 = t861 + t802;
  t830 = t375*t825;
  t876 = t342*t819;
  t877 = t669*t346;
  t878 = t876 + t877;
  t835 = -1.*t825*t379;
  t873 = 0.02159*t375;
  t874 = t873 + t380;
  t879 = -1.11344*t375;
  t880 = -0.02159*t379;
  t881 = t879 + t880;
  t492 = -1.*t477*t379;
  t496 = t489 + t492;
  t849 = -1.*t481*t379;
  t864 = t375*t859;
  t898 = t342*t856;
  t899 = t792*t346;
  t900 = t898 + t899;
  t869 = -1.*t859*t379;
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
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
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
  p_output1[43]=-1.*t283*t286 + t296*t318 + t322*t325 + t338*t348 + t352*t358 + t371*t381 - 1.13106*(-1.*t371*t379 + t375*t385) + 0.0306*(t371*t375 + t379*t385) + t385*t388 - 0.135*t39 + 0.1305*t163*t39 - 1.*t267*t39 - 1.*t249*t281*t39;
  p_output1[44]=0.135*t283 - 0.1305*t163*t283 + t267*t283 + t249*t281*t283 - 1.*t286*t39 + t318*t445 + t325*t454 + t348*t469 + t358*t473 + t381*t477 + t388*t481 + 0.0306*(t375*t477 + t379*t481) - 1.13106*t496;
  p_output1[45]=-0.0045*t163 - 0.049*t249 - 1.*t249*t281 - 1.*t249*t275*t318 + t249*t279*t325 + t348*t518 + t358*t527 + t381*t533 + t388*t537 - 1.13106*(-1.*t379*t533 + t375*t537) + 0.0306*(t375*t533 + t379*t537);
  p_output1[46]=0.1305*t249*t283 + t163*t281*t283 + t163*t275*t283*t318 - 1.*t163*t279*t283*t325 + t283*t563 + t348*t583 + t358*t588 + t381*t593 + t388*t599 - 1.13106*(-1.*t379*t593 + t375*t599) + 0.0306*(t375*t593 + t379*t599);
  p_output1[47]=0.1305*t249*t39 + t163*t281*t39 + t163*t275*t318*t39 - 1.*t163*t279*t325*t39 + t39*t563 + t348*t633 + t358*t639 + t381*t643 + t388*t647 - 1.13106*(-1.*t379*t643 + t375*t647) + 0.0306*(t375*t643 + t379*t647);
  p_output1[48]=-1.*t163*t279*t318 - 1.*t163*t275*t325 + t163*t663 + t670 + t674 + t678 + t682 + t686 + t690;
  p_output1[49]=t318*t454 + t249*t283*t663 - 1.*t39*t693 + t325*t699 + t348*t702 + t358*t706 + t381*t710 + t388*t714 - 1.13106*(-1.*t379*t710 + t375*t714) + 0.0306*(t375*t710 + t379*t714);
  p_output1[50]=t296*t325 + t249*t39*t663 + t283*t693 + t318*t729 + t348*t734 + t358*t737 + t381*t741 + t388*t745 - 1.13106*(-1.*t379*t741 + t375*t745) + 0.0306*(t375*t741 + t379*t745);
  p_output1[51]=t670 + t674 + t678 + t682 + t686 + t690 - 1.*t163*t279*t757 + t163*t275*t761;
  p_output1[52]=t348*t473 + t454*t757 + t445*t761 + t358*t768 + t381*t771 + t388*t775 - 1.13106*(-1.*t379*t771 + t375*t775) + 0.0306*(t375*t771 + t379*t775);
  p_output1[53]=t729*t757 + t761*t789 + t348*t792 + t358*t795 + t381*t799 + t388*t803 - 1.13106*(-1.*t379*t799 + t375*t803) + 0.0306*(t375*t799 + t379*t803);
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=t669*t815 + t819*t822 + t381*t825 + t388*t828 + 0.0306*(t379*t828 + t830) - 1.13106*(t375*t828 + t835);
  p_output1[58]=t381*t481 + t473*t815 + t469*t822 + t388*t843 + 0.0306*(t489 + t379*t843) - 1.13106*(t375*t843 + t849);
  p_output1[59]=t792*t815 + t822*t856 + t381*t859 + t388*t862 + 0.0306*(t379*t862 + t864) - 1.13106*(t375*t862 + t869);
  p_output1[60]=0;
  p_output1[61]=0;
  p_output1[62]=0;
  p_output1[63]=t825*t874 - 1.13106*(t835 - 1.*t375*t878) + 0.0306*(t830 - 1.*t379*t878) + t878*t881;
  p_output1[64]=0.0306*t496 - 1.13106*(-1.*t375*t477 + t849) + t481*t874 + t477*t881;
  p_output1[65]=t859*t874 + t881*t900 - 1.13106*(t869 - 1.*t375*t900) + 0.0306*(t864 - 1.*t379*t900);
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
    ( !(mrows == 14 && ncols == 1) && 
      !(mrows == 1 && ncols == 14))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 22, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#endif // MATLAB_MEX_FILE

namespace SymFunction
{

void J_footPositionRight_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}




