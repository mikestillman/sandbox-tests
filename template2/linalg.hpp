#pragma once
#include <iostream>

template <typename T>
class LinAlg
{
public:
  static int rank(const T& m) {
    std::cout << "calling generic version of rank" << std::endl;
    return -1;
  }
};

