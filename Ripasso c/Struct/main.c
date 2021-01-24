#include <stdio.h>
#include <string.h>


/* Con il typedef non c'è bisogno di tipizzare la variabile quando la si dichiara (differenza tra typedef e struct) */
typedef struct {

    char nome[10];
    int eta;
    char sex;
    int numMod;

} persona;

struct cane {

    char name[10];
    int cucciolo;

};

void compileStruct(persona *perPtr);
void compileStructDog(struct cane *dogPtr);

int main() {

    persona per1;
    per1.numMod = 3;
    strcpy(per1.nome, "Luca"); //per copiare una stringa in un array o si usa un ciclo o strcpy
    printf("Valore: %s\n", per1.nome);

    compileStruct(&per1);

    printf("Nome: %s ", per1.nome);
    printf("Eta': %d ", per1.eta);
    printf("Sex: %c \n", per1.sex);


    struct cane dog1;

    compileStructDog(&dog1);

    printf("il cane %s", dog1.name);
    if (dog1.cucciolo == 1)
        printf(" e' un cucciolo");
    else
        printf(" non e' un cucciolo");

    return 0;
}

void compileStruct(persona *perPtr) {

    strcpy(perPtr->nome, "Paolo");
    perPtr->eta = 25;
    perPtr->sex = 'F';

}

void compileStructDog(struct cane *dogPtr) {

    strcpy(dogPtr->name, "Lapo");
    dogPtr->cucciolo = 0;

}