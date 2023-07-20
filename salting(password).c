/*Find salted form of a password entered by user if the salt is "123"
and added at the end*/
#include<stdio.h>
#include<string.h>
void salting(char password[]);

main()
{
    char password[500];

    printf("EnterPassword");
    scanf("%s",password);

    salting(password);
}

void salting(char password[]){
char salt[]="123";
char newPassword[600];

strcpy(newPassword , password);
strcat(newPassword,salt);

puts(newPassword);
}
