CC = g++
CPPFLAGS += -Wall -O3
CXXFLAGS += --std=gnu++0x

all: main

main : main.o D.o det1.o linalg-int.o E.o

clean: 
	rm -rf *.o main

main.o D.o det1.o linalg-int.o E.o: A.hpp C.hpp linalg.hpp dmat.hpp