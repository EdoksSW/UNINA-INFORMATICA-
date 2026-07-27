#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Nodo
{
    int dato;
    struct Nodo *next;
}Nodo;

int main()
{
    Nodo *testa=NULL;
    Nodo *secondo=NULL;
    Nodo *coda=NULL;

    testa=(Nodo*)malloc(sizeof(Nodo)); 
    secondo=(Nodo*)malloc(sizeof(Nodo));
    coda=(Nodo*)malloc(sizeof(Nodo));

    testa->dato=1; testa->next=secondo;
    secondo->dato=22; secondo->next=coda;
    coda->dato=111; coda->next=NULL;

    int lunghezza_totale=0;
    Nodo *temp=testa;

    while(temp!=NULL)
    {
        // 1. Misuro quanto è lungo il numero (es. 255=3 caratteri)
        //Il trucco: scprintf con NULL e 0 restituisce solo la lunghezza!
        int len_numero=snprintf(NULL, 0, "%d", temp->dato);
        lunghezza_totale+=len_numero;

        //2. Aggiungo la lunghezza della freccia " -> " (4 char)
        //Solo se NON è lèultimo nodo

        if(temp->next!=NULL)
        {
            lunghezza_totale+=4; //lunghezza di " -> "
        }
        temp= temp->next;
    }

    //3. Aggiungo 1byte fondamentale per il teminatore '\0' di fine stringa
    lunghezza_totale+=1;

    printf("Ho calcolato che servono esattamente %d byte.\n", lunghezza_totale);

    //FASE 2: ALLOCAZIONE (MALLOC)

    //Ora so la misura esatta. Creo la stringa dinamica
    char *stringa=(char*)malloc(lunghezza_totale * sizeof(char));
    stringa[0]='\0';

    //FASE 3: SCRITTURA (RIEMPIMENTO)

    temp=testa;
    char buffer_temp[50]; //piccolo buffer temporaneo per un solo numero

    while(temp!=NULL)
    {
        if(temp->next!=NULL)
        {
            sprintf(buffer_temp, "%d -> ", temp->dato);
        }
        else
        {
            sprintf(buffer_temp, "%d", temp->dato);
        }

        //incollo
        strcat(stringa, buffer_temp);
    }
    //RISULTATO
    printf("Stringa convertita: %s", stringa);
    
    //PULIZIA FINALE
    free(stringa);
    //Qui dovrei liberare anche i nodi della lista
    return 0;
}