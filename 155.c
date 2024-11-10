#include <stdio.h>
#include <stdlib.h>

#define LENGHT 10

int main(void) {
    int *date = malloc(sizeof(int) * LENGHT);
    for(int i = 0; i < LENGHT; i++) {
        date[i] = i;
    }

    FILE *file = tmpfile();

    if(file == NULL) {
        printf("Error file opshin ");
        return 12;
    }

    fwrite(date, sizeof(int), LENGHT, file);

    free(date);

    int *date2 = malloc(sizeof(int) * LENGHT); 

    rewind(file);

    fread(date2, sizeof(int), LENGHT, file);

    fclose(file);

    for(int i = 0; i < LENGHT; i++) {
        printf("%d ", date2[i]);
    }

    printf("\n");

    return 0;
}