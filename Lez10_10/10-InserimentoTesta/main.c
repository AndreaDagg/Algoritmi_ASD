#include <stdio.h>
#include <stdlib.h>

typedef struct list {
    int dato;
    struct list *next;
} t_nodo;

t_nodo *InserimentoTesta(t_nodo *l, int n);

void printList(t_nodo *list);

int main() {
    int ins = 0;
    t_nodo *lista = malloc(sizeof(t_nodo));
    lista->next = NULL;
    lista->dato = 99;

    printf("Inserisci un intero: ");
    scanf("%d", &ins);
    printf("hai inserito: %d ", ins);

    printList(lista);
    InserimentoTesta(lista, ins);
    printList(lista);


    return 0;
}

t_nodo *InserimentoTesta(t_nodo *l, int n) {
    t_nodo *t = (t_nodo *) malloc(sizeof(t_nodo));

    t->dato = n;
    t->next = l;

    return t;
}

void printList(t_nodo *list) {
    int i = 1;
   while (list->next != NULL){
        printf("\nL'elemento [%d] della lista ha valore: %d \n", i, list->dato);
        list = list->next;
        i++;
    }
}
