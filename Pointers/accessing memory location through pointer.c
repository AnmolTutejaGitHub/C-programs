//How to access and modify a memory location through pointers

main()
{
    int a=5;
    int*p; //pointer declaration
    p=&a;  //& means address of

    a= a+ *p; //a=5+ *&a -- * is dereferencing operator

    printf("\nValue of a=%d",a); //10
    printf("\nValue of a through p = %d", *p);  //10

    *p = *p + a; //*&a = *&a+a  =10+10=20

    printf("\nValue of a =%d",a); //20
    printf("\nValue of a through p=%d",*p);  //20
}
