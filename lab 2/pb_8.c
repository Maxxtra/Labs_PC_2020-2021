#include <stdio.h>

int main()
{ 
    float a,b,c;
    scanf("%f %f %f", &a, &b, &c);
    if(a>b && b>c)
        printf("%f %f %f", a, b, c);
     if(a>b && c>b && a>c) 
        printf("%f %f %f", a, c, b);
     if(b>a && a>c)
        printf("%f %f %f", b, a, c);
    if(b>a && c>a && b>c)
        printf("%f %f %f", b, c, a);
    if(c>a && c>b && a>b)
        printf("%f %f %f", c, a, b);
    if(b>a && c>b)
        printf("%f %f %f", c, b, a);
    return 0;
}
    
