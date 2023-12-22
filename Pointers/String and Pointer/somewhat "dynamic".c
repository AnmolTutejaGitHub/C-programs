#include <stdio.h>

int main() {
    // Write C code here
    char *str1="Hello World";
    //char str1[100];
    char *str2="The boys";
    char *temp;
    
    temp=str1;
    str1=str2;
    str2=temp;
    printf("%s %s",str1,str2); //The boys Hello World
    

    return 0;
}
