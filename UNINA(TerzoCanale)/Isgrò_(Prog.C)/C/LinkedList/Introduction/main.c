#include <stdio.h>
#include <stdlib.h> //serve per usare malloc e NULL

/*Creare il Progetto del Nodo (una struct)*/
typedef struct Nodo
{
    int dato; //Il dato presente
    struct Nodo* prossimo;/*Stai dicendo che dentro il nodo c'è un puntaotre che punta a un altro Nodo identico a se stesso-> Questo crea la catena*/
} Nodo;

int main()
{
    //Passo A: preparo 3 puntatori (ancora VUOTI)
    Nodo *primo=NULL;
    Nodo *secondo=NULL;
    Nodo *terzo=NULL;

    //Passo B:Affitto la memoria per 3 Nodi
    primo=(Nodo*)malloc(sizeof(Nodo));
    secondo=(Nodo*)malloc(sizeof(Nodo));
    terzo=(Nodo*)malloc(sizeof(Nodo));

    //Passo C: Riempio il PRIMO nodo e lo collego al secondo
    primo->dato=10;
    primo->prossimo=secondo;

    //Passo D: Riempio il SECONDO nodo e lo collego al terzo
    secondo->dato=20;
    secondo->prossimo=terzo;

    //Passo E: Riempio il TERZO nodo e chiu la lista
    terzo->dato=30;
    terzo->prossimo=NULL;
    
    // --- VERIFICA: STAMPIAMO LA LISTA ---
    //Creo un puntatore temporaneo per scorrere la lista senza perdere il "primo"

    Nodo *tempo=primo;

    printf("La mia lista: ");

    //Finchè tempo punterà a qualcosa andrà sempre avanti
    while(tempo != NULL )
    {
        printf("%d->", tempo->dato);

        //per saltare al prossimo indirizzo
        tempo=tempo->prossimo;
    }

    printf("NULL\n");

    return 0;
}