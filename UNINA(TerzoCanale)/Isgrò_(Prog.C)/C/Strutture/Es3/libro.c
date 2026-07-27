#include "libro.h"

void inserimento(Libro *lb)
{
    printf("Nome autore: ");
    fgets(lb->autore, sizeof(lb->autore), stdin);
    lb->autore[strcspn(lb->autore, "\n")]='\0';
    printf("Inserire il nome del libro: ");
    fgets(lb->nome, sizeof(lb->nome), stdin);
    lb->nome[strcspn(lb->nome, "\n")]='\0';
    printf("Inserire il prezzo del libro: ");
    scanf("%f", &lb->prezzo);
    getchar();
}

void  nome(Libro *lb)
{
    int i=0;
    while(lb->nome[i]!='\0')
    {
        printf("%c", lb->nome[i]);
        i++;
    }
}

void autore(Libro *lb)
{
    int i=0;
    while(lb->autore[i]!='\0')
    {
        printf("%c", lb->autore[i]);
        i++;
    }
}

float prezzo(Libro *lb)
{
    return lb->prezzo;
}
