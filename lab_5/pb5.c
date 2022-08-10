#include <stdio.h>
#include <math.h>
float distanta(int x1, int y1, int x2, int y2)
{
    float d;
    d = sqrt(((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2)));
    return d;
}

int main()
{
    int x[100], y[100], n, imax = 0, jmax = 0, j, i;
    float maxim = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d %d", &x[i], &y[i]);
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n; j++)
            if (distanta(x[i], y[i], x[j], y[j]) > maxim)
            {
                maxim = distanta(x[i], y[i], x[j], y[j]);
                imax = i;
                jmax = j;
            }
    printf("%d %d \n %d %d \n %f", x[imax], y[imax], x[jmax], y[jmax], maxim);
}