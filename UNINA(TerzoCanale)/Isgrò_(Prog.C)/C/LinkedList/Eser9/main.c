#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo
{
    int dato;
    struct Nodo *next;
}Nodo;

int main()
{
    Nodo *nuovoNodo;
    Nodo *temp;
    Nodo *secondo;
    Nodo * terzo;
    Nodo *testa;
    Nodo *coda;
    int pos;
    
    testa=(Nodo*)malloc(sizeof(Nodo));
    secondo=(Nodo*)malloc(sizeof(Nodo));
    terzo=(Nodo*)malloc(sizeof(Nodo));
    coda=(Nodo*)malloc(sizeof(Nodo));

    testa->dato=1;
    secondo->dato=2;
    terzo->dato=3;
    coda->dato=4;

    testa->next=secondo;
    secondo->next=terzo;
    terzo->next=coda;
    coda->next=NULL;

    printf("Quale elemento vuoi che venga canellato?->\n");
    scanf("%d",&pos);

    printf("Prima\n");
    temp=testa;
    while(temp!=NULL)
    {
        printf("%d->", temp->dato);
        temp=temp->next;
    }
    printf("\n");

    temp=testa;
    if(pos==4)
    {
        for(int i=1; i<pos;i++)
        {
            
            if(temp!=NULL)
            {
                if(i==(pos-1))
                {
                    free(coda);
                    coda=temp;
                    coda->next=NULL;
                }
                temp=temp->next;
            }
        }
    }
    else if(pos>1)
    {
        for(int i=1; i<pos;i++)
        {
            
            if(temp!=NULL)
            {
                if(i==(pos-1))
                {
                    Nodo *twoP=temp->next;
                    temp->next=twoP->next;
                    free(twoP);
                }
                temp=temp->next;
            }
        }
    }
    
    else
    {
        testa=testa->next;
        free(temp);
    }
printf("\n");

    temp=testa;
    while(temp!=NULL)
    {
        printf("%d->", temp->dato);
        temp=temp->next;
    }

    return 0;
}
