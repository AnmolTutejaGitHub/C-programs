#include <stdio.h>
#include <string.h>

void reverseStr(char str[])
{
    char a;
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++)
    {
        a = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = a;
    }
}

int main()
{
    char str[100];
    scanf("%s", str);

    reverseStr(str);
    printf("%s", str);

    return 0;
}
