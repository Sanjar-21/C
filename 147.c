#include <stdio.h>

int main(void) {
  int age;
  char name[1023];

  printf("Enter age : ");
  scanf("%d", &age);

  getchar();

  printf("Enter name: ");
  fgets(name, 1023, stdin);

  printf("Age: %d\n", age);
  printf("Name: %s\n", name);

  return 0;
}
