#include <stdio.h>

int main(void) {
  int x = 4;

  if (x < 4)
    printf("ok");
  else if (x < 6)
    printf("ok");
  else if (x < 7)
    printf("ok");
  else if (x < 8)
    printf("ok");
  else if (x == 4)
    printf("x: %d\n", x);
  else
    printf("n/a");
  return (0);
}
