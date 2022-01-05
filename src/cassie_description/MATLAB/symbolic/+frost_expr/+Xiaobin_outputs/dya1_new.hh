/*
 * Automatically Generated from Mathematica.
 * Wed 3 Nov 2021 18:39:37 GMT-07:00
 */

#ifndef DYA1_NEW_HH
#define DYA1_NEW_HH

#ifdef MATLAB_MEX_FILE
namespace SymFunction
{
  void dya1_new_raw(double *p_output1, const double *var1,const double *var2,const double *var3);
}

#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{
  void dya1_new_raw(double *p_output1, const double *var1,const double *var2,const double *var3);

  inline void dya1_new(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2,const Eigen::VectorXd &var3)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 22, 1);
    assert_size_matrix(var2, 22, 1);
    assert_size_matrix(var3, 22, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 1, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    dya1_new_raw(p_output1.data(), var1.data(),var2.data(),var3.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // DYA1_NEW_HH
