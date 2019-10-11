#include <stdio.h>
#include <string.h>

#define MaxDim  10

int somma(int *A, int n);

int main() {
    int array[MaxDim] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int res = somma(array, 10);
    printf("somma: %d", res);
    return 0;
}

int somma(int *A, int n) {
    if (n == 1) {
        return A[0];
    }
    return A[0] + somma(A + 1, n - 1);
}