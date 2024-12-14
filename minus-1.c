#include <stdio.h>

int main(void) {
    // Birinchi massiv
    int m1[] = {1, 3};
    int uzunlik = sizeof(m1) / sizeof(m1[0]);

    // Ikkinchi massiv: +1 element qo'shish uchun bitta kattaroq
    int m2[uzunlik + 1];

    // Elementlarni ko'chirish
    for (int i = 0; i < uzunlik; i++) {
        m2[i] = m1[i];
    }

    // Oxirgi element +1
    m2[uzunlik] = m1[uzunlik - 1] + 1;

    // Natijani chiqarish
    printf("Ikkinchi massiv: ");
    for (int i = 0; i <= uzunlik; i++) {
        printf("%d ", m2[i]);
    }
    printf("\n");

    return 0;
}
