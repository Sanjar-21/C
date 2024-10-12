#include <stdio.h>

int main(void) {
  double arr1[] = {21.2, 4.2, 1.1, 3.3, 13.9};
  double sum = 0;
  double iii = 0;
  int len = sizeof(arr1) / sizeof(arr1[0]);
  for (int i = 0; i < len; i++) {
    sum += arr1[i];
    printf("arr1[%d]=%.2lf, sum = %.2lf\n", i, arr1[i], sum);
  }

  // iii = sum / 2;
  // printf("iii: %.2lf\n", iii);
  return 0;
}
