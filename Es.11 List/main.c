#include <stdio.h>
#include <stdlib.h>

typedef char Value;

typedef struct list {
    char value;
    struct list *next;
} list_A;

void crateNode(char p, list_A *tail);

void printList(list_A *list);

int main() {
    Value insert;
    list_A *head = NULL;
    head = malloc(sizeof(list_A));
    if (head == NULL) {
        return 1;
    }
    head->value = 'a';
    head->next = NULL;
    printList(head);
    printf("\ninserisci un carattere: ");
    scanf("%c", &insert);

    crateNode(insert, head);
    printList(head);

    return 0;
}

void crateNode(char p, list_A *tail) {

    tail->next = malloc(sizeof(list_A));
    tail->next->value = p;
    tail->next->next = NULL;
}

void printList(list_A *list) {
    int i = 1;
    while (list != NULL) {
        printf("L'elemento [%d] della lista ha valore: %c \n", i, list->value);
        list = list->next;
        i++;
    }
}
