//file headers principali più usati
//per ora non preoccupatevi di questi, li vedrete (quasi) sempre
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

/*
Ipotizziamo di dover eseguire la stessa azione più e più volte all'interno del nostro programma.
Una regola della programmazione è di evitare di essere ripetitivi.
Quindi, se ogni volta dobbiamo fare un calcolo per verificare una condizione, è buona pratica creare una funzione che lo faccia ogni volta che viene chiamata.

Cosa sono le funzioni? 
Le funzioni sono delle parti di codice che si ripetono con valori diversi ad ogni chiamata. Queste hanno infatti dei PARAMETRI che sono generali, e cambiano ad ogni chiamata.
Come spiegato nel primo file, anche le funzioni hanno un tipo, e questo indica il ritorno che chi le chiama si aspetta (tranne per quelle void, che non hanno un ritorno).

come si compone una funzione?
le funzioni si dichiarano PRIMA di essere chiamate, e sono molto simili alla composizione del main.
Le funzioni vengono dichiarate in questa parte del codice, prima del main
Ricorda che dichiararle non significa eseguirle, per essere eseguite queste andranno infatti chiamate con nome(parametri);
Non per forza una funzione si deve aspettare dei parametri, ma deve avere un return (Tranne se void)

un esmepio può essere:

int sommaValori(int num1, int num2) {
    return(num1 + num2);
}

int main() {
prinf("La somma ottenuta è pari a: %d", sommaValori(10, 5));
return 0
}

questa funzione, quando chiamata dal main, si aspetterà due parametri di tipo intero e ne ritornerà la somma, che verrà mostrata a video.
*/

//Esercizio: Crea ora una funzione che ritorni true o false (bool) se il parametro passato è pari o dispari.
//Chiama poi questa funzione nel main e con un if() mostra a schermo se è pari o dispari
//Successivamente, crea una funzione che ritorni la il numero passato come parametro elevato alla seconda. Per esempio se si passa 8, tornerà 64.
//Chiama poi questa funzione nel main e stampa a video il risultato che ritorna.

//funzione main. 
//è il punto di accesso del programma. Quando il sistema operativo esegue il programma, viene eseguito il codice qui dentro
int main() {

return 0;
}