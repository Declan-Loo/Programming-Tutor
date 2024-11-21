/*
Using functions to perform calculator operations (note all functions return integers)
*/

#include <stdio.h> // standard input output library
#include "calculator.h" // self created header file with calculator functions

int main(){
    int choice;
    do{
        printf("Enter 1 for addition, 2 for subtraction, 3 for multiplication, 4 for division (integer division): ");
        scanf("%d", &choice);
    } while(choice < 1 || choice > 4);

    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if(choice == 1){
        printf("The sum is %d\n", add(a, b));
    } else if(choice == 2){
        printf("The difference is %d\n", subtract(a, b));
    } else if(choice == 3){
        printf("The product is %d\n", multiply(a, b));
    } else {
        printf("The quotient is %d\n", divide(a, b));
    }

    return 0;
    
}