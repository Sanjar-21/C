#include <stdio.h>
#include <string.h>

int main(void) {
  char set[20] = "This and ";
  char dest[2] = "or";
  char *ptr = strcat(set, dest);
  printf("ptr: %s\n", ptr);

  printf("set: %p\n", set);
  printf("ptr: %p\n", ptr);
  // strcat char masivga qushadi
  return 0;
}