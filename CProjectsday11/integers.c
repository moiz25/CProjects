#include <stdio.h>

// Function to calculate the number of digits in an integer
int count_digits(int num) {
    int count = 0;

    // Count digits by dividing the number by 10 until it becomes 0
    while (num != 0) {
        num /= 10;
        count++;
    }

    return count;
}

int main() {
    int num;

    // Input an integer from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Calculate and print the number of digits
    printf("Number of digits: %d\n", count_digits(num));

    return 0;
}
