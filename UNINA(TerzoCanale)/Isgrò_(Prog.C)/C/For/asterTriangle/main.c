#include <stdio.h>

int main()
{
    int rows, space, count, countS;
    printf("Inserisci il numero di righe da te desiderate->");
    scanf("%d", &rows);

    space=rows+4;

    for(int i=1; i<=rows; i++, space--)
    {
        //spazi dimargine tra un rigo e un altro
        countS=space;
        while(countS>=0) 
        {
        printf(" ");
        countS--;
        }
        //stampa asterischi
        count=i;
        while(count>=1)
        {
        printf("* ");
        count--;
        }
        //andare a capo
        printf("\n");
    }

    return 0;

}