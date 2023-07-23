int main()
{
  int x = 5;

  printf("%d\n",x);
  printf("%d\n",&x); //& -- takes variable gives address of it, referencing operator
  printf("%d\n",*&x); //* -- takes address gives variable , dereferencing operator

  *&x = 100; //& is referencing to address of x while * is dereferencing the address so it means x=100;
  printf("%d\n",x);

   x=5;

   int j;             //WTF is this running? int*j is the way. ok got it
   j=&x;
   printf("%d\n",j);
  // printf("%d\n",*j); // *-- dereferencing operator *j =*&x = x   //wtf is this showing error while *y not

   int*y;            // here y is special variable /pointer //  * is a symbol here not a dereferencing operator
   y=&x;
   printf("%d\n",y);
   printf("%d\n",*y);

   printf("%p\n",&x);
   printf("%p\n",y);// p is format specifier to print address

   int b=100;
   int* g=&b;
   *g=167; //*g=*&b=b
   printf("%d\n",b);


   //extended concept of pointers

   int i = 56;
   printf("%d\n",i);

   int* m = &i;

   int **k = &m; // as pointing to a pointer , no. of * = pointer level, so int i is 0 level but int *m is 1st level pointer
   printf("%p\n",k);
  //or
  printf("%d",&m);

   //pointers arithematics (details in NB)

   printf("%d\n",m);
   printf("%d\n", m+1); //gives base address of variable by shifting &i(=m) by 4(size of 1 variable is 4 bytes)

   printf("%p\n",m);
   printf("%p\n",m+1);


   getch();


return 0;
}

