/* Write a C program for the number of integers within a given range [a, b]. For each integer in the range,
Count how many pairs of integers with their reverses have an absolute difference divisible by the given value `k`. 
The program should prompt the user to input the values of `a`, `b`, and `k`.*/

//My code not working

#include<stdio.h>
#include<math.h>

int main()
{
    long long int a,b,k;
    scanf("%lld %lld %lld",&a,&b,&k);

    int arr[b-a+1];
    int*ptrarr= arr;                          /* created arr to store in this sense if range[47,50],  arr[4] = {47,48,49,50};
                                                . .  .  .   .   .   .   and    revarr stores       revarr[4] = {74,84,94,05}; */

    for(int i=0;i<b-a+1;i++)
     arr[i]=a+i;

     int revarr[b-a+1];               
    for(int i =0;i<b-a+1;i++)
    {
        int cpyarr[b-a+1];
        int*ptrcpyarr=cpyarr;
      for(int j=0;j<b-a+1;j++)
       {
        *ptrcpyarr = *ptrarr;
        ptrcpyarr++;
        ptrarr++;
       }

        int digit = 0;
        revarr[i]=0;
         while(cpyarr[i]!=0)
       {
           digit = cpyarr[i]%10;
          revarr[i] = revarr[i]*10 + digit;
          cpyarr[i]  =  cpyarr[i]/10;
       }
    }
    int count =0;
    for(int i=0;i<b-a+1;i++)
    {
       if(  abs(arr[i] - revarr[i]) %k==0)
           count++;
    }
    printf("%d",count);
}
