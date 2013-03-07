#include "linalg.hpp"
#include "C.hpp"

template <> int LinAlg<C>::rank(const C& m)
{
  std::cout << "calling C version of rank" << std::endl;
  return CRank;
}

