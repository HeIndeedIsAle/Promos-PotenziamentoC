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
cosa sono gli array?
Gli array sono un tipo di struttura dati che permette di salvare più elementi dello stesso tipo.
La sintassi corretta è:

int numArr[5];

così facendo ho creato un array di interi che può contenere 5 elementi (partendo da 0 a 4).

per accedere al singolo elemento di un array, si utilizzano nuovamente le paresentesi quadre, indicando a quale elemento ci si vuole riferire:

numArr[0] = 13;

così facendo, ho assegnato al primo elemento dell'array di interi il valore 13.

Come citato nel primo file, in C non è possibile usare variabili char per creare stringhe, bensì si utilizzano array di caratteri.
quindi, per scrivere il nome "mario", dovrò creare un Array di 5 caratteri.

char nome[5];
e all'interno di esso potrà successivamente inserire ogni lettera in un elemento per formare la parola.
*/

//Esercizio: Crea un array di 3 interi, assegna un valore ad ogni elemento e, utilizzando un ciclo for, stampa a video il valore di ogni elemento.
//per fare questo, potrai accedere all'elemento corrente dell'array utilizzando il contatore del ciclo for.
}