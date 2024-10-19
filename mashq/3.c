#include <stdio.h>

int main(void) {
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int lenght = 9;
  int num;

  for (int i = 0; i < (lenght / 2); i++) {
    num = arr[i];
    arr[i] = arr[lenght - i - 1];
    arr[lenght - i - 1] = num;
  }

  for (int i = 0; i < lenght; i++) {
    printf("arr[%d] = %d\n", i, arr[i]);
  }
}
