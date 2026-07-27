
#include "studenti.h"

int main()
{
    int n;
    float med;
    printf("Quanti studenti devi valutare?\n");
    scanf("%d", &n);
    Studente *studente=malloc(n*sizeof(studente));
    for(int i=0; i<n; i++)
    {
        credenziali(&studente[i]);
    }
    med=media(studente, n);
    printf("Media dei %d studenti è: %f", n, media);

    return 0;

}