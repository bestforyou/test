#include <stdio.h>
#include <string.h>
#define PRAISE "Your are an extraordinary being"

int main()
{
    char name[40];

    printf("what your name?");
    scanf("%s", name);
    printf("Hello, %s, %s \n", name, PRAISE);
    printf("Your name of %ld letters %ld\n", strlen(name), sizeof name);
    printf("%ld", strlen(PRAISE));
    printf("%ld\n", sizeof PRAISE);
    
    return 0;
}
