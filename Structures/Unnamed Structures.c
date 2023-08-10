/* Unnamed Structures
If all of the variables of a particular structure type are defined when the structure is defined ,
the structure name can be omitted */

#include <stdio.h>

struct
{
    int d,m,y;
}d1;

int main()
{
    d1.d=5;
    d1.m=9;
    d1.y=2023;
    printf("%d-%d-%d",d1.d,d1.m,d1.y);

    return 0;
}
