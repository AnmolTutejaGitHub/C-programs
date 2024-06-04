// 1 
// 2 3 
// 6 5 4 
// 7 8 9 10 
// 15 14 13 12 11 
// 16 17 18 19 20 21 
// 28 27 26 25 24 23 22 

// https://www.hackerearth.com/problem/golf/print-the-pattern/

#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int i=0;
	int j=0;
	int count = 0;
	int count_i2 = count+1+i;
	while(i<n){
		j = 0;
		int onetime = 0;
		while(j<=i){
			if(i%2==0) // reverse string // maintin count occurence
			{	if(!onetime){
				count_i2 = count+1+i;
				onetime = 1;
                count=count_i2;
			}
				printf("%d ",count_i2--);
			}

			else printf("%d ",++count);
			j++;
		}
		printf("\n");
		i++;
	}	
}
