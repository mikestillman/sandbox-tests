#pragma once
#include <iostream>
#include "dmat.hpp"

template <typename T>
class LinAlg
{
public:
  static int rank(const T& m) {
    std::cout << "calling generic version of rank" << std::endl;
    return -1;
  }
};

template <typename T>
class LinAlg< DMat<T> >
{
public:
  static int rank(const DMat<T>& m)
  {
    std::cout << "calling DMat<T> version of rank" << std::endl;
    return 17;
  }
};
