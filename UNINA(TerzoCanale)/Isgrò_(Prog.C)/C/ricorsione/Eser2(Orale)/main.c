#include <stdio.h>

#include <stdlib.h>

typedef struct Nodo

{
    int n;

    struct Nodo *next;
}Nodo;


void push_front(Nodo **testa, int n)
{
    Nodo *nuovoNum=(Nodo*)malloc(sizeof(Nodo));

    nuovoNum->n=n;
    if((*testa)==NULL)
    {  
        (*testa)=nuovoNum;
        nuovoNum->next=NULL;
    }
    else
    {
        nuovoNum->next=(*testa);
        (*testa)=nuovoNum;
    }
}

int conta_elementi(Nodo *testa)
{
    if(testa==NULL)
    {
        return 0;
    }
    else
    {
        return 1 + conta_elementi(testa->next);
    }
}