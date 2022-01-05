/*
 * Automatically Generated from Mathematica.
 * Sat 1 Jan 2022 14:49:00 GMT-08:00
 */

#ifndef J_FOOTPOSITIONLEFT_HH
#define J_FOOTPOSITIONLEFT_HH

#ifdef MATLAB_MEX_FILE
namespace SymFunction
{
  void J_footPositionLeft_raw(double *p_output1, const double *var1);
}

#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{
  void J_footPositionLeft_raw(double *p_output1, const double *var1);

  inline void J_footPositionLeft(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 14, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 3, 22);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_footPositionLeft_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_FOOTPOSITIONLEFT_HH
