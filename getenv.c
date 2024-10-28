#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char *log_dir = getenv("LOG_DIR");
    printf("LOG_DIR: \n%s\n",log_dir);
}