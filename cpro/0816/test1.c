#include <stdio.h>

#define ROWS 2
#define CLOS 3
int sum(int rows, int clos, int arr[rows][clos]){
    int r;
    int c;
    int total;
    for(r = 0;r < rows; r++){
        for(c=0; c<clos; c++){
            total+=arr[r][c];
        }
    }
    
    return total;
}

int main(){

    int s;
    int arr[ROWS][CLOS] = {{1,2,3},{4,5,6}};
    
    s = sum(ROWS, CLOS, arr);
     
    printf("%d", s);

    return 0;
}
