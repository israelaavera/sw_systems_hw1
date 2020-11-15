#include "myMath.h"

double Exponent( int x) {
    return power(e, x);
}

double power( double x,  int y) { // x^y
   if(x==0)
       return 0;

    double result = 1;
    for (int i = y < 0 ? -y : y; i > 0; i--)
        result *= x;
    return y < 0 ? 1 / result : result;
}