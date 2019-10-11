#include <stdio.h>


int main() {
    int length = 3;
    int value[length];
    char *address[length]; //Array di puntatori
    int insert;

    printf("\n");
    printf("Inserisci valore: ");
    printf("\n");

    for (int i = 0; i < length; ++i) {
        printf("%d", i + 1);
        printf(" Valore: ");
        scanf("%d", &insert); //Legge da tastiera
        value[i] = insert;
        address[i] = &value[i]; //Legge la partizioene di memoria

    }

    printf("\n");
    printf(" Valori inseriti: ");
    printf("\n");

    for (int i = 0; i < length; ++i) {
        printf("Index: ");
        printf("%d", i);
        printf(" Value: ");
        printf("%d", value[i]);
        printf(" Address -> ");
        printf("%p", address[i]);
        printf("\n");
    }

    printf("\n");
    printf(" Array contrario: ");
    printf("\n");

    for (int i = length-1; i > -1; --i) {
        printf("Index: ");
        printf("%d", i);
        printf(" Value: ");
        printf("%d", value[i]);
        printf(" Address -> ");
        printf("%p", address[i]);
        printf("\n");
    }
}