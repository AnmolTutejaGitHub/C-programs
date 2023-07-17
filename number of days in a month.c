/*write a program which takes month number as an input from user
and displays number of days in that month*/
#include<stdio.h>
int main()
{
    int month;
    printf("Enter month number:");
    scanf("%d",&month);

switch(month)
{
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("\nDays 31");
        break;

    case 2:
        printf("\nDays 28");
        break;

    case 4:
    case 6:
    case 9:
    case 11:
        printf("\nDays 30");
        break;

    default:
       printf("\nInvalid Input");
    }

    getch();

    return 0;
}
