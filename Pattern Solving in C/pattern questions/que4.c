// A
// AB
// ABC
// ABCD
// ABCDE

#include <stdio.h>
int main()
{   
    int n = 5;
    int i=0;
    int j=0;

    while(i<n){
        j = 0;
        while(j<=i){
            printf("%c",j+'A');
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
