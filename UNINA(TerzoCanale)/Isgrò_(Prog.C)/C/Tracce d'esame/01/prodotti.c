#include "prodotti.h"

void lettura(prodotto **testa, prodotto **coda)
{
    FILE *fP=fopen("dati.txt", "r");
    char buffer[255];
    prodotto *nuovoProdotto=NULL;
    while(fgets(buffer, 255, fP)!=NULL)
    {
        nuovoProdotto=(prodotto*)malloc(sizeof(prodotto));
        sscanf(buffer, "%s %s %f %d %d", nuovoProdotto->nomeProdotto, nuovoProdotto->categoria, &nuovoProdotto->prezzo, &nuovoProdotto->quantita, &nuovoProdotto->codice);
        if(*testa==NULL)
        {
            *testa=nuovoProdotto;
            (*testa)->prev=NULL;
            (*testa)->next=NULL;
            *coda=nuovoProdotto;
        }
        else
        {
            nuovoProdotto->next=NULL;
            nuovoProdotto->prev=*coda;
            (*coda)->next=nuovoProdotto;
            *coda=nuovoProdotto;
        }
    }
    fclose(fP);
}

void selezione(prodotto **testa, prodotto **coda)
{
    prodotto *temp=(*testa);
    prodotto *daCancellare=NULL;
    while(temp->next!=NULL)
    {
        if(temp->quantita<10)
        {
            daCancellare=temp;
            if(daCancellare==(*testa))
            {
                (*testa)=temp->next;
                (*testa)->prev=NULL;
            }
            else if(daCancellare == (*coda))
            {
                (*coda)=temp->prev;
                (*coda)->next=NULL;
            }
            else
            {
                temp->prev->next=temp->next;
                temp->next->prev=temp->prev;
            }
            temp=temp->next;
            free(daCancellare);
        }
        else temp=temp->next;
    }

}

void stampa(prodotto **testa)
{
    prodotto *temp;
    temp=*testa;

    while(temp!=NULL)
    {
        printf("%s, %s, %f, %d, %d\n", temp->nomeProdotto, temp->categoria, temp->prezzo, temp->quantita, temp->codice);
        temp=temp->next;
    }
}

void stampaP(prodotto **testa)
{
    prodotto *temp=(*testa);

    while(temp->next!=NULL)
    {
        printf("%s->%.2f\n", temp->nomeProdotto, ((float)(temp->quantita)*(float)(temp->prezzo)));
        temp=temp->next;
    }
}

void newFile(prodotto **testa)
{
    prodotto *temp=(*testa);
    char fN[20];
    char buffer[1000];
    printf("Come vuoi chiamare il nuovo file?\n");
    fgets(fN, 20, stdin);
    fN[strcspn(fN, "\n")]=0;
    FILE *fP=fopen(fN, "a+");
    while(temp!=NULL)
    {
        fprintf(fP, "%s %s %f %d %d\n", temp->nomeProdotto, temp->categoria, temp->prezzo, temp->quantita, temp->codice);
        temp=temp->next;
    }
    rewind(fP);
    while(fgets(buffer, sizeof(buffer), fP)!=NULL)
    {
        printf("%s\n", buffer);
    }
    fclose(fP);
}

