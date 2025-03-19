/*
Da questo file potrete partire dalle basi della programmazione C così da prendere
confidenza con la sintassi e il modo in cui vengono dichiarate variabili e usate le 
funzioni principali di C.
Per prima cosa, ricorda che quasi ogni riga di codice in C, terminerà con un semicolon (;)
*/

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
La sintassi di funzioni e variabili vuole che venga specificato, dappprima che tipo di variabile o ritorno della funzione desideriamo, poi il nome che vogliamo assegnare.
nel caso del main, il ritorno sarà un intero, perchè dichiarata int.

I principali tipi di variabili/funzioni sono:
Numeri interi: dichiarati con int (vedremo in futuro un modo più corretto). 
Numeri con virgola: dichiarati con float.
valori logici: dichiarati con bool. possono essere solo true o false (oppure 1 e 0)
singoli caratteri ASCII: dichiarati con char. sono un formato "stringa" dei valori. '1' e 1 non sono la stessa cosa.
stringhe di caratteri ASCII: dichiarati con char[]. Sono un insieme di caratteri che formano una stringa.
funzioni senza ritorno: dichiarate con void. Sono funzioni che eseguono codice, ma non hanno un ritorno. 

Quando si dichiarano delle variabili, se utilizzate per calcoli matematici, è sempre buona pratica inizializzarle.
Cosa si intende per inizializzare una variabile? Assegnarle un valore "di iniziO" fin dalla creazione

int numero;       //variabile creata, ma non inizializzata
int numero = 0;   //variabile creata ed inizializzata

Tutte le variabili dichiarate, possono essere riassegnate. 
Per farlo, scriverò il nome della variabile seguita dal simbolo di ASSEGNAZIONE e il valore

int num = 5;  //creazione ed inizializzazione variabile
num = 8;      //riassegnazione della variabile


Per quanto riguarda gli operatori, tutti i linguaggi di programmazione supportano i seguenti operatori logici:
Il (+) per sommare valori tra loro.
Il (++) per incrementare di 1 un valore.
Il (-) per sottrarre valori tra loro.
Il (--) per decrementare di 1 un valore.
Il (*) per moltiplicare valori tra loro.
Il (/) per dividere valori tra loro.
Il (%) per ottenere il resto da una divisione intera.
Il (=) per ASSEGNARE un valore.
Il (==) per VERIFICARE un valore uguale ad un altro.
Il (!=) per VERIFICARE un valore diverso da un altro.

Il (&) per accedere all'indirizzo in memoria di un oggetto.

Il (+=) per sommare direttamente il valore indicato
Il (-=) per sottrarre direttamente il valore indicato
Il (*=) per moltiplicare direttamente il valore indicato
Il (/=) per dividere direttamente il valore indicato


Ottimo, ma cosa sono tutte queste (//) che sto leggendo prima delle spiegazioni?
In C, come in quasi tutti i linguaggi di programmazione, si possono aggiungere dei commenti al codice per permettere di ricordare cosa si sta facendo
Quando scrivete un codice e dovete andare a modificarlo dopo mesi, è normale non ricordare cosa faccia, per questo esistono i commenti
Allo stesso modo, se dovete lavorare in più persone allo stesso progetto, è comodo spiegare a tutti cosa fa quella porzione di codice
*/

//Esercizio: fai in modo che, una volta compilato questo file, a schermo mi venga mostrata la scritta "Ciao, Mondo!" 
//e successivamente venga mostrata la somma di 5 e 10 (NON SCRIVENDO 15 A MANO!!!).
//Per fare ciò, dovrai utilizzare delle funzioni di stdio.h (incluso in cima). Puoi documentarti su w3Schools.com cercando printf()











//Quasi tutte le funzioni, hanno un valore di return che viene restituito a chi le ha chiamate.
//Nel caso del main, al sistema operativo tornerà un valore intero (In questo caso 0, usato per indicare l'assenza di errori).
return 0;
}