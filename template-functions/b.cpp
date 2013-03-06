#include "a.hpp"


void doStringA(char * x)
{
  std::cout << "calling char * version with " << x << std::endl;
}

void doStringA(int x)
{
  std::cout << "calling int version with " << x << std::endl;
}

#if 0
template <>
void doString<char *>(char * x)
{
  std::cout << "calling char * version with " << x << std::endl;
}

template <>
void doString<int>(int x)
{
  std::cout << "calling int version with " << x << std::endl;
}
#endif


template<> void LinAlg<int>::doStringB(int x)
{
  std::cout << "calling int version with " << x << std::endl;
}

template<> void LinAlg<char *>::doStringB(char * x)
{
  std::cout << "calling char * version with " << x << std::endl;
}
