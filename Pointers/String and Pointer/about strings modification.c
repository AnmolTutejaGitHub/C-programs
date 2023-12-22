// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    char str[100]="hello World";
    printf("%s",str);
    
    
    
    str[0]='m';
    printf("%s",str); //mello World
    
    //can not do this
    //str="hey";
    //printf("%s",str) //error
    
    
    
    //can achieve above with help of pointers
    char *str2="Hello World";
    str2="Hey";
    printf("%s",str2); //Hey
    
    

    return 0;
}
