#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generate and print a random number between 0 and RAND_MAX
    int random_number = (rand() % 20)+1; // Random number between 1 and 20
    printf("Random Number: %d\n", random_number);

    return 0;
}