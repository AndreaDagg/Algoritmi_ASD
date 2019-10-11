#include <stdio.h>
#include <string.h>

/*
 * Un array è palindromo (Ricorsivamente) se il primo e l'ultimo elemento sono uguali
 * ed il restante array (restante blocco dell'array) è palindromo*/
#define MaxDim 64

int palindromo(char *S, int n);

int main() {
    char Stringa[MaxDim];

    printf("\n Inserisci stringa: ");
    scanf("%s", Stringa);

    int length = (int) strlen(Stringa);
    int res = palindromo(Stringa, length);
    if (res == 1) {
        printf("\n Palindroma");
    } else if (res == 0) {
        printf("\n Not Palindroma");
    }

    return 0;
}

int palindromo(char *S, int n) {
    if (n <= 1) {
        return 1;
    }
    return ((S[0] == S[n - 1]) && palindromo(S + 1, n - 2));
}