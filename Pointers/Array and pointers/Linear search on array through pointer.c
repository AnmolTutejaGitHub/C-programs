//Linear search on array through pointer

main()
{
    int a[10],i,n,f=0,*p;

    printf("\nEnter 10 elements:");
      for(i=0;i<10;i++)
        scanf("%d",&a[i]);

      printf("\nEnter the number which you want to search");
      scanf("%d",&n);

      p=a;

      for(i=0;i<10;i++)
      {
          if(*p==n)
          {
              f=1;
              break;
          }
          p++;
      }
      if(f==1)
        printf("\nNumber is found XD");
      else
        printf("\nNumber is not found");
}
