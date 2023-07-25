//Sum of elements of array using pointers

int arraySum(int array[],const int n) //n -- array size , no. of elements in an array
{
    int sum =0, *ptr;

    int*const arrayEnd = array + n; // p=a+i; //arrayEnd -- pointing towards end of an array

    for(ptr = array/* p=a wala expression*/;ptr <arrayEnd ;ptr++)
        sum+=*ptr;

    return sum;

}

int main(void)
{
    int arraySum(int array[],const int n);

    int values[10]={3,7,-9,3,6,-1,7,9,1,-5};

    printf("The sum is %d\n",arraySum(values,10));

    return 0;
}



