#include <stdio.h>

int main()
{
    int n, i;
    float x,y,sx=0, sy=0;
    scanf("%d %f %f", &n, &x, &y);
    for(i=0;i<n;i++)
    {
        sx+=x;
        sy+=y;
        if(n%10==0)
            printf("%f %e  %f %e \n", sx, sx, sy, sy);
    }
      printf("%f %e %f %e \n", sx, sx, sy, sy );
    return 0;
}
