/**
 * La Torre di Hanoi è un rompicapo matematico composto da tre paletti e un certo numero di dischi di grandezza
 * decrescente, che possono essere infilati in uno qualsiasi dei paletti. Il gioco inizia con tutti i dischi incolonnati
 * su un paletto in ordine decrescente, in modo da formare un cono. Lo scopo del gioco è portare tutti i dischi su un
 * paletto diverso, potendo spostare solo un disco alla volta e potendo mettere un disco solo su un altro disco più
 * grande, mai su uno più piccolo.
 *
 * Scrivete una funzione hanoi( int n, int from, int temp, int to ); che stampi le mosse per spostare n dischi dal paletto
 * from al paletto to aiutandosi, se necessario, con il paletto ausiliario temp. Ad esempio, una soluzione per una pila di
 * altezza 3 è data dalla seguente sequenza di mosse:
 * 0 -> 2
 * 0 -> 1
 * 2 -> 1
 * 0 -> 2
 * 1 -> 0
 * 1 -> 2
 * 0 -> 2
 * Questo vuol dire che il disco più piccolo va spostato dal paletto 0 al paletto 2, quindi il disco mediano, ora in
 * cima al paletto 0, va spostato al paletto 1; a questo punto il disco più piccolo (rimasto sul paletto 2) va rimesso
 * sopra il mediano (ora sul paletto 1) e, finalmente, il disco più grande va spostato dal paletto 0 al paletto 2, nella
 * sua posizione finale. Le restanti tre mosse, spostando i due dischi rimanenti dal paletto 1 al paletto 2.
 */

#include <stdio.h>

void hanoi(int n, int from, int temp, int to) {
    if (n == 1) {
        printf("%d -> %d\n", from, to);
    } else {
        hanoi(n - 1, from, to, temp);
        printf("%d -> %d\n", from, to);
        hanoi(n - 1, temp, from, to);
    }
}

int main() {
    hanoi(3, 0, 1, 2);

    return 0;
}

/* Algoritmo che risolve il rompicapo con complessita esponenziale 2^n*/