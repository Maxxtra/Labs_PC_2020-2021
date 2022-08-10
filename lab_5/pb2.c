#include <stdio.h>

int prim(int n)
{
    int i, nr = 0;
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            nr++;
    }
    if (nr == 0)
        return 1;
    else
        return 0;
}

int main()
{
    int n, suma = 0, primu = 0, aldoilea = 0, i;
    scanf("%d", &n);
    for (i = 1; i < n / 2; i += 2)
        if (prim(i) == 1 && prim(n - i) == 1)
            printf("%d + %d \n", i, n - i);
}