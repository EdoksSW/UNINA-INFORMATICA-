#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cCount(FILE *fP);
int cWords(FILE *fP);

int main()
{
    FILE *fP;
    int righe=4;
    char fN[20], buffer[255];
    printf("inserisci il file che desideri aprire o creare(ancora non esistente):\n");
    fgets(fN, 20, stdin);
    fN[strcspn(fN," \n\t")]=0;
    fP=fopen(fN, "a+");

    for(int i=0; i<righe; i++)
    {
        fgets(buffer, 255, stdin);
        fprintf(fP, "%s", buffer);
    }

    printf("Il numero di lettere presenti e'-->%d\n", cCount(fP));
    printf("il numero di parole presenti e'-->%d\n",cWords(fP));

    fclose(fP);
}

int cCount(FILE *fP)
{
    char buffer[255];
    int count=0;
    rewind(fP);
    while(fgets(buffer, 255, fP)!=NULL)
    {
        int i=0;

        while(buffer[i]!='\0')
        {
            if(buffer[i]!=' ' && buffer[i]!='\n') count+=1;
            i++;
        }

    }
    return count;
}

int cWords(FILE *fP)
{
    char buffer[255];
    int count=0;
    rewind(fP);
    while(fgets(buffer, 255, fP)!=NULL)
    {
        int i=0;
        int flag=0;

        while(buffer[i]!='\0')
        {
            if(buffer[i]==' ' || buffer[i]=='\n') flag=0;
            else if(flag==0)
            {
               flag=1;
               count+=1; 
            }
            i++;
        }
    }
    return count;
}