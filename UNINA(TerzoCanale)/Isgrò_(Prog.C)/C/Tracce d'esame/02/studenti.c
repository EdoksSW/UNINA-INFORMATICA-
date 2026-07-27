#include "studenti.h"

void letturaFile(studenti **testa)
{
    FILE *fP=fopen("studenti.txt", "r");
    studenti *nuovoStudente=NULL;
    studenti *temp=NULL;
    char tempNome[20];
    int nVoti;
    while(fscanf(fP, "%s %d", tempNome, &nVoti)!=EOF)
    {
        nuovoStudente=(studenti*)malloc(sizeof(studenti));
        strcpy(nuovoStudente->nomeStudente, tempNome);
        nuovoStudente->esami=nVoti;
        nuovoStudente->voti=(int*)malloc(sizeof(int)*nuovoStudente->esami);
        for(int i=0; i<nVoti; i++)
        {
            fscanf(fP, "%d", &nuovoStudente->voti[i]);
        }

        if((*testa)==NULL)
        {
            (*testa)=nuovoStudente;
            (*testa)->next=NULL;
            temp=nuovoStudente;
        } 
        else
        {
            temp->next=nuovoStudente;
            temp=nuovoStudente;
            temp->next=NULL;
        }
    }
    fclose(fP);
}

void stampaLista(studenti **testa)
{
    studenti *temp=*testa;
    while(temp!=NULL)
    {
        printf("%s ",temp->nomeStudente);
        for(int i=0; i<temp->esami; i++)
        {
            if(i==temp->esami-1)
            {
                printf("%d", temp->voti[i]);
            } else printf("%d ",temp->voti[i]);
        }
        temp=temp->next;
        printf("\n");
    }
}