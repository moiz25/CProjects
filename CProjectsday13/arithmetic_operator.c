#include <stdio.h>

int main() {
    int num1 = 10; // Binary: 1010
    int num2 = 6;  // Binary: 0110

    // Bitwise AND
    printf("Bitwise AND: %d & %d = %d\n", num1, num2, num1 & num2); // Output: 2 (Binary: 0010)

    // Bitwise OR
    printf("Bitwise OR: %d | %d = %d\n", num1, num2, num1 | num2);   // Output: 14 (Binary: 1110)

    // Bitwise XOR
    printf("Bitwise XOR: %d ^ %d = %d\n", num1, num2, num1 ^ num2); // Output: 12 (Binary: 1100)

    // Bitwise NOT
    printf("Bitwise NOT: ~%d = %d\n", num1, ~num1); // Output: -11 (Binary: 11111111111111111111111111110101)

    // Left shift
    printf("Left shift: %d << 2 = %d\n", num1, num1 << 2); // Output: 40 (Binary: 101000)

    // Right shift
    printf("Right shift: %d >> 2 = %d\n", num1, num1 >> 2); // Output: 2 (Binary: 10)

    return 0;
}
