#include <stdio.h>

int main()
{
    int p, x, y, z, k, i, j;
    scanf("%d ", &p);
    for(i=0;i<=p;i++)
        for(j=i;j<p;j++)
        {
            k=p-i-j;
            if(x+y>=z && y+z>=x && z+x>=y)
                printf("% d %d %d ", x, y, z);
        }
    return 0;
}
