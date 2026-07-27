#include <stdio.h>
#include "funzioni.h"
int main()
{
    int arr[3][3];

    printf("Inserisci 9 numeri a piacere tuo:\n");
    inserisci(arr);
    
    for(int i=0; i<3;i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
