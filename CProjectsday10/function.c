#include <stdio.h>

// Function to calculate the nth Fibonacci term
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;

    // Input the value of n from the user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate and print the nth Fibonacci term
    printf("The %dth Fibonacci term is: %d\n", n, fibonacci(n));

    return 0;
}
