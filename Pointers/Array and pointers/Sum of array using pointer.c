//Sum of array using pointers

main()
{
    int a[10],*p,i,s=0;

    printf("%\nEnter 10 numbers:");

    for(i=0;i<10;i++)
    {
       scanf("%d",&a[i]);
    }
       p = &a[0];



    for(i=0;i<10;i++)
    {
         s = s+ *p;

         p++;
    }
     printf("Sum=%d",s);

    getch();
}
