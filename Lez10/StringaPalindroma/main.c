#include <stdio.h>
#include <string.h>

#define MaxDim 50

int main() {
    char stringa[MaxDim];

    printf("Inserisci una stringa: ");
    scanf("%s", stringa);

    int i = 0, j = (int) strlen(stringa) - 1;

    printf("\nLunghezza stringa %d", j);
    while (i < j) {
        if (stringa[i] != stringa[j]) {
            break;
        }
        i++;
        j--;
    }
    if (i < j) {
        printf("\nLa stringa non e' palindroma");
    } else {
        printf("\nLa stringa e' palindroma");
    }

    return 0;
}