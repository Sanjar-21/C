#include <stdio.h>

int main(void) {
  double C = 22.2;
  double F = (C * 1.8) + 32;
  printf("C: %.2lf -> F: %.2lf", C, F);
  return 0;
}
