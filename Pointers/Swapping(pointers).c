//swapping (pointers)

void swap(int*x,int*y)
{
    int t;
    t = *x;
    *x=*y;
    *y = t;
}

main()
{
    int a;
    int b;

    scanf("%d %d",&a,&b);

    swap(&a,&b);
    printf("%d %d",a,b);
}
