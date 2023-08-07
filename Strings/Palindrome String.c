//Implement a function to check if a given string is a Palindrome (reads same forwards and backwards)
#include <stdio.h>
#include<string.h>

void isPalindrome(char str[])
{
    int i;
    int rev[100];
    int count=0;

    int n= strlen(str);

   for(i=0;i<n;i++)
   {
      rev[i]=str[n-i-1];
   }

   for(i=0;i<n;i++)
   {
       if(rev[i]==str[i])
        count++;
   }

   if(count==n)
    printf("\nYes");
   else
    printf("\nNope!");
}

int main()
{
    char str[100];
    printf("\nEnter string:");
    gets(str);


    isPalindrome(str);

    return 0;
}
