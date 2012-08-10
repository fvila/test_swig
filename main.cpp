#include "test_swig.h"

int main(int argc, char** argv)
{
	IntPoint a(3, 4);
	DoublePoint b(3.0, 4.9);
	
	testObjectPass(a);
	testObjectPass(b);
	
	return 0;
}
