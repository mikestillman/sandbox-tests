#include <iostream>
#include "linalg-dmat.hpp"

int LinAlg< DMat<int> >::rank(const DMat<int>& m)
{
  std::cout << "calling DMat<int> version of rank" << std::endl;
  return DMatIntRank;
}

