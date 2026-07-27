#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int fileCreate(FILE *fP);

int main()
{
    FILE *fP;
    char fN[20];
    fgets(fN, 20, stdin);
    int pos;
    char text[255][10];


}

void fileWrite(FILE *fP)
{
    fP=fopen(fP, "a+");
    if(fP!=NULL) printf("Il file è stato aperto/creato con successo!\n");
    else printf("ERRORE: non e' stato possibile aprire/creare il file!!\n");
    char buffer[255];
    for(int i=0; i<4; i++)
    {  
        printf("Riga %d-->", i+1);
        fgets(buffer, 255, stdin);
        fprintf(fP, "%s", buffer);
    }
    fclose(fP);
    printf("Apposto ora hai riempito il file\n");
}

void fileReplace(FILE *fP)
{
    
}