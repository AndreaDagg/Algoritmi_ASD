/*
 * Suddividere l'array in due array della stessa taglia se possibile ed effettuare la somma con la
 * ricorsione. Se non possono essere divisi in array della stessa taglia, l'elemento in eccesso
 * va al porssimo array*/
#include <stdio.h>

#define MaxDim  10

int somma_suddivisione(int *A, int n);

int main() {
    int array[MaxDim] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int res = somma_suddivisione(array, 10);
    printf("RES: %d", res);
    return 0;
}

int somma_suddivisione(int *A, int n) {

    if (n == 1) {
        return A[0];
    }

    return somma_suddivisione(A, n / 2) + somma_suddivisione(A + (n / 2), n - (n / 2));
}