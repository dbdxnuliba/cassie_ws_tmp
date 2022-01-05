/*
 * Automatically Generated from Mathematica.
 * Sat 1 Jan 2022 14:48:58 GMT-08:00
 */

#ifndef FOOTPOSITIONLEFT_HH
#define FOOTPOSITIONLEFT_HH

#ifdef MATLAB_MEX_FILE
namespace SymFunction
{
  void footPositionLeft_raw(double *p_output1, const double *var1);
}

#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{
  void footPositionLeft_raw(double *p_output1, const double *var1);

  inline void footPositionLeft(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 14, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 1, 3);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    footPositionLeft_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // FOOTPOSITIONLEFT_HH
