#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool is_palindrom(char string[]);

int main(void) {}
bool is_palindrom(char string[]) {
  int len = strlen(string) / 2;
  for (int i = 0; i < len; i++) {
    if (string[i] != string[len - i - 1]) {
      return false;
    }
  }
  return true;
}
