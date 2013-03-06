#include "C.hpp"
#include "det1.hpp"

#include "A.hpp"

int main(int argc, char **argv)
{
  C m1(14);
  A *mat = new B<C>(m1);
  int val = mat->rank();

  DMat<int> m2(6);
  A * mat2 = new B< DMat<int> >(m2);
  int val2 = mat2->rank();

  int m3(4);
  A * mat3 = new B<int>(m3);
  int val3 = mat3->rank();

  int d1 = mat->det();
  int d2 = mat2->det();
  int d3 = mat3->det();

  DMat<double> m4(6.0);
  A * mat4 = new B< DMat<double> >(m4);
  int val4 = mat4->rank();
  int d4 = mat4->det();

  return 0;
}
