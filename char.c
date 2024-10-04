#include <stdio.h>
#include <string.h>

int main(void){
  char test[5];
  test[0] = 't';
  test[1] = 'e';
  test[2] = 's';
  test[3] = 't';
  test[4] = '\0';
  printf("%s\n", test);
  char test1[5] = "test";
  // printf("%s\n", test1);
  for(int i = 0; i < 5; i++){
    printf("test[%d] = '%c'\n", i, test1[i]);
  }
  char test2[] = "Hello!! hello";
  int a = strlen(test2);
  int jam = 0;
  printf("Tesni uzinligi %d\n", a);
  for(int i = 0; i < a; i++){
    jam++;
    // printf("Jam ni uzinligi %d\n", jam);
  }
  // printf("%d\n", jam);
  int h = 0;
  for(int i = 0; i < a; i++){
    if(test2[i] == 'H' || test2[i] == 'h'){
      h++;
    }
  }
  // printf("%d\n", h);
  char s1[] = "aslkdjaldkjalsdlkfjf";
  char s2[100];
  strcpy(s2, s1);
  printf("s2 : %s\n", s2);
  return 0;
}
