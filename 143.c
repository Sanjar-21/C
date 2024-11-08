#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = NULL;

    // Xotira ajratamiz
    ptr = (int *)malloc(sizeof(int));

    // Agar xotira ajratilmagan bo'lsa, NULL pointerni tekshiramiz
    if (ptr == NULL) {
        printf("Xotira ajratishda xatolik yuz berdi.\n");
        return 1;
    }

    // Xotira ajratilgan, shuning uchun endi qiymat beramiz
    *ptr = 10;
    printf("Qiymat: %d\n", *ptr);

    // Xotirani bo'shatamiz
    free(ptr);

    return 0;
}
