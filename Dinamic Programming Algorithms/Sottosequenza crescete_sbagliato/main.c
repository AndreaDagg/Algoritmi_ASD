/* Si consideri un array A[1..n] composto da n numeri reali distinti, non ordinato. Si vuole determinare la
massima lunghezza di una sottosequenza di A composta da elementi in ordine crescente. Non è richiesto che la sottosequenza sia composta da elementi contigui.
Ad esempio, supponendo che A = [4, 1,-1,3, 10, 11], possibili sottosequenze composte da valori crescenti
sono [1, 3, 11], oppure [4, 10, 11], oppure [1, 3, 10, 11] (si noti che i valori vanno considerati nell'ordine in
cui compaiono in A). Nel caso dell'array di esempio, l'algoritmo deve restituire il valore 4 in quanto la più
lunga sottosequenza di valori crescenti ha lunghezza 4 (in particolare [1, 3, 10, 11] oppure [-1, 3, 10, 11]
sono due sottosequenze di lunghezza massima).
1. Scrivere un algoritmo basato sulla programmazione dinamica per calcolare la massima lunghezza di
una sottosequenza crescente. (Suggerimento: sia L[j] la massima lunghezza di una sottosequenza
crescente di A[1..j] avente A[j] come ultimo elemento)
2. Calcolare il costo computazionale dell'algoritmo di cui al punto precedente.*/

#include <stdio.h>


int sottosequenza(int *n, int *A) {


    int L[*n], i = 0, j = 0;

    while (j < *n) {
        if (j == 0) {
            L[i] = 1;
            j++;
            printf("caso base: %d %d %d\n", i, j, L[i]);
        } else if (A[i] > A[j]) {
            L[j] = L[i];
            i++;
            j++;

            printf("caso no: %d %d %d\n", i, j, L[i]);
        } else {
            L[j] = L[i] + 1;
            i++;
            j++;

            printf("caso si: %d %d %d\n", i, j, L[i]);
        }
    }

    return L[(*n) - 1]; //massima sottosequenza composta da ultimo elemento dell'array
}

int main() {

    int A[] = {4, 1, -1, 3, 10, 11};

    int n = sizeof A / sizeof *A;

    printf("la sottosequenza maggiore e': %d", sottosequenza(&n, A));
    return 0;
}


