/* print the given pattern
           *
          ***
         *****
        *******
       *********       */

main()
{
    int i,j;
    int n;

    printf("Enter a lines:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
       for(j=1;j<=2*n -1;j++)
        {
            if(j>=n+1-i && j<=n+i-1)
                printf("*");
            else
                printf(" ");
        }
               printf("\n");
    }
}
