#include <stdio.h>

int add(int a, int b);
void print_int(int a);

int main(void){
  int input = add(4, 9);
  printf("%d\n", input);
  print_int(1101);
  return 0;
}

int add(int a, int b){
  int natija = a + b;
  return natija;
}

void print_int(int a){
  printf("INT: %d\n", a);
}
