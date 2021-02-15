#include <stdio.h>

int MAX(int Value1, int Value2);

int ZainoRicorsivo(int w[], int p[], int i, int c, int DP[][c + 1]);

void printMatrix(const int n, const int knappackCapacity, int DP[][knappackCapacity + 1]);

int main() {
    int profit[] = {10, 7, 8, 6};
    int weight[] = {4, 2, 3, 4};
    int capacita = 9;
    int n = 4;

    int DP[n + 1][capacita + 1];

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= capacita; j++) {
            if (i == 0 || j == 0) {
                DP[i][j] = 0;
            } else {
                DP[i][j] = -1;
            }
        }
    }
    printf("Matrice Inizializzata\n");
    printMatrix(n, capacita, DP);

    printf("->%d ", ZainoRicorsivo(weight, profit, n, capacita, DP));


    return 0;
}

int ZainoRicorsivo(int w[], int p[], int i, int c, int DP[][c + 1]) {
    printMatrix(i, c, DP);

    if (c < 0) {
        return -2;
    } else if (i == 0 || c == 0) {
        return 0;
    } else {
        if (DP[i][c] < 0) {
            int notTaken = ZainoRicorsivo(w, p, i - 1, c, DP);
            int Taken = ZainoRicorsivo(w, p, i - 1, c - w[i], DP) + p[i];
            DP[i][c] = MAX(notTaken, Taken);
        }
        return DP[i][c];
    }
}


int MAX(int Value1, int Value2) {
    if (Value1 > Value2) {
        return Value1;
    } else {
        return Value2;
    }
}

void printMatrix(const int n, const int knappackCapacity, int DP[][knappackCapacity + 1]) {
    int row, columns;
    /** itera su 10 colonne */
    for (row = 0; row <= n; row++) {
        for (columns = 0; columns <= knappackCapacity; columns++) {
            printf("%d     ", DP[row][columns]);
        }
        printf("\n\n");
    }

}