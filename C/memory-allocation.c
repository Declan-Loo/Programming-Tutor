#include <stdio.h>
#include <stdlib.h>

int main(){
    // allocate memory for 5 integers 
    // malloc returns a pointer to the first byte of the allocated memory
    // new_arr points to the first byte of the allocated memory (first element)
    int x[5] = {1,4,9,16,25};

    int *new_arr = (int *)malloc(5 * sizeof(int));

    // what does algorithm do?
    new_arr[0] = x[0];
    for(int i = 1; i < 5; i++){
        new_arr[i] = x[i] + new_arr[i-1];
    }

    // output the new array
    for(int i = 0; i < 5; i++){
        printf("Element %d: %d\n", i, *(new_arr+i));
    }


    // another example via the suffix sum algorithm
    int *suffix_sum = (int *)malloc(5 * sizeof(int));
    int length = sizeof(x)/sizeof(x[0]);
    suffix_sum[length-1] = x[length-1];
    for(int i = length-2; i >= 0; i--){
        suffix_sum[i] = x[i] + suffix_sum[i+1];
    }

    // output the suffix sum array
    for(int i = 0; i < 5; i++){
        printf("Suffix sum %d: %d\n", i, *(suffix_sum+i));
    }

    // free the memory (MUST) - to prevent memory leaks (why? because the memory is not automatically deallocated)
    free(new_arr);
    free(suffix_sum);

    return 0;
}