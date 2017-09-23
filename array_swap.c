#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int size;
int array1[10];
int array2[10];
int *pointer_to_int;


int main() {

  srand( time(NULL) );
  
  for (size = 0; size < 9; size += 1) {
    array1[size] = rand();
  }
  array1[9] = 0;

  
  printf("The original array:\n");
  
  for (size = 0; size < 10; size += 1) {
    printf("arr[%d]: %d\n", size, array1[size]);
  }

  
  pointer_to_int = &array1[9];

  for (size = 0; size < 10; size += 1) {
    array2[size] = *(pointer_to_int - size);
  }

  
  printf("The second array:\n");
  
  for (size = 0; size < 10; size += 1) {
    printf("arr[%d]: %d\n", size, array2[size]);
  }
  
}
