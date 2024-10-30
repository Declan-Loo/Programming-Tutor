#include <stdio.h>

int main(){
    int x[5] = {1, 2, 3, 4, 5};
    int *y = x;
    y++;
    printf("%d\n", *y);
}