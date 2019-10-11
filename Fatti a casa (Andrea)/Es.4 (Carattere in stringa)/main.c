#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MaxDim 8

int countChar();
int comparision(char String[], char characterr);
int lunghezza(char S[]);

int main() {
    int comparisionresult = 0;
    comparisionresult = countChar();
    printf("%d", comparisionresult);

    return 0;
}

int countChar() {

    int index = 0, NumChar = 0;
    char insert[MaxDim] = {"\0"};
    char character;

    scanf("%s", insert);
    scanf("%s", &character);
    index = lunghezza(insert);
    printf("Non trovo posizione 0  %c \n", insert[0]);
    NumChar = comparision(insert, character);
    return NumChar;
}

int lunghezza(char S[MaxDim]) {
    int value;
    value = strlen(S);
    return value;
}

int comparision(char String[MaxDim], char characterr) {
    int reply = 0;

    for (int i = 0; i < MaxDim; i++) {
        printf(" %c \n", String[i]);
        if (String[i] == characterr) {
            reply++;
        }
    }
    return reply;
}