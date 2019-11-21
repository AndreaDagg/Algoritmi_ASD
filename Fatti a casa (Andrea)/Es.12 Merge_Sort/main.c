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

void merge(int a[], int p, int q, int r) {
    int i, j, k = 0, b[max];
    i = p;
    j = q + 1;

    while (i <= q && j <= r) {
        if (a[i] < a[j]) {
            b[k] = a[i];
            i++;
        } else {
            b[k] = a[j];
            j++;
        }
        k++;
    }
    while (i <= q) {
        b[k] = a[i];
        i++;
        k++;
    }
    while (j <= r) {
        b[k] = a[j];
        j++;
        k++;
    }
    for (k = p; k <= r; k++)
        a[k] = b[k - p];
    return;
}

void mergeSort(int Array[], int position, int dimension) {
    printf("   %d   ||    %d   \n", position, dimension);

    int half;
    if (position < dimension) {
        printf("-----  if  ------\n");
        half = (position + dimension) / 2;
        printf("-----  one  ------\n");
        mergeSort(Array, position, half);
        printf("-----  two  ------\n");
        mergeSort(Array, half + 1, dimension);
        merge(Array, position, half, dimension);
    }else{
        printf("----- not if  ------\n");
    }
    printf("----- RETURN  ------\n");
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