#include <stdio.h>

int main(void) {
  int a[3] = {1, 2, 3};
  int *b;
  b = a;
  printf("a = %p\nb = %p", a, b);

  return 0;
}
