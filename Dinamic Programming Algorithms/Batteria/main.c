#include <stdio.h>

#define INFINITY 99999
#define NUM_STATIONS 5

/**
 * Recursive Travel Cost
 *
 * @param d -> Distance of station
 * @param c -> Costo of battery
 * @param battery_life
 * @param travel_length
 * @param n_stations -> Number of stations
 * @param n_stop -> Actual stop
 * @param last_stop -> Last stop
 *
 * @return Travel Cost
 */

int min(int a, int b) {
    if (a > b) return b; else return a;
}

int rtc(int d[], int c[], int battery_life, int travel_length, int n_stations, int n_stop, int last_stop) {
    if ((d[last_stop] + battery_life) >= travel_length) {
        return 0;
    }

    if ((n_stop == n_stations) || ((d[n_stop] - d[last_stop]) > battery_life)) {
        return INFINITY;
    }

    return min(c[n_stop] + rtc(d, c, battery_life, travel_length, n_stations, n_stop + 1, n_stop),
                   rtc(d, c, battery_life, travel_length, n_stations, n_stop + 1, last_stop));
}

void print_matrix(int matrix[NUM_STATIONS][NUM_STATIONS], int num_stations) {
    for (int i = 0; i <= num_stations; i++) {
        for (int j = 0; j < num_stations; j++) {
            if (matrix[i][j] == INFINITY) {
                printf("- ");
            } else {
                printf("%d ", matrix[i][j]);
            }
        }
        printf("\n");
    }
}

void print_station_index(int matrix[NUM_STATIONS][NUM_STATIONS], int c[], int num_stations) {
    int x = 0;
    int y = 0;

    for (int i = 0; i < num_stations; i++) {
        if (matrix[x][y] == matrix[x + 1][y]) {
            x++;
        } else if ((matrix[x][y] - c[x]) == matrix[x + 1][x]) {
            printf("\nStation number -> %d\n", x + 1);

            x++;
            y = x - 1;
        } else {
            printf("Error");
        }
    }
}

/**
 * Dynamic Programming Travel Cost
 *
 * @param d -> Distance of station
 * @param c -> Costo of battery
 * @param battery_life
 * @param travel_length
 * @param num_stations -> Number of stations
 */
void dptr(int d[], int c[], int battery_life, int travel_length, int num_stations) {
    int matrix[num_stations + 1][num_stations];

    for (int n_stop = num_stations; n_stop >= 0; n_stop--) {
        for (int last_stop = num_stations - 1; last_stop >= 0; last_stop--) {
            if ((d[last_stop] + battery_life) >= travel_length) {
                matrix[n_stop][last_stop] = 0;
            } else if ((n_stop == num_stations) || ((d[n_stop] - d[last_stop]) > battery_life)) {
                matrix[n_stop][last_stop] = INFINITY;
            } else {
                matrix[n_stop][last_stop] = min(c[n_stop] + matrix[n_stop + 1][n_stop],
                                                    matrix[n_stop + 1][last_stop]);
            }
        }
    }

    print_matrix(matrix, num_stations);

    print_station_index(matrix, c, num_stations);
}

int main() {
    int battery_life = 3;
    int travel_length = 6;

    int d[] = {0, 2, 3, 5,6};
    int c[] = {0, 10, 20, 30,10};

//    int num_stations = (int)(sizeof(d)/sizeof(d[0]));

    printf("Recursive solution\n");

    printf("%d\n", rtc(d, c, battery_life, travel_length, NUM_STATIONS, 0, 0));

    printf("\nDynamic Programming solution\n");

    dptr(d, c, battery_life, travel_length, NUM_STATIONS);

    return 0;
}