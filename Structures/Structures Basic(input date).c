//Input date from user and prints it
#include <stdio.h>

 struct date       //Structure declaration , date is data type
    {
       int d,m,y; // d,m,y are structural member variables
    };


int main()
{

    struct date d1,d2;   //d1,d2 are variables of data type date . d1 and d2 are structure variables

    d1.d=10;      //structureVariable.memberVariable
                  // . is member access operator
    d1.m=8;
    d1.y=2023;
    printf("%d-%d-%d",d1.d , d1.m , d1.y);


    printf("\nEnter date(in dd/mm/yy format only):");
    scanf("%d/%d/%d",&d1.d,&d1.m,&d1.y);    //   '\' as delimiter
    printf("%d-%d-%d",d1.d , d1.m , d1.y);

    return 0;
}
