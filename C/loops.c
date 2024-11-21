#include <stdio.h>

int main(){
    // for loops
    // print Hello world 10 times
    for(int i = 0; i < 10; i++){
        printf("Hello, World!\n");
    }

    // while loops (precondition)
    // note: make sure your condition eventually stops the loop otherwise infinite loop (unwanted - can hurt your computer)
    int i = 0;
    while(i < 10){
        printf("Hello world again!\n");
        // increment i so that the loop eventually stops
        i++;
    }

    //do while loops (postcondition)
    // runs at least once
    // input from 1 to 10
    int input;
    do{
        printf("Enter a number between 1 and 10: ");
        scanf("%d", &input);
    }
    while(input < 1 || input > 10);
    printf("You entered %d\n", input);

    return 0;
}