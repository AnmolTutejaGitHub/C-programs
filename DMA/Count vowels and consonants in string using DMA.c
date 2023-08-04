//Count vowels and consonants in string using DMA

#include<stdio.h>
#include<stdlib.h>

int main()
{
   int n,c1=0,c2=0,i=0;
   char*p;
   printf("\nEnter size of string:");
   scanf("%d",&n);
   p=(char*)malloc(n*sizeof(char));

   printf("\nEnter string:");
   fflush(stdin);
   gets(p);

   while(*(p+i)!='\0')
   {
       if(*(p+i)=='A'||*(p+i)=='E'||*(p+i)=='I'||*(p+i)=='O'||*(p+i)=='U'||*(p+i)=='a'||*(p+i)=='e'||*(p+i)=='i'||*(p+i)=='o'||*(p+i)=='u')
        c1++;
       else
           c2++;

       i++;
   }
   printf("\nVowels:%d\nConsonants:%d",c1,c2);

   free(p);
   return 0;
}
