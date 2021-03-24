#include <stdio.h>
#include <stdlib.h>

struct node {

    int payload;
    struct node *next;

};

/* TODO: e' corretto chiamrlo lista?*/
typedef struct node List;

List *createList(const int *numNodPtr);

int count_List(List *headPTR);

void insert_node(const int *positionPtr, List *headerPTR);

void leggiLista(List *nodePtr);

List *delete_node(List *NodePtr, const int *nodeToDelete);

int main() {

    List *listPtr = NULL;
    int numNodi = 3, insert;

    listPtr = createList(&numNodi);
    leggiLista(listPtr);

    int cout = count_List(listPtr);
    printf("\nLa lsita ha %d elementi\n", cout);

    do {
        printf("Dove inserire il nodo? da 0 a %d -> ", cout+1);
        scanf("%d", &insert);
    } while (insert < 0 || insert > cout+1);
    insert_node(&insert, listPtr);
    leggiLista(listPtr);

    cout = count_List(listPtr);
    do {
        printf("Dove elimino il nodo? da 0 a %d -> ", cout);
        scanf("%d", &insert);
    } while (insert < 0 || insert > cout);
    listPtr = delete_node(listPtr, &insert);
    leggiLista(listPtr);


    return 0;
}

List *createList(const int *numNodPtr) {            //Funzione che ritorina l'indirizo di memeoria di un tipo lista

    List *headPtr = NULL, *tailPtr = NULL, *appoggioPtr = NULL;


    for (int i = 0; i < *numNodPtr; ++i) {

        if (i == 0) {
            headPtr = malloc(sizeof(List));           //alloca memoria della dimensione di un tipo List

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

    return headPtr;                                      //e' sufficente ritornare l'indirizzo dell'header
}

void leggiLista(List *nodePtr) {
    printf("\n");

    int nodNum = 0;
    while (nodePtr != NULL) {
        printf("Il valore del nodo %d -> %d\n", nodNum, nodePtr->payload);
        nodNum++;
        nodePtr = nodePtr->next;
    }

}

void insert_node(const int *positionPtr, List *headerPTR) {
    int countNode = 0;
    List *precedenteNodo = malloc(sizeof(List));
    if (*positionPtr == 0) {

        List *newNode = malloc(sizeof(List));
        newNode->payload = 1000 + *positionPtr;
        newNode->next = headerPTR;
        headerPTR = newNode;
        leggiLista(headerPTR);
    } else {

        while (headerPTR != NULL && countNode != *positionPtr) {

            precedenteNodo = headerPTR;
            headerPTR = headerPTR->next;
            countNode++;

        }
        if (countNode == *positionPtr) {
            List *newNode = malloc(sizeof(List));
            newNode->payload = 1000 + *positionPtr;

            precedenteNodo->next = newNode;
            newNode->next = headerPTR;

        } else {
            //Non esiste la posizione nella lista
        }

    }
}

List *delete_node(List *headPtr, const int *nodeToDelete) {

    int coutNode = 0;
    List *PrecNodePtr;
    List *tempoNode = headPtr;

    while (tempoNode != NULL && *nodeToDelete != coutNode) {
        PrecNodePtr = tempoNode;
        tempoNode = tempoNode->next;
        coutNode++;
    }

    if (*nodeToDelete == 0) {
        headPtr = tempoNode->next;
        free(tempoNode);
        return headPtr;
    } else if (coutNode == *nodeToDelete) {
        tempoNode = PrecNodePtr->next;
        PrecNodePtr->next = PrecNodePtr->next->next;
        free(tempoNode);
        return headPtr;

    }

    //   return NodePtr;
}

int count_List(List *headPTR) {
    int c = -1;
    while (headPTR != NULL) {
        headPTR = headPTR->next;
        c++;
    }

    return c;
}