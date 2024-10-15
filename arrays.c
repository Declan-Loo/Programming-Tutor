#include <stdio.h>
#include <stdlib.h>

int main(){
    // statoc arrays - note that the size of the array must be known at compile time. index starts at 0 and go to length - 1
    int x[5] = {1, 2, 3, 4, 5};

    // print the array
    for(int i = 0; i < 5; i++){
        printf("%d\n", x[i]);
    }

    // a way to find the length of array in C (size of array in bytes / size of 1 element in bytes to get the number of elements)
    int length = sizeof(x) / sizeof(x[0]);

    x[4] = 10; // change the value of the last element
    printf("%d\n", x[4]);
    // dynamic arrays - malloc (covered later in course)

    int y[10]; //declare a new array of size 10 (all elements are set to 0)

    // accessing the array elements via index (0 to 9)
    y[0] = 2;
    y[1] = 4;
    y[2] = 6;
    y[3] = 8;

    // print the array
    for(int i = 0; i < 10; i++){
        printf("%d\n", y[i]);
    }
}