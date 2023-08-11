//Structures containing Arrays
#include <stdio.h>
struct month
{
    int numberOfDays;
    char name[3];
};

int main()
{
    struct month aMonth;
    aMonth.numberOfDays = 31;
    aMonth.name[0]='J';
    aMonth.name[1]='a';
    aMonth.name[2]='n';

    printf("%d,%s",aMonth.numberOfDays,aMonth.name);

    return 0;
}
