/*
 * Automatically Generated from Mathematica.
 * Thu 23 Dec 2021 17:03:14 GMT-08:00
 */

#ifndef DP_PELVIS_LEFTSTANCE_HH
#define DP_PELVIS_LEFTSTANCE_HH

#ifdef MATLAB_MEX_FILE
namespace SymFunction
{
  void dp_pelvis_LeftStance_raw(double *p_output1, const double *var1,const double *var2);
}

#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{
  void dp_pelvis_LeftStance_raw(double *p_output1, const double *var1,const double *var2);

  inline void dp_pelvis_LeftStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 22, 1);
    assert_size_matrix(var2, 22, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 6, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    dp_pelvis_LeftStance_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // DP_PELVIS_LEFTSTANCE_HH
