#include <stdio.h>
#include <string.h>

int main(void) {
  char d[] = "qwertyuiopasdfghjklmnbvcxz";
  char s[27] = {0};
  memcpy(s, d, sizeof(char) * 27);

  printf("s: %s\n", s);

  char e[10];
  memcpy(e, d+3, sizeof(char) * 9);
  e[9] = '\0';

  printf("e: %s\n", e);
  printf("e: %s\n", e[9]);
  return 0;
}
