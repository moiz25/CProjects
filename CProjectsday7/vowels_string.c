#include <stdio.h>
#include <string.h>

int count_vowels(char *str) {
    int count = 0;
    int length = strlen(str);

    for (int i = 0; i < length; i++) {
        // Convert each character to lowercase
        char ch = tolower(str[i]);

        // Check if the character is a vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }

    return count;
}

int main() {
    char str[100];

    // Prompt the user to enter a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the trailing newline character
    str[strcspn(str, "\n")] = '\0';

    // Count the number of vowels in the string
    int vowels = count_vowels(str);

    // Print the result
    printf("Number of vowels in the string: %d\n", vowels);

    return 0;
}
