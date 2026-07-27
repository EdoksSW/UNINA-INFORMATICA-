#include <stdio.h>
#include "tempo.h"

int main()
{
    Tempo tp[2];

    for(int i=0; i<=1; i++)
    {
        setOra(&tp[i]);
        printf("\n");
        printOra(&tp[i]);
        printf("\n");
    }
    return 0;
}