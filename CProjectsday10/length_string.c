#include <stdio.h>

// Function to calculate the length of a string
int string_length(char str[]) {
    int length = 0;

    // Iterate through the string until the null terminator is encountered
    while (str[length] != '\0') {
        length++;
    }

    return length;
}

int main() {
    char str[100];

    // Input string from the user
    printf("Enter a string: ");
    scanf("%s", str);

    // Calculate and print the length of the string
    printf("Length of the string: %d\n", string_length(str));

    return 0;
}
