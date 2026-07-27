#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct studenti
{
    char nomeStudente[100];
    int esami;
    int *voti;

    struct studenti *next;
}studenti;

void letturaFile(studenti **testa);
void stampaLista(studenti **testa);