#include <stdio.h>

int main() {
    int num, i, flag = 0;

    // Prompt the user to enter a number
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check if the number is prime
    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
    } else {
        for (i = 2; i <= num / 2; ++i) {
            // If num is divisible by any number other than 1 and itself, it's not prime
            if (num % i == 0) {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            printf("%d is a prime number.\n", num);
        else
            printf("%d is not a prime number.\n", num);
    }

    return 0;
}
