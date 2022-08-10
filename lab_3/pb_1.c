#include <stdio.h>

int main()
{
    int i,a=0;
    for(i=32;i<=127;i++)
        {
           
            if(a<10)
                printf("%c = %d ", i, i);
            else 
                if(a==10)
                    {
                        printf("\n");
                        printf("%c = %d ", i, i);
                        a=0;
                     }
             a++;
        }
    return 0;
}