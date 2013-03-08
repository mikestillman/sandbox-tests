#include <iostream>
#include "linalg-dmat.hpp"

#include <vector>

extern template class B<DMat<int> >; 

template <> int LinAlg< DMat<int> >::rank(const DMat<int>& m)
{
   std::vector< DMat<int > > v; 
  v.push_back(m);
  std::cout << "v.size := " <<  v.size() << std::endl; 
  
  std::cout << "calling DMat<int> version of rank" << std::endl;
  return DMatIntRank;
}

