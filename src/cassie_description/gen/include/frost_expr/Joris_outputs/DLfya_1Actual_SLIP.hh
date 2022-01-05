/*
 * Automatically Generated from Mathematica.
 * Sun 7 Nov 2021 14:28:42 GMT-08:00
 */

#ifndef DLFYA_1ACTUAL_SLIP_HH
#define DLFYA_1ACTUAL_SLIP_HH

#ifdef MATLAB_MEX_FILE
namespace SymFunction
{
  void DLfya_1Actual_SLIP_raw(double *p_output1, const double *var1,const double *var2,const double *var3);
}

#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{
  void DLfya_1Actual_SLIP_raw(double *p_output1, const double *var1,const double *var2,const double *var3);

  inline void DLfya_1Actual_SLIP(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2,const Eigen::VectorXd &var3)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 22, 1);
    assert_size_matrix(var2, 22, 1);
    assert_size_matrix(var3, 22, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 1, 44);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    DLfya_1Actual_SLIP_raw(p_output1.data(), var1.data(),var2.data(),var3.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // DLFYA_1ACTUAL_SLIP_HH
