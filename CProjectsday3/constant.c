#include <stdio.h>

// Define constant for the number of days in a week
#define DAYS_IN_WEEK 7

int main() {
    // Array to store the names of the days
    char *days[DAYS_IN_WEEK] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    
    // Iterate over each day and print its name
    for (int i = 0; i < DAYS_IN_WEEK; i++) {
        printf("Day %d: %s\n", i + 1, days[i]);
    }
    
    return 0;
}
