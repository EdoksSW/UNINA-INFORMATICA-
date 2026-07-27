#include <stdio.h>

int main()
{
    int num, fattoriale=1;
    printf("Inserire un numero a piacere tuo -->");
    scanf("%d",&num);

    printf("Ora stamperemo il fattoriale -->%d\n", num);
    for(int i=num; i>=1; i--)
    {
        fattoriale*=i;
    }
    printf("Il fattoriale di %d e' %d", num, fattoriale);

    return 0;
}