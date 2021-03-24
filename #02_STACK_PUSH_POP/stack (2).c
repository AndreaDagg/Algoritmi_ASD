#include <stdio.h>
#include <stdlib.h>

#define EMPTY -1

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node* head;  // puntatore alla testa

void push(int val) {
    Node *new_node;
    new_node = (Node *) malloc(sizeof(Node));
    new_node->data = val;
    new_node->next = head;
    head = new_node;
}

int pop() {
    struct Node *temp;
    int removed_val = EMPTY;

    if (head == NULL)
        printf("Stack is Empty\n");
    else {
        temp = head;
        head = head->next;
        removed_val = temp->data;
        free(temp);
    }

    return removed_val;
}

void print_list() {
    Node* temp = head;

    printf("Stack: ");
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    printf("\n");
}

// stack politica LIFO - last in first out
int main() {
    push(10);
    push(20);
    push(30);
    print_list();

    printf("Pop: %d ", pop());
    printf("\n");
    print_list();

    printf("Pop: %d ", pop());
    printf("\n");
    print_list();

    printf("Pop: %d ", pop());
    printf("\n");
    print_list();

    printf("Pop: %d ", pop());
    printf("\n");

    return 0;
}