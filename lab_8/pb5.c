#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int n, i, j;
    char sir[100];
    char *s, **v, *p;
    v = (char **)malloc(100 * sizeof(char *));
    s = (char *)malloc(1000 * sizeof(char));
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%s", v[i]);
    strcat(s, v[0]);
    strcat(s, "-");
    for (i = 1; i < n; i++)
    {
    }
}