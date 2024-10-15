#include <stdio.h>

int main(void) {
  int a[] = {1, 2, 34, 5, 6, 13, 16, 29, 145, 332, 1};
  int len = sizeof(a) / sizeof(a[0]);
  for (int i = 0; i < len; i++) {
    int jam  = 0;
    for (int j = i + 1; i < len; i++) {
      if (a[i] == a[j]) {
        jam = 1;
        break;
      }
    }
    if(!jam){
        printf("a[] { %d }", a[i]);
    }
  }
  return 0;
}
