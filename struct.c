#include <stdio.h>
struct Example {
  char a; // 1 bayt
  int b;  // 4 bayt
  char c; // 1 bayt
};
struct OptimizedExample {
  int b;  // 4 bayt
  char a; // 1 bayt
  char c; // 1 bayt
}; // Bu struktura endi 8 bayt bo'ladi
#pragma pack(1)
struct NoPaddingExample {
  char a;
  int b;
  char c;
};
#pragma pack() // Yoki pragma pack(4), paddingni tiklash uchun.

int main(void) { return 0; }
