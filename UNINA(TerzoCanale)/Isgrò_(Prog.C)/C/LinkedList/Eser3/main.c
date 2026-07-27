#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo
{
    int dato;
    struct Nodo *next;
}Nodo;

int main()
{
    int contatore=0, nL, dato;
    Nodo *testa=NULL;
    Nodo *coda=NULL;
    Nodo *temp=NULL;

    printf("Qante dati devi inserire?\n");
    scanf("%d", &nL);

    for(int i=0; i<nL; i++)
    {
        Nodo *nuovoNodo=NULL;
        nuovoNodo=(Nodo*)malloc(sizeof(Nodo));
        printf("inserire %d dato\n", i+1);
        scanf("%d", &dato);
        nuovoNodo->dato=dato;
        nuovoNodo->next=NULL;

        if(testa==NULL)
        {
            testa=nuovoNodo;
            coda=nuovoNodo;
        }
        else
        {
            coda->next=nuovoNodo;
            coda=nuovoNodo;
        }
    }
    printf("\n");
    temp=testa;
    while(temp!=NULL)
    {
        contatore++;
        printf("%d->", temp->dato);
        temp=temp->next;
    }
    printf("Numero di elementi presenti=%d", contatore);

    return 0;
}