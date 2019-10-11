/*
 * Una stringa è sottostringa di un'altra se nella prima rimuovendo dei caratteri ottengo la secondad.
 * Stringe non contigue.
 * ANA è sottostringa di ANNA
 * */
#include <stdio.h>

#define MaxDim 64
int subString(char *A, char *B);
int main() {
    char StringA[MaxDim], StringB[MaxDim];
    printf("La stringa B e' sottostringa della Stringa A ?\nInserisci la stringa A: ");
    scanf("%s", StringA);
    printf("Inserisci la stringa B: ");
    scanf("%s", StringB);

    int res = subString(StringA,StringB);
    if (res == 1){
        printf("La stringa %s e' sottostringa di %s",StringB,StringA);
    } else if (res == 0){
        printf("La stringa %s non e' sottostringa di %s",StringB,StringA);
    }



    return 0;
}

int subString(char *A, char *B) {
    if (B[0] == '\0') {
        return 1; //true
    } else if (A[0] == '\0') {
        return 0; //false
    } else if (A[0] == B[0]) {
        return subString(A + 1, B + 1); //ricorsione
    }else {
        return subString(A + 1, B);
    }
}