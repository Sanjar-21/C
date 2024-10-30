#include <stdio.h>

int main() {
  FILE *file;
  int number = 123;

  // Faylni yozish uchun ochamiz
  file = fopen("example.bin", "wb"); // "wb" - write binary
  if (file == NULL) {
    printf("Faylni ochib bo'lmadi!\n");
    return 1;
  }

  // Faylga yozamiz
  fwrite(&number, sizeof(int), 1, file);
  fclose(file);

  // Faylni o'qish uchun ochamiz
  file = fopen("example.bin", "rb"); // "rb" - read binary
  if (file == NULL) {
    printf("Faylni ochib bo'lmadi!\n");
    return 1;
  }

  // Fayldan o'qiymiz
  int readNumber;
  fread(&readNumber, sizeof(int), 1, file);
  fclose(file);

  printf("Fayldan o'qilgan son: %d\n", readNumber);

  return 0;
}
