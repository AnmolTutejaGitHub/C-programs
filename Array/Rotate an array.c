/* write a function to rotate an array elements by 1 position towards right*/

void rotateRight(int a[],int size)
{
    int i;
    int temp; //A variable to store last index

    temp=a[size-1];
    for(i=size-2; i>=0; i--)
    {
       a[i+1] = a[i];
    }
       a[0]=temp;

}

main()
{
    int i,a[]={70,20,60,40,50,100,20,45,79,33};

    for(i=0;i<=9;i++)
        printf("%d ",a[i]);
    printf("\n");

    rotateRight(a,10);
     for(i=0;i<=9;i++)
     printf("%d ",a[i]);

     getch();
}

//to rotate array n times --- call rotateRight n times

/* void rotateN (int a[], int size, int n)
{
   while(n--)
    rotateRight(a,size);
}  */


