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

  struct tm *gm_time = gmtime(&vv);
  printf("tmien_sec: %d\n", gm_time->tm_sec);
  printf("time_minut: %d\n", gm_time->tm_min);
  printf("time_hour: %d\n", gm_time->tm_hour);
  printf("time_mday: %d\n", gm_time->tm_mday);
  printf("time_year: %d\n", gm_time->tm_year);
  printf("time_wday: %d\n", gm_time->tm_wday);
  printf("time_yday: %d\n", gm_time->tm_yday);
  printf("time_isdest: %d\n", gm_time->tm_isdst);
  return 0;
}
