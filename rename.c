#include <stdio.h>
#include <errno.h>

int main(void) {
    char filename[100];
    printf("filename: ");
    scanf("%s", filename);
    char newfile[100];
    printf("new filename: ");
    scanf("%s", newfile);

    if(rename(filename, newfile) != 0) {
        fprintf(stderr, "Error: %d\n", errno);
        perror("error msg:");
    } else printf("%s > %s\n", filename, newfile);
    return 0;
}