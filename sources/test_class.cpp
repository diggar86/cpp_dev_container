#include <iostream>
#include "test_class.h"

using namespace std;

cl_test_class :: cl_test_class (const int a, const int b, const int c)
: a(a), b(b), c(c)
{}

void cl_test_class :: print() const
{
    cout << "a: " << a << ", b: " << b << ", c: " << c << endl;
}