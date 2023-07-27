#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0)); // Seed the random number generator with the current time

    int min = 1; // Minimum value
    int max = 6; // Maximum value

    int random_number = (rand() % (max - min + 1)) + min;

    printf("Random number between %d and %d (inclusive): %d\n", min, max, random_number);

    return 0;
}
