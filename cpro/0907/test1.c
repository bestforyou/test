#include <stdio.h>

    int sum(int x, int y){
        int t = x+y;
        return t;
    }

int main()
{
    int accum = 0;
    int a=1,b=2,c;
    c = sum(a,b);
    printf("%d",c);
    return 0;
}
