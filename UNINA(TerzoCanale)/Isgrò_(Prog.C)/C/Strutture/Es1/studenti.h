
#ifndef STUDENTI_H
#define STUDENTI_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    char nome[50];
    char cognome[50];
    int voto;
    int anni;
} Studente;

void credenziali(Studente *st);

void get_dati(Studente st);

float media(Studente *st, int size);
#endif