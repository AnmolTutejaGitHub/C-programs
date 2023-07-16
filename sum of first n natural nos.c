//Calculate sum of first n natural numbers

main()
{
    int i,sum,n;
    printf("Enter a number:");
    scanf("%d",&n);

    for(i=1,sum=0;i<=n;sum=sum+i,i++);

    printf("Sum of first %d natural numbers is %d",n,sum);
}
