/**
 * Abbiamo n attività e per ogni attività, 1 ≤ i ≤ n, l'intervallo di tempo [si, fi) in cui l'attività deve svolgersi e il guadagno vi che si ottiene svolgendo l'attività.
 * Due attività ie jsono compatibili se gli intervalli di tempo [si, fi) e [sj, fj) sono disgiunti e il valore di un sottoinsieme di attività è dato dalla somma dei valori delle attività del sottoinsieme.
 *
 * Descrivi un algoritmo che risolva il problema in O(n2).
 * Progetta ed implementa un programma C per selezionare un sottoinsieme S di valore massimo di attività reciprocamente compatibili.
 * Implemental’algoritmo in C.
 */

#include <stdio.h>

void print_max_gain_activities(int[], int[], int[], int);

int main() {
    /*
    int start_times[] = {2, 0, 3, 11};
    int finish_times[] = {3, 6, 9, 15};
    int gains[] = {10, 15, 9, 7};*/
    int start_times[] = {1, 3, 0, 5, 3, 5, 6, 8, 8, 2, 12};
    int finish_times[] = {4, 5, 6, 8, 8, 9, 10, 11, 12, 13, 14};
    int gains[] = {4, 12, 3, 7, 8, 12, 8, 10, 3, 15, 7};


    int activities = sizeof(gains) / sizeof(*gains);

    print_max_gain_activities(start_times, finish_times, gains, activities);

    return 0;
}

void sort_by_finish_time(int start_times[], int finish_times[], int gains[], int activities) {
    if (start_times == NULL || finish_times == NULL || gains == NULL || activities <= 0)
        return;

    for (int i = activities - 1; i >= 0; i--) {
        int start = start_times[i], finish = finish_times[i], gain = gains[i];
        int j = i - 1;

        while (j >= 0 && finish_times[j] > finish) {
            start_times[j + 1] = start_times[j];
            finish_times[j + 1] = finish_times[j];
            gains[j + 1] = gains[j];

            j--;
        }

        start_times[j + 1] = start;
        finish_times[j + 1] = finish;
        gains[j + 1] = gain;
    }
}

int max(int a, int b) {
    return (a >= b) ? a : b;
}

void build_max_gain_table(int start_times[], int finish_times[], int gains[],
                          int activities, int table[activities][activities]) {
    for (int j = 0; j < activities; j++)
        table[activities - 1][j] = gains[activities - 1];

    for (int i = activities - 1; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            if (i == j)
                table[i][j] = gains[i] + table[i + 1][i];
            else if (start_times[i] < finish_times[j])
                table[i][j] = table[i + 1][j];
            else
                table[i][j] = max(gains[i] + table[i + 1][i], table[i + 1][j]);
        }
    }
}

void print_max_gain_activities(int start_times[], int finish_times[], int gains[], int activities) {
    if (start_times == NULL || finish_times == NULL || gains == NULL || activities <= 0)
        return;

    int table[activities][activities];

    sort_by_finish_time(start_times, finish_times, gains, activities);

    build_max_gain_table(start_times, finish_times, gains, activities, table);

    int max = 0;

    for (int i = 1; i < activities; i++)
        if (table[i][i] > table[max][max])
            max = i;

    printf("Attivita' %d (%d - %d): guadagno %d\n", max + 1, start_times[max], finish_times[max], gains[max]);

    int i = max + 1, j = max;

    while (i < activities) {
        if (finish_times[max] <= start_times[i] && table[i][j] == table[max][j] - gains[max]) {
            printf("Attivita' %d (%d - %d): guadagno %d\n", i + 1, start_times[i], finish_times[i], gains[i]);

            max = i;
            j = 0;

            i++;
        } else if (j >= activities) {
            j = 0;
            i++;
        } else
            j++;
    }
}
