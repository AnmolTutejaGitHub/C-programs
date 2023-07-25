//Sum of two 1D arrays using pointers

main()
{
    int a[10],b[10],c[10],*p1,*p2,*p3,i;

    printf("\nEnter 10 elements of 1st array:");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);

    printf("\nEnter 10 elements of 2nd array:");
    for(i=0;i<10;i++)
    scanf("%d",&b[i]);

    p1=a; //Name of array provides address of array
    p2=b;
    p3=c;

    for(i=0;i<10;i++)
    {
        *p3 = *p1  + *p2;

        p1++;
        p2++;
        p3++;
    }

    printf("\nAddition.......\n");
    for(i=0;i<10;i++)
        printf("\n%d",c[i]);

getch();

}
