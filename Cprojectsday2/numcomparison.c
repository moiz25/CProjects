#include <stdio.h>

int main() {
    // Declare a variable to store the number entered by the user
    int number;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    // Read the number entered by the user
    scanf("%d", &number);

    // Check if the number is positive, negative, or zero
    if (number > 0) {
        printf("%d is positive.\n", number);
    } else if (number < 0) {
        printf("%d is negative.\n", number);
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}
