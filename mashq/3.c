#include <stdio.h>

int main(void) {
  int arr[] = {12,42,52,53,22,59,11};
  int lenght = 7;
  int num;

  for (int i = 1; i < (lenght / 2); i++) {
    num = arr[i];
    arr[i] = arr[lenght - i - 1];
    arr[lenght - i - 1] = num;
  }

  for (int i = 1; i < lenght; i++) {
    printf("arr[%d] = %d\n", i, arr[i]);
  }
}