#include <stdio.h>

int main() {
    char choice;

    // Display the options to the user
    printf("Welcome to the decision-making program!\n");
    printf("Enter 'A' to choose option A.\n");
    printf("Enter 'B' to choose option B.\n");
    printf("Enter 'C' to choose option C.\n");
    printf("Your choice: ");

    // Get user's choice
    scanf(" %c", &choice);

    // Process user's choice using if-else statements
    if (choice == 'A' || choice == 'a') {
        printf("You chose option A. This is the best choice!\n");
    } else if (choice == 'B' || choice == 'b') {
        printf("You chose option B. It's a good choice!\n");
    } else if (choice == 'C' || choice == 'c') {
        printf("You chose option C. Not a bad choice!\n");
    } else {
        printf("Invalid choice! Please choose either A, B, or C.\n");
    }

    return 0;
}