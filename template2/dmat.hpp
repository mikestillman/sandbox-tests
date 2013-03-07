#pragma once

#include <iostream>
#include "linalg.hpp"

template <typename T>
class DMat
{
public:
  DMat(T x) : mValue(x) {}
private:
  T mValue;
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

