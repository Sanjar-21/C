#include <stdio.h>
#include <errno.h>
#include <string.h>

extern int errno;

int main(void) {
    FILE *fh = fopen("sds.txt", "r");

    printf("Errno befor: %d\n", errno);
    if(fh == NULL) {
        // printf("Errno after: %d\n", errno);
        //printf("String strerror: %s\n", strerror(errno));
        perror("masseg: ");
    } else {
        fclose(fh);
    }
}