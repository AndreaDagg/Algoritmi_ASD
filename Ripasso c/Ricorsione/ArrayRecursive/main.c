#include "stdlib.h"
#include <stdio.h>

#define ARRAYDIMENTION 3


struct node {
    int value;
    struct node *next;
};

typedef struct node List;

void leggiLista(List *headerPTR);


void maxList(List *headerPtr, const int *lunghezzaLista, int *MAX, int iterata);

void MaxArray(int Array[ARRAYDIMENTION], int lunghezza, int *MAX, int iter);

void printArray(int Array[ARRAYDIMENTION], int lunghezza);

int main() {
    /**
     * @lenght:     lunghezza dell'array o della lista passata in input
     * @iter:       conta le iterazioni nei cicli
     * @insert:     valore dainserire nei nodi e nelle celle vettoriali passto in input
     * @Max:        Intero, massimo di una lista o Array, aggiornato per rideriemnto (poiter)
     * @scelta:     Intero usato come boolean per il menù della scelta
     * @ArrayList:  Header della lista creato con allocazione dinamica
     * @ArrayCollection:    Array di grandezza dichiarata con DEFINE */
    int length = 0, iter = 0, insert = 0, Max = 0, scelta = 0;
    List *ArrayList = malloc(sizeof(List)), *tailPTR = NULL;
    int ArrayCollection[ARRAYDIMENTION];

    /**
     *@do_While:    controlla se si inserisce un valore che ha senso inserire */
    do {
        printf("(1).Max di una Lista\n");
        printf("(2).Max di un Array\n");
        printf("scelta: ");
        scanf("%d", &scelta);
        printf("\n");
    } while (scelta > 2 || scelta < 1);


    switch (scelta) {
        /**
         *@case1:   crea la lista dinamicamente della grandezza passata in input
         *@case2:   Crea l'Array inserendo i valori passati in input*/
        case 1:
            printf("Quanto deve essere grande la lista? ");
            scanf("%d", &length);


            while (iter < length) {
                List *newNode = malloc(sizeof(List));

                printf("Valore da inserire: ");
                scanf("%d", &insert);

                if (iter == 0) {
                    ArrayList->value = insert;
                    ArrayList->next = newNode;
                    tailPTR = ArrayList;
                } else {
                    tailPTR->next = newNode;

                    newNode->value = insert;
                    newNode->next = NULL;
                    tailPTR = newNode;
                }

                iter++;
            }

            printf("\nLa Lista e':\n");
            leggiLista(ArrayList);
            maxList(ArrayList, &length, &Max, 0);
            break;
        case 2:
            printf("L'array contiene %d elementi\n", ARRAYDIMENTION);

            while (iter < ARRAYDIMENTION) {
                printf("Valore da inserire: ");
                scanf("%d", &insert);
                ArrayCollection[iter] = insert;
                iter++;
            }

            printArray(ArrayCollection, ARRAYDIMENTION);
            MaxArray(ArrayCollection, ARRAYDIMENTION, &Max, 0);

            break;
        default:
            break;
    }


    printf("\n\nIl Max: %d", Max);


    return 1;
}

/**
 * cerca il valore maassimo di una Lista/Array aggiornado il @Max per riferimento */
void maxList(List *headerPtr, const int *lunghezzaLista, int *MAX, int iterata) {

    if (headerPtr == NULL) {
        return;
    }
    if (iterata == 0) {
        *MAX = headerPtr->value;
        iterata++;
    } else {
        if (headerPtr->value > *MAX) {
            *MAX = headerPtr->value;
        }
    }
    return maxList(headerPtr->next, lunghezzaLista, MAX, iterata);
}

void leggiLista(List *headerPTR) {

    while (headerPTR != NULL) {
        printf("Valore: %d\n", headerPTR->value);
        headerPTR = headerPTR->next;
    }

}

void MaxArray(int Array[ARRAYDIMENTION], int lunghezza, int *MAX, int iter) {

    if (iter > lunghezza) {
        return;
    }
    if (iter == 0) {
        *MAX = Array[iter];
    } else {
        if (Array[iter] > *MAX) {
            *MAX = Array[iter];
        }
    }
    return MaxArray(Array, lunghezza, MAX, iter + 1);
}

void printArray(int Array[ARRAYDIMENTION], int lunghezza) {
    for (int i = 0; i < lunghezza; ++i) {
        printf("\nPosizione %d -> %d", i, Array[i]);
    }
}