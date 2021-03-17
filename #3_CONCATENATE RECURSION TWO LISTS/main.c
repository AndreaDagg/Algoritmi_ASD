#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

/* Funzione di stampa lista ricorsiva */
void print_list(Node *head) {
    if (head == NULL) {
        return;
    }

    printf("%d ", head->data);
    print_list(head->next);
}

/* Funzione per concatenare due liste */
void concatenate(Node *head1, Node *head2) {
    if (head1->next == NULL) {
        head1->next = head2;
        return;
    }

    concatenate(head1->next, head2);
}

int main() {
    Node *prev_node, *new_node;
    Node *list1, *list2;
    int i;

    //crea iterativamente due liste
    list1 = NULL;
    for (i = 0; i < 3; i++) {
        new_node = (Node *) malloc(sizeof(Node));
        new_node->data = i + 1;
        new_node->next = NULL;
        if (list1 == NULL) {
            list1 = new_node;
        } else {
            prev_node->next = new_node;
        }
        prev_node = new_node;
    }
    printf("List 1: ");
    print_list(list1);
    printf("\n");

    list2 = NULL;
    for (i = 0; i < 5; i++) {
        new_node = (Node *) malloc(sizeof(Node));
        new_node->data = i + 1;
        new_node->next = NULL;
        if (list2 == NULL) {
            list2 = new_node;
        } else {
            prev_node->next = new_node;
        }
        prev_node = new_node;
    }

    printf("List 2: ");
    print_list(list2);
    printf("\n");

    concatenate(list1, list2);

    printf("Merged: ");
    print_list(list1);
    printf("\n");

    return 0;
}