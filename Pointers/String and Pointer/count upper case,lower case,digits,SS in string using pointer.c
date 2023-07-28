//Count uppercase,lower case,digits and special symbols in string using pointers

#include <stdio.h>

int main()
{
    char str[50],*p;

    int c1=0,c2=0,c3=0,c4=0;

    printf("\nEnter string:");
    gets(str);

    p=str;

    while(*p!='\0')
    {
        if(*p>=65 && *p<=90)  //upper case
            c1++;
        else
        if(*p>=97 && *p<=122) //lower case
            c2++;
        else
        if(*p>=48 && *p<=57)
            c3++;
        else
            c4++;

    p++;
    }
    printf("\nUpper case = %d,Lower case =  %d,digits=%d,special symbols = %d",c1,c2,c3,c4);

    return 0;
}
/* my initial code giving wrong values because I have not initialised c1,c2,c3,c4 and they cointain garbage values*/
