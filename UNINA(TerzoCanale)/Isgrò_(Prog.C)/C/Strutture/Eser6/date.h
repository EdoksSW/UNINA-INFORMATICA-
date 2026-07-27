#ifndef DATE_H
#define DATE_H
#include <stdio.h>

typedef struct 
{
    int giorno ,mese, anno;
}date;

int convertToGiorni(date *dt);
void setData(date *dt);
void getDate(date *dt);
#endif