//Count positive,negative and zero elements of array using pointer

main()
{
    int a[10],*p,c1=0,c2=0,c3=0,i;
    printf("\nEnter 10 elements");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);

    p=a;

    for(i=0;i<10;i++)
    {
        if(*p>0)
            c1++;
        else if (*p<0)
            c2++;
        else c3++;

        p++;
    }
    printf("\n positive =%d\nNegative=%d\nZero=%d",c1,c2,c3);
}
