#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    
    int grades[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&grades[i]);
        
        if(grades[i]<=100 && grades[i]>=38)
        {
            if(grades[i]%10 < 5 && grades[i]%10 >= 3 && grades[i]%10!=0) 
            //as 40%10 is 0 which is less than 3
            
            grades[i]=grades[i] + (5-grades[i]%10);
            
            if(grades[i]%10 >5 && grades[i]%10>=8 && grades[i]%10!=0)
            grades[i]=grades[i] + (10-grades[i]%10);
        }
    }
    for(int i=0;i<n;i++)
    printf("%d\n",grades[i]);
}

