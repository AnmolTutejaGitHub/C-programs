#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

char str[1000];
gets(str);
int i=0;

for(i=0;str[i]!='\0';i++)

    {
        if(str[i]==' ')
         {str[i]='\n';}
         
    }
    
    str[i]='\0';
    
    puts(str);
    
    
    return 0;
}
