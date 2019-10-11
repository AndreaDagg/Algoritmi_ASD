/*
 * Dati due array A e B, verificare che B è l'inverso di A
 * */
#include <stdio.h>
#include <string.h>

#define MaxDim 64

int reverse(char *A, char *B, int lenght);

int main() {
    int res = 0;
    char StringA[MaxDim], StringB[MaxDim];
    printf("La stringa B e' sottostringa della Stringa A ?\nInserisci la stringa A: ");
    scanf("%s", StringA);
    printf("Inserisci la stringa B: ");
    scanf("%s", StringB);

    if ((int) strlen(StringA) == (int) strlen(StringB)) {
        res = reverse(StringA, StringB, (int) strlen(StringA));
        if (res == 1) {
            printf("La stringa %s e' inversa di %s", StringB, StringA);
        } else if (res == 0) {
            printf("La stringa %s non e' inversa di %s", StringB, StringA);
        }
    } else {
        printf("Le stringhe non sono inverse! Non hanno stessa lunghezza!");
        return 0;
    }
    return 0;
}

int reverse(char *A, char *B, int lenght) {
    if (lenght == 0) {
        return 1;
    }
    return ((A[0] == B[lenght - 1]) && reverse(A + 1, B, lenght - 1));


}