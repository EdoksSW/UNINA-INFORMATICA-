#include <stdio.h>

int main()
{
    int arr[10];
    int sizeArr=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<sizeArr; i++)
    {
        printf("Inserire %d numero-->",(i+1));
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<sizeArr; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}