/** Progettare ed implementare una funzione C che, dato un array ordinato di n numeri, restituisca un albero binario di ricerca con i numeri nell’array come chiavi. Si richiede inoltre che l'altezza dell'albero sia  O(log n).
**  Calcolare il costo computazionale asintotico dell'algoritmo proposto in funzione di n. [18 punti]
**  Si richiede che il costo computazionale asintotico dell'algoritmo proposto sia O(n) [30 punti].*/

#include <stdio.h>
#include<stdlib.h>

struct Nodo {
    int key;
    struct Nodo *sinistro;
    struct Nodo *destro;
};

struct Nodo *BST(int *array, int inizio, int fine);

void inOrder(struct Nodo *nodo);


int main() {
    int arrayOrdinato[] = {1, 3, 8, 15, 16, 21, 25};
    int n = sizeof(arrayOrdinato) / sizeof(arrayOrdinato[0]);

    struct Nodo *radice = BST(arrayOrdinato, 0, n - 1);

    printf("Inorder: ");
    inOrder(radice);

    return 0;
}

struct Nodo *BST(int *array, int inizio, int fine) {

    if (inizio > fine)
        return NULL;

    int centrale = (inizio + fine) / 2;
    struct Nodo *nuovoNodo = malloc(sizeof(struct Nodo));

    nuovoNodo->key = array[centrale];
    nuovoNodo->sinistro = BST(array, inizio, centrale - 1);
    nuovoNodo->destro = BST(array, centrale + 1, fine);

    return nuovoNodo;
}

void inOrder(struct Nodo *nodo) {
    if (nodo == NULL)
        return;

    inOrder(nodo->sinistro);
    printf("%d ", nodo->key);
    inOrder(nodo->destro);
}

