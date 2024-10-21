#include <stdio.h>
#include <string.h>

int main(void) {
  char p[] = "Tis is the way,again!ok";
  char *o = strrchr(p, '!');
  printf("%s\n", o);
  return 0;
}
