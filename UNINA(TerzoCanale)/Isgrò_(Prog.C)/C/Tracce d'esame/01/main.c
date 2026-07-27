#include "prodotti.h"


int main()
{
    prodotto *testa=NULL;
    prodotto *coda=NULL;

    lettura(&testa, &coda);
    selezione(&testa, &coda);
    stampa(&testa);
    printf("\n");
    printf("prodotto->prezzi*quantia'\n");
    stampaP(&testa);
    newFile(&testa);

    return 0;
}