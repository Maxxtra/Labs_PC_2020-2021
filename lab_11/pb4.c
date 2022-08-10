#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define DIM 100

int main()
{
    FILE *fisier1, *fisier2;
    char nume[100], nume1[100];
    printf("Dati numele fisierului: ");
    gets(nume);
    fisier1 = fopen(nume, "rt");
    gets(nume1);
    fisier2 = fopen(nume1, "rt");
    if (fisier1 == NULL)
    {
        printf("Fisierul %s nu s-a putut deschide\n", nume);
        return 0;
    }
    if (fisier2 == NULL)
    {
        printf("Fisierul %s nu s-a putut deschide\n", nume1);
        return 0;
    }
    char c, v[DIM], lit;
    int n = 0, i;
    c = getc(fisier1);
    v[0] = c;
    while (!feof(fisier1))
    {
        if (c >= 97 && c <= 122)
            v[n++] = c;
        c = getc(fisier1);
    }
    lit = getc(fisier2);
    while (!feof(fisier2))
    {
        int gasit2 = 0;
        if (lit >= 65 && lit <= 90)
        {
            lit = lit + 32;
            gasit2 = 1;
        }
        int gasit = 0;
        for (i = 0; i < n; i = i + 2)
        {
            if (lit == v[i])
            {
                lit = v[i + 1];
                gasit = 1;
                if (gasit2 == 1)
                    lit = lit - 32;
            }
            if (lit >= 112 && lit <= 122 && gasit2 == 1)
                lit = lit - 32;
            if (gasit == 1)
                i = n;
        }
        printf("%c", lit);
        lit = getc(fisier2);
    }

    fclose(fisier1);
    fclose(fisier2);
    return 0;
}