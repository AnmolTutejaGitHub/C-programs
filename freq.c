// freq in c
#include <stdio.h>

int main() {
    int map[256]={0}; //initalise all element to 0 map[256] will give garbage value
    char arr[] = "Hello";
    
    for(int i=0;arr[i]!='\0';i++) map[arr[i]]++;
    
    for(int i=0;arr[i]!='\0';i++) 
        printf("%c --> %d ",arr[i],map[arr[i]]); // H --> 1 e --> 1 l --> 2 l --> 2 o --> 1 

    return 0;
}
