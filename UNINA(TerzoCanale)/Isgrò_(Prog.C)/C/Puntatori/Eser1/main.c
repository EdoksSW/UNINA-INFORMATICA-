#include <stdio.h>

int main()
{
    int m=10, n, o, *z;
    z=&m;
    printf("z=%d", *z);
    return 0;
}