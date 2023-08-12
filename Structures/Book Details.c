//How to read and print details of book using structures in C

#include <stdio.h>
struct book
{
    int bno;
    char name[10];
    float price;
};

int main()
{
    struct book b;

    printf("\nEnter book number");
    scanf("%d",&b.bno);

    printf("\nEnter book name");
    fflush(stdin);
    gets(b.name);

    printf("\nEnter book price");
    scanf("%f",&b.price);

    printf("\nBook Details are ........");
    printf("\nBook number:%d",b.bno);
    printf("\nBook name:%s",b.name);
    printf("\nBook price:%f",b.price);

    return 0;
}
