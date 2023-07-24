//Calculate factorial of a number using pointer

main()
{
    int n,*p , f=1,i;

    printf("\nEnter a number:");
    scanf("%d",&n);

    p=&f;

    for(i=1;i<=n;i++)
    {
        *p = (*p) * i ; //f = f * i ;
    }
    printf("Factorial=%d",f);
}
