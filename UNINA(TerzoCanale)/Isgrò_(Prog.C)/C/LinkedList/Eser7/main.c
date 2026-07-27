#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo
{
    int dato;
    struct Nodo *next;
}Nodo;

int main()
{
    Nodo *testa;
    Nodo *secondo;
    Nodo *coda;
    Nodo* temp;

    testa=(Nodo*)malloc(sizeof(Nodo));
    secondo=(Nodo*)malloc(sizeof(Nodo));
    coda=(Nodo*)malloc(sizeof(Nodo));

    testa->dato=1;
    secondo->dato=2;
    coda->dato=3;
    testa->next=secondo;
    secondo->next=coda;
    coda->next=NULL;

    printf("Prima\n");
    temp=testa;
    while(temp!=NULL)
    {
        printf("%d->",temp->dato);
        temp=temp->next;
    }

    temp=testa->next;
    free(testa);
    testa=temp;
    temp=NULL;

    printf("Dopo\n");
    temp=testa;
    while(temp!=NULL)
    {
        printf("%d->", temp->dato);
        temp=temp->next;
    }

    return 0;
    
}