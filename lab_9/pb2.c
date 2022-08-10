#include <stdio.h>
#include <time.h>

int main()
{
    struct tm *data;
    time_t timp;

    timp = time(NULL);
    data = localtime(&timp);
    printf("%s\n", ctime(&timp));
}