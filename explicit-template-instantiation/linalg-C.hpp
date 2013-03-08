#pragma once

#include "linalg.hpp"
#include "C.hpp"

template <> int LinAlg<C>::rank(const C& m);
