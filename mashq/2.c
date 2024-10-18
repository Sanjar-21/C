#include <stdio.h>

int main(void) {
  int n[] = {12, 31, 14, 122, 11};
  int size = sizeof(n) / sizeof(n[0]);
  int max = n[0];

  for (int i = 0; i < size; i++) {
    if (n[i] > max)
      max = n[i];
  }
  printf("max : %d\n", max);
  return 0;
}
