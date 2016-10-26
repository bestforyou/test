#include <stdio.h>
#define PARS "this is a define."

int main (){
    
    char name[40];
    printf("Your name");
    scanf("%s", name);  // name 是数组的首地址，不用&
    printf("%s\n%s", name, PARS);

    const int a = 1;
    int b = 3;
    a = 2;
    b= 3;
    return 0;
}

