#include <stddef.h>
#include <stdio.h>

int main(void) {
  int arr[] = {10, 20, 30, 40, 50};
  size_t size = sizeof(arr) / sizeof(arr[0]);

  printf("Masivni uzunligi : %zu\n", size);

  for (int i = 0; i < size; i++) {
    printf("Element %zu: %d\n", i, arr[i]);
  }

  return 0;
}