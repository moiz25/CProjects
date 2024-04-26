#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    // Prompt the user to enter a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the trailing newline character
    str[strcspn(str, "\n")] = '\0';

    // Calculate the length of the string
    int length = strlen(str);

    // Print the string in reverse
    printf("Reversed string: ");
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
