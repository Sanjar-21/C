#include <stdio.h>

int main(void) {
  register int x;
  int sum = 0;
  for (x = 0; x < 10000; x++) {
    sum += x;
  }
  printf("sum: %d\n", sum);
  return (0);
}
