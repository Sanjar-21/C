#include <stdio.h>

int main(void) {
    FILE *file = fopen("file.txt", "w");

    if(file == NULL) {
        printf("File error msg:");
        return 12;
    }

    fprintf(file, "1,23,4,5,6,6,78,8,9\n");
    fprintf(file, "birikki.uz\n");
    fseek(file, 0, SEEK_SET); // seek_cur seek_end
    fprintf(file, "Sanjar");
    fclose(file);
    return 0;
}