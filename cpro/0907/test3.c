#include <stdio.h>

int main()
{

    int a = 15, b = 99, c = 222;
    int *p = &a;
    *p = b;
    c = *p;
    printf("%d%d%d%d",a, b, c, *p);


/*
    int* a = NULL;
    int b=100;
    a = &b;
    printf("%d\n%d\n%p",*a,b,a);
    */
    return 0;
}
