#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct prenotazione
{
    char nomeCliente [50];
    char cognomeCliente[50];
    char nomeHotel[50];
    char citta[20];
    unsigned int notti;
    float prezzoNotte;

    struct prenotazione *next;
    struct prenotazione *prev;
}prenotazione;

void letturaDati(prenotazione **testa, prenotazione **coda);
void stampaLista(prenotazione **testa);
void selezione(prenotazione **testa, prenotazione **coda);
void minMax(prenotazione **testa);
void raggruppamento(prenotazione **testa);

typedef struct citta
{
    char citta[20];

    struct citta *next;
    prenotazione *renewPrenotazione;
}citta;

void raggruppamento(prenotazione **testa, citta **testaCitta);