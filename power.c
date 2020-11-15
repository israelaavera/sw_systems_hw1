#include "myMath.h"

double Exponent(const int x) {
    return power(e, x);
}

double power(const double x, const int y) { // x^y
    double result = 1;
    for (int i = y < 0 ? -y : y; i > 0; i--)
        result *= x;
    return y < 0 ? 1 / result : result;
}