#include <stdio.h>

void leggistringa(char *PStr);

int main() {
    int c = 34;
    int v[10]; //[0] ... [9]
    int *p;
    char str[] = "ciao a tutti"; //Vettore di char per dichiarare una stringa

    v[0] = 10;
    v[1] = 15;

    p = &c;

    (*p)++; //incremento il valore di c

    printf("Valore di c: %d ", *p); // l'operatore * consente di leggere il conenuto dell'indirizzo scritto in p
    printf("L'indirizzo di memoria di a: %p \n", &c); //Loperatore & restituisce l'indirizzo di memoria

    p = v; //punta a v[0]
    p++;   //Muovo di una casella nell'array
    (*p)++;

    printf("Valore array incrementato: %d", v[1]);

    leggistringa(str);
    printf("La nuova stringa: %s", str);


    return 0;
}

void leggistringa(char *PStr) { //Punterà al str[0]

    while (*PStr != '\0') {
        if (*PStr == ' ') {
            *PStr = '-';                 //modifico valore spazio
        }
        printf("C: %c - ", *PStr);
        ++PStr;                         //avanzo nell'array
    }

}