#include <stdio.h>
#include <math.h>
int main()
{ 
    float a,b,c;
    scanf("%f %f %f", &a, &b, &c);
            if(a==b && b==c)
                printf("echilateral");
            else
                if(a==b || b==c || c==a)
                    printf("ioscel");
                 else
                     if(a*a+b*b==c*c || b*b+c*c==a*a || c*c+a*a==b*b)
                         if(a==b || b==c || c==a)
                            printf("dreptunghic isoscel");
                         else printf("dreptunghic oarecare");
        printf("oarecare");
    return 0;
}