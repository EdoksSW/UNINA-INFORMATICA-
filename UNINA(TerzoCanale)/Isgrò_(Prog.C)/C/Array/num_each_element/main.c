#include <stdio.h>
#include "arr.h"
#define size 10
int main()
{
    int arr1[size], arr2[size]={0} ;
    int temp, count=0, y;

    

    setArr1(arr1, size);
    unici(arr1, arr2, size);
    printArr2(arr2, size);
    counter(arr1,arr2, size);

    return 0;
}