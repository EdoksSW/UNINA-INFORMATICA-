#include <stdio.h>
#include "funzione.h"
int main()
{
    int num, num2;
    printf("INserire due numeri a piacere tuo\n");
    scanf("%d", &num);
    scanf("%d",&num2);
    int sum=somma(&num, &num2);
    printf("La somma dei due numeri da te scelti e'-->%d", sum);
    return 0;
}