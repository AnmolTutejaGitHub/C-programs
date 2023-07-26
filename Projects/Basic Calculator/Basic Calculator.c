//Basic Calculator
#include<stdio.h>
#include<windows.h>

int main()
{
    float N1;
    float N2;
    char Operator;
    float result;

    start: ;   //can replace goto with while(1)
    printf("\nEnter a number:");
    scanf("%f",&N1);

    printf("\nEnter operator:");
    scanf(" %c",&Operator);

    printf("\nEnter second number:");
    scanf("%f",&N2);

    if(Operator == '+')
        result=N1+N2;

        else if (Operator == '-')
                result=N1-N2;

        else if(Operator=='*')
            result = N1*N2;

        else if (Operator=='/')
            result = N1/N2;

            else
                printf("\nInvalid Operation");

                printf("\n Result = %f",result);

        getch();

        Sleep(1000);
        system("cls");

        printf("Processing");
        for(int i=0;i<5;i++)
        {
            printf(".");
        }
        Sleep(8000);
        system("cls");

        goto start;


return 0;
}

/*Error in this:

     NOTE: Here, there's a potential issue. When reading the operator character,
the newline character (entered when the user presses Enter after entering the first number) is read as the input.
To fix this, you can add a space before the `%c` in the `scanf` to consume the newline character:

     scanf(" %c", &Operator); // Notice the space before %c

 */
