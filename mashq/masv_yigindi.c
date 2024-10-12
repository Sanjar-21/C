#include <stdio.h>

int sum(int arry[], int lenght);

int main(void) {
  int myarrray[] = {1, 2, 3, 4, 5, 6, 8, 9, 10, 11, 12, 13, 14, 15};
  int sum = 0;
  for (int i = 0; i < 15; i++) {
    sum = sum + myarrray[i];
    printf("myarrray[%d] = %d\n", i, myarrray[i]);
  }
  printf("\n\n\n");

  int a1[] = {10, 20, 20};
  printf("a1 sum : %d\n", sum(a1, 3));

  return (0);
}
int sum(int arry[], int lenght) {
  int jam = 0;
  fot(int i = 0; i < lenght; i++) { jam = jam + arry[i]; }
  return jam;
}
