/*
Scrivi un programma che si aspetti un intero al momento della chiamata e che lo trasformi in un numero binario.
Per convertire un numero in base decimale in uno in base binaria l'operazione da svolgere è il %. Se il resto di una divisione è 1, allora il valore binario sarà 1.
Se il resto di una divisione è 0, allora il valore binario sarà 0.

Per esempio: 

12 % 2 = 6 resto 0 ->   XXXXXXX0
6 % 2 = 3 resto 0 ->    XXXXXX00
3 % 2 = 1 resto 1 ->    XXXXX100
1 % 2 = 0 resto 1 ->    XXXX1100
i 4 valori prima, saranno 0 perchè il numero è basso in questo caso (0000 1100)
*/

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>