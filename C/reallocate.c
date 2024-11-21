#include <stdio.h>

int main(){
  int n = 5;
  int* arr = (int*)malloc(n * sizeof(int));

  int* new_arr = (int*)realloc(arr, 7 * sizeof(int));
  printf("Length of the array: %d\n", length);
}