#include <stdio.h>

int main()
{
    int i, d, j, n, a, nr = 0, nrdiv = 0, minim = 10000, maxim = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d ", &a);
        for (d = 2; d < a / 2; d++)
        {
            if (a % d == 0)
                for (j = 2; j <= d / 2; j++)
                    if (d % j == 0)
                        nrdiv++;
            if (nrdiv == 2)
            {
                printf("%d ", a);
                printf("\n");
                nr++;
                if (a > maxim)
                    a = maxim;
                if (a < minim)
                    minim = a;
            }
            nrdiv = 0;
        }
        printf("%d %d ", minim, maxim);
    }
}