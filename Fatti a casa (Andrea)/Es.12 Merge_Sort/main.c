/* MERGE SORT */
#include <stdlib.h>
#include <stdio.h>

#define max 100

int insert_array(int V[]) {
    int n, i;
    printf("Quanti elementi?: ");
    scanf("%d", &n);

    /* Popola l'array */
    for (i = 0; i < n; i++) {
        printf("elemento %d: ", i);
        scanf("%d", &V[i]);
    }
    return (n);
}

void stampa_array(int V[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", V[i]);
    }
    printf("\n");
    return;
}

void merge(int Array[], int position, int half, int arrayDimension) {
    printf("****** MERGE  ******\n");
    int positionFirstBlock, positionSecondBlock, k = 0, b[max];
    positionFirstBlock = position;
    positionSecondBlock = half + 1;

    while (positionFirstBlock <= half && positionSecondBlock <= arrayDimension) {
        if (Array[positionFirstBlock] < Array[positionSecondBlock]) {
            b[k] = Array[positionFirstBlock];
            positionFirstBlock++;
        } else {
            b[k] = Array[positionSecondBlock];
            positionSecondBlock++;
        }
        k++;
    }

    /* Fill with the remaining boxes */
    while (positionFirstBlock <= half) {
        b[k] = Array[positionFirstBlock];
        positionFirstBlock++;
        k++;
    }
    while (positionSecondBlock <= arrayDimension) {
        b[k] = Array[positionSecondBlock];
        positionSecondBlock++;
        k++;
    }

    /* Enter the ordered items in the original array */
    for (k = position; k <= arrayDimension; k++)
        Array[k] = b[k - position];
    return;
}

void mergeSort(int Array[], int position, int dimension) {
    printf("   %d   ||    %d   \n", position, dimension);

    int half;
    if (position < dimension) {
        printf("------  if  -------\n");
        half = (position + dimension) / 2;
        printf("------  one  -------\n");
        mergeSort(Array, position, half);
        printf("------  two  -------\n");
        /* Second part of the Array */
        mergeSort(Array, half + 1, dimension);
        merge(Array, position, half, dimension);
    } else {
        printf("------ not if  -------\n");
    }
    printf("------ RETURN  -------\n");
    printf("   %d   ||    %d   \n", position, dimension);
    return;
}

int main(void) {
    int dimension, Array[max];
    dimension = insert_array(Array);
    //printf("%d", dimension);
    printf("position || dimension\n");
    mergeSort(Array, 0, dimension - 1);
    stampa_array(Array, dimension);
    return (0);
}
