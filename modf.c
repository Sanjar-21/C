#include <math.h>
#include <stdio.h>

int main(void) {
  double num = 3.1415;
  double butin, kasir;
  kasir = modf(num, &butin);
  printf("butin: %f\n", butin);
  printf("kasir: %f\n", kasir);
  return 0;
}
