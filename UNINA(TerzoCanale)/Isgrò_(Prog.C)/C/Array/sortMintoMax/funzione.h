#include <stdio.h>

void ordinamento(int *arr1, int size)
{
    int temp1;
    for( int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            if(arr1[i]<arr1[j])
            {
                temp1=arr1[i];
                arr1[i]=arr1[j];
                arr1[j]=temp1;
            }

        }
    }
}