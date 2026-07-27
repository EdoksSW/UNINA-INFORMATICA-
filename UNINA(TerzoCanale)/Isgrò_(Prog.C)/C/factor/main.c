#include <stdio.h>

int main()
{
    int x, factor=1, y;
    printf("inserisci un numero a piacere tuo-->");
    scanf("%d", &x);
    y=x;
    while(x>=1)
    {
        factor*=x;
        x--;
    }
    printf("Il fattoriale di %d e' %d", y, factor);

    return 0;
}