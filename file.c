#include <stdio.h>
#include <stdbool.h>

int main(void){
  // FILE *file = fopen("io.txt", "a");
  // fputs("Hello World\n", file);
  // while(true){
  //   int input = 0;
  //   printf("Enter # (-1 quit): ");
  //   scanf("%d\n", &input);
  //   if(input == -1) break;
  //   else fprintf(file, "%d\n", input);
  // }
  // kiyingi qator;
  FILE *file = fopen("io.txt", "r");
  int finput = 0;
  fscanf(file, "%d\n", &finput);
  printf("Ninmer: %d\n", finput);
  fclose(file);
}
