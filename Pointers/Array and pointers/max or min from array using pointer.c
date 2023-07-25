//Find out maximum and minimum from array using pointer

main()
{
    int a[10],i, *p, max = -32786, min = 32767;

    printf("\nEnter 10 elements");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);

   p=a;

   for(i=0;i<10;i++)
   {
       if(*p>max)
        max=*p;

       if(*p<min)
        min=*p;


       p++;
   }

printf("\nMax=%d,Min=%d",max,min);

}
