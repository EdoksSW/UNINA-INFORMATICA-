#include "studenti.h"

void credenziali(Studente *st)
{
    printf("inserisci nome dello studente:\n");
    fgets(st->nome, sizeof(st->nome), stdin);
    printf("Inserie cognome dello studente:\n");
    fgets(st->cognome, sizeof(st->cognome), stdin);
    printf("Inserire il voto:\n");
    scanf("%d", &st->voto);
    printf("Inserire la tua eta':\n");
    scanf("%d", &st->anni);
}

void get_dati(Studente st)
{
    printf("Nome:%c\n", st.nome);
    printf("Cognome:%c\n", st.cognome);
    printf("Anni:%d\n", st.anni);
}

float media(Studente *st, int size)
{
    float media=0;
    for(int i=0; i<size; i++)
    {
        media+=st[i].voto;
    }
    return media/2;
}