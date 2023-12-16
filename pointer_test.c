#include <stdio.h>

int main()
{
    int* p;
    int a = 4;

    p = &a;

    printf("%d\n", *p);
}