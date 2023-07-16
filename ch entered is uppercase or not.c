//A program to find if a character entered by user is uppercase or not
#include<stdio.h>
  main(){
char ch;
printf("Enter character:");
scanf("%c",&ch);

if (ch>='A' && ch<='Z')
    printf("uppercase");
 else
    if(ch>='a' && ch<='z')
     printf("lowercase");
 else
    printf("Not a valid input");

}
