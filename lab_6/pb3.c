#include <stdio.h>

void cautare(int a[], int n, int b[], int m, int c[])
{
    int i, j, nrpoz = 0;
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            if (a[i] == b[j])
            {
                c[nrpoz] = a[i];
                nrpoz++;
            }
    for (i = 0; i < nrpoz; i++)
        printf("%d ", c[i]);
}

int main()
{
    int i, n, m, a[100], b[100], c[100];
    scanf("%d", &n);
    printf("\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("\n");
    scanf("%d \n", &m);
    for (i = 0; i < m; i++)
        scanf("%d", &b[i]);
    printf("\n");
    cautare(a, n, b, m, c);
}