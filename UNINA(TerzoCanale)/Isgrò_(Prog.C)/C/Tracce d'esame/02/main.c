#include "studenti.h"

int main()
{
    studenti *testa=NULL;
    letturaFile(&testa);
    printf("Elenco studenti e voti\n");
    stampaLista(&testa);

    return 0;
}