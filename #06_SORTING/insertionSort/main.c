#include <stdio.h>

int main() {
    int a[10] = {10, 4, 2, 6, 7, 11, 9, 23, 8, 9};
    int i, j, temp;

    for (i = 0; i < 10; i++) {
        printf("%d \t", a[i]);
    }

    printf("\nadesso ordiniamo con insertion sort\n");

    for (i = 1; i < 10; i++) {
        temp = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > temp) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }

    for (i = 0; i < 10; i++) {
        printf("%d \t", a[i]);
    }

}
