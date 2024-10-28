#include <stdio.h>
#include <string.h>

int main(void) {
    char src[] = "Hello World!";
    char *reult = memchr(src, 'o', sizeof(src));

    if(reult != 0) {
        printf("%c\n", reult);
        printf("Joylashuv: %ld\n", reult - src);
    } else {
        perror("errno:");
    }
    return 0;
}