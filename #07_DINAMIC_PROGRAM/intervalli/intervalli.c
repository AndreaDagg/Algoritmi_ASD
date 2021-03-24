/**
 * Abbiamo n attività e per ogni attività, 1 ≤ i ≤ n, l'intervallo di tempo [si, fi) in cui l'attività deve svolgersi e il guadagno vi che si ottiene svolgendo l'attività.
 * Due attività ie jsono compatibili se gli intervalli di tempo [si, fi) e [sj, fj) sono disgiunti e il valore di un sottoinsieme di attività è dato dalla somma dei valori delle attività del sottoinsieme.
 *
 * Descrivi un algoritmo che risolva il problema in O(n2).
 * Progetta ed implementa un programma C per selezionare un sottoinsieme S di valore massimo di attività reciprocamente compatibili.
 * Implemental’algoritmo in C.
 */

#include<stdio.h>

int max(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int intervalli(int N, int s[], int f[], int v[]) {
    int MG[N + 1][N];                               //Matrice n+1 perchè?

    for (int i = N; i >= 0; i--) {                  //for al contario se inverto i valiri dell'array divrebbe andare al contrario
        for (int j = N - 1; j >= 0; j--) {
            if (i == N)
                MG[i][j] = 0;
            else if (s[i] < f[j] && j > 0)
                MG[i][j] = MG[i + 1][j];
            else
                MG[i][j] = max(v[i] + MG[i + 1][i], MG[i + 1][j]);
        }
    }

    //Ricostruisce la soluzione
    int i = 1, j = 0;
    while ((i <= N) && (j <= N - 1)) {
        if (MG[i][j] == v[i] + MG[i + 1][i]) {
            printf("arrivita in posizione %d\n", i);
            j = i;
        }
        i++;
    }

    //PRINT MATRIX
    for (int i = 0; i < N+1; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", MG[i][j]);
        }
        printf("\n");
    }

    printf("il valore massimo: ");
    return MG[0][0];

}

int main() {
/*    int s[] = {0, 1, 1, 4, 5};
    int f[] = {0, 2, 5, 8, 10};
    int v[] = {0, 5, 7, 4, 3};*/

    int s[] = {0, 3, 0, 5, 3, 5, 6, 8, 8, 2, 12};
    int f[] = {0, 4, 5, 6, 8, 8, 9, 10, 11, 12, 13, 14};
    int v[] = {0, 4, 12, 3, 7, 8, 12, 8, 10, 3, 15, 7};

    /* int s[] = {0, 3, 7, 11, 13};
     int f[] = {0, 6, 12, 12, 14};
     int v[] = {0, 6, 5, 10, 4};*/

    int n = sizeof(s) / sizeof(s[0]);
    //printf("%d\n");
    printf("%d\n", intervalli(n, s, f, v));

    return 0;
}