//How array and pointer works in C

main()
{
    int a[]={9,76,547,67,65};

    int*p,i;

    p=&a[0];

    for (i=0;i<=5;i++)
    {
        printf("\n%d,%d,%d,%d",i,a[i],*p,p);

        p++;

    }

}

/*array of pointers

int a[5];                       OR    int a,b,c,d,e;
int *p[5]; //array of pointers        int*p;int i;

p[0]=&a[0]; //assigning               p[0]=&a;
p[1]=&a[1];                           p[1]=&b;
p[2]=&a[2];  //assignment operator    p[2]=&c;
p[3]=&a[3];                           p[3]=&d;
p[4]=&a[4];                           p[4]=&e;

                                      for(     )
                                      {
//note-- *(p+i) means same as a[i]       *(p[i])   //to access a,b,c,d,e
         *(p+i)=a[i] not an assignment
          operator but telling writing
          *(p+i) is as good as a[i]                            }
*/


