#pragma once

template <typename T>
class DMat
{
public:
  DMat(T x) : mValue(x) {}
private:
  T mValue;
};
