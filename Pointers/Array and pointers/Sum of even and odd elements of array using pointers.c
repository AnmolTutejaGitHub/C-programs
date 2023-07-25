//Sum of even and odd elements of array using pointers
main()
{
    int a[10],*p,s1=0,s2=0,i;
    printf("\nEnter 10 elements:");
     for(i=0;i<10;i++)
        scanf("%d",&a[i]);

p=a;

  for(i=0;i<10;i++)
  {
      if(*p%2 == 0)
        s1=s1+ *p;
        else
            s2=s2 + *p;

    p++;
  }

  printf("\nEven Sum =%d\n Odd Sum=%d",s1,s2);

  getch();
}
