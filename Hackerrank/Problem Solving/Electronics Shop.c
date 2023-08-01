#include<stdio.h>

int main()
{
   long long int b,n,m;   //n: size for k
    //m: size for d
    // b: bills
    scanf("%lld %lld %lld",&b,&n,&m);
    
    long long int k[n];    //array of keyboards models
    for(int i=0;i<n;i++)
    scanf("%lld",&k[i]);
    
    long long int d[m];    //array of drive models
    for(int i=0;i<m;i++)
    scanf("%lld",&d[i]);
   
   //will be calculation that max k,m which is less than b 
   
  // long long int maxkm = k[0]  + d[0]; //Largest wala
  //causing problem in cases where k[0]+d[0] > b
  
  long long int maxkm = -1;
   
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
           // if(k[i]>=b  || d[j]>=b)
           // {maxkm = -1;}              is setting maxkm=-1 every time k[i]>=b || d[j]>=b , we want to do this if k[i]>=b || d[j]>=b every time if all models of keybord or if all models of drive >=b
           //no need of this test as I already set maxkm=-1 in declaration so now remove else part in below statement
           
            
            if(k[i]+d[j]>maxkm  && b>=k[i]+d[j])
            maxkm= k[i]+d[j];
            
            
        }
    }
    printf("%lld",maxkm);
}
