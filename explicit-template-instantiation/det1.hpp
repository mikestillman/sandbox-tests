#pragma once
#include <iostream>

#include "C.hpp"
#include "dmat.hpp"

template <typename T>
int det1(const DMat<T> &c)
{
  std::cout << "calling DMat<T> version of det1" << std::endl;
  return 14;
}

int det1(const C &c);
int det1(const DMat<int> &d);
int det1(int x);
