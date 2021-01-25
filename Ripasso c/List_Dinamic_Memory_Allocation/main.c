#include <stdio.h>
#include <stdlib.h>

struct node {

    int payload;
    struct node *next;

};

typedef struct node List;

List *createList(const int *numNodPtr);

void leggiLista(List *nodePtr);

int main() {

    List *listPtr = NULL;
    int numNodi = 3;

    listPtr = createList(&numNodi);
    leggiLista(listPtr);


    return 0;
}

List *createList(const int *numNodPtr) {

    List *headPtr = NULL, *tailPtr = NULL, *appoggioPtr = NULL;


    for (int i = 0; i < *numNodPtr; ++i) {

        if (i == 0) {
            headPtr = malloc(sizeof(List));

            headPtr->payload = (i + 1) * 10;
            headPtr->next = NULL;

            tailPtr = headPtr;

            printf("Head: %p\n", headPtr);


        } else {

            appoggioPtr = malloc(sizeof(List));
            printf("Node: %p\n", appoggioPtr);


            tailPtr->next = appoggioPtr;

            appoggioPtr->payload = (i + 1) * 10;
            appoggioPtr->next = NULL;

            tailPtr = appoggioPtr;

            printf("Node: %p - %d - %d\n", appoggioPtr, appoggioPtr->payload, tailPtr->payload);


        }
    }

    return headPtr;
}

void leggiLista(List *nodePtr) {

    //  List *tempNodePtr  = nodePtr;
    int nodNum = 1;
    while (nodePtr != NULL) {
        printf("Il valore del nodo %d -> %d\n", nodNum, nodePtr->payload);
        nodNum++;
        nodePtr = nodePtr->next;
    }

}