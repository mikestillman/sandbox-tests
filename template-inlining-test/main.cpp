#if 0
g++     main.cpp B.cpp -o main  # this version calls A<T>::f
g++ -O2 main.cpp B.cpp -o main  # this version calls A<int>::f
#endif

#include "A.hpp"

int main(int argc, char **argv)
{
  A<int>::f();
  return 0;
}

