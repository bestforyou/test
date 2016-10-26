#include <stdio.h>
#define BOOK "War and Peace"
int main(){

    printf("%2.2f", 2.345e2);//234.50
    printf("%c%c%c\n", 'H', 105, '\41');
    printf("%2.2e%2.2f\n", 1201.0,1201.0);


    float cost = 12.99;
    float percent = 80.0;

    printf("This Copy of \"%s\" sells for $%.2f.\nThis is %.0f%% of list", BOOK, cost, percent);

    return 0;
}
