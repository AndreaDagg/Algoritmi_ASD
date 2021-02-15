#include<stdio.h>

#define ELEMENTI 4
#define CAPACITA 9

int zaino(const int *Capacity, const int *Weight, int *Profit, const int *n);
int max(int Value1, int Value2);

int main() {
    int profit[] = {10, 7, 8, 6};
    int weight[] = {4, 2, 3, 4};
    int Capacita = CAPACITA;
    int n = ELEMENTI;


    printf("The solution is : %d", zaino(&Capacita, weight, profit, &n));
    return 0;
}

/**
 * @DP  la matrice che deve contenere anche i valori zero per questo ha grandezza +1
 * @i   indice di riga che itera sul numero di elementi che posso prendere
 * @c   indice di colonna ovvero la capacità dello zaino che rimane */
int zaino(const int *Capacity, const int *Weight, int *Profit, const int *n) {
    int i, c;
    int DP[(*n) + 1][(*Capacity) + 1];

    for (i = 0; i <= *n; i++) {
        for (c = 0; c <= *Capacity; c++) {
            if (i == 0 || c == 0)
                DP[i][c] = 0;
            else if (Weight[i - 1] <= c)
                DP[i][c] = max(Profit[i - 1] + DP[i - 1][c - Weight[i - 1]], DP[i - 1][c]);
            else
                DP[i][c] = DP[i - 1][c];
        }
    }
    return DP[*n][*Capacity];
}

int max(int Value1, int Value2) {
    if (Value1 > Value2) {
        return Value1;
    } else {
        return Value2;
    }
}