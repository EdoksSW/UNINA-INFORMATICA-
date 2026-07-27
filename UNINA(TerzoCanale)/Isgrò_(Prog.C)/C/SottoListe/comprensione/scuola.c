#include "scuola.h"

void aggiungiAlunno(Classe **listaClassi, char *nomeClasse, char *nomeStudente)
{
    // FASE 1: CERCHIAMO LA CLASSE GIUSTA
    Classe *currClasse=(*listaClassi);
    Classe *classeTrovata=NULL; 

    // Scorriamo la lista verticale per vedere se la classe esiste già
    while(currClasse != NULL)
    {
        if(strcmp(currClasse->nomeClasse, nomeClasse) == 0)
        {
            classeTrovata=currClasse; //Trovata!
            break;
        }
        currClasse=currClasse->next;
    }

    // FASE 2: SE LA CLASSE NON ESISTE, CREIAMOLA
    if(classeTrovata == NULL)
    {
        classeTrovata = (Classe*)malloc(sizeof(Classe));
        strcpy(classeTrovata->nomeClasse, nomeClasse);
        classeTrovata->alunni=NULL; //all'inizio l'aula è vuota

        // La agganciamo in testa alla lista verticale (è più facile)
        classeTrovata->alunni= *listaClassi;
        *listaClassi= classeTrovata;
        
        printf("Creata nuova classe &s\n", nomeClasse);
    }

    // FASE 3: INSERIAMO LO STUDENTE NELLA CLASSE
    //Ora 'classeTrovata' punta sicuramente alla classe giusta (vecchia o nuova).

    //Creiamo il nodo studente
    Studente *nuovoAlunno= (Studente*)malloc(sizeof(Studente));
    strcpy(nuovoAlunno->nome, nomeStudente);
    classeTrovata->alunni=nuovoAlunno;
}