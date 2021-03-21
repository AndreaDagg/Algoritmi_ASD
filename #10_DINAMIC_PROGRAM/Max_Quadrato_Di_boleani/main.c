/**
Sia A[1 . . . n, 1 . . . n] una matrice di valori booleani 0/1. Scrivere un algoritmo che restituisca la dimensione del
piu grande quadrato composto da valori 1. Discutere informalmente la correttezza della soluzione proposta e
calcolare la complessita computazionale. Ad esempio, nella matrice a lato, i quadrati di dimensione massima
(ve ne sono due, di cui uno evidenziato in grassetto) hanno dimensione pari a 4.

1 0 1 0 1 0 0
1 0 1. 1. 1. 1. 0
0 1 1. 1. 1. 1. 0
0 0 1. 1. 1. 1. 0
1 1 1. 1. 1. 1. 0
1 1 1 1 1 1 0

 */

#include "stdio.h"


int min(int n1, int n2, int n3) {
    int min = (n1 < n2) ? n1 : n2;
    return (min < n3) ? min : n3;
}

int max_area(int **P, int n) {
    int dp[n][n];

    for (int k = 0; k < n; k++) {
        dp[k][0] = (*(*(P + k) + 0));
        dp[0][k] = (*(*(P + 0) + k));
    }

    for (int r = 1; r < n; r++) {                    // dalla seconda riga in poi
        for (int c = 1; c < n; c++) {                // dalla seconda colonna
            if (*(*(P + r) + c) == 0) {
                dp[r][c] = 0;
            } else {
                dp[r][c] = min(dp[r - 1][c], dp[r - 1][c - 1],  dp[r][c - 1]) + 1;
            }
        }
    }

    // ritorna il valore massimo della tabella dp
    int max_val = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", dp[i][j]);
            if (dp[i][j] > max_val) {
                max_val = dp[i][j];
            }
        }
        printf("\n");
    }
    printf("\n");

    return max_val;
}

int main() {
    int M[7][7] = {{1, 0, 1, 0, 1, 0, 0},
                   {1, 0, 1, 1, 1, 1, 0},
                   {0, 1, 1, 1, 1, 1, 0},
                   {0, 0, 1, 1, 1, 1, 0},
                   {1, 1, 1, 1, 1, 1, 0},
                   {1, 1, 1, 1, 1, 1, 0}};

    int *pM[7];
    int n = 7;
    for (int i = 0; i < n; i++) {
        pM[i] = *(M + i);
    }

//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < n; ++j) {
//            printf("%d ", *(*(pM + i) + j));
//        }
//        printf("\n");
//    }

    int max = max_area(pM, n);
    printf("%d", max);

    return 0;
}

