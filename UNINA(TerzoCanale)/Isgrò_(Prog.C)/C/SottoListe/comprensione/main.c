#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
Immagina di dover organizzare gli studenti in diverse classi (1A,1B,2B...).

QUesta è la struttura perfetta per una lista di liste (sottoliste)
1. Lista verticale (Principale): Le classi (1B,1A....).
2. Lista Orrizontale (sottoliste): Gli studenti dentro ogni classe.

Disegno dell'intera struttura:
[CLASSE 1A] -------------> [Mario] -> [Luigi] -> NULL
     |
     v
[CLASSE 1B] -------------> [Anna] -> [Luca] -> [Sofia] -> NULL
     |
     v
[CLASSE 5C] -------------> [Paolo] -> NULL
     |
     v
    NULL
*/

//1. La scatola piccola (Lo studente)
// Questa forma la lista ORRIZONTALE
typedef struct Studente
{
    char nome[20];
    struct Studente *next; //Punta al prossimo compagno di banco;
}Studente;

//2. La scatola grozza (La classe)
// Questa forma la lista VERTICALE
typedef struct Classe
{
    char NomeClasse[5];

    struct Studente *alunni; //<-- SOTTOLISTA: punta al primo studente di questa classe
    struct Classe *next; //Punta alla prossima classe
}Classe;



int main()
{

}