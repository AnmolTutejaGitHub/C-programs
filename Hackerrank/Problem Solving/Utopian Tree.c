#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    
    
    
    int H;

while(t)
{
    H=1; //set H=1 foe each test cases
    int n;
    scanf("%d",&n);
    
        for(int i=0;i<n;i++)
        {
            if(i%2==0)  //For Spring
            H=2*H;
            
            else 
                 H=H+1;
    
        }
         printf("%d\n",H);
t--;
} 
return 0; 
}
