#include <stdio.h>

int main() {
  char buffer[5];
  printf("Enter: ");
  fgets(buffer);

  printf("String: %s\n", buffer);

  return 0;
}
