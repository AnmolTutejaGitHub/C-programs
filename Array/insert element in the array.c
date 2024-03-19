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
    
    // input index and element in the array
    int idx=0;
    printf("Enter Index :");
    scanf("%d",&idx);
    int ele ;
    printf("Enter element to insert:");
    scanf("%d",&ele);
    
    
    // increment size of array
    n = n+1;
    
    // right shift from idx 
    // main logic
    for(int i=n-1;i>idx;i--){
        arr[i]=arr[i-1];
    }
    arr[idx] = ele;
    
    
    // printing array to check
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
