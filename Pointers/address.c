#include<stdio.h>
int main(){

    int i = 5;
    
    printf("%d\n",i); // 5 
    printf("%d\n",&i); // 1953098520 // address 
    printf("%p\n",i); // 0x5 // address in hexadecimal form
    printf("%p\n",&i); //0x7ffe748f7da8
    
    int*ptr;
    printf("%d\n",ptr); //-1646845984 // garbage value or randon address ???
    
    int * ptr1 = &i;
    printf("%d\n",ptr1); // 1953098520
    printf("%p\n",ptr1); // in hexa decimal form
    printf("%d\n",&ptr1); // address of ptr1
    
    int **ptp = &ptr1; 
    printf("%p\n",ptp);// 0x7ffd6e71d5c8
    printf("%d\n",*ptp); // value at (address of ptr1)
    printf("%d\n",**ptp); // 5  // value at (value at (address of i))

  
  
}
