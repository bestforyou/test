#include <stdio.h>
int sum(int a, int b)
{
    return (a + b);
}


int main()
{

    int i=2,j=5;
    int (*ap)(int a, int b);
    ap = sum;
    int ret;
    ret = (*ap)(i, j);// ap(i,j) 两种调用方式
    printf("%d", ret);

    return 0;
}
