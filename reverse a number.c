//write a program to reverse a given number
/*the original question asked was to print in reverse but at the same time
i have to store reverse no. in a variable(so that can be used in future)
eg x=123,so revx=321 here revx is a variable is storing reversed number,
i am not getting that logic right now will try in future
clicked: create a program to convert an int array into a single variable 
where the values are concatenated index by index*/
main()
{
   int n;
   int a[100];

   printf("Enter a number to be reversed:");
   scanf("%d",&n);

   for(int i=0;n!=0;i++)        //can put it in if statmenr if n=0 print 0 else (put this loop)
    {
        a[i]=n%10;
   printf("%d",a[i]);
        n=n/10; //as it is int so don't store point value
    }
   if (n==0)
{ printf("%d",n);}   /*also think if number entered is 00 (more than 1 zeros) or get rid of n!=0 condition
                      and get a better condition*/
}
