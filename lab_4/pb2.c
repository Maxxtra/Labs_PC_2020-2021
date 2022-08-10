#include <stdio.h>

int main()
{
    int v[100], i, n, nrpoz = 0, nrneg = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &v[i]);
    for (i = 0; i < n; i++)
    {
        if (v[i] >= 0)
            nrpoz++;
        else if (v[i] < 0)
            nrneg++;
    }
    printf("%d %d ", nrneg, nrpoz);
    return 0;
}