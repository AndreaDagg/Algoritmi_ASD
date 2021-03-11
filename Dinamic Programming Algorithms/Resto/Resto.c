#include <stdio.h>

/*
Un distributore di bibite contiene al suo interno n monete i cui valori sono rispettivamente c[1], c[2], …,c[n].
Tutti i valori sono interi positivi; è possibile che più monete presenti nel distributore abbiano lo stesso
valore. Si consideri il problema di decidere se è possibile erogare, in qualsiasi modo, un resto esattamente
uguale a R utilizzando un opportuno sottoinsieme delle n monete a disposizione; R è un intero positivo.
1. Descrivere un algoritmo efficiente per decidere se il problema ammette una soluzione oppure no.
2. Determinare il costo computazionale dell'algoritmo descritto al punto 1, motivando la risposta
3. Modificare l'algoritmo di cui al punto 1 per determinare anche quali sono le monete da erogare per
produrre il resto R. Si noti che non è necessario erogare il resto con il numero minimo di monete: è
sufficiente erogarlo in modo qualsiasi.*/

/*
 * la tabella viene riempita di valori 0 o 1 e le operazioni per discirminare quale monete prendere vanno a prendere o non prendere i valori BOOLEANI inseriti all'inizio
 * se prendo la monteta vado a togliere il valore che ha dal resto rimanente r - (c[i - 1]) e quindi nella tabella mi sposto nella riga precendete nella colonna con indice (c[i - 1]) e vado a valutarlo con un OR LOGICO con il caso in cui non prendo la moneta
 * se l'elemento RS[n][R] è true allora esiste una combinazione
 * L'algoritmo ha complessita O(n*R) pre i due for
 * per ricostruire le monete che si possono prendere si può usare la stessa tecnica del backtrack dello zaino*/
/**
 * @DP  la matrice che deve contenere anche i valori zero per questo ha grandezza +1
 * @i   indice di riga che itera sul numero di monete
 * @r   indice di colonna ovvero il resto che rimane
 * @c[] array delle monete i-ma posizione valore della moneta*/

int Resto(int *n, int *c, int *resto) {

    int RS[(*n) + 1][(*resto) + 1];

    for (int i = 0; i <= *n; ++i) {
        for (int r = 0; r <= *resto; ++r) {

            if (r == 0 || r == c[0]) {
                RS[i][r] = 1;

            } else if (i == 0 && r > 0) {
                RS[i][r] = 0;

            } else if (r < c[i - 1]) {
                RS[i][r] = RS[i - 1][r];

            } else if (r >= c[i - 1]) { //r <= c[i]
                RS[i][r] = RS[i - 1][r - (c[i - 1])] || RS[i - 1][r]; //OR LOGICO
            }
        }
    }

    for (int i = 0; i <= *n; ++i) {
        for (int r = 0; r <= *resto; ++r) {
            printf("%d", RS[i][r]);
        }
        printf("\n");

    }

    printf("Elmenti array: %d!\nResto richiesto: %d\n", *n, *resto);
    return RS[*n][*resto];
}


int main() {

    int monete[] = {2, 2, 6, 4, 6, 2, 3, 10};
    int resto = 10;
    int n = sizeof(monete) / sizeof(*monete);

    int ultimoElemnto = Resto(&n, monete, &resto);

    printf("\n");
    if (ultimoElemnto == 1) {
        printf("ultimo elemento: %d!\n", ultimoElemnto);
        printf("Esiste una combinazione di monete per il resto");
    } else {
        printf("ultimo elemento: %d!\n", ultimoElemnto);
        printf("Non esiste una combinazione di monete per il resto");
    }


    return 0;
}
