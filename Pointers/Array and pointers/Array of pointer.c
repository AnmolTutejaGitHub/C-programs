//Array of Pointer

main()
{
    int a=5, b=6 , c=7;

    int i, *p[3];  //Array of pointer otherwise I have to create p1,p2,p3
    //pointer is declared in form of array

    p[0]=&a;
    p[1]=&b;
    p[2]=&c;

    for(i=0;i<3;i++)
    {
        printf("\n%d",*(p[i]));
    }
    return 0;
}
