//Program to add two complex numbers using structures
#include <stdio.h>
#include <stdlib.h>
struct complex
{
int r,i;
};

int main()
{
    struct complex c1,c2,c3;
    printf("\nEnter first complex number");
    printf("\nReal:");
    scanf("%d",&c1.r);

    printf("\nImaginary:");
    scanf("%d",&c1.i);


    printf("\nEnter second complex number");
    printf("\nReal:");
    scanf("%d",&c2.r);

    printf("\nImaginary:");
    scanf("%d",&c2.i);


    c3.r=c1.r+c2.r;
    c3.i=c1.i+c2.i;

    printf("\nThird complex  number is:");
    printf("\nReal=%d,Imaginary=%d",c3.r,c3.i);


    return 0;
}
