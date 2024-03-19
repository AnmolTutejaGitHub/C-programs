// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n=0;
    printf("Enter the size :\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    int idx=0;
    printf("Enter Index :");
    scanf("%d",&idx);
    
    for(int i=idx;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n = n-1;
    
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
