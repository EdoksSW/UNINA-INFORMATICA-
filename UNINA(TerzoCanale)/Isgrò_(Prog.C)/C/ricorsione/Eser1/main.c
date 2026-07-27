#include <stdio.h>

void numPrint(int n);

int main()
{
    int n=1;

    printf("dimostrazione ricorsione di 50 numeri naturali->");
    numPrint(n);

    return 0;
}

void numPrint(int n)
{
    if(n<=50)
    {
        printf("%d ", n);
        numPrint(n+1);
    }
}