/**
 *
* Sia data una sequenza V di n numeri interi distinti. Si sciva una procedura
* efficiente basata sulla programmazione dinamica per trovare la più lunga
*
* sottosequenza crescente di V (per esempio, V = 9, 15, 3, 6, 4, 2, 5, 10, 3, allora
* la più lunga sottosequenza crescente è 3, 4, 5, 10).
 * Discutere correttezza e complessità.
* */
#include<stdio.h>

int MAxArray(int *a);

int lisCal(int *arr, int n);

/* Driver program to test above function */
int main() {
    //int arr[] = {9, 15, 3, 6, 4, 2, 5, 10, 3};
    int arr[] = {10, 4, 7, 20, 2, 30, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("\nLis %d\n", lisCal(arr, n));

    return 0;
}


int MAxArray(int *a) {
    int n = (int) sizeof(a) / sizeof(a[0]);


}


/* lisCal() returns the length of the longest
  increasing subsequence in arr[] of size n */
int lisCal(int *arr, int n) {
    int lis[n];

    lis[0] = 1;

    /* Compute optimized LIS values in
       bottom up manner */
    for (int i = 1; i < n; i++) {
        lis[i] = 1;
        for (int j = 0; j < i; j++)
            if (arr[i] > arr[j] && lis[i] < lis[j] + 1)
                lis[i] = lis[j] + 1;
    }

    //stampa la sequenza
    for (int i = 0; i < n; i++) {
        printf("%d", lis[i]);
    }

    // Return maximum value in lisCal[]
    int Max = lis[0];
    for (int i = 1; i < n; i++) {
        if (lis[i] > Max) {
            Max = lis[i];
        }
    }

    return Max;

}
