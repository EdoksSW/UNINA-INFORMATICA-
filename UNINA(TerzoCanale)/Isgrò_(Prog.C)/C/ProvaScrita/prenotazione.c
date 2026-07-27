#include "prenotazione.h"

void letturaDati(prenotazione **testa, prenotazione **coda)
{
    FILE *fP=fopen("dati.txt", "r");
    prenotazione *temp=(*testa);
    prenotazione *nuovaPrenotazione=NULL;
    char nomeCliente [50];
    char cognomeCliente[50];
    char nomeHotel[50];
    char citta[20];
    unsigned int notti;
    float prezzoNotte;
    while(fscanf(fP, "%s %s %s %s %d %f", nomeCliente, cognomeCliente, nomeHotel, citta, &notti, &prezzoNotte)!=EOF)
    {
        nuovaPrenotazione=(prenotazione*)malloc(sizeof(prenotazione));
        strcpy(nuovaPrenotazione->nomeCliente,nomeCliente);
        strcpy(nuovaPrenotazione->cognomeCliente, cognomeCliente);
        strcpy(nuovaPrenotazione->nomeHotel, nomeHotel);
        strcpy(nuovaPrenotazione->citta, citta);
        nuovaPrenotazione->notti=notti;
        nuovaPrenotazione->prezzoNotte=prezzoNotte;
        
        if((*testa)==NULL)
        {
            (*testa)=nuovaPrenotazione;
            (*testa)->next=NULL;
            (*testa)->prev=NULL;
            (*coda)=nuovaPrenotazione;
        }
        else
        {
            nuovaPrenotazione->next=NULL;
            nuovaPrenotazione->prev=*coda;
            (*coda)->next=nuovaPrenotazione;
            (*coda)=nuovaPrenotazione;
        }
    }
    fclose(fP);
}

void stampaLista(prenotazione **testa)
{
    prenotazione *temp=(*testa);
    while(temp!=NULL)
    {
        printf("%s %s %s %s %d %.2f \n", temp->nomeCliente, temp->cognomeCliente, temp->nomeHotel, temp->citta, temp->notti, temp->prezzoNotte);
        temp=temp->next;
    }

}

void selezione(prenotazione **testa, prenotazione **coda)
{
    prenotazione *temp=(*testa);
    prenotazione *daCancellare=NULL;

    while(temp!=NULL)
    {
        if(temp->notti<2)
        {
            daCancellare=temp;
            if(temp==(*testa))
            {
                (*testa)=temp->next;
                if(*testa!=NULL) (*testa)->prev=NULL;
                else (*coda)=NULL;
            }
            else if(daCancellare==(*coda))
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
        } else temp=temp->next;
    }
}

void minMax(prenotazione **testa)
{
    prenotazione *temp=(*testa);
    prenotazione *minore=(*testa);
    prenotazione *massimo=(*testa);
    float min, max, tem;
    min=(minore->prezzoNotte)*(minore->notti);
    max=(massimo->prezzoNotte)*(massimo->notti);
    while(temp!=NULL)
    {
        tem=(temp->prezzoNotte)*(temp->notti);
        if(min>tem)
        {
            min=tem;
            minore=temp;
        }
        else if(max<tem)
        {
            max=tem;
            massimo=temp;
        }
        temp=temp->next;
    }
    printf("Min costo totale: %s %s %s (Tot=%.2f)\n", minore->nomeCliente, minore->cognomeCliente, minore->nomeHotel, min);
    printf("Min costo totale: %s %s %s (Tot=%.2f)", massimo->nomeCliente, massimo->cognomeCliente, massimo->nomeHotel, max);
}

void listCity(prenotazione **testa, citta **testaCitta)
{
    prenotazione *temp=(*testaCitta);
    citta *scorrimento=NULL;
    citta *newCity=NULL;
    while(temp!=NULL)
    {
        //Controllo se la città esiste già
        while(scorrimento!=NULL)
        {
            if(strcmp(scorrimento->citta, temp->citta))
            {

            }
        }
    }
}

void raggruppamento(prenotazione **testa, citta **testaCitta)
{
    citta *scorrimento=NULL; //per scorrere la lista delle citta
    citta *cittaTrovata=NULL; //se la trovo ci aggiungo le prenotazioni e non esiste ci aggiungo la citta
    prenotazione *temp=(*testa);

    while(temp!=NULL)
    {
        cittaTrovata=NULL;
        scorrimento=(*testaCitta);
        //CERCO SE LA CITTA ESISTE GIA'
        while(scorrimento!=NULL)
        {
            if(strcmp(scorrimento->citta, temp->citta)==0)
            {
                cittaTrovata=scorrimento;
                break;
            }
            scorrimento=scorrimento->next;
        }

        //SE NON ESISTE NE CREO UNA NUOVA
       if(cittaTrovata == NULL)
        {
            cittaTrovata = (citta*)malloc(sizeof(citta));
            
            // FONDAMENTALE: Copio il nome della città e inizializzo la lista interna
            strcpy(cittaTrovata->citta, temp->citta);
            cittaTrovata->renewPrenotazione = NULL; 

            // Inserimento in testa alla lista delle Città
            cittaTrovata->next = (*testaCitta);
            (*testaCitta) = cittaTrovata;
        }

        // 3. ORA AGGIUNGO LA PRENOTAZIONE (Sia che la città fosse nuova, sia vecchia)
        // Nota: Ho tolto l'ELSE gigante, così eseguo questo codice SEMPRE.

        prenotazione *newCopy = (prenotazione*)malloc(sizeof(prenotazione));
        
        // Copia dei dati (avevi scambiato hotel con nomeCliente!)
        strcpy(newCopy->nomeCliente, temp->nomeCliente);
        strcpy(newCopy->cognomeCliente, temp->cognomeCliente);
        strcpy(newCopy->citta, temp->citta);
        strcpy(newCopy->nomeHotel, temp->nomeHotel); // <--- Corretto qui
        newCopy->notti = temp->notti;
        newCopy->prezzoNotte = temp->prezzoNotte;

        // Inserimento in testa alla sottolista della città
        // Non serve controllare if(NULL), l'inserimento in testa funziona sempre
        newCopy->next = cittaTrovata->renewPrenotazione;
        
        // Se hai il puntatore prev nella prenotazione, gestiscilo qui:
        newCopy->prev = NULL; 
        if(cittaTrovata->renewPrenotazione != NULL) {
            cittaTrovata->renewPrenotazione->prev = newCopy;
        }

        cittaTrovata->renewPrenotazione = newCopy;

        // Passo alla prossima prenotazione originale
        temp = temp->next;
    }
}
