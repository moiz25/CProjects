#include <stdio.h>

int main() {
    int rows = 5; // Define the number of rows in the pattern

    // Outer loop for rows
    for (int i = 0; i < rows; i++) {
        // Inner loop for columns
        for (int j = 0; j <= i; j++) {
            printf("* "); // Print a star
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
