#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo
{
    int dato;
    struct Nodo *next;
} Nodo;

int main()
{
    int dato;
    Nodo *primo=NULL;
    Nodo *secondo=NULL;
    Nodo *terzo=NULL;
    Nodo *temp=NULL;
    Nodo *testa=NULL;
    Nodo *coda=NULL;

    primo=(Nodo*)malloc(sizeof(Nodo));
    secondo=(Nodo*)malloc(sizeof(Nodo));
    terzo=(Nodo*)malloc(sizeof(Nodo));

    primo->dato=5;
    primo->next=secondo;
    secondo->dato=6;
    secondo->next=terzo;
    terzo->dato=6;
    terzo->next=NULL;



    testa=primo;
    coda=terzo;


    temp=testa;
    while(temp!=NULL)
    {
        printf("%d->", temp->dato);
        temp=temp->next;
    }
    printf("\n");
    Nodo *nuovoNodo=NULL;
    nuovoNodo=(Nodo*)malloc(sizeof(Nodo));
    printf("Inserisci un numero a piacere tuo->");
    scanf("%d", &dato);
    nuovoNodo->dato=dato;
    nuovoNodo->next=primo;
    testa=nuovoNodo;

    temp=testa;
    while(temp!=NULL)
    {
        printf("%d->", temp->dato);
        temp=temp->next;
    }

    return 0;
}

