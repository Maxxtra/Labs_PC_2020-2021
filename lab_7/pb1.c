#include <stdio.h>

void swap(int *pa, int *pb)
{
    int aux;
    aux = *pa;
    *pa = *pb;
    *pb = aux;
}

int main()
{
    int pa, pb;
    scanf("%d %d", &pa, &pb);
    swap(&pa, &pb);
    printf("%d %d ", pa, pb);
}