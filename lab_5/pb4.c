#include <stdio.h>

int factorial(int n)
{
    int i, j = 1;
    for (i = 2; i <= n; i++)
        j = j * i;
    return j;
}
double putere(double x, int n)
{
    int i;
    double putere = 1;
    for (i = 1; i <= n; i++)
        putere = putere * x;
    return putere;
}

double taylor(double x, int n)
{
    int i;
    double s = 1;
    for (i = 1; i <= n; i++)
        s = s + (putere(x, i) / factorial(i));
    return s;
}
int main()
{
    double x, serietaylor;
    int n;
    scanf("%lf %d", &x, &n);
    serietaylor = taylor(x, n);
    printf("%.4lf", serietaylor);
}