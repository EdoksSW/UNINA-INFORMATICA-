#ifndef LIBRO_H
#define LIBRO_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    char nome[50];
    char autore[50];
    float prezzo;
}Libro;

void inserimento(Libro *lb);
void nome(Libro *lb);
void autore(Libro *lb);
float prezzo(Libro *lb);


#endif