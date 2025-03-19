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
Cosa sono i Puntatori?
In C, un puntatore è una variabile che memorizza l'indirizzo di memoria di un'altra variabile. Questo permette di accedere e manipolare direttamente i dati memorizzati in quella posizione di memoria.


Dichiarazione e Inizializzazione
Per dichiarare un puntatore, si specifica il tipo di dato a cui il puntatore farà riferimento, seguito da un asterisco (*) e dal nome del puntatore:

int *numPtr; // Puntatore a intero
float *flaotPtr; // Puntatore a float
char *charPtr; // Puntatore a carattere

Per inizializzare un puntatore, si assegna l'indirizzo di una variabile del tipo corrispondente:

int num = 10;  //variabile di tipo int
int *numPtr = &a; // 'numPtr' è un puntatore di tipo intero e ora punta all'indirizzo di 'num'

Per indicare il valore PUNTATO dal puntatore, si utilizza *nomePuntatore.
Per esempio:

int num = 3;
int *numPtr = &num;
printf("il valore di num è: %d", *numPtr);


Incremento e Decremento: Modificano il puntatore per riferirsi rispettivamente al prossimo o al precedente elemento del tipo a cui il puntatore fa riferimento.

int arr[] = {10, 20, 30};   //questa è l'inizializzazione di un array.
int *arrPtr = arr;  //noteare che arr in questo modo punta all'indirizzo del primo elemento dell'array, quindi è come scrivere &arr[0]
arrPtr++; // Ora 'arrPtr' punta al secondo elemento di 'arr'
*/

//Esercizio: Scrivi un programma che definisca una variabile intera, assegni un valore a questa variabile,
//e poi utilizzi un puntatore per incrementare il suo valore di 5.

return 0;
}