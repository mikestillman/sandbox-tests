#include <iostream>
#include "C.hpp"
#include "dmat.hpp"

int det1(const C &c) {
  std::cout << "calling C version of det1" << std::endl;
  return 90;
}


int det1(const DMat<int> &c) {
  std::cout << "calling B<int> version of det1" << std::endl;
  return 80;
}

int det1(int c) {
  std::cout << "calling int version of det1" << std::endl;
  return 90;
}

