#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    while (n)
    {
        int number;   //declaring here as when declared outside it will only take number as input one time not n times
        scanf("%d", &number);

        int cpynumber = number;
        int count = 0;

        for (;cpynumber != 0;)
        {
            int digit = cpynumber % 10;
            
            // if(number%digit==0) causing errors , because division by zero is uncertain so if digit is 0 it is showing error as in 1012 , so exclude that too in if statement waise bhi number%0 dont increment count as menioned in question
            if (digit != 0 && number % digit == 0)
            {
                count++;
            }
            cpynumber=cpynumber/10; // Move to the next digit
        }

        printf("%d\n", count);
        n--;
    }
}

