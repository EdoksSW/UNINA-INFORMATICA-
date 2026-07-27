#include <stdio.h>

void inserisci(int arr[][3])
{
    
    for(int i=0; i<3; i++)
    {
        for(int j=0; i<3; j++)
        {
            scanf(" %d", &arr[i][j]);
        }
    }
}