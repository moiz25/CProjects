#include <stdio.h>

int main() {
    // Declare variables to store the two numbers
    float num1, num2;
    
    // Prompt the user to enter the first number
    printf("Enter the first number: ");
    // Read the first number from the user
    scanf("%f", &num1);
    
    // Prompt the user to enter the second number
    printf("Enter the second number: ");
    // Read the second number from the user
    scanf("%f", &num2);
    
    // Calculate the sum of the two numbers
    float sum = num1 + num2;
    // Calculate the average of the two numbers
    float average = sum / 2;
    
    // Print the sum and average
    printf("Sum of %.2f and %.2f is: %.2f\n", num1, num2, sum);
    printf("Average of %.2f and %.2f is: %.2f\n", num1, num2, average);
    
    return 0;
}
