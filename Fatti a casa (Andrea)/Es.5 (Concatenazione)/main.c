#include <stdio.h>

#define MaxDim 64


int main() {
    int i, j;
    char input1[MaxDim] = {0};
    char input2[MaxDim] = {0};
    printf("Prima stringa: ");
    scanf("%s", input1);
    printf("Seconda stringa: ");
    scanf("%s", input2);
    for (i = 0; (input1[i]) != '\0'; i++); //Found lenght of input1
    for (j = 0; (input1[i] = input2[j]) != '\0'; i++, j++){ //
        printf("Char aggiunto - %c - iterata %d :  %s \n",input2[j],j,input1);
    }
    printf("\n %s", input1);
    return 0;
}