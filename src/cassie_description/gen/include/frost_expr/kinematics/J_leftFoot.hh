/*
 * Automatically Generated from Mathematica.
 * Sun 7 Nov 2021 14:25:56 GMT-08:00
 */

#ifndef J_LEFTFOOT_HH
#define J_LEFTFOOT_HH

#ifdef MATLAB_MEX_FILE
namespace SymFunction
{
  void J_leftFoot_raw(double *p_output1, const double *var1);
}

#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{
  void J_leftFoot_raw(double *p_output1, const double *var1);

  inline void J_leftFoot(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 22, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 6, 22);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_leftFoot_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_LEFTFOOT_HH
