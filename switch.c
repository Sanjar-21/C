#include <stdio.h>
int main(void){
  int num = 1;
  switch(num){
    case 1:
      printf("Num case 1\n");
      if(num == 1) printf("if ga ham kirdi \n");
      break;
    case 2:
      printf("num teng 3");
      break;
    default:
      printf("hech qaysiga kirmadi mencha");
      break;
  }
  return (0);
}
