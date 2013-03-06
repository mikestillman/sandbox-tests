#include <iostream>

template <typename T> struct LinAlg;

template <class T>
void doStringB(T x)
{
  LinAlg<T>::doStringB(x);
}

template<typename T>
struct LinAlg
{
  static void doStringB(T x)
  {
    std::cout << "calling generic version with " << x << std::endl;
  }
};

#if 0
template <typename T>
void doString(T x)
{
  std::cout << "calling generic version with " << x << std::endl;
}

template <typename T>
void doStringA(T x)
{
  std::cout << "calling generic version with " << x << std::endl;
}
#endif

void doStringA(int x);
void doStringA(char * x);
