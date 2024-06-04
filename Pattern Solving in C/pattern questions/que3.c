// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1

#include <stdio.h>
int main()
{
    int n=5;
    int i=0;
    int j=0;

    while(i<n){
        j = 0;
        while(j<=i){
            if(i%2==0 && j%2==0) printf("1");
            else if(i%2==0) printf("0");
            else if(i%2!=0 && j%2==0) printf("0");
            else printf("1");
            j++;
        }
        i++;
        printf("\n");
    }
    return 0;
}
