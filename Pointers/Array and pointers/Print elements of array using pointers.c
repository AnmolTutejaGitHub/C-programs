//Print elements of array using pointers

#include<stdio.h>
int main()
{
    int a[10],*p,i;
    printf("\nEnter 10 elements");
    for(i=0;i<10;i++)
     scanf("%d",&a[i]);

    p=a; //Name of array provides base address of array

    printf("\nArray contains ..........");

    for(i=0;i<10;i++)                          // can also use
    {
        printf("\n%d", *(p+i));                //printf("\n%d", *p);
                                               //p++;
    }
    return 0;
}

