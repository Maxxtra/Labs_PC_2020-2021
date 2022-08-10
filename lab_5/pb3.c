#include <stdio.h>

int cmmmc(int a, int b)
{
    int x = a, y = b;
    while (x != y)
    {
        if (x > y)
            x = x - y;
        else
            y = y - x;
    }
    return (a * b) / x;
}

int main()
{
    int x1, y1, x2, y2, a;
    scanf("%d %d %d %d", &x1, &x2, &y1, &y2);
    a = cmmmc(x2, y2);
    x1 = x1 * (a / x2);
    x2 = x2 * (a / x2);
    y1 = y1 * (a / y2);
    y2 = y2 * (a / y2);
    printf("%d %d \n %d %d", x1, x2, y1, y2);
}