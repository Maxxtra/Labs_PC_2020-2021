#include <stdio.h>
#include <limits.h>
int main()
{
    int a[100][100], i, j, m, n, v[100], maximul = INT_MIN, minimul = INT_MAX;
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            scanf("%d", &a[i][j]);
    for (i = 0; i < n; i++)
    {
        maximul = INT_MIN;
        for (j = 0; j < m; j++)
        {
            if (a[i][j] > maximul)
                maximul = a[i][j];
        }
        v[i] = maximul;
    }
    for (i = 0; i < n; i++)
        if (v[i] < minimul)
            minimul = v[i];
    printf("%d", minimul);
    return 0;
}
