#include <stdio.h>

typedef sturct multime
{
    unsigned char a;
};

void init(struct multime *m)
{
    m->a = 0;
}

void add(struct multime *m, int x)
{
    int b = 1;
    b = b << x;
    m->a = m->a | b;
}

void del(struct *m, int x)
{
    int b = 1;
    b = b << x;
    m->a = m->a ^ b;
}

void contains(struct multime *m, int x)
{
    int b = 1;
    b = b << x;
    if ((m->a & a) == a)
        return 1;
    return 0;
}

void print(struct multime *m)
{
    int i;
    for (i = 0; i < 7; i++)
        if (contains(m, i) == 1)
            printf("%d", i);
}

int main()
{
    return 0;
}