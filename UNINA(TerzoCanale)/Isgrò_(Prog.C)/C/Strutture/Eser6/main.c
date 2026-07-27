#include <stdio.h>
#include "date.h"

int main()
{
    date dt[2];

    for(int i=0; i<2; i++)
    {
        printf("Inserisci data %d \n",i+1);
        setData(&dt[i]);
    }

    long int diff1=convertToGiorni(&dt[0]);
    diff1 +=(dt[0].anno - 1)*365;
    diff1 += (dt[0].anno - 1) /4;
    diff1-=(dt[0].anno - 1)/100;
    diff1+=(dt[0].anno - 1)/400;
    long int diff2=convertToGiorni(&dt[1]);
    diff2 += (dt[1].anno - 1) * 365;
    diff2 += (dt[1].anno - 1) / 4;
    diff2 -= (dt[1].anno - 1) / 100;
    diff2 += (dt[1].anno - 1) / 400;
    printf("Differeza tra le due date è: %d", (diff1-diff2));

    return 0;
}