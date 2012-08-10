#ifndef TEST_SWIG_H
#define TEST_SWIG_H

#include <iostream>

template <typename T>
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

typedef Point_t<int>    IntPoint;
typedef Point_t<double> DoublePoint;

template<class T>
void testObjectPass(Point_t<T> p)
{
	std::cout <<"(" << p.x << ", " << p.y << ")\n";
}

#endif
