//Failing Test Cases
#include<stdio.h>
#include<math.h>

int main()
{
    long long int a,b,k;    //I haven't taken conventional names given by the question
    scanf("%lld %lld %lld",&a,&b,&k);
    
    int arr[b-a+1];  //+1 to include both a and b
    for(int i=0;i<b-a+1;i++)
     arr[i]=a+i;
     
     int revarr[b-a+1]; //to store reva,reva+1,...,revb
    
    for(int i =0;i<b-a+1;i++)  //assigning revarr[] values , its not array reversal but if arr[0]=21 then revarr[0] =12 
    {
        revarr[i] = ((arr[i])%10)*10 + (arr[i]/10);

    }
    int count =0;
    for(int i=0;i<b-a+1;i++)
    {
       if( (abs(arr[i] - revarr[i]))%k==0)
           count++;
    }
    printf("%d",count);
  return 0;
}
