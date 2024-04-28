#include <stdio.h>

// Function to convert binary to decimal
int binaryToDecimal(int binaryNumber) {
    int decimalNumber = 0, base = 1, remainder;

    while (binaryNumber != 0) {
        remainder = binaryNumber % 10;
        decimalNumber += remainder * base;
        binaryNumber /= 10;
        base *= 2;
    }

    return decimalNumber;
}

int main() {
    int binaryNumber;

    printf("Enter a binary number: ");
    scanf("%d", &binaryNumber);

    printf("Decimal equivalent: %d\n", binaryToDecimal(binaryNumber));

    return 0;
}
