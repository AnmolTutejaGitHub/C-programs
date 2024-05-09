#include <stdio.h>
char *func(int arr[]);
int main() {
    int arr []  = {1,2,3,4};
    char* arr2 = func(arr); // as func returns pointer dso it has also to be a pointer // can't do char arr2[]
    
    for(int i=0;arr2[i]!='\0';i++){
        printf("%c",arr2[i]);
    }

    return 0;
}

char* func(int arr[]){ // can pass array 
    static char f[] = "Hello"; //static as pointer need to point globally to access not locally
    return f; // can return this as array name is pointer to its 1st element
} // can't have return type as char[] func(...)

// arr[i] is element
// arr is pointer to arr[0]
// printf("%p",arr) and printf("%p",&arr[0]) are same
// printf("%d",*arr); // == arr[0];
// printf("%d",*(arr+1)); // arr[1];
// printf("%d",*(arr+2)); // arr[2];

// int * ptr = arr; // or int*ptr = &arr[0];

// for(int i=0;i<4;i++){ printf("%d",*(ptr+i));

// can pass pointer to array
#include <stdio.h>
void func(int* arr);
int main() {
    int arr []  = {1,2,3,4};
    func(arr);
    for(int i=0;i!=4;i++){
        printf("%d ",arr[i]); // 1 2 20 4
    }

    return 0;
}

void func(int* arr){ // note int arr is integer don't apply  arr is pointer to arr[0] 
    arr[2] = 20;
}

// pointer and string
#include <stdio.h>

int main() {
     char arr [] = "Hello";
     char * ptr = arr; // char*ptr = &arr[0];
    for(int i=0;arr[i]!='\0';i++){
        printf("%c",*(ptr+i));
    }

    return 0;
}
