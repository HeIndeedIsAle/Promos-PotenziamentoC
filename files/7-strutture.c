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
Una struttura (struct) è un tipo di dato definito dall'utente che consente di raggruppare variabili di diversi tipi sotto un unico nome. 
questo è particolarmente utile per rappresentare entità complesse che hanno più attributi correlati. 

La sintassi per dichiarare una struttura è:

struct nome {
    variabile1;
    variabile2;
};

come detto prima, nelle strutture ci possono essere diversi tipi di variabili:

struct utenti {
    int anni;
    char nome[15];
    float numero;
}

quando si DICHIARA una struttura con struct, non viene assegnato nessuno spazio in memoria, perchè questa viene solo definita.
Per assegnare effettivamente uno spazio in memoria e creare una variabile per quella struttura ci sono due metodi:

- Crearla quando si dichiara
struct strutturaEsempio {
    int num1;
    char nome[15];
} esempio1;

- Crearla dopo aver dichiarato la struttura
struct strutturaEsempio {
    int num1;
    char nome[15];
};
struct strutturaEsempio esempio1;

in entrambi i casi, in memoria è stato creato uno spazio tale da contenere la struttura e la variabile si chiama "esempio1"

per accedere alle variabili contenute nella struttura, sarà necessario utilizzare il (.) quando si ha una variabile alla struttura
oppure il (->) quando si ha un puntatore alla struttura

Per esempio:

se voglio accedere alla variabile nome di strutturaEsempio, dovrò scrivere:

esempio1.nome

mentre, se avessi un puntatore "structPtr", dovrei scrivere:

structPtr->nome
*/

//funzione main. 
//è il punto di accesso del programma. Quando il sistema operativo esegue il programma, viene eseguito il codice qui dentro
int main() {

//Esercizio: Crea una struttura per rappresentare le informazioni di uno studente, inclusi nome, cognome e voto finale.
//I valori da inserire saranno chiesti all'utente con scanf()
//assegna questi valori tramite un puntatore, non una variabile.
//poi stampa a video i valori





return 0;
}
