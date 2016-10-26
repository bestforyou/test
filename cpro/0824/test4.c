#include <stdio.h>

int main(){
/*
    int a:1;
    a=1;
    printf("%lu\n%d", sizeof a, a);

    struct in{
        double a:8;
    } a;

    a.a=1.3;

    printf("%ld\n%d", sizeof a, a.a);
*/

    int i = 100;
    typedef int INT32;
    INT32 * p;

    p = &i;
    printf("%d", *p);

    return 0;
}
