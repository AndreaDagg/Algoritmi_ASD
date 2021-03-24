#include <stdio.h>
//algoritmo di ordinamento selection sort in linguaggio C

int main() {
    int a[10] = {5, 8, 0, 1, 4, 2, 4, 3, 9, 7};
    int i, j, min, t;
//t è la variabile temporanea utilizzata per lo scambio

    for (i = 0; i < 9; i++) {
        min = i;
        for (j = i + 1; j < 10; j++) {
            if (a[j] < a[min])
                min = j;
        }
        t = a[min];
// si trova l'elemento più piccolo dell'array e si scambia con l'elemento alla posizione i
        a[min] = a[i];
        a[i] = t;
        printf("%d ", a[i]);
    }
}