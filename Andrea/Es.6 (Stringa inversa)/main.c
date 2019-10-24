#include <stdio.h>

#define MaxDim 32

char reverse(char *insert);


int main() {
    int i = 0;
    char insert[MaxDim] = {0};

    printf("Inserisci una stringa: ");
    scanf("%s", insert);
    reverse(insert);
    printf("\n Reverse: %s ", insert);

    return 0;
}

char reverse(char *insert) {
    int i = 0, j = 0, k = 0;
    char c;

    for (i = 0; (insert[i]) != '\0'; i++);
    k = (i-- /
         2);                                             //divido per 2 per le parole dispari, i-- perché l'ultima posizione dell'arrai è \0
    for (j = 0; j != k; j++, i--) {

        printf("i: %d - j: %d - %s ", i, j, insert);
        c = insert[j];
        insert[j] = insert[i];
        insert[i] = c;
        printf(" -|%c|- iter: %s \n", c, insert);
    }
    return insert;
}
