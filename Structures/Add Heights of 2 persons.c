//Program to add heights of two persons using structure
#include <stdio.h>
struct height
{
    int f,i;
};

int main()
{
    struct height h1,h2,h3;

    printf("\nEnter 1st height(in format %__ft %__inch):");
    scanf("%dft %dinch",&h1.f,&h1.i);

    printf("\nEnter 2nd height(in format %__ft __inch):");
    scanf("%dft %dinch",&h2.f,&h2.i);

    h3.f=h1.f+h2.f;
    h3.i=h1.i+h2.i;

    if(h3.i>=12)
    {
        h3.f++;
        h3.i=h3.i-12;
    }

    printf("\nThird height is:");
    printf("\nFeet=%d,Inch=%d",h3.f,h3.i);

    return 0;
}
