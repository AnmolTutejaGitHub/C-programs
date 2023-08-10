//Function Call by passing structure
#include <stdio.h>
#include <stdlib.h>

struct date
{
    int d,m,y;
};

struct date inputdate();  //date is data type of function inputdate

void showdate(struct date somedate);

int main()
{
    struct date d1;
    d1=inputdate();
    somedate(d1);

    return 0;
}

struct date inputdate()
{
    struct date somedate;
    printf("\nEnter date:");
    scanf("%d/%d/%d",&somedate.d,&somedate.m,&somedate.y);

    return somedate;
}

void showdate(struct date somedate)
{
    printf("%d-%d-%d",somedate.d,somedate.m,somedate.y);
}
