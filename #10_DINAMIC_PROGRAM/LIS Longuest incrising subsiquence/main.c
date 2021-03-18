/* Dynamic Programming C++ implementation
   of LIS problem */

#include <stdio.h>

int MaxElement(int *Array) {
    int n = (int) sizeof(Array) / sizeof(*Array); //Usiamo un cast ad int perché stiamo andando a calcolare da dei puntatori
    int Massimo = Array[0];
    for (int i = 1; i < n; i++) {
        if (Massimo < Array[i]) {
            Massimo = Array[i];
        }
    }
    return Massimo;
}

/* lis() returns the length of the longest
  increasing subsequence in arr[] of size n */
int lis(int arr[], int n) {
    int lis[n];

    lis[0] = 1;

    /* Compute optimized LIS values in
       bottom up manner */
    for (int i = 1; i < n; i++) {
        lis[i] = 1; //inizializza la cella di memeoria ad 1
        for (int j = 0; j < i; j++)
            if (arr[i] > arr[j] && lis[i] < lis[j] + 1)
                lis[i] = lis[j] + 1;
    }

    // Return maximum value in lis[]
    return MaxElement(lis);
}

/* Driver program to test above function */
int main() {
    int arr[] = {10, 22, 9, 33, 21, 50, 41, 60};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Length of lis is %d\n", lis(arr, n));

    return 0;
}