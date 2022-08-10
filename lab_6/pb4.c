#include <stdio.h>
#include <string.h>
#include <math.h>

int comp(char v[], char w[], int n, int m)
{
    int i, minim;
    if (m < n)
        minim = m;
    else if (m > n)
        minim = n;
    for (i = 0; i < minim; i++)
        if (v[i] > w[i])
            return 1;
        else if (v[i] < w[i])
            return -1;
    if (n > m)
        return 1;
    else if (n < m)
        return -1;
    return 0;
}

int main()
{
    int n, m, x;
    char v[100], w[100];
    scanf("%s", v);
    scanf("%s", w);
    n = strlen(v);
    m = strlen(w);
    x = comp(v, w, n, m);
    printf("%d \n", x);
    return 0;
}