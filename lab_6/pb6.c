#include <stdio.h>

int prim(int x)
{
    int i, ok = 0;
    if (x < 2)
        ok = 0;
    if (x == 2)
        ok = 1;
    for (i = 2; i <= x / 2; i++)
        if (x % i == 0)
            ok = 0;
    return ok;
}
int main()
{
    int i, d, n, a, nr = 0, nrdiv = 0, minim = 10000, maxim = 0, v[100], poz = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d ", &a);
        for (d = 2; d <= a / 2; d++)
        {
            if (a % d == 0)
                if (prim(d) == 1)
                    if (prim(a / d) == 1)
                        nrdiv++;
        }
        if (nrdiv == 2)
        {
            v[poz] = a;
            poz++;
        }
        /*printf("%d ", a);
            printf("\n");
            nr++;
            if (a > maxim)
                maxim = a;
            if (a < minim)
                minim = a;*/

        nrdiv = 0;
    }
    for (i = 0; i < poz; i++)
        printf("%d ", v[poz]);
    ///printf("%d %d %d ", minim, maxim, nr);
}