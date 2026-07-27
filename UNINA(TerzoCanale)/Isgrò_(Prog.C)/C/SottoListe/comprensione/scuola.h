#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    char nomeClasse[5];

    struct Studente *alunni; //<-- SOTTOLISTA: punta al primo studente di questa classe
    struct Classe *next; //Punta alla prossima classe
}Classe;

void aggiungiAlunno(Classe **listaClassi, char *nomeCLasse, char *nomeStudente);