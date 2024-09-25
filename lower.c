#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void) {
  char a[] = "SDAJWFAHAUOVAVJALSJADHKWJFHWKRJF";
  char b[sizeof(a)];
  for (int i = 0; i < strlen(a); i++) {
    b[i] = tolower(a[i]);
  }
  b[strlen(a)] = '\0';
  printf("%s\n", b);
  return (0);
}
