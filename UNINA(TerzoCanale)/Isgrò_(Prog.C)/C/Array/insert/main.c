#include <stdio.h>
#include "funzioni.h"
#define SIZE 100

int main()
{
    int arr[SIZE]={2,3,4,7,8};
    int count;
    int a=5;

    count=pos(count,arr, SIZE);

    printf("priva stampa\n ");
    for(int i=0; i<count; i++)
    {
        printf("%d\n", arr[i]);
    }
    printf("Stampa nuova versione\n");
    count= realloca(arr,SIZE,a,count);
    for(int i=0; i<count; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}