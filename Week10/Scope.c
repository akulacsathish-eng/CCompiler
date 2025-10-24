#include <stdio.h>

// Global variable
int x = 10;

// Function prototype
void func();

int main() {
    int x = 20; // Local to main
    printf("Inside main (before block): x = %d\n", x);

    {
        int x = 30; // Block scope — shadows main’s x
        printf("Inside block: x = %d\n", x);
    }

    printf("Inside main (after block): x = %d\n", x);

    func(); // Call function that uses global x

    printf("Inside main (after func): x = %d\n", x);
    return 0;
}

// Function definition
void func() {
    printf("Inside func (before change): x = %d\n", x);
    x = x + 5; // Modifies global x
    printf("Inside func (after change): x = %d\n", x);
}
