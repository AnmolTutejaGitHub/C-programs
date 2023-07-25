//Swapping of two 1D array using pointers

 main()
 {
     int a[10],b[10],*p1,*p2,i;
     p1=a;
     p2=b;

     printf("\nEnter 10 elements of first array:");
      for(i=0;i<10;i++)
        scanf("%d",&a[i]);

      printf("\nEnter 10 elements of second array:");
      for(i=0;i<10;i++)
      scanf("%d",&b[i]);

      for(i=0;i<10;i++)
      {
          *p1 = *p1 + *p2;
          *p2 = *p1 - *p2;
          *p1 = *p1 - *p2;

          p1++;
          p2++;
      }
      for(i=0;i<10;i++)
      {
          printf("\n%d\n%d",a[i],b[i]);
      }

      getch();
 }
