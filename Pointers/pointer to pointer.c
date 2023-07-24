//Pointer to pointer

main()
{
    int a=5;
    int*p=&a;
    int**pp=&p; //Two leveled pointer

    printf("%d,%d,%d,%d,%d",a,p,*p,pp,*pp,**pp); //think pp as b so *pp=*b
                                              //p=address of a
                                              //*p=dereferencing p = a                                                                 //not *pp=&p note int**p is declaration , pp is variable(pointer) and **pp is dereferencing pp two times 
                                              //**pp= dereferencing pp two times = dereferencing dereferencing pp =dereferencing dereferencing(&p)(as pp=&p) =dereferencing p = dereferencing &a = a
}                                    //** is dereferencing here in above comments (remember not pointer declaration that is the confusion here while dereferencing two times)
