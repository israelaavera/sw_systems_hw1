#include <stdio.h>
#include <stdbool.h>
#include "myMath.h"

double first(const double x) {
    return sub(add((float) Exponent((int) x), (float) power(x, 3)), 2);
}

double second(const double x) {
    return add((float) mul(x, 3), (float) mul(power(x, 2), 2));
}

double third(const double x) {
    return sub((float) div(mul(power(x, 3), 4), 5), (float) mul(x, 2));
}

int main() {
    int numFunction;
    double x;
    while (true) {
        printf("to solve f(x) = e^x + x^3 −2 press 1.\n""to solve f(x) = 3x + 2x^2  press 2.\n""to solve f(x) = (4x^3)/5 -2x press 3.\n""to exit press 4.\n");
        scanf("%d", &numFunction);
        switch (numFunction) {
            case 1:
                printf("Please inset a real number: ");
                scanf("%lf", &x);
                printf("The value of f(x) = e^x + x^3 −2 at the point %.4lf is: %.4lf\n", x, first(x));
                break;
            case 2:
                printf("Please inset a real number: ");
                scanf("%lf", &x);
                printf("The value of f(x) = 3x + 2x^2 at the point %.4lf is: %.4lf\n", x, second(x));
                break;
            case 3:
                printf("Please inset a real number: ");
                scanf("%lf", &x);
                printf("The value of f(x) = (4x^3)/5 -2x at the point %.4lf is: %.4lf\n", x, third(x));
                break;
            case 4:
                printf("Bye Bye!");
                return 0;
            default:
                printf("Invalid input, try again!\n");
        }
    }
}
