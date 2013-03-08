# no implicit template instantiations 
#
# idea from: https://www.cs.washington.edu/education/courses/326/02wi/templates.htm


#TEMPLATEFLAGS= -frepo # will work even using stl inside the template code
TEMPLATEFLAGS= -fno-implicit-templates # will lead to a bunch of errors if using stl inside the template code

CC = g++
CPPFLAGS += -Wall -O3 $(TEMPLATEFLAGS)
CXXFLAGS += --std=gnu++0x  $(TEMPLATEFLAGS)

CPPFLAGSIMPLICIT += -Wall -O3  
CXXFLAGSIMPLICIT += --std=gnu++0x  

all: main

main : main.o  linalg-instantiations.o external-templates-instantiation.o 

external-templates-instantiation.o:  external-templates-instantiation.cpp 
	$(CC) $(CPPFLAGS) $(CXXFLAGS) -frepo -c external-templates-instantiation.cpp 

linalg-instantiations.o:  linalg.hpp linalg-C.cpp C.hpp linalg-instantiations.cpp 
	$(CC) $(CPPFLAGS) $(CXXFLAGS) -c linalg-instantiations.cpp 

clean: 
	rm -rf *.o main *.rpo

#main.o linalg-C.o det1.o linalg-dmat-int.o linalg-int.o: A.hpp C.hpp linalg.hpp dmat.hpp
