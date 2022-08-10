#include <stdio.h>

int main()
{
    int n,m,i;
    scanf("%d %d",&n, &m);
    for(i=1;i<=n;i++)
    {   
        if(i<=24)
        {
             printf("%d ",i);
             if(i%m==0)
                printf("\n");
        }
        else 
            if(i==24)
               {
                    printf("\n %d ",i);
                    if(i==m)
                       printf("\n");
               }
        
    }
    return 0;
}