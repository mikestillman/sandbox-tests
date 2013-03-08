
#include "det1.cpp"
#include "linalg.hpp"
#include "linalg-int.cpp"
#include "A.hpp"
#include "C.hpp"


#include "linalg-C.cpp" // forgetting this include will result in a (unwanted) generic call for mat3->rank()


template class B<int>; 
template class B<double> ;


template class B<C>; // if you remove this, you will line, you will get an error message with -fno-implicit-templates but no message when using  -frepo and an assertion failure instead
// on the other side, when using external templates like stl::vector it will became extremly hard to define all mandatory instanciations. 
// Workaround: separate external and internal template instanciations. 

#include "linalg-dmat.hpp"



template int det1(const DMat<double> &d);



template class DMat<double>;

template class B<DMat<int> >; // will  lead to assertion error if not declared here.
template class B<DMat<double> >;

#include "linalg-dmat-int.cpp" // if an include like this is forgotten, this could still lead to unexpected behaviour 
// is ii possible to write a test which ensures that a specific function is called?

