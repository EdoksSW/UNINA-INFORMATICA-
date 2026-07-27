#include "date.h"

int convertToGiorni(date *dt)
{
    int n=0;
    int giorni=0;
    while(n<=dt->mese)
    {
        switch (n)
        {
            case 1: case 4: case 6: case 8: case 9: case 11: case 12:
            giorni+=30;
            break;
            case 3: case 5: case 7: case 10:
            giorni+=31;
            break;
            case 2:
            if((dt->anno%4==0 && dt->anno%100 != 0) || (dt->anno%400==0))
            {
                giorni+=29;
            }else
             {
                giorni+=28;
             }
            break;
        
        default:
            break;
        }
        n++;
    }
    return (giorni+dt->giorno);
}

void setData(date *dt)
{
    printf("Inserire giorno:->");
    scanf("%d", &dt->giorno);
    getchar();
    printf("Inserire mese:->");
    scanf("%d", &dt->mese);
    getchar();
    printf("inserire anno:->");
    scanf("%d", &dt->anno);
    getchar();
}

void getDate(date *dt)
{
    printf("%d/%d/%d\n", dt->giorno, dt->mese, dt->anno);
}
