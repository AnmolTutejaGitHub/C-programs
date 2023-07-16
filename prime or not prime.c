//write a number to check whether a given number is prime or not
main()
{
   int n,i;
   printf("Enter a number:");
   scanf("%d",&n);

   for(i=2;i<n;i++)
    if(n%i==0)
       break;

  if(i==n)
    printf("Prime");
   else
   printf("Not Prime");

   getch();
}
