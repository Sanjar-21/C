#include <stdio.h>
#include <string.h>

int main(void) {
    char s[] = "This is the way again!";
    int len = strlen(s);
    char d[] = " ";
    char *j = strtok(s,d);
    // printf("J: %s\n", j);

    while (j != NULL) {
        printf("%s\n", j);
        j = strtok(NULL, d);
    }

    for(int i = 0; i < len; i++) {
        if(s[i] == '\0') {
            printf("\\0\n");
        } else {
            printf("%c\n", s[i]);
        }
    }

    return (0);
}