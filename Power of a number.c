//C Program to calculate power of a number

main()
{
    int n,m,i;
    long long int val;
    val=1;

    printf("\nEnter a number:");
    scanf("%d",&n);
    printf("\nEnter power:");
    scanf("%d",&m);

    for(i=0;i<n;i++)
    {
        val = val*m;
    }

    printf("\nThe value of %d to the power %d is:%lld",n,m,val);
}
