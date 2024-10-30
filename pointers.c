#include <stdio.h>

int main(){
    int x = 5;
    int *p = &x;

    printf("The value of x is %d\n", x);
    printf("The address of x is %p\n", &x);

    int **p2 = &p;

    printf("The address of %p is %p\n", p, p2);

    return 0;
}