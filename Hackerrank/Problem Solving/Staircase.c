#include <stdio.h>

int main() {
    int height;
    scanf("%d", &height);

    for (int i = 1; i <= height; i++) 
    {
        for (int j = 1; j <= height - i; j++) {
            printf(" ");
        }

        for (int k = 1; k <= i; k++) {
            printf("#");
        }
        
        printf("\n");
    }

    return 0;
}
