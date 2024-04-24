#include <stdio.h>

int find_max(int arr[], int size) {
    int max = arr[0]; // Assume the first element is the maximum
    
    // Loop through the array to find the maximum value
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    
    return max;
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Declare an array of integers
    int arr[size];

    // Fill the array with user input
    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Find the maximum value in the array
    int max = find_max(arr, size);
    
    // Display the maximum value
    printf("The maximum value in the array is: %d\n", max);

    return 0;
}
