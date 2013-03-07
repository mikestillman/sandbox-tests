#include "A.hpp"

template<>
void A<int>::f()
{
  std::cout << "called A<int>::f" << std::endl;
}

