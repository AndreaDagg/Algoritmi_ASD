/* La CODA viene implemantata tramite un alista concatenata che ne rispetti i vincoli. */
#include <stdio.h>
#include <stdlib.h>

#define EMPTY -1

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node *head;  // puntatore alla testa
Node *tail;  // puntatore alla coda

// inserimento in coda
void enqueue(int val) {
    Node *new_node;
    new_node = (Node *) malloc(sizeof(Node));

    new_node->data = val;
    new_node->next = NULL;
    if (head == NULL) {
        head = tail = new_node;     //head e tail puntano a new node
    } else {
        tail->next = new_node;      //inserimento in coda
        tail = new_node;
    }
}

// rimozione in testa
//La CODA segue una politica FIFO quindi si elimina con l'operazione di dequeue il nodo in testa, il primo inserito.
int dequeue() {
    struct Node *temp;
    int removed_val = EMPTY;

    if (head == NULL)
        printf("Queue is Empty\n");
    else {
        removed_val = head->data;

        temp = head;                //associamo a temp l'indirizzo di memoria di head
        head = head->next;          //head diventa il suo nodo collegato
        free(temp);                 //liberiamo l'area di memoria
    }

    return removed_val;
}

void print_list() {
    Node *temp = head;

    printf("Queue: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    printf("\n");
}

// stack politica FIFO - first in first out
int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    print_list();

    printf("Remove: %d ", dequeue());
    printf("\n");

    print_list();

    printf("Remove: %d ", dequeue());
    printf("\n");

    print_list();

    printf("Remove: %d ", dequeue());
    printf("\n");
    print_list();

    printf("Remove: %d ", dequeue());
    printf("\n");

    return 0;
}