/*
 * Automatically Generated from Mathematica.
 * Thu 23 Dec 2021 16:09:25 GMT-08:00
 */

#ifndef PELVIS_RIGHTFOOT_HH
#define PELVIS_RIGHTFOOT_HH

#ifdef MATLAB_MEX_FILE
namespace SymFunction
{
  void pelvis_rightFoot_raw(double *p_output1, const double *var1);
}

#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{
  void pelvis_rightFoot_raw(double *p_output1, const double *var1);

  inline void pelvis_rightFoot(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 22, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 6, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    pelvis_rightFoot_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // PELVIS_RIGHTFOOT_HH
