#include <stdio.h>

int main()
{
    int N, v[100], i, n5 = 0;
    float procent;
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &v[i]);
    }
    for (i = 0; i < N; i++)
    {
        if (v[i] < 5)
        {
            n5++;
        }
    }
    procent = (float)n5 * 100 / N;
    printf("%.3f", procent);
    return 0;
}
