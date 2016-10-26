#include <stdio.h>
int main(){

    unsigned short ia = 2342;
    unsigned ua = 123;
    int a;
    int b=10;
    double c=2.342342;
    float d=2.4334;
    short sa = 121;
    long la = 232323;
    long long lla = 231322;
    
    
    
    printf("a=%lu\n", sizeof(ua));
    printf("a=%lu\n", sizeof(la));
    printf("a=%lu\n", sizeof(sa));
    printf("a=%lu\n", sizeof(lla));
    printf("c=%lu\n", sizeof(c));
    printf("c=%lu\n", sizeof(double));
    return 0;
}
