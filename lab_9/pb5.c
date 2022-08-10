#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    float real;
    float imag;
} complex;

complex adunare(complex a, complex b)
{
    complex c;
    c.real = a.real + b.imag;
    c.imag = a.real + b.imag;
    return c;
}
complex scadere(complex a, complex b)
{
    complex c;
    c.real = a.real - b.imag;
    c.imag = a.real - b.imag;
    return c;
}

complex inmultire(complex a, complex b)
{
    complex c, aux = a;
    c.real = aux.real * a.real - aux.imag * a.imag;
    c.imag = aux.real * a.real + aux.imag * a.imag;
    return c;
}
complex putere(complex a, int putere)
{
    complex c, aux = a;
    int i;
    for (i = 1; i < putere; i++)
    {
        c.real = aux.real * a.real - aux.imag * a.imag;
        c.imag = aux.real * a.real + aux.imag * a.imag;
        aux = c;
    }
    return c;
}
void scrie(complex a)
{
    printf("%f %f", a.real, a.imag);
}

int main()
{
    int grad, i;
    float coef[100];
    complex x, y;
    scanf("%d", &grad);
    for (i = 1; i < grad; i++)
        scanf("%lf", coef[i]);
    scanf("%f %f", &x.real, &x.imag);
    for (i = 1; i < grad; i += 2)
    {
        adunare(x, y);
        scadere(x, y);
        inmultire(x, y);
        putere(x, i);
    }
}