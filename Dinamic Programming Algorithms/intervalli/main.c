/**
 * Abbiamo n attività e per ogni attività, 1 ≤ i ≤ n, l'intervallo di tempo [si, fi) in cui l'attività deve svolgersi e il guadagno vi che si ottiene svolgendo l'attività.
 * Due attività ie jsono compatibili se gli intervalli di tempo [si, fi) e [sj, fj) sono disgiunti e il valore di un sottoinsieme di attività è dato dalla somma dei valori delle attività del sottoinsieme.
 *
 * Descrivi un algoritmo che risolva il problema in O(n2).
 * Progetta ed implementa un programma C per selezionare un sottoinsieme S di valore massimo di attività reciprocamente compatibili.
 * Implemental’algoritmo in C.
 */

#include <stdio.h>
#include <stdlib.h>

int max(int a, int b) {
    //return (a >= b) ? a : b;
    if (a >= b) return a; else return b;
}

void sort_by_finish_time(int s[], int f[], int v[], int activities) {
    if (s == NULL || f == NULL || v == NULL || activities == 0) {
        return;
    }

    for (int i = activities - 1; i >= 0; i--) {
        int start = s[i];
        int finish = f[i];
        int value = v[i];

        int j = i - 1;

        while (j >= 0 && f[j] > finish) {
            s[j + 1] = s[j];
            f[j + 1] = f[j];
            v[j + 1] = v[j];

            j--;
        }

        s[j + 1] = start;
        f[j + 1] = finish;
        v[j + 1] = value;
    }
}

void build_max_value_table(int s[], int f[], int v[], int activities, int table[activities][activities]) {
    for (int j = 0; j < activities; j++) {
        // table[activities ][j] = v[activities - 1];
        table[activities][j] = v[activities];
    }

    for (int i = activities - 1; i >= 0; i--) { //dalla ifne all'inizio
        for (int j = 0; j <= i; j++) {          //dall'inizio all'i-ma attività che si sta considerando
            if (i == j) {
                table[i][j] = v[i] + table[i + 1][i];
            } else if (s[i] < f[j]) {
                table[i][j] = table[i + 1][j];
            } else {
                table[i][j] = max(v[i] + table[i + 1][i], table[i + 1][j]);
            }
        }
    }

    for (int i = 0; i < activities; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", table[i][j]);
        }

        printf("\n");
    }
}

void intervalli(int s[], int f[], int v[], int activities, int table[activities + 1][activities + 1]) {
    for (int i = 0; i < activities + 1; ++i) {
        for (int j = 0; j < activities + 1; ++j) {
            if (i == 0)
                table[i][j] = 0;
            else if (i == j) {
                // printf("%d + %d\n", table[i - 1][i], v[i]);
                table[i][j] = table[i - 1][i] + v[i];

            } else if (s[i] >= f[j] && j > 0) {
                table[i][j] = max(table[i - 1][i] + v[i], table[i - 1][j]);
            } else {
                table[i][j] = table[i - 1][j];
            }
        }
    }

    for (int i = 0; i <= activities; i++) {
        for (int j = 0; j <= activities; j++) {
            printf("%d ", table[i][j]);
        }

        printf("\n");
    }
}

void print_max_value_activities(int s[], int f[], int v[], int activities) {
    if (s == NULL || f == NULL || v == NULL || activities == 0) {
        return;
    }

    int table[activities + 1][activities + 1];

    //build_max_value_table(s, f, v, activities, table);



    intervalli(s, f, v, activities, table);
//    for (int i = 0; i < activities; i++) {
//
//    }
}

int main() {
    /*    int s[] = {2, 3,2, 4};
        int f[] = {4, 5, 6, 6};
        int v[] = {10, 1, 7, 8};*/
/*
    int s[] = {0, 4, 2, 3, 2};
    int f[] = {0, 6, 6, 5, 4};
    int v[] = {0, 8, 7, 1, 10};*/

    //36
    /* int s[] = {1, 3, 0, 5, 3, 5, 6, 8, 8, 2, 12};
     int f[] = {4, 5, 6, 8, 8, 9, 10, 11, 12, 13, 14};
     int v[] = {4, 12, 3, 7, 8, 12, 8, 10, 3, 15, 7};*/

    /*  int s[] = {12, 2 , 8 , 8 , 6 , 5 , 3, 5, 0, 3 , 1};
      int f[] = {14, 13, 12, 11, 10, 9 , 8, 8, 6, 5 , 4};
      int v[] = {7 , 15, 3 , 10, 8 , 12, 8, 7, 3, 12, 4};*/

    int s[] = {11, 3, 0, 2};
    int f[] = {15, 9, 6, 3};
    int v[] = {7, 9, 15, 10};


    int activities = sizeof(v) / sizeof(*v);

    // printf("%d", activities);
    print_max_value_activities(s, f, v, activities);

    return 0;
}

/*
void intervalli(int s[], int f[], int v[], int activities, int table[activities][activities]) {
    for (int i = 0; i < activities + 1; ++i) {
        for (int j = 0; j < activities + 1; ++j) {
            if (i == 0 || j == 0)
                table[i][j] = 0;
            else if (i == j) {
                table[i][j] = table[i - 1][i] + v[i];
            } else if (s[i] >= f[j]) {
                table[i][j] = max(table[i - 1][i] + v[i], table[i - 1][j]);
            } else {
                table[i][j] = table[i - 1][j];
            }
        }
    }

    for (int i = 0; i < activities + 1; i++) {
        for (int j = 0; j <= activities + 1; j++) {
            printf("%d ", table[i][j]);
        }

        printf("\n");
    }
}*/
