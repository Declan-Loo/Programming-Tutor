
#include <stdio.h>

int main(){
    int x[8] = {1,2,3,4,5,6,7,8};
    int *p = x;

    for(int i  = 0; i < 9; i++){
        printf("x[%d] = %d\n", i, *(p+i));
    }
}