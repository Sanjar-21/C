#include <stdio.h>

int main(void) {
    int a;
    float d;
    double e;
    char f[100];

    // Butun son kiriting
    printf("Enter a number: ");
    scanf("%d", &a);

    // Float qiymat kiriting
    printf("Enter d float: ");
    scanf("%f", &d);

    // Float qiymatni chop etish
    printf("d float value: %.2f\n", d);  // %.2f - bu qiymatni 2 kasrli qism bilan chiqaradi

    // Double qiymat kiriting
    printf("Enter e double: ");
    scanf("%lf", &e);  // %.1lf emas, faqat %lf bo'ladi

    // Double qiymatni chop etish
    printf("e double value: %.1lf\n", e);  // Bu yerda %.1lf to'g'ri chop etish uchun ishlatiladi

    // Matnli qiymat kiriting
    printf("Enter f string: ");
    scanf("%s", f);  // f[] bu char massiv, %s bilan ishlatiladi

    // Matnli qiymatni chop etish
    printf("f string value: %s\n", f);

    return 0;
}

