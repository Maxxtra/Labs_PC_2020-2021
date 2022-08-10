#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *my_replace(char *s, char *s1, char *s2)
{
    char *aux;
    aux = (char *)malloc(strlen(s) * sizeof(char));
    strcpy(aux, s);
    strcpy(strstr(aux, s1), strstr(aux, s1) + strlen(strstr(aux, s1)));
    strcat(aux, s2);
    strcat(aux, strstr(s, s1) + strlen(s1));
    return aux;
}

int main()
{
    char s[100], s1[100], s2[100];
    scanf("%s %s\n", s1, s2);
    gets(s);
    printf("%s\n", my_replace(s, s1, s2));
}