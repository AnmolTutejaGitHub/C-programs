#include <stdio.h>

int main()
{
    int a ; // to be entered by user 
    int b;
   char arr[10][10] = {"zero","one","two","three","four","five","six","seven","eight","nine"} ;
    char(*ptr)[10]=arr;
    //printf("Enter a number(1-9):");
    
        scanf("%d",&a);
        scanf("%d",&b);
        for(int i=a;i<=b;i++)  //Range[a,b] is given
        {
          if( i>=1 && i<=9)
          printf("%s\n",ptr[i]);
          else if (i%2 ==0)
          printf("even\n");
          else
          printf("odd\n");  
        }
          
    return 0;
}

