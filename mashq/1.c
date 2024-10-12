#include <stdio.h>
#include <string.h>

int main(void) {
  int arr[] = {
      1, 24, 5, 6, 7, 8, 92, 3, 2, 2, 3,
  };
  int sum = 0;
  int son = 2;
  int len = sizeof(arr) / sizeof(arr[0]);
  for (int i = 0; i < len; i++) {
    if (arr[i] == son) {
      sum++;
    }
  }
  printf("sum: %d\n", sum);
}
