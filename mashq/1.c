#include <stdio.h>

int min(int arr[], int size, int min);
int main(void) {
  // int n[] = {23, 12, 432, 452, 1, 4};
  // int size = sizeof(n) / sizeof(n[0]);
  // int min = n[0];
  // for (int i = 1; i < size; i++) {
  //   if (n[i] < min) {
  //     min = n[i];
  //   }
  // }
  int array[] = {13, 14, 1, 24, 2, 44};
  int lenght = sizeof(array) / sizeof(array[0]);
  int mm = array[0];

  int oo = min(array, lenght, mm);
  printf("%d\n", oo);
  return (0);
}
int min(int arr[], int size, int min) {
  for (int i = 1; i < size; i++) {
    if (arr[i] < min) {
      min = arr[i];
    }
  }
  return min;
}
