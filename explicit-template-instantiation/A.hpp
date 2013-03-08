#pragma once
#include "linalg.hpp"
#include "det1.hpp"

class A
{
public:
  virtual int rank() = 0;

  virtual int det() = 0;
};

template <typename T>
class B : public A
{
public:
  B(const T& m) : mValue(m) {}


  int rank() {
    return LinAlg<T>::rank(mValue);
    //return mValue.rank(); // trouble with this one: we want to specialize the rank method for various T
  }

  int det() {
    return det1(mValue);
  }

private:
  const T& mValue; // e.g. DMat
};
