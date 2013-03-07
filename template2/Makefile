CC = g++

all: main

main : main.o D.o det1.o linalg-int.o 

clean: 
	rm -rf *.o main

main.o D.o det1.o linalg-int.o: A.hpp C.hpp linalg.hpp dmat.hpp