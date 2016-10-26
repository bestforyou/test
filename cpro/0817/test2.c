#include <stdio.h>

void func(int * u, int * v);

int main(){

    int x = 10 ;
    int y = 5;


    printf("%d%d", x, y);
    func(&x, &y);

    printf("%d%d", x, y);
    return 0;
}

void func(int * u, int * v){

    int temp;
    temp = *u;
    *u = *v;
    *v = temp;
}
