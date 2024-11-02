#include <stdio.h>

int main(void) {
  FILE *file = fopen("file.txt", "w");

  if (file == NULL) {
    printf("File error ::: ");
    return 11;
  }
  fprintf(file, "\n");
  fprintf(file, "\tschool 21");

  fclose(file);
}
