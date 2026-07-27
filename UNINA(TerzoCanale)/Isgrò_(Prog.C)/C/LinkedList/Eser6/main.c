#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo
{
    int data;
    struct Nodo *next;
}Nodo;

int main()
{
    Nodo *testa=NULL;
    Nodo *secondo=NULL;
    Nodo *terzo=NULL;
    Nodo *coda=NULL;
    Nodo *nuovoNodo=NULL;
    Nodo *twoP=NULL;
    int contatore=0;
    int pos;
    int dato;

    testa=(Nodo*)malloc(sizeof(Nodo));
    secondo=(Nodo*)malloc(sizeof(Nodo));
    terzo=(Nodo*)malloc(sizeof(Nodo));
    coda=(Nodo*)malloc(sizeof(Nodo));

    testa->data=1;
    secondo->data=2;
    terzo->data=3;
    coda->data=4;

    testa->next=secondo;
    secondo->next=terzo;
    terzo->next=coda;
    coda->next=NULL;

    printf("Prima\n");
    twoP=testa;
    while(twoP!=NULL)
    {
        printf("%d\n", twoP->data);
        twoP=twoP->next;
    }
    printf("In che posizione vuoi posizionare il nuovo valore?->\n");
    scanf("%d", &pos);

    twoP=testa;
    for(int i=1; i<pos; i++)
    {
        printf("Dato %d->%d\n", i+1, twoP->data);
        if(i==(pos-1))
        {
            nuovoNodo=(Nodo*)malloc(sizeof(Nodo));
            printf("Inserisci il dato che vuoi che venga inserito->");
            scanf("%d",&dato);
            nuovoNodo->next=twoP->next;
            nuovoNodo->data=dato;
            twoP->next=nuovoNodo;
        }
        twoP=twoP->next;
    }

    printf("Dopo\n");
    twoP=testa;
    while(twoP!=NULL)
    {
        printf("%d\n", twoP->data);
        twoP=twoP->next;
    }

    return 0;
}