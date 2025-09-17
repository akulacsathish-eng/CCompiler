#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    // Seed the random number generator with the current time
    srand((unsigned int)time(NULL));

    // Generate a random number (unbounded)
    int randomValue = rand();
    printf("Generated random number: %d\n", randomValue);

    // Generate a random number in a specific range (e.g., between 1 and 10)
    int lower = 1;
    int upper = 10;
    int randomInRange = (rand() % (upper - lower + 1)) + lower;
    printf("Random number between %d and %d: %d\n", lower, upper, randomInRange);

    return 0;

    // How would you modify the code if the upper and lower limit are chosen by the user?
}
