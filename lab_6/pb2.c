#include <stdio.h>
#include <math.h>

void masuraunghiurilor(float v[], float w[], int n)
{
    w[0] = acos((v[1] * v[1] + v[2] * v[2] - v[0] * v[0]) / (2 * v[1] * v[2])) * 180 / M_PI;
    w[1] = acos((v[2] * v[2] + v[0] * v[0] - v[1] * v[1]) / (2 * v[2] * v[0])) * 180 / M_PI;
    w[2] = acos((v[0] * v[0] + v[1] * v[1] - v[2] * v[2]) / (2 * v[0] * v[1])) * 180 / M_PI;
}

int main()
{
    int i, n = 3;
    float v[3], w[3];
    for (i = 0; i < 3; i++)
        scanf("%f", &v[i]);
    masuraunghiurilor(v, w, n);
    for (i = 0; i < 3; i++)
        printf("%0.3f ", w[i]);
    return 0;
}