#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// print frequency of numbers from 0-9 occuring in a string (hacker rank question digit frequency)
int main() {

    char num[1000] ={} ; //when i run it there were test cases showing error when i took num[100] and error on num[] so what is why to know size of string entered by user
    int i;
    int j;
      scanf("%[^\n]",num);
     for(j=0;j<=9;j++)
     {
         int count =0;
         for(i=0;num[i]!='\0';i++)
         {
            if('0'+j==num[i]) //this part hurt me. num[i] is character so make j a character then it compares only biggest
                count++;

         }
         printf("%d ",count);
     }


    /* I created this to count frequency of each character of string
    wrong ques interpretation
    for(i =0; num[i]!='\0'; i++)
      {
          int count =0;
          for(j=0;num[j]!='\0';j++)
          {
             if(num[i]==num[j])
              { count++;
               printf("%d ",count);
              }
          }
      }   */

    return 0;
}
