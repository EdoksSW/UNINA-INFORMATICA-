#include <stdio.h>

int main()
{
    int rows, space=0;
    int i, j, p, spaceB=0;
    printf("Inserisci il numero-->" );
    scanf("%d", &rows);
    
    space=rows+4;
    int countS=space;
    for( i=1; i<=rows; i++)
    {
        for( j=countS; j>=1; j--)
        {
            printf(" ");
        }
        countS--;
        spaceB++;
        for( p=i; p>=1; p--) printf("* ");
        printf("\n");
    }
    countS+=2;
    for(i=rows-1; i>=1; i--)
    {
        for( j=countS; j>=1; j--)
        {
            printf(" ");
        }
        countS++;
        for( p=i; p>=1; p--) printf("* ");
        printf("\n");
    }

    return 0;
}