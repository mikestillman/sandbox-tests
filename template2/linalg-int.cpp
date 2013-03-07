#include "linalg-int.hpp"
#include <iostream>

int LinAlg<int>::rank(const int& m)
{
  std::cout << "calling int version of rank" << std::endl;
  return intRank;
}
