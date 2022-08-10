#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int n, *apar, nr = 0, i, j;
    char sir[100];
    char *p, **v;
    v = (char **)malloc(1000 * sizeof(char *));
    apar = (int *)calloc(1000, sizeof(int));
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        v[i] = (char *)malloc(19 * sizeof(char));
        scanf("%s", v[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
            if (strcmp(v[i], v[j]) == 0)
                apar[i]++;
        int a = 1;
        for (int k = 0; k < i; k++)
            if (strcmp(v[i], v[k]) == 0)
                a = 0;
        if (a == 1)
            printf("%s %d\n", v[i], apar[i]);
    }
}