// Online C compiler to run C program online
// Online C compiler to run C program online


//pointers basics -2
#include <stdio.h>

int main() {
    
int myAge = 43; // an int variable

printf("%d\n", myAge);  // Outputs the value of myAge (43)
printf("%p\n", &myAge); // Outputs the memory address of myAge (0x7ffe5367e044)
    
int a=88;
int *aptr=&a;

//aptr=64;
*aptr=64; //derefrerencing //same as *&a ==a

printf("%d\n",a);//64



int arr[]={12,67,8,9,70};
   int *ptr=arr; // writing arr passes base address of arr i.e &arr[0]
   
   // int *ptr=&arr[0];
   
   ptr[1]=98; 
   //*ptr[2]=101; will show error
//   in the line *ptr[2]=101;, you are trying to dereference the value at the third element of the array using array subscript ([]) before applying the dereference (*) operator. However, the subscript operator has higher precedence than the dereference operator, so you need to use parentheses to make it clear that you want to dereference the third element. It should be *(ptr + 2) = 101; or ptr[2] = 101;.


// if ptr has base address of arr ie arr[0] then why u ptr[1] is possible  ?
// In C, when you use an array name without an index, it represents the base address of the array. Therefore, ptr is initialized with the base address of the array arr, which is equivalent to &arr[0]. When you use array subscript notation on a pointer, it's a way of accessing elements relative to the base address.

// So, when you write ptr[1], it's equivalent to *(ptr + 1), and this accesses the value at the memory location offset by the size of one element from the base address. In the case of an array of integers, this means accessing the second element of the array.

// ptr[1] is equivalent to *(ptr + 1), which is the value at the memory location offset by the size of one element from the base address.
// ptr[2] is equivalent to *(ptr + 2), which is the value at the memory location offset by the size of two elements from the base address.


  *(ptr+2)=34;
   
   int arrLength = sizeof(arr) / sizeof(arr[0]);
   for(int i=0;i<arrLength;i++){
   printf("%d ",arr[i]); //12 98 34 9 70 
   }
   
   printf("\n");
   int *ptr2=arr;
   for(int i=0;i<arrLength;i++){
       printf("%d ",*ptr); // 12 12 12 12 12
       
   }
   
    printf("\n");
   for(int i=0;i<arrLength;i++){
   printf("%d ",*ptr2); //12 98 34 9 70 
       ptr2++; // incresing memory address by 4 bytes(size of int ptr+1 == increased address to which ptr pointing by 1(integer) == increased by 4 bytes)
   }
   
    printf("\n");
//array and pointers concept 
//Well, in C, the name of an array, is actually a pointer to the first element of the array.


//The memory address of the first element is the same as the name of the array:

int myNumbers[4] = {25, 50, 75, 100};

// Get the memory address of the myNumbers array
printf("%p\n", myNumbers); //0x7ffe70f9d8f0

// Get the memory address of the first array element
printf("%p\n", &myNumbers[0]); //0x7ffe70f9d8f0

// Get the value of the first element in myNumbers
printf("%d\n", *myNumbers); //25

// Get the value of the second element in myNumbers
printf("%d\n", *(myNumbers + 1)); //50

// Get the value of the third element in myNumbers
printf("%d\n", *(myNumbers + 2)); //75




   
   
   //strings and pointers 
   char str[] = "Hello";
char *ptr3 = str; // equivalent to char *ptr3 = &str[0];

printf("First character: %c\n", *ptr3);   // prints the first character 'H'
    printf("Second character: %c\n", *(ptr3 + 1)); // prints the second character 'e'

    // Using the pointer to traverse and print the entire string
    printf("String: "); //String: Hello
    while (*ptr3 != '\0') {
        printf("%c", *ptr3);
        ptr3++; // Move the pointer to the next character
    }
    
    
    // Define a string literal and initialize a pointer to it
    char *str2 = "hello world";

    // Update the pointer to point to a new string literal
    str2 = "hey";

    // Print the updated string
    printf("\nUpdated String: %s\n", str2);//Updated String: hey

   //Here's the explanation:

// String Literal Initialization:

// char *str = "hello world";: This initializes a pointer str to the address of the first character of the string literal "hello world". String literals are arrays of characters, and the pointer str points to the beginning of this array.
// Updating the Pointer:

// str = "hey";: This updates the pointer str to now point to the beginning of the string literal "hey". The pointer is not pointing to a variable array; instead, it's reassigning the address to a new string literal.
   
    

    return 0;
}
