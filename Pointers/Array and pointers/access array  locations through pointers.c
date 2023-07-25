//How to access and modify array location through pointers

main()
{
    int i, a[10],b[10],*p1,*p2;

    printf("\nEnter 10 elements:");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);

    p1=a;
    p2=b;

    for(i=0;i<10;i++)
     {
        *p2 = *p1;
        p1++;
        p2++;
     }
     printf("\nSecond array contains.....");
      for(i=0;i<10;i++)
        printf("\n%d",b[i]);

getch();
}
