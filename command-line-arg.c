#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    if(argc == 1){
        printf("No arguments provided\n");
    } else {
        for(int i = 0; i < argc; i++){
            printf("Argument %d: %s\n", i, argv[i]);
        }
    }

    return 0;
}