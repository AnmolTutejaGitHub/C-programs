/* Write a function to find next Prime number of a given number */

int isPrime(int n)
{
    int i;

    for(i=2;i<n;i++)
    {
        if(n%i==0)
            return 0;
    }
            return 1;
}

int nextPrime(int n)
{    while(!isPrime(++n));

         return n;
}

int main()
{
    int n;
    int result;
    scanf("%d",&n);
   result =  nextPrime(n);
   printf("%d",result);

return 0;
}
