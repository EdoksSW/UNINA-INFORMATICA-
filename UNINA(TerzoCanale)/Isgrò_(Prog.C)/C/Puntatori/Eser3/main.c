#include <stdio.h>

int main()
{
    int m=300;
    float fx=300.600006;
    char cht='z';
    printf("Utilizzando & operatore\n");

    printf("indirizzo di m = %p\n", &m);
    printf("indirizzo di fx= %p\n", &fx);
    printf("indirizzo di cht = %p\n", &cht);

    printf("Utilizzo di & e * operatore\n");
    char *c=&cht;
    int *n=&m;
    float *f=&fx;
    printf("valore all'indirizzo di m=%d\n", *n);
    printf("valore all'indirizzo di fx=%f\n", *f);
    printf("valore all'indirizzo di cht=%c\n", *c);

    printf("Utilizzando solo la variabile puntatore: \n");
    printf("indirizzo di m=%p\n", (void*)n);
    printf("indirizzo di fx=%p\n", (void*)f);
    printf("indirizzo di cht=%p\n", (void*)c);

}