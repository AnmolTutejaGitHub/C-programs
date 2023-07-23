// Some Basics(pointers)

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

   int*y;            // here y is special variable /pointer
   y=&x;
   printf("%d\n",y);







return 0;
}

