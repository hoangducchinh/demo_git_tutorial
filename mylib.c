#include "mylib.h"

double f_c_conv(double fareinheit)
{
    double c = (fareinheit - 32.0) * 5.0 / 9.0;
    return c;
}
