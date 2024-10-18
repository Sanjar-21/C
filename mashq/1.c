#include <stdio.h>

int main(void) {
  int n[] = {23, 12, 432, 452, 1, 4};
  int size = sizeof(n) / sizeof(n[0]);
  int min = n[0];
  for (int i = 1; i < size; i++) {
    if (n[i] < min) {
      min = n[i];
    }
  }
  printf("min : %d\n", min);
  return (0);
}
