#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "hello";
    char str2[128];

    strcpy(str2, str1);
    puts(str1);
    puts(str2);


    return 0;
}
