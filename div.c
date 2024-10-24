#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int a = 5;
  int b = 3;
  div_t result = div(a, b);
  printf("butin qismi: %d\n", result.quot);
  printf("qoldiq qismi: %d\n", result.rem);
  return 0;
}
