###
### 11 March 2013 HW:
### how to test that we are calling the correct version of a function, e.g. rank?
### Issue: suppose we want to specialize a working version with a faster version


#CC = g++
CXX = clang++
LOADLIBES = -lstdc++
CPPFLAGS += -Wall -O3
CXXFLAGS += --std=gnu++0x

all: main

main : main.o linalg-C.o det1.o linalg-dmat-int.o linalg-int.o

clean: 
	rm -rf *.o main

#main.o linalg-C.o det1.o linalg-dmat-int.o linalg-int.o: A.hpp C.hpp linalg.hpp dmat.hpp
