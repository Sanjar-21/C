#include <stdio.h>
#include <string.h>

int main(void) {
    char src[] = "Hello, World!";
    char cpy[20];
    char *ptr = memccpy(cpy, src, ',', 10);
    ptr[0] = '\0';
    for(int i = 0; i < 20; i++) {
        printf("cpy[%d] > %c\n", i, cpy[i]);
    }
    printf("cpy: %s\n", cpy);

    return 0;   
}