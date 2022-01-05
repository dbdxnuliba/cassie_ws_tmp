/*
 * Automatically Generated from Mathematica.
 * Sun 7 Nov 2021 14:26:11 GMT-08:00
 */

#ifndef DP_COM_ABSOLUTE_HH
#define DP_COM_ABSOLUTE_HH

#ifdef MATLAB_MEX_FILE
namespace SymFunction
{
  void dp_com_absolute_raw(double *p_output1, const double *var1,const double *var2);
}

#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{
  void dp_com_absolute_raw(double *p_output1, const double *var1,const double *var2);

  inline void dp_com_absolute(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 22, 1);
    assert_size_matrix(var2, 22, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 3, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    dp_com_absolute_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // DP_COM_ABSOLUTE_HH
