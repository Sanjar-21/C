#include <stdio.h>
#include <unistd.h>

int main(void) {
    printf("Hello World!\n");
    sleep(2);
    printf("Salom Dunyo!");
    usleep(500000);
}