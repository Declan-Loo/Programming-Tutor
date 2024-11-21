#include <stdio.h>

int main(){
    // input a number
    int number;
    printf("Enter a number: ");
    scanf("%d", &number); // & is to store the value in the address of the variable number (in memory)

    // if, else if, else statement
    if(number > 0){
        printf("The number is positive\n");
    }
    else if(number < 0){
        printf("The number is negative\n");
    }
    else{
        printf("The number is zero\n");
    }

    // lets use switch/case instead
    switch(number){
        case 1:
            printf("The number is 1\n");
            break;
        case 2:
            printf("The number is 2\n");
            break;
        case 3:
            printf("The number is 3\n");
            break;
        case 4 ... 6:
            printf("The number is between 4 and 6\n");
            break;
        default:
            printf("The number is not 1, 2, or 3\n");
    }

    return 0;
}