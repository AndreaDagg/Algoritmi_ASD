#include <stdio.h>

int main() {
    int collection[] = {12, 54, 324, 56, 876, 67, 54, 2, 12, 35, 324, 5};
    int maxValue = 0, minValue = collection[0];

    for (int i = 0; i < 12; ++i) {
        if (collection[i] > maxValue) {
            printf("Confronto Maggiore -> ");
            printf("%d", collection[i]);
            printf(" - ");
            printf("%d", maxValue);
            printf(" | ");
            printf("\n");
            maxValue = collection[i];
        } else if (collection[i] < minValue) {
            printf("Confronto Minore -> ");
            printf("%d", collection[i]);
            printf(" - ");
            printf("%d", minValue);
            printf(" | ");
            printf("\n");
            minValue = collection[i];
        }
    }
    printf("\n");
    printf("Results: ");
    printf("\n");
    printf("MaxValue: ");
    printf("%d", maxValue);
    printf("\n");
    printf("MinValue: ");
    printf("%d", minValue);


    return 0;
}