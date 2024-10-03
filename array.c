#include <stdio.h>

int main(void){
  int grade1 = 91;
  int grade2 = 82;
  int grade3 = 73;

  int total = grade1 + grade2 + grade3;
  int avg = total / 3;
  // printf("%d\n", avg);
  int grade[6];
  grade[0] = 91;
  grade[1] = 23;
  grade[2] = 12;
  grade[3] = 213;
  grade[4] = 233;
  grade[5] = 11;
  int i = 0;
  // printf("Grade[%d] = %d\n", i, grade[i]);
  // i++;
  // printf("Grade[%d] = %d\n", i, grade[i]);
  // i++;
  // printf("Grade[%d] = %d\n", i, grade[i]);
  // i++;
  // printf("Grade[%d] = %d\n", i, grade[i]);
  // i++;
  // printf("Grade[%d] = %d\n", i, grade[i]);
  // end;
  // for(int i = 0; i < 6; i++){
  //   printf("Grade [%d] = %d\n", i, grade[i]);
  // }
  int num = 0;
  for(int i = 0; i < 6; i++){
    num = num + grade[i];
  }
  int a = num / 6;
  printf("%d\n", a);
  return (0);
}
