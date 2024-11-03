#include <stdio.h>

int  main(void) {
    FILE *file = fopen("file.txt", "w");

    if(file == NULL) {
        printf("Error open file\n");
        return 11;
    }

    fputs("school 42\n", file);

    char string[] = "Assalomu alaykum\n";
    fputs(string, file);
    fclose(file);
}