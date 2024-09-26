#include <stdio.h>

int main(void){
  int i = 0;
  while(i < 10){
    i++;
    if(i == 7) continue;
    printf("%d\n", i);
  }
  return 0;
}
