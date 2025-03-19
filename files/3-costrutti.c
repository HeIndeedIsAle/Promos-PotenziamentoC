//file headers principali più usati
//per ora non preoccupatevi di questi, li vedrete (quasi) sempre
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

//funzione main. 
//è il punto di accesso del programma. Quando il sistema operativo esegue il programma, viene eseguito il codice qui dentro
int main() {

/*
Fantastico, avete completato anche l'esercizio 2-! Prossimo step.

Abbiamo parlato di variabili e funzioni (che non abbiamo ancora approfondito), ma la programmazione, prima ancora delle funzioni, si basa su 3 costrutti essenziali:
Il costrutto IF() {} - è un costrutto condizionale. 
Il costrutto FOR() {} - è un costrutto iterativo
Il costrutto WHILE() {} - è un costrutto iterativo-condizionale
in aggiunta:
Il costrutto do {} while() - un altro tipo di costrutto iterativo-condizionale

Partiamo dal primo costrutto. IF() {}.
è un costrutto CONDIZIONALE, questo significa che andrà a verificare che una certa condizione si verifichi prima di eseguire il codice.
la sintassi corretta è:

if (condizione) {
    codice da eseguire se la condizione è rispettata...
}
eventualmente, a questa condizione si può aggiungere un "altrimenti", quindi se non viene rispettata la condizione verrà eseguito il codice correlato. Sintassi:

if (condizione) {
    codice da eseguire se la condizione è rispettata...
} else {
    codice da eseguire se la condizione NON è rispettata
}

un semplice esempio può essere verificare se un valore è uguale a 5.

int num;
printf("\nInserisci il valore: ");
scanf("%d", &num);

if (num == 5) {     //notare che ho utilizzato (==) e non (=)
    printf("\nIl numero inserito e' 5.");
} else {
    printf("\nIl numero inserito non e' 5.");
}


Procediamo al secondo costrutto. FOR() {}
è un costrutto ITERATIVO, questo signidica che andrà ad eseguire il codice un determinato numero di volte.
la sintassi corretta prevede una variabile che faccia da contatore:

for (int i = 0; i < 5; i++) {
    codice da eseguire...
}

questo andrà ad eseguire il codice contenuto all'interno finchè i (il contatore) sarà minore di 5 (partendo da 0) ed incrementando i ogni iterazione completata.


Procediamo con il terzo e quarto costrutto. While() {} e do {} while()
Sono due costrutti iterativi-condizionali, questo significa che verificheranno una certa condizione e poi eseguiranno il codice finchè questa condizione viene rispettata.
La sintassi corretta del while è:

while (condizione) {
    Codice da eseguire...
}

mentre la sintassi del do while è:

do {
    codice da eseguire...
} while(condizione);

La differenza tra i due cicli condizionali sta nel fatto che il While controlla la condizione PRIMA di eseguire il codice, 
mentre il Do-While esegue il codice UNA volta e solo DOPO controlla la condizione per ripetere il ciclo
*/

/*
Esercizio: Fai in modo che, una volta compilato il programma, mi venga chiesto di inserire un numero maggiore di 10.
il programma deve controllare che questo sia effettivamente maggiore di 10, se non lo è, mostrare un messaggio a schermo e fare un return -1. ( If() {} else {} )
Se invece il numero è maggiore di 10:
- controllare se è un numero pari o dispari utilizzando l'operatore MODULO (%) e un costrutto IF() {} else {}
- fare in modo che a questo numero venga aggiunto il valore 10 per un totale di 5 volte utilizzando l'operatore di moltiplicazione (*) e un costrutto for()
- fare in modo che, finchè il numero è maggiore di 28 venga sottratto il valore di 7.

Mostrare a schermo il valore del numero ogni volta che subisce una trasformazione.
*/

return 0;
}