//realloc function


#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char*str=NULL;

    /*Initial memory allocation*/
    str=(char*)malloc(6*sizeof(char));
    strcpy(str,"Anmol");
    printf("string=%s,Address=%p\n",str,str);

    /*Reallocating memory*/
    str=(char*)realloc(str,5*sizeof(char));
    strcat(str,".com");
    printf("String=%s , Address=%p\n",str,str);

    free(str);

    return 0;
}
