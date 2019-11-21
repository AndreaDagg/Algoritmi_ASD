#include <stdio.h>
#include <stdlib.h>

int main() {
    int lenght1 = 30, lenght2 = 20;
    int A[lenght1], B[lenght2], C[lenght1 + lenght2];

    for (int i = 0; i < lenght1 + lenght2; ++i) {
        if (i >= lenght1) {
            B[i-lenght1] = rand() % 99;  //Ottengo la posizione iniziale di B1 toglindo il max index di A1 ad i
        } else {
            A[i] = rand() % 99;
        }
    }


    for (int i = 0; i < lenght1 + lenght2; ++i) {
        if (i >= lenght1) {
            C[i] = B[i-lenght1];
            printf("B");
            printf("%d", i - lenght1);
            printf(" -> ");
            printf("%d", B[i - lenght1]);
            printf("\n");
        } else {
            C[i] = A[i];
            printf("A");
            printf("%d", i);
            printf(" -> ");
            printf("%d", A[i]);
            printf("\n");
        }
    }

    printf("Array Merge: ");
    for (int i = 0; i < lenght1 + lenght2; ++i) {
        printf("%d", C[i]);
        printf("|");
    }

    return 0;
}