// storage and scoping in  c

// storage class 

#include <stdio.h>
//#include"fileToImportName"

int f1(){
    static x = 0;
    printf("%d\n",x++);
}

int main() {
   
   auto int a = 23 ; // by default it is auto and auto has garbage vaalue if not assigned // scope : local
   
   f1(); // as static scope is global and also default value is 0 not garbage 
   f1();
   f1();


    // extern int r ; // if u want to take a variable from another file // also include the file where r is defined as int r /// #include"filename" // scope global
    
    // default value of extern is 0
    
    register int c = 10;
    // value is stored in register instead of RAM 
    // scope local 
    // default value 0;
    // advantage : can access fast 
    
    
    return 0;
}
