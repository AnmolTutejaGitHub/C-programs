//Count number of digits in a number

main()
{
    int n;
    int count;
    printf("\nEnter the number:");
    scanf("%d",&n);

    int copyofn = n;

    if(n==0)
        count = 1;
    else
  {
    while(n!=0)
    {
        n = n/10;
        count++;
    }
   }
   printf("\nThere are %d digits in the number %d",count,copyofn);
}
