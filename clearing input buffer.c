#include <stdio.h>
//#include<conic.h>

int main()
{
    int a;
    int b;
    char c;

    scanf("%d",&a);
    scanf("%d",&b);
    while (getchar() != '\n');
    //getch();
    //fflush(stdin);
    scanf("%c",&c);

    printf("%d",a);
    printf("%d",b);
    printf("%c",c);
    return 0;
} // working
