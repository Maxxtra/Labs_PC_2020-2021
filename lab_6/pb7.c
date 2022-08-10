#include <stdio.h>

int prim(int x)
{
    int cnt = 0, r;
    for (r = 1; r <= x; r++)
        if (x % r == 0)
            cnt++;
    if (cnt == 2)
        return 1;
    else
        return 0;
}
int main()
{
    int i, d, n, a, nrdiv = 0, nr = 0, minim = 1000, maxim = 0, nrsuperprime = 0, v[100], poz = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d ", &a);
        for (d = 2; d <= a; d++)
            if (a % d == 0)
                if (prim(d) == 1) // && prim(a / d) == 1)
                    nrdiv += 2;
        if (nrdiv == 2)
            printf("%d ", a);
    }
}
/// for (i = 0; i < poz; i++)
