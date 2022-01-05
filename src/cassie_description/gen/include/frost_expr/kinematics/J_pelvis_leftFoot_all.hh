/*
 * Automatically Generated from Mathematica.
 * Thu 23 Dec 2021 16:09:35 GMT-08:00
 */

#ifndef J_PELVIS_LEFTFOOT_ALL_HH
#define J_PELVIS_LEFTFOOT_ALL_HH

#ifdef MATLAB_MEX_FILE
namespace SymFunction
{
  void J_pelvis_leftFoot_all_raw(double *p_output1, const double *var1);
}

#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{
  void J_pelvis_leftFoot_all_raw(double *p_output1, const double *var1);

  inline void J_pelvis_leftFoot_all(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 22, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 6, 22);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_pelvis_leftFoot_all_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_PELVIS_LEFTFOOT_ALL_HH
