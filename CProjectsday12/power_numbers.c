#include <stdio.h>

// Function to calculate the power of a number using recursion
double power(double base, int exponent) {
    if (exponent == 0) {
        return 1;
    } else if (exponent > 0) {
        return base * power(base, exponent - 1);
    } else {
        return 1 / (base * power(base, -exponent - 1));
    }
}

int main() {
    double base;
    int exponent;

    // Input base and exponent from the user
    printf("Enter base: ");
    scanf("%lf", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);

    // Calculate and print the result
    printf("Result: %.6lf\n", power(base, exponent));

    return 0;
}
