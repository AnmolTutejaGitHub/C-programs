#include <stdio.h>
#include <math.h>
#include <string.h>
// binary to decimal
int main(){
    int n;
    scanf("%d",&n);
    int res = bToD(n);
    printf("%d",res);
    return 0;
}

int bToD(int n){
    int count = 0;
    int deci = 0;
    while(n!=0){
        int rem = n%10;
        deci+=pow(2,count)*rem;
        count++;
        n=n/10;
    }
    return deci;
}
