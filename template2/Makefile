CC = g++
CPPFLAGS += -Wall -O3
CXXFLAGS += --std=gnu++0x

all: main

main : main.o linalg-C.o det1.o linalg-dmat-int.o linalg-int.o

clean: 
	rm -rf *.o main

#main.o linalg-C.o det1.o linalg-dmat-int.o linalg-int.o: A.hpp C.hpp linalg.hpp dmat.hpp
