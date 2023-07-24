#include <stdio.h>

int main() {
    int n = 0;
    void* pn = &n; // pn points to the address of n

    printf("Value of n (via void* pn): %d\n", *(int*)pn); // Dereferencing as int pointer

    float r = 3.14;
    pn = &r; // Now pn points to the address of r

    printf("Value of r (via void* pn): %f\n", *(float*)pn); // Dereferencing as float pointer

    return 0;
}
