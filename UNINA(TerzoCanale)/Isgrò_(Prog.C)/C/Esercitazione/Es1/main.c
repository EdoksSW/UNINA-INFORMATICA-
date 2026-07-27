#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n;
    int num;
    
    printf("Inserisci il numero di righe: ");
    scanf("%d", &m+1);
    printf("Inserisci il numero di colonne: ");
    scanf("%d", &n+1);

    int *A=(int*)malloc(m*(n+1)*sizeof(int));

    for(int i=1; i<m; i++)
    {
        for(int j=1; j<n; j++)
        {
            num=i*j;
            A[i * (n+1) + j] = num; 
        }
    }

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d ", A[i*(n+1)+j]);
        }
        printf("\n");
    }

    return 0;
}