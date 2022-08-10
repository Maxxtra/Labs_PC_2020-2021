#include <stdio.h>
#include <string.h>

char *strdel(char *p, int n)
{
    char aux[100];
    strcpy(p, p + n);
    return p;
}

char *strins(char *p, char *s)
{
    char aux[100];
    strcpy(aux, p);
    strcpy(p, s);
    strcat(p, aux);
    return p;
}

int main()
{
    char siri[20], sir1[20], sir2[20];
    gets(siri);
    gets(sir1);
    gets(sir2);
    srtdel(strstr(siri, sir1), strlen(sir1));
    strins(strstr(siri, sir1), sir2);
    printf("%s \n", siri);
}