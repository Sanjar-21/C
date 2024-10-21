#include <stdio.h>
#include <string.h>

int main(void) {
  char bil[] = "bir ikki uch sdsssd";
  char oo[] = "uch";
  char *op = strstr(bil, oo);
  //printf("uch: %s\n", op);

  char s[] = "yuq";
  char *yuq = strstr(bil, s);
  if(yuq == NULL) printf("na");
  return 0;
}
