//Counting characters in a string(different way)
#include<stdio.h>

int stringLength(const char*string)
{
    const char*lastAddress=string;

    while(*lastAddress)// ASCII \0 is zero
        ++lastAddress;

return lastAddress-string;
}

int main()
{
    printf("%d\n",stringLength("test"));
    printf("%d\n",stringLength(""));
    printf("%d\n",stringLength("Anmol"));
    return 0;
}
