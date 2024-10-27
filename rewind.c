#include <stdio.h>

int main() {
    FILE *file = fopen("example.txt", "r");

    if (file == NULL) {
        printf("Faylni ochib bo'lmadi.\n");
        return 1;
    }

    // Fayldan birinchi qatorni o'qish
    char line[100];
    if (fgets(line, sizeof(line), file) != NULL) {
        printf("Birinchi qator: %s", line);
    }

    // Fayl ko'rsatkichini boshiga qaytarish
    rewind(file);

    // Fayldan yana bir marta birinchi qatorni o'qish
    if (fgets(line, sizeof(line), file) != NULL) {
        printf("Yana birinchi qator: %s", line);
    }

    fclose(file);
    return 0;
}
