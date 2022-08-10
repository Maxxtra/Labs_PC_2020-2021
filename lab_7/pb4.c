#include <stdio.h>
#include <string.h>

/*char *substr(char *siri, int numar, char *sirf) // extrage de la pozitia src in dest n caractere
{
    int lungimei,lungimef;
    lungimef = strlen(&siri);
    lungimef= strlen(&sirf);
    substr(siri, numar, sirf);
}

void main()
{
    char siri[100], sirf[100];
    int poz,numar, n = 0;
    fgets(siri, sizeof siri, stdin); /// citim sirul de nu stim cate caractere
    scanf("%d", &poz);
    scanf("%d", &numar);
    substr(&siri, numar, &sirf);
    printf("%s ", siri);
}*/

char *substr(char *siri, int numar, char *sirf)
{
    int i, l = strlen(siri), a;
    a = strlen(sirf);
    for (i = 0; i < l; i++)
    {
        sirf[i] = siri[a++];
    }
    sirf[i] = '\0';
    return sirf;
}
int main()
{
    char siri[100], sirf[100];
    int poz, lungime;
    gets(siri);
    scanf("%d %d", &poz, lungime);

    printf("%s \n", substr(&siri, index, &sirf));
    getch();
    return 0;
}

/*
 * Function to return substring of inputString starting 
 * at position index and of length subStringLength
 */
char *getSubString(char *inputString, char *subString,
                   int index, int subStringLength)
{
}