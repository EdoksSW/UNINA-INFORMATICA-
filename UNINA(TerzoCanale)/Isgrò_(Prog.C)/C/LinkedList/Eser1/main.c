#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo
{
    int dato;
    struct Nodo *prossimo;
}Nodo;

int main()
{
    Nodo *primo=NULL;
    Nodo *secondo=NULL;
    Nodo *terzo=NULL;

    primo=(Nodo*)malloc(sizeof(Nodo));
    secondo=(Nodo*)malloc(sizeof(Nodo));
    terzo=(Nodo*)malloc(sizeof(Nodo));

    primo->dato=5;
    primo->prossimo = secondo;
    secondo->dato=6;
    secondo->prossimo = terzo;
    terzo->dato = 7;
    terzo->prossimo = NULL;

    Nodo *temp=primo;

    while(temp!=NULL)
    {
        printf("%d", temp->dato);
        temp = temp->prossimo;
    }

    return 0;
}