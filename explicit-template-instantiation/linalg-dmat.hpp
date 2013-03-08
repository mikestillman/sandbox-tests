#pragma once

#include <iostream>
#include "linalg.hpp"
#include "dmat.hpp"

template <typename T>
class LinAlg< DMat<T> >
{
public:
  static int rank(const DMat<T>& m)
  {
    std::cout << "calling DMat<T> version of rank" << std::endl;
    return DMatRank;
  }
};

