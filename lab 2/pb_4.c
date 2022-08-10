#include <stdio.h>

int main()
{
    float x,y;
    scanf("%f %f", &x, &y);
    if(x>0 && y>0)
        printf("1 \n");
    if(x<0 && y>0)
        printf("2 \n");
    if(x<0 && y<0)
        printf("3 \n");
    if(x>0 && y<0)
        printf("4 \n");
    if(x=0 || y=0)
        printf("punctul este pe axa \n");
    return 0;
}
    
