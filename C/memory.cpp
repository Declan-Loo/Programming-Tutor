#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    int* p = (int*)malloc(4* sizeof(int));
    p[0] = 5;
    p[1] = 10;
    p[2] = 15;
    p[3] = 20;

    int size = 4;
    for(int i = 0; i < size; i++){
        cout << "Element:" << p[i] << endl;
    }

    free(p);
    return 0;
}