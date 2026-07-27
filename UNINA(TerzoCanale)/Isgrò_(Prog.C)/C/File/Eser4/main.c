#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fP=fopen("test.txt", "r");
    char text[10][128];
    int i=0; //"i" è il dito che punta alla riga del foglio dove siamo arrivati

    if(fP==NULL) return 1;
    
    //fgets(dove, quanto, da_dove)

    while(i<10 && fgets(text[i], 128, fP)!=NULL)
    {
        //strcspn in sostanza è una funzione dove tu gli dici dove cercare una determinata cosa e lui ti resituisce la posizione in cui si trova
        //strcspn(Dove, "che cosa")->posizione in cui si trova quel "che cosa".
        text[i][strcspn(text[i], "\n")]=0;
        i++;
    }

    for(int j=0; j<i;j++)
    {
        printf("%s", text[j]);
    }

    fclose (fP);
    return 0;
}