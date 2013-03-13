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

template <>
class LinAlg< DMat<int> >
{
public:
  static int rank(const DMat<int>& m);
};

//template <> int LinAlg< DMat<int> >::rank(const DMat<int>& m);
