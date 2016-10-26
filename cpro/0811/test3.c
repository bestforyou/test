#include <stdio.h>

int main(){
/*
    __int32_t a=133;
    float f=1.2e3; 
    char b='\a';
  //  char c=t;
//    char d="d";

    printf("a=%f", f);
    printf("a=%lu", sizeof(__int32_t));
    printf("b=%lu", sizeof(a));
    
   // printf("c=%c", c);
 //   printf("d=%c", d);
*/
    char name[] = "达";
    long long aaa=33;
    printf("%zd", sizeof(aaa));
    printf("%s", name);
    printf("%lu", sizeof(name));
    float toobig = 3.4E38 * 100.0f;
    printf("%e\n", toobig);

    return 0;
}
