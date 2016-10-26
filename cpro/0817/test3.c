#include <stdio.h>

int main(){
        
    int num[4] = {1,2,3,4};
    printf("%p\n%p\n", num + 3, &num[3]); //指针( 地址加1 ) 是元素加1
    printf("%p\n%p\n", num, &num[0]);
    printf("%d\n%d\n", *(num + 2), num[2]);
    return 0;
}
