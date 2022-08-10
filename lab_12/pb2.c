#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct
{
    char nume[20];
    int cantitate;
    float pret_produs
} produs;

int main(int argc, char *argv[])
{
    FILE *f;
    int x, i;
    produs produs[100];
    char nume[] = "Produs";
    f = fopen(argv[1], "wb");
    if (f == NULL)
        printf("Nu se poate deschide\n");
    for (i = 0; i < 100; i++)
    {
        x = rand() % RAND_MAX;
        sprintf(produs[i].nume, "%s%d", nume, x);
        produs[i].cantitate = x % 100;
        if (x < 100)
            produs[i].pret_produs = x;
        else
            produs[i].pret_produs = x % 100;
    }
    fwrite(produs, sieof(produs[0]), 100, f);
    fclose(f);
    return 0;
}