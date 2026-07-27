#include "tempo.h"

void setOra(Tempo *tp)
{
    printf("inserire l'ora:\n");
    scanf("%d", &tp->ora);
    getchar();
    printf("Inserire minuti:\n");
    scanf("%d", &tp->minuti);
    getchar();
    printf("Inserire secondi:\n");
    scanf("%d", &tp->secondi);
    getchar();
}

void printOra(Tempo *tp)
{
    printf("ore: %d/%d/%d", tp->ora, tp->minuti, tp->secondi);
}