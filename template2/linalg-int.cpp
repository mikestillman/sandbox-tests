#include "linalg.hpp"
template <> int LinAlg<int>::rank(const int& m)
{
  std::cout << "calling int version of rank" << std::endl;
  return 13;
}
