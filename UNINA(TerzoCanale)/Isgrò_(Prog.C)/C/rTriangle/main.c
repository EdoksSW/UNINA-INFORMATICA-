#include <stdio.h>

int main()
{
    int righe, spazio;
    printf("Quante righe?-->");
    scanf("%d", &righe);
    spazio=righe;

    for(int i=1; i<=righe; i++)
    {
        for(int j=spazio; j>=1;j--)
        {
            printf(" ");
        }
        spazio-=1;
        for(int k=1; k<=i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}