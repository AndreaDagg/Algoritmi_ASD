#include <stdio.h>

unsigned long long fibonacci(int numberPTR);

unsigned long long fattoriale(int numerTo);

int main() {
    int choice = 0, numeberTo = 0;
    unsigned long long result;

    do {
        printf("(1) Fibonacci\n(2) Fattoriale\nScegli: ");
        scanf("%d", &choice);
    } while (choice < 1 || choice > 2);
    switch (choice) {
        case 1:
            printf("\n-- FIBONACCI --\n");
            printf("Quale numero? -> ");
            scanf("%d", &numeberTo);
            result = fibonacci(numeberTo);
            printf("\nResult: %llu", result);
            break;
        case 2:
            printf("\n-- FATTORIALE --\n");
            printf("Quale numero? -> ");
            scanf("%d", &numeberTo);
            result = fattoriale(numeberTo);
            printf("\nResult: %llu", result);
            break;
        default:
            break;
    }
    return 0;
}

/**
 * @unsigned:  perche' sarà sicuramente positivo
 * @long long: perche' dobbiamo rappresentare numeri grandi essendo esponenziali*/
unsigned long long fibonacci(int numberPTR) {
    if (numberPTR == 0 || numberPTR == 1) {
        return numberPTR;
    }
    return fibonacci(numberPTR - 2) + fibonacci(numberPTR - 1);
}

unsigned long long fattoriale(int numerTo) {
    // 0! && 1! = 1
    if (numerTo <= 0) {
        return 1;
    }
    return numerTo * fattoriale(numerTo - 1);
}