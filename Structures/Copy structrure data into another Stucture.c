//How to copy a structure data into another Structure

#include <stdio.h>
#include <stdlib.h>

struct date
{
    int d,m,y;
};

int main()
{
    struct date d1,d2;

    d1.d=12;
    d1.m=9;
    d1.y=2023;


    //To copy date of d1 into d2

    d2.d=d1.d;
    d2.m=d1.m;
    d2.y=d1.y;

    // Or simply d2=d1;  as same data type

    printf("%d-%d-%d",d2.d,d2.m,d2.y);


    return 0;
}
