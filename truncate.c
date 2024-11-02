#include <stdio.h>
#include <unistd.h>
#include <errno.h>

int main(void) {
    if(truncate("file.txtd", 5) == -1) {
        printf("Error haqida habar %d\n", errno);
        perror("Error masg");
        return 12;
    }

    return 0;
}