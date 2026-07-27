#include <stdio.h>

int main()
{
    int x, sum=0;

    while(x!=0)
    {
        scanf("%d", &x);
        sum+=x;
    }

    printf("%d", sum);
    return 0;
}