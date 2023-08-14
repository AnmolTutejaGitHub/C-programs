/* print the given pattern
            ABCDCBA
            ABC CBA
            AB   BA
            A     A  */
#include<stdio.h>

int main()
{
    int i,j,lines;
    char k;
    printf("Enter the number of lines you want to print:");
    scanf("%d",&lines);

    for(i=1;i<=lines;i++)
    {
        k ='A';
     for(j=1;j<=2*lines-1;j++)
     {
         if(j<=lines+1-i || j>=lines-1+i)
          {
              printf("%c",k);
              j<lines?k++:k--;
          }

       else
       {
           printf(" ");
           if(j==lines)
            k--;
        }
     }
       printf("\n");
   }
   return 0;
}

