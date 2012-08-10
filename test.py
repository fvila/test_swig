#!/usr/bin/env python

from test_swig import *

a = IntPoint(3, 4);
b = DoublePoint(3.0, 4.9);

testObjectPassInt(a);
testObjectPassDouble(b);
