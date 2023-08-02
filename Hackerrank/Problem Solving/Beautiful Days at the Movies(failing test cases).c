#include<stdio.h>
#include<math.h>

int main()
{
    long long int a,b,k;
    scanf("%lld %lld %lld",&a,&b,&k);
    
    int arr[b-a+1];  //+1 to include both a and b
    for(int i=0;i<b-a+1;i++)
     arr[i]=a+i;
     
     int revarr[b-a+1]; //to srore reva,reva+1,...,revb
    
    for(int i =0;i<b-a+1;i++)  //assining revarr[] values , its not array reversal but if arr[0]=21 then revarr[0] =12 
    {
        //revarr[i] = ((arr[i])%10)*10 + (arr[i]/10);  only doing for 2 digits nos.
        
        int digit = 0;
        revarr[i]=0;
         while(arr[i]!=0)
       {
           digit = arr[i]%10;
          revarr[i] = revarr[i]*10 + digit; 
          arr[i]  =  arr[i]/10;
       }
    }
    int count =0;
    for(int i=0;i<b-a+1;i++)
    {
       if( (abs(arr[i] - revarr[i]))%k==0)
           count++;
    }
    printf("%d",count);
}
