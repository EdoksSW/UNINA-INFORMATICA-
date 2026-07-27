#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fP=fopen("test.txt", "a");
    char buffer[255];
    int righe;

    if(fP!=NULL)
    {
        printf("Il file e' stato creato con successo!!\n");
    } 
    else
    {
        printf("ERRORE: non e' stato possibile creare o aprire il file");
        exit(1);
    }

    printf("Quante righe desideri scrivere?\n");
    scanf("%d", &righe);
    getchar();
    for(int i=1; i<=righe; i++)
    {
        fgets(buffer, 255, stdin);
        fprintf(fP, "%s", buffer);
    }
    fclose(fP);

    int i=1;
    fP=fopen("test.txt", "r");
    while(fgets(buffer, 255, fP)!=NULL)
    {
        printf("rigo %d->%s\n", i, buffer);
        i++;
    }
    fclose(fP);
    return 0; 
}