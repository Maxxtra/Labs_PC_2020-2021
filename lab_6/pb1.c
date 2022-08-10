#include <stdio.h>

void bubblesort(int v[], int n)
{
    int gata = 0, i, aux;
    while (!gata)
    {
        gata = 1;
        for (i = 0; i < n - 1; i++)
            if (v[i] > v[i + 1])
            {
                gata = 0;
                aux = v[i];
                v[i] = v[i + 1];
                v[i + 1] = aux;
            }
    }
}

int main()
{
    int v[1000], i, n;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &v[i]);
    bubblesort(v, n);
    for (i = 0; i < n; i++)
        printf("%d ", v[i]);
    return 0;
}
