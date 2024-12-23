#include <stdio.h>
#include <stdlib.h>

#include "regression.h"

double example_function(double x) {
    return pow(x, 8) - pow(x, 4) - pow(x, 3) - pow(x, 2) - x - 4;
}

int main() {
    ////////////////////////////////////////////////////////////////////////
    double xvalues[] = {1, 2, 3, 4, 5, 6, 7};
    double yvalues[] = {0.102, 0.095, 0.087, 0.079, 0.072, 0.065, 0.059};
    int size = 7;
    int degree = 3;
    double coeffs[degree];
    polynomial_fit(xvalues, yvalues, size, degree, coeffs);

    for (int i = 0; i < degree; i++) {
        printf("Coefficient of x^%d: %f\n", i, coeffs[i]);
    }

    return 0;
}
