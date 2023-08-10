#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int randomNumber = 0;
    int guess = 0;
    int numberOfGuesses; /*will initialize inside the loop if initialize here
     put for(;;) in loop check this in future 'for syntax' */
    time_t t;

    //initialization of random number generator
    srand((unsigned) time(&t));

        //get the random number
        randomNumber = rand() %21 ;

        printf("\n This is guessing game.");
        printf("\n I have chosen a number between 0 and 20  which you must guess.\n");

       /*Loop will check all the conditions in between{} till the condition (numberOfGuesses) of
       loop is turning to be true or unless break ,, if condition is true then it will update
       numberOfGuesses to 4 then check/execute the statement between {} line to line until u guessed
       it i can't explain all in comment sorry if in future u can't understand */

            for (numberOfGuesses =5 ; numberOfGuesses >0 ; --numberOfGuesses)
            // No computer can't know what number of guesses mean treat it as 'i' which u used while understanding the concept
        {
            printf("\nYou have %d tr%s left." ,numberOfGuesses , numberOfGuesses==1 ? "y": "ies");
            /*Tertiory operator
            also used it is to check if number of guesses left is one then print try otherwise tries*/

            /*query here print is going to print 5 in first try but it says -- numberOfGuesses in starting
             of for loop so updated value is 4 why is it printing 5 , isn't i have to use numberofguesses then -- */

            printf("\nEnter a guess: ");
            scanf("%d",&guess);

            if(guess ==randomNumber)
            {
                printf("\nCongratulation!! You guessed it\n");
                return ; /* it is ending the program when u guessed right as this return is in "if" so
                return is only executing if the if condition is true otherwise it will see below else if
                statement simple condition rules */

            } //this } is for "if"
            else if (guess<0 || guess>20)
                printf ("I said the number entered must be between o and 20.\n");
            //No {} for else if as u can skip these if there is one statement in else if

            else if (randomNumber > guess)
                printf(" Sorry , %d is wrong. My number is greater than that.\n",guess);

            else if (randomNumber < guess)
                printf(" Sorry , %d is wrong. My number is less than that.\n",guess);
        } /*this { is of 'for loop' Now loop is going to repeat till 'i' dissatisfies the condition
            i>O wali simple for loop basics or when you wins , return is there to end there  u could also
            use 'break' there. using 'break' will bring u out of loop i.e. here in case of break statement below is
            going to be execute , in case of return program will end there. */

            printf("\nYou have had five tries and failed.The number was %d\n" ,randomNumber );

    return 0;
}
