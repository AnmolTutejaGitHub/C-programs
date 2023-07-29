//string comparison using pointers
#include <stdio.h>

int main()
{
    char s1[100],s2[100],*p1,*p2;
    int f=0;

    printf("\nEnter first string");
    fgets(s1,sizeof(s1),stdin);
    p1=s1;

    printf("\nEnter second string");
    fgets(s2,sizeof(s2),stdin);
    p2=s2;

    while(*p1!='\0' || *p2!='\0')
    {
        if(*p1!= *p2)
        {
            f=1;
            break;
        }
        p1++;
        p2++;
    }
    if(f==0)
        printf("\nStrings are equal XD");
    else
        printf("\nStrings are unequal");

return 0;
}
