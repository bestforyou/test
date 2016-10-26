#include <stdio.h>

int main()
{
    struct test{
        
        short a;
        int b;
        long c;
        char h;
        float f;
        double d;
        int arr[];
    }stest, *pt = &stest;

    pt->a = 1;
    pt->f = 10.3;
    printf("%d,%f,%d\n", pt->a, pt->f,pt->b);


    struct test2{
        int arr[10];
        int *p;
    }st = {{1,3,33},NULL};

    int a=10;
    st.p = &a;

    printf("%d%p", st.arr[1], st.p);
    

}
