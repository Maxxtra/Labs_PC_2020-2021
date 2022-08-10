#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *v, cap = 10;
    v = (int *)malloc(cap * sizeof(int));
    int i = 0, j, x;
    scanf("%d", &x);
    while (x != 0)
    {
        v[i] = x;
        i++;
        if (i == cap)
            v = (int *)realloc(v, cap * sizeof(int));
        scanf("%d", &x);
    }
    for (j = 0; j < i; j++)
        printf("%d ", v[j]);
    free(v);
}