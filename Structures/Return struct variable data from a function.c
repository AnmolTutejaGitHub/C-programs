//How to return a structure variable data from a function
#include <stdio.h>
#include <stdlib.h>

struct date
{
    int d,m,y;
};

struct date inputdate();  //date is data type of function inputdate

int main()
{
    struct date d1;
    d1=inputdate();
    printf("%d-%d-%d",d1.d,d1.m,d1.y);

    return 0;
}

struct date inputdate()
{
    struct date somedate;
    printf("\nEnter date:");
    scanf("%d/%d/%d",&somedate.d,&somedate.m,&somedate.y);

    return somedate;
}
