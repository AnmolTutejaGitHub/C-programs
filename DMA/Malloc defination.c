//malloc Declaration
#include<stdlib.h>
#include <stdio.h>

int main()
{
    int *p;
    p = (int*)malloc(4);  // 4 -- 4 byte memory box is created
    *p=98; //Dereferencing
    printf("%d",*p);

    int*ptr = (int*)malloc(20);  //20byte=4*5,4 is size of one int, now this can store 5 elements




    return 0;
}
