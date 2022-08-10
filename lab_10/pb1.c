#include <stdio.h>
#include <math.h>

double integrala(double (*func)(double x), double a, double b, int n)
{
    int i;
    double suma = 0;
    double x1, x2;
    double h;
    h = (b - a) / n;
    for (i = 1; i < n; i++)
    {
        x1 = h * (i - 1);
        x2 = h * i;
        suma += (func(x1) + func(x2)) * h;
    }
    suma = suma / 2;
    return suma;
}

int main()
{
    double inte = integrala(sin, 0, 1, 1000);
    printf("%lf\n", inte);
    return 0;
}