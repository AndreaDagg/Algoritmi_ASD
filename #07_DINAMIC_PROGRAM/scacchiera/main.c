/**Supponete di avere una scacchiera composta da n*n caselle e un pedone che dovete muovere dall’estremit`a
inferiore a quella superiore. Il pedone si pu`o muovere (1) una casella in alto, oppure (2) una casella in
diagonale alto-destra, oppure (3) una casella in diagonale alto-sinistra. Non si pu`o tornare indietro. Le
caselle sono denotate da una coppia di coordinate (r; c) (riga, colonna).
Alla scacchiera `e associata una matrice P; quando una cella (r; c) viene visitata, si guadagna un profitto
P[r][c].
Potendosi muovere di una riga alla volta, un percorso dall’estremit`a inferiore all’estremit`a superiore
contiene esattamente n celle; il suo guadagno totale `e dato dalla somma dei profitti delle celle che lo
compongono.
Data in input una matrice P, scrivere un algoritmo che restituisca il massimo guadagno ottenibile partendo
da una qualunque cella dell’estremit`a inferiore e raggiungendo una qualunque cella dell’estremit`a superiore,
seguendo le regole appena descritte.
Esempio di tabella P per una scacchiera 5  5; sono evidenziati (uno in grassetto e uno con sottolineatura)
due percorsi ottimi dalla riga inferiore a quella superiore, entrambi con valore 33.*/

#include <stdio.h>

#define INFINTO -99


int MAX(int a, int b, int c) {
    if (a > b && a > c) {
        return a;
    } else if (b > a && b > c) {
        return b;
    } else {
        return c;
    }
}

void printSolution(int n, int DP[n][n], int P[n][n]) {






    //TODO: Aggiustare





    int max = INFINTO;
    int riga;
    int colonna;

    for (int j = 0; j < n; ++j) {
        if (DP[n - 1][j] > max) {
            max = DP[n - 1][j];
            colonna = j;
            riga = n - 1;
        }
    }

    printf("\n%d %d %d\n", max, riga, colonna);


    /*  int i = riga;
      int y = colonna;*/

    //Finchè non arrivo alla prima riga == 0
    while (riga > -1) {
        printf("-> %d ", P[riga][colonna]);

        if (colonna == 0) {
            if (DP[riga - 1][colonna] > DP[riga - 1][colonna + 1]) {
                riga--;
            } else {
                riga--;
                colonna--;
            }

        } else if (colonna == n - 1) {
            if (DP[riga - 1][colonna] > DP[riga - 1][colonna - 1]) {
                riga--;
            } else {
                riga--;
                colonna--;
            }

        } else {
            if (DP[riga - 1][colonna] > DP[riga - 1][colonna + 1] &&
                DP[riga - 1][colonna] > DP[riga - 1][colonna - 1]) {
                riga--;
            } else if (DP[riga - 1][colonna + 1] > DP[riga - 1][colonna] &&
                       DP[riga - 1][colonna + 1] > DP[riga - 1][colonna - 1]) {
                riga--;
                colonna++;
            } else if (DP[riga - 1][colonna - 1] > DP[riga - 1][colonna] &&
                       DP[riga - 1][colonna - 1] > DP[riga - 1][colonna + 1]) {
                riga--;
                colonna--;
            }
        }
    }
}

void scacchiera(int n, int P[n][n]) {

    int DP[n][n];

    for (int i = 0; i < n; ++i) {
        for (int y = 0; y < n; ++y) {


            if (y < 0 || y > (n - 1)) {
                DP[i][y] = -1;

            } else if (i == 0 && y <= n - 1 && y >= 0) {
                DP[i][y] = P[i][y];


            } else if (y == 0) { // y==0
                DP[i][y] = MAX(DP[i - 1][y] + P[i][y], DP[i - 1][y + 1] + P[i][y], -1);

            } else if (y == n - 1) {
                DP[i][y] = MAX(DP[i - 1][y] + P[i][y], -1, DP[i - 1][y - 1] + P[i][y]);

            } else/* if (y <= n - 2 && y >= 1)*/ {
                DP[i][y] = MAX(DP[i - 1][y] + P[i][y], DP[i - 1][y + 1] + P[i][y], DP[i - 1][y - 1] + P[i][y]);

            }
        }
    }


    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%d ", DP[i][j]);

        }
        printf("\n");
    }

    printSolution(n, DP, P);

}


int main() {
    int n = 5;
    int P[5][5] = {{6, 7, 4, 7, 8},
                   {7, 6, 1, 1, 4},
                   {3, 5, 7, 8, 2},
                   {2, 6, 7, 0, 2},
                   {7, 3, 5, 6, 1}};

    scacchiera(n, P);

    return 0;
}
