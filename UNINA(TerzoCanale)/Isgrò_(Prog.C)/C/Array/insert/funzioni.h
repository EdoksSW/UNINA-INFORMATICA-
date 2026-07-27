#include <stdio.h>

int  pos(int count, int *arr, int SIZE)
{
    for(int i=0; i<SIZE ; i++)
    {
        if(arr[i]==0) 
        {
            count=i;
            break;
        }

        printf("%d\n", arr[i]);
    }
    return count;
}

void repos(int i, int *arr, int count)
{

    for(int x=count; x>i+1; x--)
    {
        arr[x+1]=arr[x];
    }
}

int realloca(int *arr, int SIZE, int a, int count)
{
    int temp;
    for(int i=0; i<count; i++)
    {
        if(arr[i-1]<= a && arr[i+1]>=a)
        {
            repos(i,arr,count);
            temp=arr[i+1];
            arr[i+1]= a;
            if((i+2)<SIZE)
            {
                arr[i+2]=temp;
            }
            count+=1;
            break;
        }
    }
    return count;
}