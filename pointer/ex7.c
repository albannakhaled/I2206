#include <stdio.h>
#include <string.h>

void read(int *p, int n)
{
    for (int i = 0; i < n; i++)
    {

        printf("\nGive value num %d : ", i);
        scanf("%d", p + i);
    }
}