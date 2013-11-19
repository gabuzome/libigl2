#ifndef IGL_READ_EIGEN_FROM_CSV_H
#define IGL_READ_EIGEN_FROM_CSV_H

#include "igl/igl_inline.h"
#include <Eigen/Core>
#include <string>
#include <vector>

namespace igl 
{
  // read a matrix from a csv file into a Eigen matrix
  // Templates:
  //   Scalar  type for the matrix
  // Inputs:
  //   str  path to .csv file
  // Outputs:
  //   M  eigen matrix 
  template <typename Scalar>
  IGL_INLINE bool read_eigen_from_CSV(const std::string str, Eigen::Matrix<Scalar,Eigen::Dynamic,Eigen::Dynamic>& M);
}

#ifdef IGL_HEADER_ONLY
#  include "read_eigen_from_CSV.cpp"
#endif

#endif
