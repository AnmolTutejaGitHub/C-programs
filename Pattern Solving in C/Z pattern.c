// https://www.hackerearth.com/problem/algorithm/pattern/?purpose=login&source=problem-page&update=google
//Input n=4
// Output:
// ****
//   *
//  *
// ****

#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);   

	int i=0;
	int j=0;

	while(i<n){
        j=0;
		while(j<n){
			if(i==0 || i==n-1) printf("*");
			else if(j==n-1-i) printf("*");
            else printf(" ");
			j++;
		}
		i++;
		printf("\n");
	}          	      
	
	return 0;
}
