//Other ways of structure initialization
#include <stdio.h>

struct date
{
    int d,m,y;
};

int main()
{
    struct date d1={7,2,2023};
    printf("\n%d-%d-%d",d1.d,d1.m,d1.y);

    struct date d2={12,10}; //initializes d,m
    d2.y=2023;
    printf("\n%d-%d-%d",d2.d,d2.m,d2.y);

    struct date d3={.d=17, .m=3};
     d3.y=2089;
    printf("\n%d-%d-%d",d3.d,d3.m,d3.y);

    //Assignment with compound literals
   /* d4=(struct date){9,6,2024};
    printf("\n%d-%d-%d",d4.d,d4.m,d4.y);        //Works only in C11 compiler

    d5=(struct date){.m=9,.d=17,.y=2046};
    printf("\n%d-%d-%d",d5.d,d5.m,d5.y); */

    return 0;
}
