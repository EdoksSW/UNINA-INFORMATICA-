#include "prenotazione.h"

int main()
{
    prenotazione *testa=NULL;
    prenotazione *coda=NULL;
    letturaDati(&testa, &coda);
    printf("Assumendo di avere i seguenti dati di input:\n\n");
    stampaLista(&testa);
    selezione(&testa, &coda);
    printf("\nDopo l'liminazione si avranno solo->\n\n");
    stampaLista(&testa);
    printf("\nIl punto 3 si dovrà avere\n\n");
    minMax(&testa);

    return 0;
}