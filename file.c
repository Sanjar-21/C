#include <stdio.h>

int main(void){
  FILE *file = fopen("io.txt", "w");
  fputs("Saloam akka afa\n", file);

  fclose(file);
}
