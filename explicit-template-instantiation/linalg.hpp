#pragma once
#include <iostream>


const int genericRank=-1;
const int CRank = 1;
const int DMatRank = 10;
const int DMatIntRank = 11;
const int intRank = 20;



template <typename T>
class LinAlg
{
public:
  static int rank(const T& m) {
    std::cout << "calling generic version of rank" << std::endl;
    return genericRank;
  }
};

