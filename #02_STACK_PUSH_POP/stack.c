/* Dallo Stack che segue la politica LIFO si rimuove sempre in testa tramite l'operazioen
 * detta POP e si inserisce con la PUSH */
#include <stdio.h>
#include <stdlib.h>

#define EMPTY -1

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node *head; //puntatore alla testa non crea quidni un vero è proprio nodo ma solo un puntatore

void push(int val) {
    struct Node *new_node;
    new_node = (Node *) malloc(sizeof(struct Node));    //crea il nodo in memoria
    new_node->data = val;
    new_node->next = head;
    head = new_node;            //si fa sempre questa operazione perché appunto si inserisce semnpre in testa
}

int pop() {
    struct Node *temp;
    int removed_val = EMPTY;

    if (head == NULL)
        printf("La coda e' vuota\n");
    else {
        temp = head;
        head = head->next;
        removed_val = temp->data;
        free(temp);
    }
    return removed_val;
}

void print_list() {
    Node *temp = head;

    printf("Stack|Pila: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

//stack politica LIFO
int main() {
    push(10);
    push(20);
    push(30);

    print_list();

    for (int i = 0; i <= 3; ++i) {
        printf("Pop: %d ", pop());
        printf("\n");
        print_list();
    }


    return 0;
}