#include "libro.h"
#include <stdio.h>

int main()
{
    Libro lb[3];

    for(int i=0; i<3; i++ )
    {
        inserimento(&lb[i]);
    }
    int maggiore=0;
    for(int i=0; i<3; i++)
    {
        if(prezzo(&lb[maggiore])<prezzo(&lb[i])) maggiore=i;
    }
    printf("Il libro con il prezzo maggiore e':\n");
    nome(&lb[maggiore]);
    printf("\n");
    autore(&lb[maggiore]);
    printf("\n");
    printf("%.2f", prezzo(&lb[maggiore]));

    return 0;
}