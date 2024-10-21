#include <stdio.h>
#include <string.h>

int main(void) {
    char bufor[100];
    printf(" ");
    //scanf("%[^\n]%*c", bufor);
    //printf("bufor: %s\n", bufor);
    fgets(bufor, 100, stdin);

    printf("bufor: %s\n", bufor);
    return 0;
}