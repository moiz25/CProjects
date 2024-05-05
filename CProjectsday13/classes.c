#include <stdio.h>

// Function prototype
void function();

// Global variable with external linkage
extern int extern_var;

int main() {
    auto int auto_var = 10;  // Automatic variable
    register int register_var = 20;  // Register variable
    static int static_var = 30;  // Static variable

    printf("auto_var: %d\n", auto_var);
    printf("register_var: %d\n", register_var);
    printf("static_var: %d\n", static_var);

    function();  // Call function to demonstrate extern variable

    return 0;
}

// Function definition
void function() {
    extern int extern_var;  // External variable declaration

    printf("extern_var inside function: %d\n", extern_var);
}

// External variable definition
int extern_var = 40;
