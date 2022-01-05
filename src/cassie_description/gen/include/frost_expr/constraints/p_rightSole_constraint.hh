/*
 * Automatically Generated from Mathematica.
 * Sun 7 Nov 2021 14:27:19 GMT-08:00
 */

#ifndef P_RIGHTSOLE_CONSTRAINT_HH
#define P_RIGHTSOLE_CONSTRAINT_HH

#ifdef MATLAB_MEX_FILE
namespace SymFunction
{
  void p_rightSole_constraint_raw(double *p_output1, const double *var1);
}

#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{
  void p_rightSole_constraint_raw(double *p_output1, const double *var1);

  inline void p_rightSole_constraint(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 22, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 5, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    p_rightSole_constraint_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // P_RIGHTSOLE_CONSTRAINT_HH