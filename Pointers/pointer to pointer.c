//Pointer to pointer

main()
{
    int a=5;
    int*p=&a;
    int**pp=&p; //Two leveled pointer

    printf("%d,%d,%d,%d,%d",a,p,*p,pp,*pp,**pp); //think pp as b so *pp=*b
                                              //p=address of a
                                              //*p=dereferencing p = a
                                              //**pp= dereferencing pp two times = dereferencing(dereferencing pp)=dereferencing &p = p =&a
}                                    //** is dereferencing here in above comments (remember not pointer declaration that is the confusion here while dereferencing two times)
