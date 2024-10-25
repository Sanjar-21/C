#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  srand(time(NULL));
  printf("Randim 1: %d\n", rand());
  printf("Randim 2: %d\n", rand());
  printf("Randim 3: %d\n", rand());
  printf("Randim 4: %d\n", rand());
  printf("Randim 5: %d\n", rand());
  return 0;
}
