#pragma once
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct prodotto
{
    char nomeProdotto[50];
    char categoria[50];
    float prezzo;
    int quantita;
    int codice;

    struct prodotto *next;
    struct prodotto *prev;
}prodotto;

void lettura(prodotto **testa, prodotto **coda);
void selezione(prodotto **testa, prodotto **coda);
void stampa(prodotto **testa);
void stampaP(prodotto ** testa);
void newFile(prodotto **testa);
