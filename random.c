#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  srand(time(NULL));
  // printf("Randim 1: %d\n", rand());
  // printf("Randim 2: %d\n", rand());
  // printf("Randim 3: %d\n", rand());
  // printf("Randim 4: %d\n", rand());
  // printf("Randim 5: %d\n", rand());
  for (int i = 0; i < 6; i++) {
    int randomm = 1 + (rand() % 21);
    printf("%d\n", randomm);
  }
  return 0;
}
