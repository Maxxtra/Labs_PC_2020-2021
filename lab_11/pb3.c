#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define DIM 100

void strlwr(char *sir)
{
    int ascii;
    ascii = (int)sir[0];
    if (ascii >= 97)
        sir[0] = ascii - 32;
}
int main()
{
    FILE *fisier;
    char *sir, *rez, sir2[DIM], *loc, *loc1, sir3[DIM];
    int i = 0, nr = 0;
    fisier = fopen("input.txt", "rt");
    if (fisier == NULL)
    {
        printf("Fisierul nu a putut fi deschis\n");
        return 0;
    }
    printf("Dati sirul cautat: ");
    gets(sir2);

    sir = malloc(DIM * sizeof(char));

    while (!feof(fisier))
    {
        fgets(sir, DIM, fisier);
        i++;
        loc = strstr(sir, sir2);
        if (loc != NULL)
        {
            printf("[%d] %s", i, sir);
            nr++;
        }
        else
        {
            strcpy(sir3, sir2);
            strlwr(sir3);
            loc1 = strstr(sir, sir3);
            if (loc1 != NULL)
            {
                printf("[%d] %s", i, sir);
                nr++;
            }
        }
    }
    printf("Numar total de linii: %d", nr);
    fclose(fisier);
    return 0;
}