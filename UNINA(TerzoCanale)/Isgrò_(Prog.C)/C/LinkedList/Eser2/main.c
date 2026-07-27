#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo
{
    int dato;
    struct Nodo *next;
    struct Nodo *prev;
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
    primo->next=secondo;
    primo->prev=NULL;

    secondo->dato=6;
    secondo->next=terzo;
    secondo->prev=primo;

    terzo->dato=7;
    terzo->next=NULL;
    terzo->prev=secondo;

    Nodo *temp=primo;
    printf("Andata\n");
    while(temp!=NULL)
    {
        printf("%d->", temp->dato);
        temp=temp->next;
    }
    temp=terzo;
    printf("Ritorno\n");
    while(temp!=NULL)
    {
        printf("<-%d", temp->dato);
        temp=temp->prev;
    }

    return 0;
}