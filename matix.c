#include <stdio.h>

#define ROWS 2
#define COLS 3

int main(void) {
  int a[2][3];
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      printf("Enter: a[%d][%d]=", i, j);
      scanf("%d", &a[i][j]);
    }
  }
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      printf("a[%d][%d] = %d\n", i, j, a[i][j]);
    }
  }
}
