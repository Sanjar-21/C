#include <stdio.h>
#include <string.h>

int main() {
    char source[] = "Hello, world!";
    char dest1[20];
    char dest2[6];

    strcpy(dest1, source);
    printf("strcpy bilan: %s\n", dest1);

    strncpy(dest2, source, 5);
    dest2[5] = '\0';
    printf("strncpy bilan: %s\n", dest2);   

    return 0;
}