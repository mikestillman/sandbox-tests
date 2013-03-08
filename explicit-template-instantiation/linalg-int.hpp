#pragma once
#include "linalg.hpp"

template <>
class LinAlg<int>
{
public:
  static int rank(const int& m);
};
