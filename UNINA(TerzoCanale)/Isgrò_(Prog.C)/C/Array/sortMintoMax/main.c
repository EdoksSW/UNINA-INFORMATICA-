#include <stdio.h>
#include <stdlib.h>
#include "funzione.h"

int main()
{
    int size;
    printf("Quanti numeri vuoi inserire a paicere tuo\n?");
    scanf("%d", &size);

    int *arr1=malloc(size * sizeof(int));

    for(int i=0; i<size; i++)
    {
        printf("Inserire %d numero-->", i);
        scanf("%d", &arr1[i]);
    }
    ordinamento(arr1,size);
    for(int i=0; i<size; i++)
    {
        printf("%d\n",arr1[i]);
    }
    return 0;
}