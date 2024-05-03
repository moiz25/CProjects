#include <stdio.h>

// Function to swap the values of two variables using pointers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;

    // Input two numbers from the user
    printf("Enter value for num1: ");
    scanf("%d", &num1);
    printf("Enter value for num2: ");
    scanf("%d", &num2);

    // Print the original values
    printf("Original values: num1 = %d, num2 = %d\n", num1, num2);

    // Swap the values using pointers
    swap(&num1, &num2);

    // Print the swapped values
    printf("Swapped values: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
