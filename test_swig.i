%module test_swig

%{
#include "test_swig.h"
%}

template<class T>
class Point_t
{
public:
    T x;
    T y;

    Point_t(T _x = 0, T _y = 0)
	{
		x = _x;
		y = _y; 
	}
};

%template(IntPoint) Point_t<int>;
%template(DoublePoint) Point_t<double>;

template<class T>
void testObjectPass(Point_t<T> p);

%template(testObjectPassInt) testObjectPass<int>;
%template(testObjectPassDouble) testObjectPass<double>;