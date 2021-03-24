#include <stdio.h>
#include <math.h>

void fuse(int *arr, int l_idx, int mid, int r_idx);

void merge_sort(int *arr, int l, int r);

// driver code
int main() {
    int to_sort[] = {7, 2, 9, 4, 3, 8, 6, 1};
    int len = (int) sizeof(to_sort) / sizeof(to_sort[0]);

    merge_sort(to_sort, 0, len - 1);
    printf("SORTED: ");
    for (int i = 0; i < len; i++) {
        printf("%d ", to_sort[i]);
    }

    return 0;
}

// l is for left index and r is right index of the
// sub-array of arr to be sorted
void merge_sort(int *arr, int l, int r) {
    int mid;

    if (r <= l) {
        return;
    } else {
        mid = (int) fabs((l + r) / 2);
        merge_sort(arr, l, mid);
        merge_sort(arr, mid + 1, r);
        fuse(arr, l, mid, r);
    }
}

// Merges two subarrays of arr[].
// First subarray is arr[l_idx..mid]
// Second subarray is arr[mid+1..r_idx]
// temp array is temp[k=l_idx..r_idx+1]
void fuse(int *arr, int l_idx, int mid, int r_idx) {
    int i = l_idx;  // indice sub-array sx
    int j = mid + 1;  // indice sub-array dx

    int temp[r_idx + 1];  // temp array
    int k = l_idx;  // indice di temp array

    // removeme --- print
    printf("L: ");
    for (int x = i; x <= mid; x++) {
        printf("%d ", arr[x]);
    }
    printf(" ");

    // removeme --- print
    printf("R: ");
    for (int x = j; x <= r_idx; x++) {
        printf("%d ", arr[x]);
    }
    printf("\n");

    // confronta i valori
    while (i <= mid && j <= r_idx) {
        if (arr[i] > arr[j])
            temp[k++] = arr[j++];  // se il valore a sx è maggiore aggiungi a temp il valore di dx
        else
            temp[k++] = arr[i++];  // se il valore a sx è minore aggiungi a temp
    }
    // copia i restanti elementi di sx
    while (i <= mid) {
        temp[k++] = arr[i];
        i++;
    }
    // copia i restanti elementi di dx
    while (j <= r_idx) {
        temp[k++] = arr[j];
        j++;
    }

    // copia l'array ordinato
    for (i = l_idx; i <= r_idx; i++) {
        arr[i] = temp[i];
    }

    // removeme --- print
    printf("MERGED: ");
    for (int x = l_idx; x <= r_idx; x++) {
        printf("%d ", arr[x]);
    }
    printf("\n");
    printf("\n");
}