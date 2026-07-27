#include <stdio.h>

int main()
{
    int npari, count=0, sum=0, num=0;
    printf("Quanti primi n numeri pari vorrestti sommare? \n -->");
    scanf("%d", &npari);

    while(count <= npari)
    {
        if(num%2 ==0 )
        {
            sum+=num;
            count++;
        }
        num++;
    }
    printf("%d", sum);

    return 0;
}