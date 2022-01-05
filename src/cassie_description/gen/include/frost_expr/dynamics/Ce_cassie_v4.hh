/*
 * Automatically Generated from Mathematica.
 * Tue 4 Jan 2022 16:44:35 GMT-08:00
 */

#ifndef CE_CASSIE_V4_HH
#define CE_CASSIE_V4_HH

#ifdef MATLAB_MEX_FILE
namespace SymFunction
{
  void Ce_cassie_v4_raw(double *p_output1, const double *var1,const double *var2);
}

#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{
  void Ce_cassie_v4_raw(double *p_output1, const double *var1,const double *var2);

  inline void Ce_cassie_v4(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 22, 1);
    assert_size_matrix(var2, 22, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 22, 22);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Ce_cassie_v4_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // CE_CASSIE_V4_HH
