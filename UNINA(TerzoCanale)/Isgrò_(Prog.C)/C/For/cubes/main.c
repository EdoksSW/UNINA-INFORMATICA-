#include <stdio.h>
#include <math.h>

int main()
{
    int arNums[5];

    for (int i=0; i<5; i++)
    {
        scanf("%d", &arNums[i]);
    }
    
    for (int i=0; i<5; i++)
    {
        printf("il cubo di %d e': %d\n", arNums[i], (int)(pow(arNums[i],3)));
    }

    return 0;
}