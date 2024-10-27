#include <stdio.h>
#include <errno.h>

int main(void) {
    char filename[100];
    printf("Filename: ");
    scanf("%s", filename);

    if(remove(filename) != 0) {
        fprintf(stderr, "Error: %d\n", errno);
        perror("Erro msg:");
    } else printf("%s\n", filename);

    return 0;
}