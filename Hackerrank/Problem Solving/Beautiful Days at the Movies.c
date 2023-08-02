/* #include<stdio.h>
#include<math.h>

int main()
{
    long long int a,b,k;
    scanf("%lld %lld %lld",&a,&b,&k);
    
    int arr[b-a+1];  //+1 to include both a and b
    int*ptrarr= arr;
    for(int i=0;i<b-a+1;i++)
     arr[i]=a+i;
     
     int revarr[b-a+1]; //to srore reva,reva+1,...,revb
    
    for(int i =0;i<b-a+1;i++)  //assining revarr[] values , its not array reversal but if arr[0]=21 then revarr[0] =12 
    {
        //revarr[i] = ((arr[i])%10)*10 + (arr[i]/10);  only doing for 2 digits nos.
        
    //    int cpyarr[] my code isnt working because I was changing value of arr[] and when its needed outside while loop it has changed hence errors; cpy[b-a+1] cant be done due to variable size
    
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
       if( (abs(arr[i] - revarr[i]))%k==0)
           count++;
    }
    printf("%d",count);
} */

//Pinku help to update code

#include<stdio.h>
#include<math.h>

int main()
{
    long long int a, b, k;
    scanf("%lld %lld %lld", &a, &b, &k);

    int arr[b - a + 1];
    int revarr[b - a + 1];

    // Store integers in arr[]
    for (int i = 0; i< b - a + 1; i++)
        arr[i] = a + i;

    // Calculate reverse numbers and store in revarr[]
    for (int i = 0; i < b - a + 1; i++)
    {
        int num = arr[i];
        int reversed = 0;
        while (num != 0)
        {
            int digit = num % 10;
            reversed = reversed * 10 + digit;
            num = num / 10;
        }
        revarr[i] = reversed;
    }

    int count = 0;
    for (int i = 0; i < b - a + 1; i++)
    {
        if (abs(arr[i] - revarr[i]) % k == 0)
            count++;
    }

    printf("%d", count);
    return 0;
}
