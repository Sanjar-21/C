#include <stdio.h>
#include <string.h>

int main(void){
  char a[] = "sfklsjhfjfvnkjdfvhdfjbnskjdfsfkjsdfvs";
  char g[] = "sanjar";
  int s = 0;
  int b = 0;
  for(int i = 0; i < strlen(a); i++){
    b++;
  }
  printf("%d\n", b);
  for(int i = 0; i < strlen(g); i++){
    s++;
  }
  printf("%d\n", s);
  return (0);
}
