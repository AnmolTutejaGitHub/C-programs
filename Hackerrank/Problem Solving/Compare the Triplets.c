#include<stdio.h>

int main()
{
   int a[3] ;
   int alice=0;
   int bob=0;
   
   for(int i=0;i<3;i++)
   scanf("%d",&a[i]);
   
   int b[3];
   for(int i=0;i<3;i++)
    scanf("%d",&b[i]);
    
    for(int i=0;i<3;i++)
    {
        if(a[i]>b[i])
        alice++;
        
       else if(a[i]==b[i]);
        
       else if(a[i]<b[i])
       bob++; 
    }
    
    printf("%d %d",alice,bob);
    
return 0;
}
