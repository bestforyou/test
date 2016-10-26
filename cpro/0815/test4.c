#include <stdio.h>

int main()
{

    int ar[4] = {1,2,3,4};
    int (*pa)[4] = &ar; //&a 是整个数组的首地址
    int * b = ar;       //ar 数组首元素的首地址

    printf("%p\n", *pa);
    printf("%p\n", b);

    int arr[4][2] = {{1,2},{3,4},{5,6},{7,8}};
    
    int (*pz)[2];

    pz = arr;
    

    printf("%d\n", **pz);

    printf("*(*(arr+2)+1) = %d\n", *(*(arr+2)+1));

    return 0;
}
