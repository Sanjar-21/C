#include <stdio.h>
#include <string.h>

#define LENGHT 10
void print_array(int *arr, int size);

int main(void) {
  int a[LENGHT] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  printf("LENGHT array: %d\n", LENGHT);

  printf("\n");

  int b[] = {0, 1, 2, 3, 4, 5, 6};
  print_array(b, 7);

  return 0;
}
void print_array(int *arr, int size) {
  const int len = size;
  for (int i = 0; i < len; i++) {
    printf("array [%d] = %d\n", i, arr[i]);
  }
}
