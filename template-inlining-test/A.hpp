#include <iostream>

template <typename T>
struct A
{
  static void f() {
    std::cout << "called A<T>::f" << std::endl;
  }
};


