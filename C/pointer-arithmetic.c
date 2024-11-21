#include <stdio.h>

int main(){
    int x[5] = {1, 2, 3, 4, 5};

    int *p = x;
    int length = sizeof(x)/sizeof(x[0]);

    for(int i = 0; i < length; i++){
        printf("%d\n", *(p+i));
    }

    // what happen if we try to access the 6th element?
    printf("%d\n", *(p+5));

    // answer: we get a garbage value (whatever is in memory at that location as we did not overwrite that memory location) - if we declare the array in local scope

    return 0;
}