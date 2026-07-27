#ifndef TEMPO_H
#define TEMPO_H
#include <stdio.h>

typedef struct
{
    int ora, minuti, secondi;
}Tempo;

void setOra(Tempo *tp);
void printOra(Tempo *tp);

#endif