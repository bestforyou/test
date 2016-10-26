#include <stdio.h>

int * A(int * a);

int main(){
    int a = 100;
    int * pa = NULL;
    pa = A(&a);

    printf("%d", *pa);
    return 0;
}

int * A(int * a){
    return a;
}


