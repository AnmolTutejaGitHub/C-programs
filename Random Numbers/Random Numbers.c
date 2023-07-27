//Generating Random Numbers

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Pseudo random numbers: A set of values or elements that are statistically random
    // (don't use these for any cryptographic security)

    srand(time(0)); // "s" - seed, "r" - random
    // We use srand to seed the random number generator.
    // The seed value determines the sequence of random numbers generated.
    // We use the current time (in seconds) as the seed value by passing time(0).
    // Using time(0) ensures that the seed value changes with each program execution,
    // leading to a different sequence of random numbers every time the program is run.

    int number1 = rand(); // Generates a random number between 0 and RAND_MAX (usually 32767).
    // rand() returns a random integer between 0 and RAND_MAX (defined in stdlib.h).
    // The value of RAND_MAX can vary based on the implementation but is usually 32767.

    int number2 = rand() % 6;
    // We use the modulus operator (%) to restrict the range of the random number to 0-5.
    // The result of rand() % 6 will be a number between 0 and 5 (both inclusive).
    // So, number2 will always be between 0 and 5. Note that 6 % 6 equals 0 , 7%6 = 1;
    // This is useful for simulating events like rolling a dice, where we need values 1-6.

    // For simulating a dice roll, we don't need 0, but we need numbers from 1 to 6, so:
    int number3 = (rand() % 6) + 1;
    // By adding 1 to the result of rand() % 6, we shift the range to 1-6 (both inclusive).
    // Now, number3 will always be a random number between 1 and 6, simulating a dice roll.

    int number4 = rand() % 7;
    // Similarly, we can generate random numbers in the range 0-6 (both inclusive) using rand() % 7.

    printf("\n%d\n%d\n%d\n%d\n", number1, number2, number3, number4);

    return 0;
}
