#include <stdio.h>
#include <stdlib.h>
int calcul(int n, int k)
{
    long i, p1 = 1, p2 = 1, p3 = 1;
    for (i = 1; i <= n; i++)
        p1 = p1 * i;
    for (i = 1; i <= k; i++)
        p2 = p2 * i;
    for (i = 1; i <= (n - k); i++)
        p3 = p3 * i;
    return p1 / (p2 * p3);
}
int main()
{
    long x, y, *v, *w, i, j, *p1;
    v = (long *)calloc(25, sizeof(long));
    w = (long *)calloc(25, sizeof(long));
    scanf("%ld %ld", &x, &y);
    v[0] = 1;
    v[1] = 1;
    for (j = 0; j < x; j++)
    {
        for (i = 0; i < x; i++)
        {
            if (i == 0)
                w[i] = 1;
            else
                w[i] = v[i] + v[i - 1];
            if (w[i] == calcul(x, y))
            {
                printf("%ld", w[i]);
                break;
            }
        }
        p1 = v;
        v = w;
        w = p1;
    }
    return 0;
}
