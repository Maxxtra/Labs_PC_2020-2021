#include <stdio.h>

int cifra(int n, int c)
{
    while (n != 0)
    {
        if (c == n % 10)
            return 1;
        else
            n = n / 10;
    }
    return 0;
}

int main()
{
    int n, c;
    scanf("%d %d", &n, &c);
    if (cifra(n, c) == 1)
        printf("da");
    else
        printf("nu");
}
