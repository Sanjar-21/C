#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main(void) {
  time_t vv = time(NULL);
  // printf("%ld\n", vv);
  // sleep(4);
  // time_t tt = time(NULL);
  // printf("%ld\n", tt);
  // double diff = difftime(vv, tt);
  // printf("diff: %f\n", diff);
  char *string_now = ctime(&vv);
  printf("%s\n", string_now);
  return 0;
}
