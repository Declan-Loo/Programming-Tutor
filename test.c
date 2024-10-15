#include <stdio.h>

int main(){
    char name[50];
    printf("What is your name?\n");
    scanf("%s", name);
    printf("Hello, %s!\n", name);

    int x[] = {1,2,4};
    int y[10] = {1,5};
    int z[5];

    for (int i = 0; i < 5; i++){
        printf("%d\n", z[i]);
    }

    z[0] = 6;
    for (int i = 0; i < 5; i++){
        printf("%d\n", z[i]);
    }
}