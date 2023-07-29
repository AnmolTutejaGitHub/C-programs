//Finding square of a number using pointer
 #include <stdio.h>

void square(int *const x)
{
    *x=(*x) * (*x);
}
int main()
{
    int num =9;

    square(&num);
    printf("\nThe square of given number is %d\n",num);
    return 0;
}
