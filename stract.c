#include <stdio.h>
#include <string.h>

struct Student {
  char name[50];
  char id[10];
  int age;
  int greds[5];
};

int main(void) {
  struct Student Sanjar;
  Sanjar.age = 21;
  printf("Sanjar age: %d\n", Sanjar.age);

  return 0;
}
