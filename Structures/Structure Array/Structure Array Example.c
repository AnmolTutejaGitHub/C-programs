//Structure Array

#include <stdio.h>
#include <stdlib.h>

struct date                //Data type declaration
{
    int d,m,y;
};

int main()
{
    struct date dob[4];

    printf("\nEnter date of birth of four students:");

    for(int i=0;i<4;i++)
        scanf("%d-%d-%d",&dob[i].d,&dob[i].m,&dob[i].y);

    for(int i=0;i<4;i++)
    {
        printf("\nDate of birth of %d student is %d-%d-%d",i+1,dob[i].d,dob[i].m,dob[i].y);
    }

    return 0;
}
