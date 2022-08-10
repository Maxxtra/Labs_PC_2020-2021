#include <stdio.h>

int main()
{ 
    float a,b,c,d;
    scanf("%f %f %f %f", &a, &b, &c, &d);
    if(a>b && a>c && a>d)
        printf("maximul este %f\n", a);
    if(b>a && b>c && b>d)
        printf("maximul este %f\n",  b);
    if(c>b && c>b && c>d)
        printf("maximul este %f\n", c);
    if(d>b && d>c && d>a)
        printf("maximul este %f\n", d);
    if(a<b && a<c && a<d)
        printf("minimul este %f\n", a);
    if(b<a && b<c && b<d)
        printf("minimul este %f\n",  b);
    if(c<b && c<b && c<d)
        printf("minimul este %f\n", c);
    if(d<b && d<c && d<a)
        printf("minimul este %f\n", d);
    return 0;
}
