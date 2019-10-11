#include <stdio.h>
#include <stdlib.h>

typedef struct lista {
    int dato;
    struct lista *next;
} t_nodo;

t_nodo ReverseList(t_nodo *head);

int main() {
    t_nodo *head = malloc(sizeof(t_nodo));
    head->dato = 10;
    head->next = NULL;
    printf("Hello, World!\n");
    return 0;
}

void ReverseList(t_nodo *head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }
    t_nodo *tnd = ReverseList(head->next);
    t_nodo *tndEnd = tnd;
    while (tndEnd->next != NULL) {
        tndEnd = tndEnd->next;
    }

    tndEnd->next = head;
    head->next = NULL;
    return tnd;
}