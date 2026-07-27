#include <stdio.h>

void filePrintf();

int main()
{
    FILE *pF=fopen("text.txt", "w");

    if(pF!=NULL)
    {
        printf("Il file è stato creato con successo\n");
    } else printf("ERRORE: Impossibile creare il file\n");

    char buffer[255];
    fgets(buffer, 255, stdin);
    fprintf(pF, "%s", buffer);
    fclose(pF);


    filePrintf();
    return 0;
}

void filePrintf()
{
    FILE *pF;
    char buffer[255];
    pF=fopen("text.txt", "r");
    if(pF==NULL)
    {
        printf("Errore: non e' possibile aprire il file\n");
    }
    else
    {
        while(fgets(buffer, 255, pF)!=NULL)
        {
            printf("%s", buffer);
        }
        fclose(pF);
    }
}