#ifndef STUDENTI_H
#define STUDENTI_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
{  
    char name[50];
    char cognome[50];
    float voto;
    int anni;
}Studente;

void set_name(Studente *st);
void get_name(Studente *st);

void set_cognome(Studente *st);
void get_cognome(Studente *st);

void set_anni(Studente *st);
int get_anni(Studente *st);

void set_voto(Studente *st);
float get_voto(Studente *st);

#endif