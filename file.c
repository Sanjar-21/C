#include <stdio.h>

int main(void){
  FILE *file = fopen("io.txt", "a");
  fputs("Saloam akka afa\n", file);

  fclose(file);
}
