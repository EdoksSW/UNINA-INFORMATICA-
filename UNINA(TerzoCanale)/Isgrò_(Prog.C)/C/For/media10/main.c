#include <stdio.h>

int main()
{
    float somma=0; 
    float media;
    float x;

    for(int i=0; i<10; i++)
    {
        scanf("%f", &x);
        somma+=x;
    }
    media=(somma/10);
    printf("media %f",media);
    return 0;
}