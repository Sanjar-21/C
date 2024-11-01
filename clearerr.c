#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *file = fopen("file.txt", "r");
    
    if(file == NULL) {
        printf("Error: msg");
        return 999;
    }
    fputc('d', file);

    if(ferror(file)) printf("Error file");
    //system("cat file.txt");

    fclose(file);
}