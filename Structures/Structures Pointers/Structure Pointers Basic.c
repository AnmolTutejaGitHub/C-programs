//Structure Pointer Basic

#include <stdio.h>
#include <stdlib.h>

struct date
{
    int d,m,y;
};

int main()
{
    struct date d1,d2;
    struct date*p;
    p=&d1;

    d1.d = 5;
    d1.m = 10;
    d1.y = 2023;

    d2 = *p;   //means d2=d1;
    printf("%d-%d-%d\n",d2.d,d2.m,d2.y);

    p->d=10;  // means d1.d=10;
    p->m=2;

     printf("%d-%d-%d\n",d1.d,d1.m,d1.y);

     (*p).d=12;  //means d1.d=12;
     (*p).m=3;

      printf("%d-%d-%d\n",d1.d,d1.m,d1.y);


    return 0;
}
