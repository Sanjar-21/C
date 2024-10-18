#include <stdio.h>

int max_max(int arr[], int size, int max);

int main(void) {
  // int n[] = {12, 31, 14, 122, 11};
  // int size = sizeof(n) / sizeof(n[0]);
  // int max = n[0];

  // for (int i = 0; i < size; i++) {
  //   if (n[i] > max)
  //     max = n[i];
  // }
  // printf("max : %d\n", max);
  int mmmmm[] = {123, 1234, 23, 12};
  int lenght = sizeof(mmmmm) / sizeof(mmmmm[0]);
  int max = mmmmm[0];
  max_max(mmmmm, lenght, max);
  return 0;
}
int max_max(int arr[], int size, int max) {
  for (int i = 1; i < size; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }
  printf("max : %d\n", max);
}
