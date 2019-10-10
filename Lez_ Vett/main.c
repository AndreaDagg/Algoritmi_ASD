#include <stdio.h>

#define MaxDim 3
extern int MAX;
int MAX = 0;

unsigned num_vette(int A[], unsigned n);

int main() {
    int A[MaxDim] = {9, 2, 8};
    num_vette(A, MaxDim);
    printf("%d", MAX);
    return 0;
}
// Non funziona
unsigned num_vette(int A[], unsigned n) {
    if (n == 1) {
        MAX = A[0];
        return 1;
    }
    return (num_vette(A + 1, n - 1) + (A[0] > MAX));
}

//boots

