#include <stdio.h>

int main() {
    // Declare a character array to store the user's name
    char name[50];
    
    // Prompt the user to enter their name
    printf("Please enter your name: ");
    
    // Read the user's name from the standard input and store it in the 'name' array
    scanf("%s", name);
    
    // Print a personalized greeting using the user's name
    printf("Hello, %s! Welcome to the program.\n", name);
    
    return 0;
}
