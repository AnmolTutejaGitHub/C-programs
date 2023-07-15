// printing arguments passed in main function

#include <stdio.h>

 main(int argc , char *argv[]) {

int i;

for(i=0; i<argc; i++)
printf("\n%s",argv[i]);

getch();

 }
