#include "C.hpp"
#include "det1.hpp"

#include "A.hpp"
#include "linalg-dmat.hpp"
#include "linalg-int.hpp"

#include <assert.h>

/*
int other()
{
  int d1 = mat->det();
  int d2 = mat2->det();
  int d3 = mat3->det();
  int d4 = mat4->det();
}*/

int main(int argc, char **argv)
{
  C m1(14);
  A *mat = new B<C>(m1);
  assert( mat->rank() == CRank ) ;

  DMat<int> m2(6);
  A * mat2 = new B< DMat<int> >(m2);
  assert( mat2->rank() == DMatIntRank ) ;


  int m3(4);
  A * mat3 = new B<int>(m3);
  assert( intRank == mat3->rank() );

  DMat<double> m4(6.0);
  A * mat4 = new B< DMat<double> >(m4);
  assert( mat4->rank() == DMatRank ) ;

  double m5(7.0);
  A* mat5 = new B<double>(m5);
  assert(mat5->rank()==genericRank);

  return 0;
}
