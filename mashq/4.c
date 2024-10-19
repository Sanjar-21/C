#include <stdio.h>

int main(void) {
  int b[] = {1, 2, 1};
  int temp;
  int l = 3;

  for (int i = 0; i < (l - 2); i++) {
    temp = b[i];
    b[i] = b[l - i - 1];
    b[l - i - 1] = temp;
  }

  for (int i = 0; i < l; i++) {
    printf("n[%d] = %d", i, b[i]);
  }
}
