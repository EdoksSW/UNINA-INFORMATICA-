#include "studenti.h"


void set_name(Studente *st)
{
    fgets(st->name, sizeof(st->name), stdin);
    st->name[strcspn(st->name, "\n")]='\0';
}
void get_name(Studente *st)
{
    for(int i=0; st->name[i]!='\0'; i++)
    {
        printf("%c", st->name[i]);
    }
    printf("\n");
}

void set_cognome(Studente *st)
{
    fgets(st->cognome, sizeof(st->cognome), stdin);
    st->cognome[strcspn(st->cognome, "\n")]='\0';
}
void get_cognome(Studente *st)
{
    for(int i=0; st->cognome[i]!='\0'; i++)
    {
        printf("%c", st->cognome[i]);
    }
    printf("\n");
}

void set_anni(Studente *st)
{
    scanf("%d", &st->anni);
    getchar();
}
int get_anni(Studente *st)
{
    return st->anni;
}

void set_voto(Studente *st)
{
    scanf("%f", &st->voto);
    getchar();
}
float get_voto(Studente *st)
{
    return st->voto;
}