#include <stdio.h>

int main(void) {
  printf("FILE : %s\n", __FILE__);
  printf("TIME: %s\n", __TIME__);
  printf("DATE: %s\n", __DATE__);

  printf("FILE name : %s\n", __FILE_NAME__);
  return 0;
}
