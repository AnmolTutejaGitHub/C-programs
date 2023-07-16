//write a program to concatenate an array element by element
//with reference to my github program(reverse a number)
main()
{
    int array[]={1,2,3,4,5,6}; //taking example not in continuation of reverse a no. program
    int array_size=sizeof(array)/sizeof(array[0]); //to get no. of elements of the array,doing this to get loop condition

    int i;
    int concatenated=0;

    //concatenate the elements index by index

    for(i=0;i<array_size;i++)
    {
        concatenated=concatenated*10+array[i];
    }
    printf("concatenated value:%d",concatenated);
}
