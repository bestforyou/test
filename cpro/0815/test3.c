#include <stdio.h>

int main(){

    int a = 1;
    const int *p = &a;
    a = 100; 
    
    printf("%d", *p);

}
