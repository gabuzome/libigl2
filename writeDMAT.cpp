#include "writeDMAT.h"

#include <cstdio>

  template <class Mat>
IGL_INLINE bool igl::writeDMAT(const std::string file_name, const Mat & W)
{
  FILE * fp = fopen(file_name.c_str(),"w");
  if(fp == NULL)
  {
    fprintf(stderr,"IOError: writeDMAT() could not open %s...",file_name.c_str());
    return false; 
  }
  // first line contains number of rows and number of columns
  fprintf(fp,"%d %d\n",(int)W.cols(),(int)W.rows());
  // Loop over columns slowly
  for(int j = 0;j < W.cols();j++)
  {
    // loop over rows (down columns) quickly
    for(int i = 0;i < W.rows();i++)
    {
      fprintf(fp,"%lg\n",(double)W(i,j));
    }
  }
  fclose(fp);
  return true;
}

#ifndef IGL_HEADER_ONLY
// Explicit template specialization
#endif
