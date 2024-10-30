#include <stdio.h>

// global scope
int y[4] = {1};
int z[3];

int main(){
    // local scope
    int x[5] = {4};

    for (int i = 0; i < 5; i++)
    {
        printf("x[%d] = %d\n", i, x[i]);
    }

    for(int j = 0; j < 4; j++){
        printf("y[%d] = %d\n", j, y[j]);
    }
    
    for(int k = 0; k < 3; k++){
        printf("z[%d] = %d\n", k, z[k]);
    }
}