#include <stdio.h>
#include <stdlib.h>

int main(){
  // allocate memory for 5 integers
  int *arr = (int*)malloc(5 * sizeof(int));

  // arr points to the first element of the array
  // get the length of the array
  int length = sizeof(arr) / sizeof(arr[0]);
  printf("Length of the array: %d\n", length);

  // assign values to the array
  for(int i = 0; i < 5; i++){
    arr[i] = i;
  }

  // print the array
  for(int i = 0; i < 5; i++){
    printf("%d ", arr[i]);
  }

  // free the memory
  free(arr);
}