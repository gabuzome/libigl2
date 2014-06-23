// This file is part of libigl, a simple c++ geometry processing library.
//
// Copyright (C) 2014 Daniele Panozzo <daniele.panozzo@gmail.com>
//
// This Source Code Form is subject to the terms of the Mozilla Public License
// v. 2.0. If a copy of the MPL was not distributed with this file, You can
// obtain one at http://mozilla.org/MPL/2.0/.
#include "igl/dot_row.h"

template <typename DerivedA, typename DerivedB, typename Derv>
IGL_INLINE Eigen::PlainObjectBase<DerivedV> igl::dot_row(
  const Eigen::PlainObjectBase<DerivedV>& A,
  const Eigen::PlainObjectBase<DerivedV>& B
  )
{
  assert(A.rows() == B.rows());
  assert(A.cols() == B.cols());

  return (A.array() * B.array()).rowwise().sum();
}

#ifndef IGL_HEADER_ONLY
// Explicit template specialization
// generated by autoexplicit.sh
#endif
