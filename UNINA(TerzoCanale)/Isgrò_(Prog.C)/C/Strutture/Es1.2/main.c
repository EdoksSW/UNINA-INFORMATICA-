#include <stdio.h>
#include "studenti.h"
int main()
{
    Studente studente[2];
    float media=0;

    for(int i=0; i<2; i++)
    {
        printf("inserire il nome dello studente:\n");
        set_name(&studente[i]);
        printf("Inserire il cognome dello studente:\n");
        set_cognome(&studente[i]);
        printf("Inserire gli anni dello studente:\n");
        set_anni(&studente[i]);
        printf("inserire il voto dello studnete:\n");
        set_voto(&studente[i]);
    }

    for(int i=0; i<2; i++)
    {
        printf("Informazioni sullo studente %d: \n", i);
        printf("nome:"); get_name(&studente[i]);
        printf("cognome: "); get_cognome(&studente[i]);
        printf("anni: "); get_anni(&studente[i]);
        printf("voto: "); get_voto(&studente[i]);
    }

    media=(get_voto(&studente[0])+get_voto(&studente[1]))/2;
    printf("media dei voti dei due studnete:\n%f", media);
    
    return 0;
}
