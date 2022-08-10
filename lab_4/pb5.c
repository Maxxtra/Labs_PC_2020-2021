#include <stdio.h>

int main()
{
    int v[100], w[100], x[200], i, j, n, m, k = 0, p;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &v[i]);
    scanf("%d", &m);
    for (j = 0; j < m; j++)
        scanf("%d", &w[j]);
    i = 0;
    j = 0;
    while (i < n && j < m)
    {
        if (v[i] < w[j])
        {
            x[k] = v[i];
            k++;
            i++;
        }
        else
        {
            x[k] = w[j];
            k++;
            j++;
        }
    }
    if (i <= n)
    {
        for (p = i; p < n; p++)
        {
            x[k] = v[p];
            k++;
        }
    }
    if (j <= m)
    {
        for (p = j; p < m; p++)
        {
            x[k] = w[p];
            k++;
        }
    }
    for (p = 0; p < k - 1; p++)
        printf("%d", x[p]);
    return 0;
}