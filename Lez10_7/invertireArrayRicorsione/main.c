#include <stdio.h>

#define MaxDim 10

void reverse_array(int *array, int n);

int main() {
    int n = 10;
    int array[MaxDim] = {1, 2, 3, 4, 5, 6, 7, 8, 5, 9};
    reverse_array(array, 10);
        printf("Inv || Orig\n");
    while (n != 0) {
        printf(" %d  || %d\n", array[(n - (10)) * (-1)], array[n - 1]);
        n--;
    }
    return 0;
}

void reverse_array(int *array, int n) {
    if (n <= 1) {
        return;
    } else {
        int aux = array[0];
        array[0] = array[n - 1];
        array[n - 1] = aux;
        reverse_array(array + 1, n - 2);
    }
}