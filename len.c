#include <stdio.h>
#include <string.h>

int main(void){
  char a[] = "sfklsjhfjfvnkjdfvhdfjbnskjdfsfkjsdfvs";
  char g[] = "sanjar";
  int s = 0;
  for(int i = 0; i < strlen(g); i++){
    s++;
  }
  printf("%d\n", s);
  return (0);
}
