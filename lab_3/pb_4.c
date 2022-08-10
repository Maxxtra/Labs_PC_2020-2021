#include <stdio.h>

int main()
{
    int x, v[1000] = {0}, i = 0, s, j;
    do
    {
        scanf("%d", &x);
        v[i] = x;
        i++;
    } while (x);
    for (j = 0; j < i; j++)
        if (v[j] != 0)
        {
            s = 0;
            x = v[j];
            while (v[j] != 0)
            {
                s += v[j] % 10;
                v[j] = v[j] / 10;
            }
            v[j] = x;
            if (v[j] % s == v[j + 1])
                printf("%d %d ", v[j], v[j + 1]);
        }
    return 0;
}