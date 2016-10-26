#include <stdio.h>
#define SIZE 5

int sum(int * start, int * end);

int main(){

    int arr[SIZE] = {3,1,3,4,5};

    int total = 0;
     
    total =  sum(arr, arr+SIZE);

    printf("%d", total);
    return 0;
}

int sum(int * start, int * end){
    
    int total=0;
    while(start < end){
        total += *start;
        start++;
    }

    return total;
}
