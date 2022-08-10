#include <stdio.h>

void count(int n, int *v, int *zero, int *poz, int *neg)
{
    int i;
    // v[i] = *(v + i)
    for (i = 0; i < n; i++)
    {
        if (v[i] > 0)
        {
            //            (*poz)++;
            *poz = *poz + 1;
        }
        else if (v[i] < 0)
        {
            *neg = *neg + 1;
        }
        else
        {
            *zero = *zero + 1;
        }
    }
}

int main()
{
    int n;
    int v[100];
    int i;
    int zero = 0;
    int poz = 0;
    int neg = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }
    count(n, v, &zero, &poz, &neg);
    printf("nule = %d poz = %d neg = %d\n", zero, poz, neg);
}
