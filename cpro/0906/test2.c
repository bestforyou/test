#include <stdio.h>
int main()
{

    float f;
    f = 1e20;
    char *p = NULL;
    char s = 's';
    p = &s;
   
    printf("%p", p);
    printf("%lu", sizeof(*p));
    return 0;
}
