//Swapping of values of two int type variables
#include <stdio.h>
main()
{
 int a,b;
 printf("Enter two numbers:");
 scanf("%d %d",&a,&b);

 //Logic 1
 int c;
 c=a;
 a=b;
 b=c;
 printf("%d %d", a,b);
}
/* 'm not creating separate files to create program with other
logics doin' it here in comments below
logic 2:  logic 3:  logic 4:(bitwise operator) logic 5:
a=a+b;    a=a*b;    a=a^b;                     b=(a+b)-(a=b);
b=a-b;    b=a/b;    b=a^b;
a=a-b;    a=a/b;    a=a^b;  */
