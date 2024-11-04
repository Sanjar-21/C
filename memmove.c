#include <stdio.h>
#include <string.h>

int main(void) {
  int src[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int dest[10];

  memmove(dest, src, sizeof(int) * 10);

  for (int i = 0; i < 10; i++) {
    printf("dest[%d] = %d\n", i, dest[i]);
  }

  for (int i = 0; i < 10; i++) {
    printf("src[%d] = %d\n", i, src[i]);
  }
}