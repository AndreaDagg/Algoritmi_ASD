We Carloo ciao, ti giro gli appunti di oggi di Algoritmi se ti possono servire 😎
Avete delle voci bellissime ahhaah
🥺😂😂
int findSummit(const int *array, int index) {

    if (index == LENGHT-1) { //caso base
        MAX = array[index];                 //MAX è una variabile globale, inizializzata a 0
        return 1;
    }

    int tot = findSummit(array, ++index);   //ricorro finché non arrivo al caso base
                                            //quindi parto dalla fine a svolgere il controllo
    if (array[index] > MAX) {               //per contare le somme: a partire dall'ultimo che diventa
        MAX = array[index];                 //MAX torno indietro, se l'elemento è > di MAX
        return tot + 1;                     //torno 1 che verrà sommato al totale, quindi questo è il nuovo MAX
    } else                                  //e così via
        return tot + 0;
}