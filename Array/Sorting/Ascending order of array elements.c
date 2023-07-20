//Sorting -- ascending order
// there cam be many logics below logic is called insertion sorting

void insertion_sort (int a[],int size)
{
    int i,j,temp;
    for(i=1;i<size;i++)
    {
        temp = a[i];

        for(j=i-1;j>=0;j--)
        {
            if(a[j]>temp)
            {
                a[j+1]=a[j];
            }
            else break;
        }

                a[j+1]=temp;
    }
}


main()
{
    int a[]={44,71,23,98,54,16,12,39,50,81,29,7,58};
    int i;
    for(i=0;i<=13;i++)
        printf("%d ",a[i]);
        printf("\n");

        insertion_sort(a,14);
        for(i=0;i<13;i++)
            printf("%d ",a[i]);

            getch();
}
