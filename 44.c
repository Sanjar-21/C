#include <stdio.h>
#include <string.h>

int main(void) {
    char s[] = "sdvsvsdv sdvsdv #sdv";
    char *d = strchr(s, '#');
    printf("%s\n", d);
    return 0;
}