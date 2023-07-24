#include <stdio.h>
#include <stdlib.h>

int main()
{
    int value =0;
    int*pvalue=&value;

    printf("Input an integer:");
    scanf("%d",pvalue);

    printf("you entered:%d\n",value);

    getch();
    return 0;
}
