#include <stdio.h>
#include <string.h>

int main(void) {
  char buffor[10];
  // for(int i = 0; i < 10; i++){
  //     buffor[i] = 'a';
  // }
  memset(buffor, 'a', sizeof(char) * 5);
  memset(buffor + 5, 'x', sizeof(char) * 5);
  for (int i = 0; i < 10; i++) {
    printf("%c", buffor[i]);
  }
  return 0;
}
