#include <stdio.h>

void transform(int v[], int n, int x)
{
    int i, j, aux;
    for (j = n - 1; j >= (n - 1) / 2; j--)
        for (i = 0; i < j; i++)
            if (v[i] >= x && v[j] < x)
            {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
}

int main()
{
    int v[100], i, n, x;
    scanf("%d %d", &n, &x);
    for (i = 0; i < n; i++)
        scanf("%d", &v[i]);
    transform(v, n, x);
    for (i = 0; i < n; i++)
        printf("%d ", v[i]);
}