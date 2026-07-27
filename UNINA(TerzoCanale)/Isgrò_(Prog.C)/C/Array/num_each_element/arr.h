#include <stdio.h>

void setArr1(int *arr1, int dim)
{
    printf("Inserire %d numeri a piacere tuo\n");
    for(int i=0; i<dim; i++)
    {
        printf("Inserire %d numero-->", (i+1));
        scanf("%d", &arr1[i]);
    }
}

void unici(int *arr1, int*arr2, int dim )
{
    int temp;
    int count=0;
    int y=0;
    for(int i=0; i<dim; i++)
    {
        temp=arr1[i];
        for(int j=0; j<y; j++)
        {
            if(arr2[j]==temp)
            {
                count++;
            }
        }
        if(count==0)
        {
            arr2[y]=temp;
            y++;
        } 
        count=0;
    }
}

void counter(int *arr1, int *arr2, int dim)
{
    int count=0;
    int j=0;
    for( int i=0; i<dim; i++)
    {
        for( j=0; j<dim; j++)
        {
            if(arr2[i]==arr1[j])
            {
                count++;
            }
        }
        printf("%d->%d\n",arr2[i],count);

        count=0;
    }
}

void printArr2(int *arr2, int dim)
{
    for(int i=0; i<dim; i++)
    {
        printf("%d\n", arr2[i]);
    }
}